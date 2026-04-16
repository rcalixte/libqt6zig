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

    /// New constructs a new QPicture object.
    ///
    pub fn New() QPicture {
        return .{ .ptr = qtc.QPicture_new() };
    }

    /// New2 constructs a new QPicture object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPicture `
    ///
    pub fn New2(param1: anytype) QPicture {
        comptime _ = @TypeOf(param1)._is_QPicture;
        return .{ .ptr = qtc.QPicture_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new QPicture object.
    ///
    /// ## Parameter(s):
    ///
    /// ` formatVersion: i32 `
    ///
    pub fn New3(formatVersion: i32) QPicture {
        return .{ .ptr = qtc.QPicture_new3(@bitCast(formatVersion)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn IsNull(self: QPicture) bool {
        return qtc.QPicture_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn DevType(self: QPicture) i32 {
        return qtc.QPicture_DevType(@ptrCast(self.ptr));
    }

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
    pub fn OnDevType(self: QPicture, callback: *const fn () callconv(.c) i32) void {
        qtc.QPicture_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn SuperDevType(self: QPicture) i32 {
        return qtc.QPicture_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn Size(self: QPicture) u32 {
        return qtc.QPicture_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn Data(self: QPicture) [:0]const u8 {
        const _ret = qtc.QPicture_Data(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SetData(self: QPicture, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.QPicture_SetData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

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
    pub fn OnSetData(self: QPicture, callback: *const fn (QPicture, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.QPicture_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SuperSetData(self: QPicture, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.QPicture_SuperSetData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` p: QPainter `
    ///
    pub fn Play(self: QPicture, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPainter;
        return qtc.QPicture_Play(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn Load(self: QPicture, dev: anytype) bool {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return qtc.QPicture_Load(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Load2(self: QPicture, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPicture_Load2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn Save(self: QPicture, dev: anytype) bool {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return qtc.QPicture_Save(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Save2(self: QPicture, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPicture_Save2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn BoundingRect(self: QPicture) QRect {
        return .{ .ptr = qtc.QPicture_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` r: QRect `
    ///
    pub fn SetBoundingRect(self: QPicture, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPicture_SetBoundingRect(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` p: QPicture `
    ///
    pub fn OperatorAssign(self: QPicture, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPicture;
        qtc.QPicture_OperatorAssign(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` other: QPicture `
    ///
    pub fn Swap(self: QPicture, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPicture;
        qtc.QPicture_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn Detach(self: QPicture) void {
        qtc.QPicture_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn IsDetached(self: QPicture) bool {
        return qtc.QPicture_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn PaintEngine(self: QPicture) QPaintEngine {
        return .{ .ptr = qtc.QPicture_PaintEngine(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPaintEngine(self: QPicture, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPicture_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn SuperPaintEngine(self: QPicture) QPaintEngine {
        return .{ .ptr = qtc.QPicture_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` m: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QPicture, m: i32) i32 {
        return qtc.QPicture_Metric(@ptrCast(self.ptr), @bitCast(m));
    }

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
    pub fn OnMetric(self: QPicture, callback: *const fn (QPicture, i32) callconv(.c) i32) void {
        qtc.QPicture_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

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
    pub fn SuperMetric(self: QPicture, m: i32) i32 {
        return qtc.QPicture_SuperMetric(@ptrCast(self.ptr), @bitCast(m));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn PaintingActive(self: QPicture) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn Width(self: QPicture) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn Height(self: QPicture) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn WidthMM(self: QPicture) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn HeightMM(self: QPicture) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn LogicalDpiX(self: QPicture) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn LogicalDpiY(self: QPicture) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn PhysicalDpiX(self: QPicture) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn PhysicalDpiY(self: QPicture) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn DevicePixelRatio(self: QPicture) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn DevicePixelRatioF(self: QPicture) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn ColorCount(self: QPicture) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn Depth(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QPicture, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPicture_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPicture `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QPicture, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPicture_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnInitPainter(self: QPicture, callback: *const fn (QPicture, QPainter) callconv(.c) void) void {
        qtc.QPicture_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Redirected(self: QPicture, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPicture_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPicture `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QPicture, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPicture_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

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
    pub fn OnRedirected(self: QPicture, callback: *const fn (QPicture, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPicture_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SharedPainter(self: QPicture) QPainter {
        return .{ .ptr = qtc.QPicture_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPicture `
    ///
    pub fn SuperSharedPainter(self: QPicture) QPainter {
        return .{ .ptr = qtc.QPicture_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSharedPainter(self: QPicture, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPicture_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GetDecodedMetricF(self: QPicture, metricA: i32, metricB: i32) f64 {
        return qtc.QPicture_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPicture `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QPicture, metricA: i32, metricB: i32) f64 {
        return qtc.QPicture_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

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
    pub fn OnGetDecodedMetricF(self: QPicture, callback: *const fn (QPicture, i32, i32) callconv(.c) f64) void {
        qtc.QPicture_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#dtor.QPicture)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPicture `
    ///
    pub fn Delete(self: QPicture) void {
        qtc.QPicture_Delete(@ptrCast(self.ptr));
    }
};
