const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html)
pub const qgeoroutesegment = struct {
    /// New constructs a new QGeoRouteSegment object.
    ///
    pub fn New() QtC.QGeoRouteSegment {
        return qtc.QGeoRouteSegment_new();
    }

    /// New2 constructs a new QGeoRouteSegment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoRouteSegment `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoRouteSegment {
        return qtc.QGeoRouteSegment_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` other: QtC.QGeoRouteSegment `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRouteSegment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` other: QtC.QGeoRouteSegment `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRouteSegment_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoRouteSegment_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isLegLastSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn IsLegLastSegment(self: ?*anyopaque) bool {
        return qtc.QGeoRouteSegment_IsLegLastSegment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setNextRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` routeSegment: QtC.QGeoRouteSegment `
    ///
    pub fn SetNextRouteSegment(self: ?*anyopaque, routeSegment: ?*anyopaque) void {
        qtc.QGeoRouteSegment_SetNextRouteSegment(@ptrCast(self), @ptrCast(routeSegment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#nextRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn NextRouteSegment(self: ?*anyopaque) QtC.QGeoRouteSegment {
        return qtc.QGeoRouteSegment_NextRouteSegment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setTravelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` secs: i32 `
    ///
    pub fn SetTravelTime(self: ?*anyopaque, secs: i32) void {
        qtc.QGeoRouteSegment_SetTravelTime(@ptrCast(self), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#travelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn TravelTime(self: ?*anyopaque) i32 {
        return qtc.QGeoRouteSegment_TravelTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QGeoRouteSegment_SetDistance(@ptrCast(self), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn Distance(self: ?*anyopaque) f64 {
        return qtc.QGeoRouteSegment_Distance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    pub fn SetPath(self: ?*anyopaque, path: []QtC.QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoRouteSegment_SetPath(@ptrCast(self), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRouteSegment_Path(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoCoordinate, _arr.len) catch @panic("qgeoroutesegment.Path: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setManeuver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    /// ` maneuver: QtC.QGeoManeuver `
    ///
    pub fn SetManeuver(self: ?*anyopaque, maneuver: ?*anyopaque) void {
        qtc.QGeoRouteSegment_SetManeuver(@ptrCast(self), @ptrCast(maneuver));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#maneuver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn Maneuver(self: ?*anyopaque) QtC.QGeoManeuver {
        return qtc.QGeoRouteSegment_Maneuver(@ptrCast(self));
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
    /// ` self: QtC.QGeoRouteSegment `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoRouteSegment_Delete(@ptrCast(self));
    }
};
