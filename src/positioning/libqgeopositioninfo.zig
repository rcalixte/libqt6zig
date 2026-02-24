const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeopositioninfo_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html)
pub const qgeopositioninfo = struct {
    /// New constructs a new QGeoPositionInfo object.
    ///
    pub fn New() QtC.QGeoPositionInfo {
        return qtc.QGeoPositionInfo_new();
    }

    /// New2 constructs a new QGeoPositionInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    /// ` updateTime: QtC.QDateTime `
    ///
    pub fn New2(coordinate: ?*anyopaque, updateTime: ?*anyopaque) QtC.QGeoPositionInfo {
        return qtc.QGeoPositionInfo_new2(@ptrCast(coordinate), @ptrCast(updateTime));
    }

    /// New3 constructs a new QGeoPositionInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoPositionInfo `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QGeoPositionInfo {
        return qtc.QGeoPositionInfo_new3(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` other: QtC.QGeoPositionInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoPositionInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` other: QtC.QGeoPositionInfo `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoPositionInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoPositionInfo_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` timestamp: QtC.QDateTime `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, timestamp: ?*anyopaque) void {
        qtc.QGeoPositionInfo_SetTimestamp(@ptrCast(self), @ptrCast(timestamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    pub fn Timestamp(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QGeoPositionInfo_Timestamp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn SetCoordinate(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoPositionInfo_SetCoordinate(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#coordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    pub fn Coordinate(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoPositionInfo_Coordinate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttribute(self: ?*anyopaque, attribute: i32, value: f64) void {
        qtc.QGeoPositionInfo_SetAttribute(@ptrCast(self), @bitCast(attribute), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn Attribute(self: ?*anyopaque, attribute: i32) f64 {
        return qtc.QGeoPositionInfo_Attribute(@ptrCast(self), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn RemoveAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QGeoPositionInfo_RemoveAttribute(@ptrCast(self), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn HasAttribute(self: ?*anyopaque, attribute: i32) bool {
        return qtc.QGeoPositionInfo_HasAttribute(@ptrCast(self), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QGeoPositionInfo_Detach(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#dtor.QGeoPositionInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoPositionInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoPositionInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#public-types)
pub const enums = struct {
    pub const Attribute = enum(i32) {
        pub const Direction: i32 = 0;
        pub const GroundSpeed: i32 = 1;
        pub const VerticalSpeed: i32 = 2;
        pub const MagneticVariation: i32 = 3;
        pub const HorizontalAccuracy: i32 = 4;
        pub const VerticalAccuracy: i32 = 5;
        pub const DirectionAccuracy: i32 = 6;
    };
};
