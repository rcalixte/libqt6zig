const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = enums;

/// https://doc.qt.io/qt-6/qpaintdevice.html
pub const qpaintdevice = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i64, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#dtor.QPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPaintDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintdevice.html#types
pub const enums = struct {
    pub const PaintDeviceMetric = enum {
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
