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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn DevType(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn PaintingActive(self: QPaintDevice) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn PaintEngine(self: QPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn Width(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn Height(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn WidthMM(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn HeightMM(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn LogicalDpiX(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn LogicalDpiY(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn PhysicalDpiX(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn PhysicalDpiY(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn DevicePixelRatio(self: QPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn DevicePixelRatioF(self: QPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn ColorCount(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn Depth(self: QPaintDevice) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#dtor.QPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintDevice `
    ///
    pub fn Delete(self: QPaintDevice) void {
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
