const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMarginsF = @import("libqt6").QMarginsF;
const QPageLayout = @import("libqt6").QPageLayout;
const QPageRanges = @import("libqt6").QPageRanges;
const QPageSize = @import("libqt6").QPageSize;
const QPaintEngine = @import("libqt6").QPaintEngine;
const qpagelayout_enums = @import("libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html)
pub const QPagedPaintDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPagedPaintDevice,

    pub const _is_QPagedPaintDevice = {};
    pub const _is_QPaintDevice = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn NewPage(self: QPagedPaintDevice) bool {
        return qtc.QPagedPaintDevice_NewPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` pageLayout: QPageLayout `
    ///
    pub fn SetPageLayout(self: QPagedPaintDevice, pageLayout: anytype) bool {
        comptime _ = @TypeOf(pageLayout)._is_QPageLayout;
        return qtc.QPagedPaintDevice_SetPageLayout(@ptrCast(self.ptr), @ptrCast(pageLayout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn SetPageSize(self: QPagedPaintDevice, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPagedPaintDevice_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetPageOrientation(self: QPagedPaintDevice, orientation: i32) bool {
        return qtc.QPagedPaintDevice_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetPageMargins(self: QPagedPaintDevice, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPagedPaintDevice_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn PageLayout(self: QPagedPaintDevice) QPageLayout {
        return .{ .ptr = qtc.QPagedPaintDevice_PageLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn SetPageRanges(self: QPagedPaintDevice, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPagedPaintDevice_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn PageRanges(self: QPagedPaintDevice) QPageRanges {
        return .{ .ptr = qtc.QPagedPaintDevice_PageRanges(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn DevType(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn PaintingActive(self: QPagedPaintDevice) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn PaintEngine(self: QPagedPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn Width(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn Height(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn WidthMM(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn HeightMM(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn LogicalDpiX(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn LogicalDpiY(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn PhysicalDpiX(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn PhysicalDpiY(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn DevicePixelRatio(self: QPagedPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn DevicePixelRatioF(self: QPagedPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn ColorCount(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn Depth(self: QPagedPaintDevice) i32 {
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#dtor.QPagedPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn Delete(self: QPagedPaintDevice) void {
        qtc.QPagedPaintDevice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#public-types)
pub const enums = struct {
    pub const PdfVersion = enum(i32) {
        pub const PdfVersion_1_4: i32 = 0;
        pub const PdfVersion_A1b: i32 = 1;
        pub const PdfVersion_1_6: i32 = 2;
        pub const PdfVersion_X4: i32 = 3;
    };
};
