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

    /// ### DEPRECATED: Use `newPage` instead
    ///
    pub const NewPage = newPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn newPage(self: QPagedPaintDevice) bool {
        return qtc.QPagedPaintDevice_NewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPageLayout` instead
    ///
    pub const SetPageLayout = setPageLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn setPageLayout(self: QPagedPaintDevice, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QPagedPaintDevice_SetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
    }

    /// ### DEPRECATED: Use `setPageSize` instead
    ///
    pub const SetPageSize = setPageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn setPageSize(self: QPagedPaintDevice, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPagedPaintDevice_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// ### DEPRECATED: Use `setPageOrientation` instead
    ///
    pub const SetPageOrientation = setPageOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn setPageOrientation(self: QPagedPaintDevice, orientation: i32) bool {
        return qtc.QPagedPaintDevice_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `setPageMargins` instead
    ///
    pub const SetPageMargins = setPageMargins;

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
    pub fn setPageMargins(self: QPagedPaintDevice, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPagedPaintDevice_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

    /// ### DEPRECATED: Use `pageLayout` instead
    ///
    pub const PageLayout = pageLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn pageLayout(self: QPagedPaintDevice) QPageLayout {
        return .{ .ptr = qtc.QPagedPaintDevice_PageLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPageRanges` instead
    ///
    pub const SetPageRanges = setPageRanges;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn setPageRanges(self: QPagedPaintDevice, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPagedPaintDevice_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

    /// ### DEPRECATED: Use `pageRanges` instead
    ///
    pub const PageRanges = pageRanges;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn pageRanges(self: QPagedPaintDevice) QPageRanges {
        return .{ .ptr = qtc.QPagedPaintDevice_PageRanges(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn devType(self: QPagedPaintDevice) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self.ptr));
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn paintingActive(self: QPagedPaintDevice) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn paintEngine(self: QPagedPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn width(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn height(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn widthMM(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn heightMM(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn logicalDpiX(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn logicalDpiY(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn physicalDpiX(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn physicalDpiY(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn devicePixelRatio(self: QPagedPaintDevice) f64 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn devicePixelRatioF(self: QPagedPaintDevice) f64 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn colorCount(self: QPagedPaintDevice) i32 {
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
    /// ` self: QPagedPaintDevice `
    ///
    pub fn depth(self: QPagedPaintDevice) i32 {
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
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#dtor.QPagedPaintDevice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPagedPaintDevice `
    ///
    pub fn delete(self: QPagedPaintDevice) void {
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
