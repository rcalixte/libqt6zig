const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeocoordinate_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)
pub const qgeocoordinate = struct {
    /// New constructs a new QGeoCoordinate object.
    ///
    pub fn New() QtC.QGeoCoordinate {
        return qtc.QGeoCoordinate_new();
    }

    /// New2 constructs a new QGeoCoordinate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    pub fn New2(latitude: f64, longitude: f64) QtC.QGeoCoordinate {
        return qtc.QGeoCoordinate_new2(@floatCast(latitude), @floatCast(longitude));
    }

    /// New3 constructs a new QGeoCoordinate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    /// ` altitude: f64 `
    ///
    pub fn New3(latitude: f64, longitude: f64, altitude: f64) QtC.QGeoCoordinate {
        return qtc.QGeoCoordinate_new3(@floatCast(latitude), @floatCast(longitude), @floatCast(altitude));
    }

    /// New4 constructs a new QGeoCoordinate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoCoordinate `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoCoordinate_new4(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` other: QtC.QGeoCoordinate `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoCoordinate_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` other: QtC.QGeoCoordinate `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoCoordinate_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoCoordinate_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ## Returns:
    ///
    /// ` qgeocoordinate_enums.CoordinateType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QGeoCoordinate_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` latitude: f64 `
    ///
    pub fn SetLatitude(self: ?*anyopaque, latitude: f64) void {
        qtc.QGeoCoordinate_SetLatitude(@ptrCast(self), @floatCast(latitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    pub fn Latitude(self: ?*anyopaque) f64 {
        return qtc.QGeoCoordinate_Latitude(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` longitude: f64 `
    ///
    pub fn SetLongitude(self: ?*anyopaque, longitude: f64) void {
        qtc.QGeoCoordinate_SetLongitude(@ptrCast(self), @floatCast(longitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    pub fn Longitude(self: ?*anyopaque) f64 {
        return qtc.QGeoCoordinate_Longitude(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setAltitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` altitude: f64 `
    ///
    pub fn SetAltitude(self: ?*anyopaque, altitude: f64) void {
        qtc.QGeoCoordinate_SetAltitude(@ptrCast(self), @floatCast(altitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#altitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    pub fn Altitude(self: ?*anyopaque) f64 {
        return qtc.QGeoCoordinate_Altitude(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#distanceTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` other: QtC.QGeoCoordinate `
    ///
    pub fn DistanceTo(self: ?*anyopaque, other: ?*anyopaque) f64 {
        return qtc.QGeoCoordinate_DistanceTo(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#azimuthTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` other: QtC.QGeoCoordinate `
    ///
    pub fn AzimuthTo(self: ?*anyopaque, other: ?*anyopaque) f64 {
        return qtc.QGeoCoordinate_AzimuthTo(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#atDistanceAndAzimuth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` distance: f64 `
    ///
    /// ` azimuth: f64 `
    ///
    pub fn AtDistanceAndAzimuth(self: ?*anyopaque, distance: f64, azimuth: f64) QtC.QGeoCoordinate {
        return qtc.QGeoCoordinate_AtDistanceAndAzimuth(@ptrCast(self), @floatCast(distance), @floatCast(azimuth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCoordinate_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocoordinate.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#atDistanceAndAzimuth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` distance: f64 `
    ///
    /// ` azimuth: f64 `
    ///
    /// ` distanceUp: f64 `
    ///
    pub fn AtDistanceAndAzimuth3(self: ?*anyopaque, distance: f64, azimuth: f64, distanceUp: f64) QtC.QGeoCoordinate {
        return qtc.QGeoCoordinate_AtDistanceAndAzimuth3(@ptrCast(self), @floatCast(distance), @floatCast(azimuth), @floatCast(distanceUp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    /// ` format: qgeocoordinate_enums.CoordinateFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCoordinate_ToString1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocoordinate.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#dtor.QGeoCoordinate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoCoordinate `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoCoordinate_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#public-types)
pub const enums = struct {
    pub const CoordinateType = enum {
        pub const InvalidCoordinate: i32 = 0;
        pub const Coordinate2D: i32 = 1;
        pub const Coordinate3D: i32 = 2;
    };

    pub const CoordinateFormat = enum {
        pub const Degrees: i32 = 0;
        pub const DegreesWithHemisphere: i32 = 1;
        pub const DegreesMinutes: i32 = 2;
        pub const DegreesMinutesWithHemisphere: i32 = 3;
        pub const DegreesMinutesSeconds: i32 = 4;
        pub const DegreesMinutesSecondsWithHemisphere: i32 = 5;
    };
};
