const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html)
pub const qpicture = struct {
    /// New constructs a new QPicture object.
    ///
    pub fn New() QtC.QPicture {
        return qtc.QPicture_new();
    }

    /// New2 constructs a new QPicture object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPicture `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QPicture {
        return qtc.QPicture_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QPicture object.
    ///
    /// ## Parameter(s):
    ///
    /// ` formatVersion: i32 `
    ///
    pub fn New3(formatVersion: i32) QtC.QPicture {
        return qtc.QPicture_new3(@intCast(formatVersion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPicture_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPicture_DevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPicture_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QPicture_QBaseDevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn Size(self: ?*anyopaque) u32 {
        return qtc.QPicture_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn Data(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QPicture_Data(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` data: []const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.QPicture_SetData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` callback: *const fn (self: QtC.QPicture, data: [*:0]const u8, size: u32) callconv(.c) void `
    ///
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.QPicture_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` data: []const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn QBaseSetData(self: ?*anyopaque, data: []const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.QPicture_QBaseSetData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` p: QtC.QPainter `
    ///
    pub fn Play(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPicture_Play(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn Load(self: ?*anyopaque, dev: ?*anyopaque) bool {
        return qtc.QPicture_Load(@ptrCast(self), @ptrCast(dev));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Load2(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPicture_Load2(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn Save(self: ?*anyopaque, dev: ?*anyopaque) bool {
        return qtc.QPicture_Save(@ptrCast(self), @ptrCast(dev));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Save2(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPicture_Save2(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPicture_BoundingRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn SetBoundingRect(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPicture_SetBoundingRect(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` p: QtC.QPicture `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPicture_OperatorAssign(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` other: QtC.QPicture `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPicture_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPicture_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPicture_IsDetached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPicture_PaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QPicture_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPicture_QBasePaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` m: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, m: i32) i32 {
        return qtc.QPicture_Metric(@ptrCast(self), @intCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` callback: *const fn (self: QtC.QPicture, m: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPicture_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` m: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn QBaseMetric(self: ?*anyopaque, m: i32) i32 {
        return qtc.QPicture_QBaseMetric(@ptrCast(self), @intCast(m));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ` self: QtC.QPicture `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPicture_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPicture_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture`
    ///
    /// ` callback: *const fn (self: QtC.QPicture, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPicture_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPicture_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPicture_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture`
    ///
    /// ` callback: *const fn (self: QtC.QPicture, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPicture_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPicture_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPicture_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QPicture_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPicture_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPicture `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPicture_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPicture`
    ///
    /// ` callback: *const fn (self: QtC.QPicture, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QPicture_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#dtor.QPicture)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPicture `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPicture_Delete(@ptrCast(self));
    }
};
