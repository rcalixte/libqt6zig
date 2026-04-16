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

    /// New constructs a new QGeoCoordinate object.
    ///
    pub fn New() QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_new() };
    }

    /// New2 constructs a new QGeoCoordinate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    pub fn New2(latitude: f64, longitude: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_new2(@bitCast(latitude), @bitCast(longitude)) };
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
    pub fn New3(latitude: f64, longitude: f64, altitude: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_new3(@bitCast(latitude), @bitCast(longitude), @bitCast(altitude)) };
    }

    /// New4 constructs a new QGeoCoordinate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn New4(other: anytype) QGeoCoordinate {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoCoordinate_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn OperatorAssign(self: QGeoCoordinate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        qtc.QGeoCoordinate_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn Swap(self: QGeoCoordinate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        qtc.QGeoCoordinate_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn IsValid(self: QGeoCoordinate) bool {
        return qtc.QGeoCoordinate_IsValid(@ptrCast(self.ptr));
    }

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
    pub fn Type(self: QGeoCoordinate) i32 {
        return qtc.QGeoCoordinate_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` latitude: f64 `
    ///
    pub fn SetLatitude(self: QGeoCoordinate, latitude: f64) void {
        qtc.QGeoCoordinate_SetLatitude(@ptrCast(self.ptr), @bitCast(latitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn Latitude(self: QGeoCoordinate) f64 {
        return qtc.QGeoCoordinate_Latitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` longitude: f64 `
    ///
    pub fn SetLongitude(self: QGeoCoordinate, longitude: f64) void {
        qtc.QGeoCoordinate_SetLongitude(@ptrCast(self.ptr), @bitCast(longitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn Longitude(self: QGeoCoordinate) f64 {
        return qtc.QGeoCoordinate_Longitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setAltitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` altitude: f64 `
    ///
    pub fn SetAltitude(self: QGeoCoordinate, altitude: f64) void {
        qtc.QGeoCoordinate_SetAltitude(@ptrCast(self.ptr), @bitCast(altitude));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#altitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn Altitude(self: QGeoCoordinate) f64 {
        return qtc.QGeoCoordinate_Altitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#distanceTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn DistanceTo(self: QGeoCoordinate, other: anytype) f64 {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        return qtc.QGeoCoordinate_DistanceTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#azimuthTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` other: QGeoCoordinate `
    ///
    pub fn AzimuthTo(self: QGeoCoordinate, other: anytype) f64 {
        comptime _ = @TypeOf(other)._is_QGeoCoordinate;
        return qtc.QGeoCoordinate_AzimuthTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn AtDistanceAndAzimuth(self: QGeoCoordinate, distance: f64, azimuth: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_AtDistanceAndAzimuth(@ptrCast(self.ptr), @bitCast(distance), @bitCast(azimuth)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCoordinate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QGeoCoordinate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCoordinate_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocoordinate.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AtDistanceAndAzimuth3(self: QGeoCoordinate, distance: f64, azimuth: f64, distanceUp: f64) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoCoordinate_AtDistanceAndAzimuth3(@ptrCast(self.ptr), @bitCast(distance), @bitCast(azimuth), @bitCast(distanceUp)) };
    }

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
    pub fn ToString1(self: QGeoCoordinate, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QGeoCoordinate_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocoordinate.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#dtor.QGeoCoordinate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoCoordinate `
    ///
    pub fn Delete(self: QGeoCoordinate) void {
        qtc.QGeoCoordinate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#public-types)
pub const enums = struct {
    pub const CoordinateType = enum(i32) {
        pub const InvalidCoordinate: i32 = 0;
        pub const Coordinate2D: i32 = 1;
        pub const Coordinate3D: i32 = 2;
    };

    pub const CoordinateFormat = enum(i32) {
        pub const Degrees: i32 = 0;
        pub const DegreesWithHemisphere: i32 = 1;
        pub const DegreesMinutes: i32 = 2;
        pub const DegreesMinutesWithHemisphere: i32 = 3;
        pub const DegreesMinutesSeconds: i32 = 4;
        pub const DegreesMinutesSecondsWithHemisphere: i32 = 5;
    };
};
