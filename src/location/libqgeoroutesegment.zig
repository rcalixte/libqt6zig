const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoManeuver = @import("libqt6").QGeoManeuver;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html)
pub const QGeoRouteSegment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoRouteSegment,

    pub const _is_QGeoRouteSegment = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoRouteSegment object in C++ memory
    ///
    pub fn new() QGeoRouteSegment {
        return .{ .ptr = qtc.QGeoRouteSegment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoRouteSegment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRouteSegment `
    ///
    pub fn new2(other: anytype) QGeoRouteSegment {
        comptime _ = @TypeOf(other)._is_QGeoRouteSegment;
        return .{ .ptr = qtc.QGeoRouteSegment_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` other: QGeoRouteSegment `
    ///
    pub fn operatorAssign(self: QGeoRouteSegment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteSegment;
        qtc.QGeoRouteSegment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` other: QGeoRouteSegment `
    ///
    pub fn swap(self: QGeoRouteSegment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteSegment;
        qtc.QGeoRouteSegment_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn isValid(self: QGeoRouteSegment) bool {
        return qtc.QGeoRouteSegment_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLegLastSegment` instead
    ///
    pub const IsLegLastSegment = isLegLastSegment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isLegLastSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn isLegLastSegment(self: QGeoRouteSegment) bool {
        return qtc.QGeoRouteSegment_IsLegLastSegment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNextRouteSegment` instead
    ///
    pub const SetNextRouteSegment = setNextRouteSegment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setNextRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` routeSegment: QGeoRouteSegment `
    ///
    pub fn setNextRouteSegment(self: QGeoRouteSegment, routeSegment: anytype) void {
        comptime _ = @TypeOf(routeSegment)._is_QGeoRouteSegment;
        qtc.QGeoRouteSegment_SetNextRouteSegment(@ptrCast(self.ptr), @ptrCast(routeSegment.ptr));
    }

    /// ### DEPRECATED: Use `nextRouteSegment` instead
    ///
    pub const NextRouteSegment = nextRouteSegment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#nextRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn nextRouteSegment(self: QGeoRouteSegment) QGeoRouteSegment {
        return .{ .ptr = qtc.QGeoRouteSegment_NextRouteSegment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTravelTime` instead
    ///
    pub const SetTravelTime = setTravelTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setTravelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` secs: i32 `
    ///
    pub fn setTravelTime(self: QGeoRouteSegment, secs: i32) void {
        qtc.QGeoRouteSegment_SetTravelTime(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `travelTime` instead
    ///
    pub const TravelTime = travelTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#travelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn travelTime(self: QGeoRouteSegment) i32 {
        return qtc.QGeoRouteSegment_TravelTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDistance` instead
    ///
    pub const SetDistance = setDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` _distance: f64 `
    ///
    pub fn setDistance(self: QGeoRouteSegment, _distance: f64) void {
        qtc.QGeoRouteSegment_SetDistance(@ptrCast(self.ptr), @bitCast(_distance));
    }

    /// ### DEPRECATED: Use `distance` instead
    ///
    pub const Distance = distance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn distance(self: QGeoRouteSegment) f64 {
        return qtc.QGeoRouteSegment_Distance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` _path: []QGeoCoordinate `
    ///
    pub fn setPath(self: QGeoRouteSegment, _path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = _path.len,
            .data = @ptrCast(_path.ptr),
        };
        qtc.QGeoRouteSegment_SetPath(@ptrCast(self.ptr), path_list);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QGeoRouteSegment, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRouteSegment_Path(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("QGeoRouteSegment.path: Memory allocation failed");
        const _data_val: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setManeuver` instead
    ///
    pub const SetManeuver = setManeuver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setManeuver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` _maneuver: QGeoManeuver `
    ///
    pub fn setManeuver(self: QGeoRouteSegment, _maneuver: anytype) void {
        comptime _ = @TypeOf(_maneuver)._is_QGeoManeuver;
        qtc.QGeoRouteSegment_SetManeuver(@ptrCast(self.ptr), @ptrCast(_maneuver.ptr));
    }

    /// ### DEPRECATED: Use `maneuver` instead
    ///
    pub const Maneuver = maneuver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#maneuver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn maneuver(self: QGeoRouteSegment) QGeoManeuver {
        return .{ .ptr = qtc.QGeoRouteSegment_Maneuver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#dtor.QGeoRouteSegment)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn delete(self: QGeoRouteSegment) void {
        qtc.QGeoRouteSegment_Delete(@ptrCast(self.ptr));
    }
};
