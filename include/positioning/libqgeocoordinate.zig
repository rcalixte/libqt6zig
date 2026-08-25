const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeocoordinate_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)
pub const QGeoCoordinate = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoCoordinate,

    pub const _is_QGeoCoordinate = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoCoordinate object in C++ memory
    ///
    pub fn new() QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoCoordinate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _latitude: f64 `
    ///
    /// ` _longitude: f64 `
    ///
    pub fn new2(_latitude: f64, _longitude: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_new2(@bitCast(_latitude), @bitCast(_longitude)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoCoordinate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _latitude: f64 `
    ///
    /// ` _longitude: f64 `
    ///
    /// ` _altitude: f64 `
    ///
    pub fn new3(_latitude: f64, _longitude: f64, _altitude: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_new3(@bitCast(_latitude), @bitCast(_longitude), @bitCast(_altitude)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGeoCoordinate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn new4(other: anytype) QGeoCoordinate {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoCoordinate_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn operatorAssign(self: QGeoCoordinate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        qtc.QGeoCoordinate_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn swap(self: QGeoCoordinate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        qtc.QGeoCoordinate_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn isValid(self: QGeoCoordinate) bool {
        return qtc.QGeoCoordinate_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ## Returns:
    ///
    /// ` qgeocoordinate_enums.CoordinateType `
    ///
    pub fn type0(self: QGeoCoordinate) i32 {
        return qtc.QGeoCoordinate_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLatitude` instead
    ///
    pub const SetLatitude = setLatitude;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` _latitude: f64 `
    ///
    pub fn setLatitude(self: QGeoCoordinate, _latitude: f64) void {
        qtc.QGeoCoordinate_SetLatitude(@ptrCast(self.ptr), @bitCast(_latitude));
    }

    /// ### DEPRECATED: Use `latitude` instead
    ///
    pub const Latitude = latitude;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn latitude(self: QGeoCoordinate) f64 {
        return qtc.QGeoCoordinate_Latitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLongitude` instead
    ///
    pub const SetLongitude = setLongitude;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` _longitude: f64 `
    ///
    pub fn setLongitude(self: QGeoCoordinate, _longitude: f64) void {
        qtc.QGeoCoordinate_SetLongitude(@ptrCast(self.ptr), @bitCast(_longitude));
    }

    /// ### DEPRECATED: Use `longitude` instead
    ///
    pub const Longitude = longitude;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn longitude(self: QGeoCoordinate) f64 {
        return qtc.QGeoCoordinate_Longitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAltitude` instead
    ///
    pub const SetAltitude = setAltitude;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setAltitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` _altitude: f64 `
    ///
    pub fn setAltitude(self: QGeoCoordinate, _altitude: f64) void {
        qtc.QGeoCoordinate_SetAltitude(@ptrCast(self.ptr), @bitCast(_altitude));
    }

    /// ### DEPRECATED: Use `altitude` instead
    ///
    pub const Altitude = altitude;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#altitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn altitude(self: QGeoCoordinate) f64 {
        return qtc.QGeoCoordinate_Altitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `distanceTo` instead
    ///
    pub const DistanceTo = distanceTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#distanceTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn distanceTo(self: QGeoCoordinate, other: anytype) f64 {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        return qtc.QGeoCoordinate_DistanceTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `azimuthTo` instead
    ///
    pub const AzimuthTo = azimuthTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#azimuthTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn azimuthTo(self: QGeoCoordinate, other: anytype) f64 {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        return qtc.QGeoCoordinate_AzimuthTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `atDistanceAndAzimuth` instead
    ///
    pub const AtDistanceAndAzimuth = atDistanceAndAzimuth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#atDistanceAndAzimuth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` distance: f64 `
    ///
    /// ` azimuth: f64 `
    ///
    pub fn atDistanceAndAzimuth(self: QGeoCoordinate, distance: f64, azimuth: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_AtDistanceAndAzimuth(@ptrCast(self.ptr), @bitCast(distance), @bitCast(azimuth)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QGeoCoordinate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCoordinate_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCoordinate.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `atDistanceAndAzimuth3` instead
    ///
    pub const AtDistanceAndAzimuth3 = atDistanceAndAzimuth3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#atDistanceAndAzimuth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` distance: f64 `
    ///
    /// ` azimuth: f64 `
    ///
    /// ` distanceUp: f64 `
    ///
    pub fn atDistanceAndAzimuth3(self: QGeoCoordinate, distance: f64, azimuth: f64, distanceUp: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_AtDistanceAndAzimuth3(@ptrCast(self.ptr), @bitCast(distance), @bitCast(azimuth), @bitCast(distanceUp)) };
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qgeocoordinate_enums.CoordinateFormat `
    ///
    pub fn toString1(self: QGeoCoordinate, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QGeoCoordinate_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCoordinate.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#dtor.QGeoCoordinate)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn delete(self: QGeoCoordinate) void {
        qtc.QGeoCoordinate_Delete(@ptrCast(self.ptr));
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
