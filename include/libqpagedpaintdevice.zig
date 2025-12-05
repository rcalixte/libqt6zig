const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagelayout_enums = @import("libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html)
pub const qpagedpaintdevice = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_NewPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    /// ` pageLayout: QtC.QPageLayout `
    ///
    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QPagedPaintDevice_SetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QPagedPaintDevice_SetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn PageLayout(self: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPagedPaintDevice_PageLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    /// ` ranges: QtC.QPageRanges `
    ///
    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPagedPaintDevice_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn PageRanges(self: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPagedPaintDevice_PageRanges(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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
    /// ` self: QtC.QPagedPaintDevice `
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#dtor.QPagedPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPagedPaintDevice `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPagedPaintDevice_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#public-types)
pub const enums = struct {
    pub const PdfVersion = enum {
        pub const PdfVersion_1_4: i32 = 0;
        pub const PdfVersion_A1b: i32 = 1;
        pub const PdfVersion_1_6: i32 = 2;
        pub const PdfVersion_X4: i32 = 3;
    };
};
