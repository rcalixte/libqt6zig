const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeosatelliteinfo_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html)
pub const qgeosatelliteinfo = struct {
    /// New constructs a new QGeoSatelliteInfo object.
    ///
    pub fn New() QtC.QGeoSatelliteInfo {
        return qtc.QGeoSatelliteInfo_new();
    }

    /// New2 constructs a new QGeoSatelliteInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoSatelliteInfo `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoSatelliteInfo {
        return qtc.QGeoSatelliteInfo_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` other: QtC.QGeoSatelliteInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoSatelliteInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` other: QtC.QGeoSatelliteInfo `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoSatelliteInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` system: qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SetSatelliteSystem(self: ?*anyopaque, system: i32) void {
        qtc.QGeoSatelliteInfo_SetSatelliteSystem(@ptrCast(self), @bitCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SatelliteSystem(self: ?*anyopaque) i32 {
        return qtc.QGeoSatelliteInfo_SatelliteSystem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` satId: i32 `
    ///
    pub fn SetSatelliteIdentifier(self: ?*anyopaque, satId: i32) void {
        qtc.QGeoSatelliteInfo_SetSatelliteIdentifier(@ptrCast(self), @bitCast(satId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    pub fn SatelliteIdentifier(self: ?*anyopaque) i32 {
        return qtc.QGeoSatelliteInfo_SatelliteIdentifier(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSignalStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` signalStrength: i32 `
    ///
    pub fn SetSignalStrength(self: ?*anyopaque, signalStrength: i32) void {
        qtc.QGeoSatelliteInfo_SetSignalStrength(@ptrCast(self), @bitCast(signalStrength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#signalStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    pub fn SignalStrength(self: ?*anyopaque) i32 {
        return qtc.QGeoSatelliteInfo_SignalStrength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttribute(self: ?*anyopaque, attribute: i32, value: f64) void {
        qtc.QGeoSatelliteInfo_SetAttribute(@ptrCast(self), @bitCast(attribute), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn Attribute(self: ?*anyopaque, attribute: i32) f64 {
        return qtc.QGeoSatelliteInfo_Attribute(@ptrCast(self), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn RemoveAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QGeoSatelliteInfo_RemoveAttribute(@ptrCast(self), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn HasAttribute(self: ?*anyopaque, attribute: i32) bool {
        return qtc.QGeoSatelliteInfo_HasAttribute(@ptrCast(self), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QGeoSatelliteInfo_Detach(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#dtor.QGeoSatelliteInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoSatelliteInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoSatelliteInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#public-types)
pub const enums = struct {
    pub const Attribute = enum(i32) {
        pub const Elevation: i32 = 0;
        pub const Azimuth: i32 = 1;
    };

    pub const SatelliteSystem = enum(i32) {
        pub const Undefined: i32 = 0;
        pub const GPS: i32 = 1;
        pub const GLONASS: i32 = 2;
        pub const GALILEO: i32 = 3;
        pub const BEIDOU: i32 = 4;
        pub const QZSS: i32 = 5;
        pub const Multiple: i32 = 255;
        pub const CustomType: i32 = 256;
    };
};
