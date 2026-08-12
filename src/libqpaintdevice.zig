const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPaintEngine = @import("libqt6").QPaintEngine;
const qpaintdevice_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html)
pub const QPaintDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPaintDevice,

    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn devType(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn paintingActive(self: QPaintDevice) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn paintEngine(self: QPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn width(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn height(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn widthMM(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn heightMM(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn logicalDpiX(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn logicalDpiY(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn physicalDpiX(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn physicalDpiY(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn devicePixelRatio(self: QPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn devicePixelRatioF(self: QPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn colorCount(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn depth(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#dtor.QPaintDevice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn delete(self: QPaintDevice) void {
        qtc.QPaintDevice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#public-types)
pub const enums = struct {
    pub const PaintDeviceMetric = enum(i32) {
        pub const PdmWidth: i32 = 1;
        pub const PdmHeight: i32 = 2;
        pub const PdmWidthMM: i32 = 3;
        pub const PdmHeightMM: i32 = 4;
        pub const PdmNumColors: i32 = 5;
        pub const PdmDepth: i32 = 6;
        pub const PdmDpiX: i32 = 7;
        pub const PdmDpiY: i32 = 8;
        pub const PdmPhysicalDpiX: i32 = 9;
        pub const PdmPhysicalDpiY: i32 = 10;
        pub const PdmDevicePixelRatio: i32 = 11;
        pub const PdmDevicePixelRatioScaled: i32 = 12;
        pub const PdmDevicePixelRatioF_EncodedA: i32 = 13;
        pub const PdmDevicePixelRatioF_EncodedB: i32 = 14;
    };
};
