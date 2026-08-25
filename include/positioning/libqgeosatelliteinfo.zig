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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoSatelliteInfo object in C++ memory
    ///
    pub fn new() QGeoSatelliteInfo {
        return .{ .ptr = qtc.QGeoSatelliteInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoSatelliteInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoSatelliteInfo `
    ///
    pub fn new2(other: anytype) QGeoSatelliteInfo {
        comptime _ = @TypeOf(other)._is_QGeoSatelliteInfo;
        return .{ .ptr = qtc.QGeoSatelliteInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` other: QGeoSatelliteInfo `
    ///
    pub fn operatorAssign(self: QGeoSatelliteInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoSatelliteInfo;
        qtc.QGeoSatelliteInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` other: QGeoSatelliteInfo `
    ///
    pub fn swap(self: QGeoSatelliteInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoSatelliteInfo;
        qtc.QGeoSatelliteInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setSatelliteSystem` instead
    ///
    pub const SetSatelliteSystem = setSatelliteSystem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` system: qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn setSatelliteSystem(self: QGeoSatelliteInfo, system: i32) void {
        qtc.QGeoSatelliteInfo_SetSatelliteSystem(@ptrCast(self.ptr), @bitCast(system));
    }

    /// ### DEPRECATED: Use `satelliteSystem` instead
    ///
    pub const SatelliteSystem = satelliteSystem;

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
    pub fn satelliteSystem(self: QGeoSatelliteInfo) i32 {
        return qtc.QGeoSatelliteInfo_SatelliteSystem(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSatelliteIdentifier` instead
    ///
    pub const SetSatelliteIdentifier = setSatelliteIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` satId: i32 `
    ///
    pub fn setSatelliteIdentifier(self: QGeoSatelliteInfo, satId: i32) void {
        qtc.QGeoSatelliteInfo_SetSatelliteIdentifier(@ptrCast(self.ptr), @bitCast(satId));
    }

    /// ### DEPRECATED: Use `satelliteIdentifier` instead
    ///
    pub const SatelliteIdentifier = satelliteIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn satelliteIdentifier(self: QGeoSatelliteInfo) i32 {
        return qtc.QGeoSatelliteInfo_SatelliteIdentifier(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSignalStrength` instead
    ///
    pub const SetSignalStrength = setSignalStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSignalStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` _signalStrength: i32 `
    ///
    pub fn setSignalStrength(self: QGeoSatelliteInfo, _signalStrength: i32) void {
        qtc.QGeoSatelliteInfo_SetSignalStrength(@ptrCast(self.ptr), @bitCast(_signalStrength));
    }

    /// ### DEPRECATED: Use `signalStrength` instead
    ///
    pub const SignalStrength = signalStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#signalStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn signalStrength(self: QGeoSatelliteInfo) i32 {
        return qtc.QGeoSatelliteInfo_SignalStrength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` _attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    /// ` value: f64 `
    ///
    pub fn setAttribute(self: QGeoSatelliteInfo, _attribute: i32, value: f64) void {
        qtc.QGeoSatelliteInfo_SetAttribute(@ptrCast(self.ptr), @bitCast(_attribute), @bitCast(value));
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` _attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn attribute(self: QGeoSatelliteInfo, _attribute: i32) f64 {
        return qtc.QGeoSatelliteInfo_Attribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `removeAttribute` instead
    ///
    pub const RemoveAttribute = removeAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` _attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn removeAttribute(self: QGeoSatelliteInfo, _attribute: i32) void {
        qtc.QGeoSatelliteInfo_RemoveAttribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `hasAttribute` instead
    ///
    pub const HasAttribute = hasAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    /// ` _attribute: qgeosatelliteinfo_enums.Attribute `
    ///
    pub fn hasAttribute(self: QGeoSatelliteInfo, _attribute: i32) bool {
        return qtc.QGeoSatelliteInfo_HasAttribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn detach(self: QGeoSatelliteInfo) void {
        qtc.QGeoSatelliteInfo_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#dtor.QGeoSatelliteInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoSatelliteInfo `
    ///
    pub fn delete(self: QGeoSatelliteInfo) void {
        qtc.QGeoSatelliteInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#public-types)
pub const enums = struct {
    pub const Attribute = enum {
        pub const Elevation: i32 = 0;
        pub const Azimuth: i32 = 1;
    };

    pub const SatelliteSystem = enum {
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
