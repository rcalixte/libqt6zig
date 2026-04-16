const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeosatelliteinfo_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html)
pub const QGeoSatelliteInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoSatelliteInfo,

    pub const _is_QGeoSatelliteInfo = {};

    /// New constructs a new QGeoSatelliteInfo object.
    ///
    pub fn New() QGeoSatelliteInfo {
        return .{ .ptr = qtc.QGeoSatelliteInfo_new() };
    }

    /// New2 constructs a new QGeoSatelliteInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoSatelliteInfo `
    ///
    pub fn New2(other: anytype) QGeoSatelliteInfo {
        comptime _ = @TypeOf(other)._is_QGeoSatelliteInfo;
        return .{ .ptr = qtc.QGeoSatelliteInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` other: QGeoSatelliteInfo `
    ///
    pub fn OperatorAssign(self: QGeoSatelliteInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoSatelliteInfo;
        qtc.QGeoSatelliteInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` other: QGeoSatelliteInfo `
    ///
    pub fn Swap(self: QGeoSatelliteInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoSatelliteInfo;
        qtc.QGeoSatelliteInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` system: qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SetSatelliteSystem(self: QGeoSatelliteInfo, system: i32) void {
        qtc.QGeoSatelliteInfo_SetSatelliteSystem(@ptrCast(self.ptr), @bitCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SatelliteSystem(self: QGeoSatelliteInfo) i32 {
        return qtc.QGeoSatelliteInfo_SatelliteSystem(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` satId: i32 `
    ///
    pub fn SetSatelliteIdentifier(self: QGeoSatelliteInfo, satId: i32) void {
        qtc.QGeoSatelliteInfo_SetSatelliteIdentifier(@ptrCast(self.ptr), @bitCast(satId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn SatelliteIdentifier(self: QGeoSatelliteInfo) i32 {
        return qtc.QGeoSatelliteInfo_SatelliteIdentifier(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSignalStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` signalStrength: i32 `
    ///
    pub fn SetSignalStrength(self: QGeoSatelliteInfo, signalStrength: i32) void {
        qtc.QGeoSatelliteInfo_SetSignalStrength(@ptrCast(self.ptr), @bitCast(signalStrength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#signalStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn SignalStrength(self: QGeoSatelliteInfo) i32 {
        return qtc.QGeoSatelliteInfo_SignalStrength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttribute(self: QGeoSatelliteInfo, attribute: i32, value: f64) void {
        qtc.QGeoSatelliteInfo_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn Attribute(self: QGeoSatelliteInfo, attribute: i32) f64 {
        return qtc.QGeoSatelliteInfo_Attribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn RemoveAttribute(self: QGeoSatelliteInfo, attribute: i32) void {
        qtc.QGeoSatelliteInfo_RemoveAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn HasAttribute(self: QGeoSatelliteInfo, attribute: i32) bool {
        return qtc.QGeoSatelliteInfo_HasAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn Detach(self: QGeoSatelliteInfo) void {
        qtc.QGeoSatelliteInfo_Detach(@ptrCast(self.ptr));
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
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn Delete(self: QGeoSatelliteInfo) void {
        qtc.QGeoSatelliteInfo_Delete(@ptrCast(self.ptr));
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
