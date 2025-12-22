const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeorouterequest_enums = @import("libqgeorouterequest.zig").enums;
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html)
pub const qgeoroute = struct {
    /// New constructs a new QGeoRoute object.
    ///
    pub fn New() QtC.QGeoRoute {
        return qtc.QGeoRoute_new();
    }

    /// New2 constructs a new QGeoRoute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoRoute `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoRoute {
        return qtc.QGeoRoute_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` other: QtC.QGeoRoute `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRoute_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` other: QtC.QGeoRoute `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRoute_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetRouteId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QGeoRoute_SetRouteId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RouteId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRoute_RouteId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroute.RouteId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` request: QtC.QGeoRouteRequest `
    ///
    pub fn SetRequest(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QGeoRoute_SetRequest(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn Request(self: ?*anyopaque) QtC.QGeoRouteRequest {
        return qtc.QGeoRoute_Request(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setBounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` bounds: QtC.QGeoRectangle `
    ///
    pub fn SetBounds(self: ?*anyopaque, bounds: ?*anyopaque) void {
        qtc.QGeoRoute_SetBounds(@ptrCast(self), @ptrCast(bounds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#bounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn Bounds(self: ?*anyopaque) QtC.QGeoRectangle {
        return qtc.QGeoRoute_Bounds(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setFirstRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` routeSegment: QtC.QGeoRouteSegment `
    ///
    pub fn SetFirstRouteSegment(self: ?*anyopaque, routeSegment: ?*anyopaque) void {
        qtc.QGeoRoute_SetFirstRouteSegment(@ptrCast(self), @ptrCast(routeSegment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#firstRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn FirstRouteSegment(self: ?*anyopaque) QtC.QGeoRouteSegment {
        return qtc.QGeoRoute_FirstRouteSegment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segmentsCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn SegmentsCount(self: ?*anyopaque) i64 {
        return qtc.QGeoRoute_SegmentsCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Segments(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoRouteSegment {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_Segments(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoRouteSegment, _arr.len) catch @panic("qgeoroute.Segments: Memory allocation failed");
        const _data: [*]QtC.QGeoRouteSegment = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` secs: i32 `
    ///
    pub fn SetTravelTime(self: ?*anyopaque, secs: i32) void {
        qtc.QGeoRoute_SetTravelTime(@ptrCast(self), @intCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn TravelTime(self: ?*anyopaque) i32 {
        return qtc.QGeoRoute_TravelTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QGeoRoute_SetDistance(@ptrCast(self), @floatCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn Distance(self: ?*anyopaque) f64 {
        return qtc.QGeoRoute_Distance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` mode: qgeorouterequest_enums.TravelMode `
    ///
    pub fn SetTravelMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGeoRoute_SetTravelMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.TravelMode `
    ///
    pub fn TravelMode(self: ?*anyopaque) i32 {
        return qtc.QGeoRoute_TravelMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` path: []QtC.QGeoCoordinate `
    ///
    pub fn SetPath(self: ?*anyopaque, path: []QtC.QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoRoute_SetPath(@ptrCast(self), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_Path(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoCoordinate, _arr.len) catch @panic("qgeoroute.Path: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteLegs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` legs: []QtC.QGeoRoute `
    ///
    pub fn SetRouteLegs(self: ?*anyopaque, legs: []QtC.QGeoRoute) void {
        const legs_list = qtc.libqt_list{
            .len = legs.len,
            .data = @ptrCast(legs.ptr),
        };
        qtc.QGeoRoute_SetRouteLegs(@ptrCast(self), legs_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeLegs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RouteLegs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoRoute {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_RouteLegs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoRoute, _arr.len) catch @panic("qgeoroute.RouteLegs: Memory allocation failed");
        const _data: [*]QtC.QGeoRoute = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` extendedAttributes: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetExtendedAttributes(self: ?*anyopaque, extendedAttributes: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const extendedAttributes_keys = allocator.alloc(qtc.libqt_string, extendedAttributes.count()) catch @panic("qgeoroute.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_keys);
        const extendedAttributes_values = allocator.alloc(QtC.QVariant, extendedAttributes.count()) catch @panic("qgeoroute.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_values);
        var i: usize = 0;
        var extendedAttributes_it = extendedAttributes.iterator();
        while (extendedAttributes_it.next()) |entry| {
            const key = entry.key_ptr.*;
            extendedAttributes_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            extendedAttributes_values[i] = @ptrCast(entry.value_ptr.*);
            i += 1;
        }
        const extendedAttributes_map = qtc.libqt_map{
            .len = extendedAttributes.count(),
            .keys = @ptrCast(extendedAttributes_keys.ptr),
            .values = @ptrCast(extendedAttributes_values.ptr),
        };
        qtc.QGeoRoute_SetExtendedAttributes(@ptrCast(self), extendedAttributes_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QGeoRoute_ExtendedAttributes(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qgeoroute.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setLegIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` idx: i32 `
    ///
    pub fn SetLegIndex(self: ?*anyopaque, idx: i32) void {
        qtc.QGeoRoute_SetLegIndex(@ptrCast(self), @intCast(idx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#legIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn LegIndex(self: ?*anyopaque) i32 {
        return qtc.QGeoRoute_LegIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setOverallRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    /// ` route: QtC.QGeoRoute `
    ///
    pub fn SetOverallRoute(self: ?*anyopaque, route: ?*anyopaque) void {
        qtc.QGeoRoute_SetOverallRoute(@ptrCast(self), @ptrCast(route));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#overallRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn OverallRoute(self: ?*anyopaque) QtC.QGeoRoute {
        return qtc.QGeoRoute_OverallRoute(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#dtor.QGeoRoute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoRoute `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoRoute_Delete(@ptrCast(self));
    }
};
