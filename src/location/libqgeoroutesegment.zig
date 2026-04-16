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

    /// New constructs a new QGeoRouteSegment object.
    ///
    pub fn New() QGeoRouteSegment {
        return .{ .ptr = qtc.QGeoRouteSegment_new() };
    }

    /// New2 constructs a new QGeoRouteSegment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRouteSegment `
    ///
    pub fn New2(other: anytype) QGeoRouteSegment {
        comptime _ = @TypeOf(other)._is_QGeoRouteSegment;
        return .{ .ptr = qtc.QGeoRouteSegment_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` other: QGeoRouteSegment `
    ///
    pub fn OperatorAssign(self: QGeoRouteSegment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteSegment;
        qtc.QGeoRouteSegment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` other: QGeoRouteSegment `
    ///
    pub fn Swap(self: QGeoRouteSegment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteSegment;
        qtc.QGeoRouteSegment_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn IsValid(self: QGeoRouteSegment) bool {
        return qtc.QGeoRouteSegment_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isLegLastSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn IsLegLastSegment(self: QGeoRouteSegment) bool {
        return qtc.QGeoRouteSegment_IsLegLastSegment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setNextRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` routeSegment: QGeoRouteSegment `
    ///
    pub fn SetNextRouteSegment(self: QGeoRouteSegment, routeSegment: anytype) void {
        comptime _ = @TypeOf(routeSegment)._is_QGeoRouteSegment;
        qtc.QGeoRouteSegment_SetNextRouteSegment(@ptrCast(self.ptr), @ptrCast(routeSegment.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#nextRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn NextRouteSegment(self: QGeoRouteSegment) QGeoRouteSegment {
        return .{ .ptr = qtc.QGeoRouteSegment_NextRouteSegment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setTravelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` secs: i32 `
    ///
    pub fn SetTravelTime(self: QGeoRouteSegment, secs: i32) void {
        qtc.QGeoRouteSegment_SetTravelTime(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#travelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn TravelTime(self: QGeoRouteSegment) i32 {
        return qtc.QGeoRouteSegment_TravelTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistance(self: QGeoRouteSegment, distance: f64) void {
        qtc.QGeoRouteSegment_SetDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn Distance(self: QGeoRouteSegment) f64 {
        return qtc.QGeoRouteSegment_Distance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn SetPath(self: QGeoRouteSegment, path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoRouteSegment_SetPath(@ptrCast(self.ptr), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QGeoRouteSegment, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRouteSegment_Path(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("qgeoroutesegment.Path: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setManeuver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    /// ` maneuver: QGeoManeuver `
    ///
    pub fn SetManeuver(self: QGeoRouteSegment, maneuver: anytype) void {
        comptime _ = @TypeOf(maneuver)._is_QGeoManeuver;
        qtc.QGeoRouteSegment_SetManeuver(@ptrCast(self.ptr), @ptrCast(maneuver.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#maneuver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn Maneuver(self: QGeoRouteSegment) QGeoManeuver {
        return .{ .ptr = qtc.QGeoRouteSegment_Maneuver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#dtor.QGeoRouteSegment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRouteSegment `
    ///
    pub fn Delete(self: QGeoRouteSegment) void {
        qtc.QGeoRouteSegment_Delete(@ptrCast(self.ptr));
    }
};
