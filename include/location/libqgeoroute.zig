const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRectangle = @import("libqt6").QGeoRectangle;
const QGeoRouteRequest = @import("libqt6").QGeoRouteRequest;
const QGeoRouteSegment = @import("libqt6").QGeoRouteSegment;
const QVariant = @import("libqt6").QVariant;
const qgeorouterequest_enums = @import("libqgeorouterequest.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html)
pub const QGeoRoute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoRoute,

    pub const _is_QGeoRoute = {};

    /// New constructs a new QGeoRoute object.
    ///
    pub fn New() QGeoRoute {
        return .{ .ptr = qtc.QGeoRoute_new() };
    }

    /// New2 constructs a new QGeoRoute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRoute `
    ///
    pub fn New2(other: anytype) QGeoRoute {
        comptime _ = @TypeOf(other)._is_QGeoRoute;
        return .{ .ptr = qtc.QGeoRoute_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` other: QGeoRoute `
    ///
    pub fn OperatorAssign(self: QGeoRoute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRoute;
        qtc.QGeoRoute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` other: QGeoRoute `
    ///
    pub fn Swap(self: QGeoRoute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRoute;
        qtc.QGeoRoute_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetRouteId(self: QGeoRoute, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QGeoRoute_SetRouteId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RouteId(self: QGeoRoute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRoute_RouteId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroute.RouteId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` request: QGeoRouteRequest `
    ///
    pub fn SetRequest(self: QGeoRoute, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QGeoRouteRequest;
        qtc.QGeoRoute_SetRequest(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn Request(self: QGeoRoute) QGeoRouteRequest {
        return .{ .ptr = qtc.QGeoRoute_Request(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setBounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` bounds: QGeoRectangle `
    ///
    pub fn SetBounds(self: QGeoRoute, bounds: anytype) void {
        comptime _ = @TypeOf(bounds)._is_QGeoRectangle;
        qtc.QGeoRoute_SetBounds(@ptrCast(self.ptr), @ptrCast(bounds.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#bounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn Bounds(self: QGeoRoute) QGeoRectangle {
        return .{ .ptr = qtc.QGeoRoute_Bounds(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setFirstRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` routeSegment: QGeoRouteSegment `
    ///
    pub fn SetFirstRouteSegment(self: QGeoRoute, routeSegment: anytype) void {
        comptime _ = @TypeOf(routeSegment)._is_QGeoRouteSegment;
        qtc.QGeoRoute_SetFirstRouteSegment(@ptrCast(self.ptr), @ptrCast(routeSegment.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#firstRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn FirstRouteSegment(self: QGeoRoute) QGeoRouteSegment {
        return .{ .ptr = qtc.QGeoRoute_FirstRouteSegment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segmentsCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn SegmentsCount(self: QGeoRoute) isize {
        return qtc.QGeoRoute_SegmentsCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Segments(self: QGeoRoute, allocator: std.mem.Allocator) []QGeoRouteSegment {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_Segments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoRouteSegment, _arr.len) catch @panic("qgeoroute.Segments: Memory allocation failed");
        const _data: [*]QtC.QGeoRouteSegment = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` secs: i32 `
    ///
    pub fn SetTravelTime(self: QGeoRoute, secs: i32) void {
        qtc.QGeoRoute_SetTravelTime(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn TravelTime(self: QGeoRoute) i32 {
        return qtc.QGeoRoute_TravelTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistance(self: QGeoRoute, distance: f64) void {
        qtc.QGeoRoute_SetDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn Distance(self: QGeoRoute) f64 {
        return qtc.QGeoRoute_Distance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` mode: qgeorouterequest_enums.TravelMode `
    ///
    pub fn SetTravelMode(self: QGeoRoute, mode: i32) void {
        qtc.QGeoRoute_SetTravelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.TravelMode `
    ///
    pub fn TravelMode(self: QGeoRoute) i32 {
        return qtc.QGeoRoute_TravelMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` path: []QGeoCoordinate `
    ///
    pub fn SetPath(self: QGeoRoute, path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = path.len,
            .data = @ptrCast(path.ptr),
        };
        qtc.QGeoRoute_SetPath(@ptrCast(self.ptr), path_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QGeoRoute, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_Path(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("qgeoroute.Path: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteLegs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` legs: []QGeoRoute `
    ///
    pub fn SetRouteLegs(self: QGeoRoute, legs: []QGeoRoute) void {
        const legs_list = qtc.libqt_list{
            .len = legs.len,
            .data = @ptrCast(legs.ptr),
        };
        qtc.QGeoRoute_SetRouteLegs(@ptrCast(self.ptr), legs_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeLegs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RouteLegs(self: QGeoRoute, allocator: std.mem.Allocator) []QGeoRoute {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_RouteLegs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoRoute, _arr.len) catch @panic("qgeoroute.RouteLegs: Memory allocation failed");
        const _data: [*]QtC.QGeoRoute = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` extendedAttributes: ArrayMap_constu8_QVariant `
    ///
    pub fn SetExtendedAttributes(self: QGeoRoute, allocator: std.mem.Allocator, extendedAttributes: ArrayMap_constu8_QVariant) void {
        const extendedAttributes_count = extendedAttributes.count();
        const extendedAttributes_keys = allocator.alloc(qtc.libqt_string, extendedAttributes_count) catch @panic("qgeoroute.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_keys);
        const extendedAttributes_values = allocator.alloc(QtC.QVariant, extendedAttributes_count) catch @panic("qgeoroute.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_values);
        var i: usize = 0;
        var extendedAttributes_it = extendedAttributes.iterator();
        while (extendedAttributes_it.next()) |it_entry| : (i += 1) {
            const extendedAttributes_key = it_entry.key_ptr.*;
            extendedAttributes_keys[i] = qtc.libqt_string{
                .len = extendedAttributes_key.len,
                .data = extendedAttributes_key.ptr,
            };
            extendedAttributes_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const extendedAttributes_map = qtc.libqt_map{
            .len = extendedAttributes_count,
            .keys = @ptrCast(extendedAttributes_keys.ptr),
            .values = @ptrCast(extendedAttributes_values.ptr),
        };
        qtc.QGeoRoute_SetExtendedAttributes(@ptrCast(self.ptr), extendedAttributes_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: QGeoRoute, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoRoute_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qgeoroute.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qgeoroute.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setLegIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` idx: i32 `
    ///
    pub fn SetLegIndex(self: QGeoRoute, idx: i32) void {
        qtc.QGeoRoute_SetLegIndex(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#legIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn LegIndex(self: QGeoRoute) i32 {
        return qtc.QGeoRoute_LegIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setOverallRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` route: QGeoRoute `
    ///
    pub fn SetOverallRoute(self: QGeoRoute, route: anytype) void {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        qtc.QGeoRoute_SetOverallRoute(@ptrCast(self.ptr), @ptrCast(route.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#overallRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn OverallRoute(self: QGeoRoute) QGeoRoute {
        return .{ .ptr = qtc.QGeoRoute_OverallRoute(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#dtor.QGeoRoute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn Delete(self: QGeoRoute) void {
        qtc.QGeoRoute_Delete(@ptrCast(self.ptr));
    }
};
