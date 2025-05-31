const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagelayout_enums = @import("libqpagelayout.zig").enums;

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html
pub const qpagedpaintdevice = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_NewPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// ``` self: QtC.QPagedPaintDevice, pageLayout: QtC.QPageLayout ```
    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// ``` self: QtC.QPagedPaintDevice, pageSize: QtC.QPageSize ```
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// ``` self: QtC.QPagedPaintDevice, orientation: qpagelayout_enums.Orientation ```
    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QPagedPaintDevice_SetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// ``` self: QtC.QPagedPaintDevice, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit ```
    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i64) bool {
        return qtc.QPagedPaintDevice_SetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn PageLayout(self: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPagedPaintDevice_PageLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// ``` self: QtC.QPagedPaintDevice, ranges: QtC.QPageRanges ```
    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPagedPaintDevice_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn PageRanges(self: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPagedPaintDevice_PageRanges(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#dtor.QPagedPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPagedPaintDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPagedPaintDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html#types
pub const enums = struct {
    pub const PdfVersion = enum {
        pub const PdfVersion_1_4: i32 = 0;
        pub const PdfVersion_A1b: i32 = 1;
        pub const PdfVersion_1_6: i32 = 2;
    };
};
