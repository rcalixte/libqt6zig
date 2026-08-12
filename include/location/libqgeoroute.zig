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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoRoute object in C++ memory
    ///
    pub fn new() QGeoRoute {
        return .{ .ptr = qtc.QGeoRoute_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoRoute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRoute `
    ///
    pub fn new2(other: anytype) QGeoRoute {
        comptime _ = @TypeOf(other)._is_QGeoRoute;
        return .{ .ptr = qtc.QGeoRoute_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` other: QGeoRoute `
    ///
    pub fn operatorAssign(self: QGeoRoute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRoute;
        qtc.QGeoRoute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` other: QGeoRoute `
    ///
    pub fn swap(self: QGeoRoute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRoute;
        qtc.QGeoRoute_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setRouteId` instead
    ///
    pub const SetRouteId = setRouteId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` id: []const u8 `
    ///
    pub fn setRouteId(self: QGeoRoute, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QGeoRoute_SetRouteId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `routeId` instead
    ///
    pub const RouteId = routeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn routeId(self: QGeoRoute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRoute_RouteId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoute.routeId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRequest` instead
    ///
    pub const SetRequest = setRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` _request: QGeoRouteRequest `
    ///
    pub fn setRequest(self: QGeoRoute, _request: anytype) void {
        comptime _ = @TypeOf(_request)._is_QGeoRouteRequest;
        qtc.QGeoRoute_SetRequest(@ptrCast(self.ptr), @ptrCast(_request.ptr));
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn request(self: QGeoRoute) QGeoRouteRequest {
        return .{ .ptr = qtc.QGeoRoute_Request(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBounds` instead
    ///
    pub const SetBounds = setBounds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setBounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` _bounds: QGeoRectangle `
    ///
    pub fn setBounds(self: QGeoRoute, _bounds: anytype) void {
        comptime _ = @TypeOf(_bounds)._is_QGeoRectangle;
        qtc.QGeoRoute_SetBounds(@ptrCast(self.ptr), @ptrCast(_bounds.ptr));
    }

    /// ### DEPRECATED: Use `bounds` instead
    ///
    pub const Bounds = bounds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#bounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn bounds(self: QGeoRoute) QGeoRectangle {
        return .{ .ptr = qtc.QGeoRoute_Bounds(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFirstRouteSegment` instead
    ///
    pub const SetFirstRouteSegment = setFirstRouteSegment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setFirstRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` routeSegment: QGeoRouteSegment `
    ///
    pub fn setFirstRouteSegment(self: QGeoRoute, routeSegment: anytype) void {
        comptime _ = @TypeOf(routeSegment)._is_QGeoRouteSegment;
        qtc.QGeoRoute_SetFirstRouteSegment(@ptrCast(self.ptr), @ptrCast(routeSegment.ptr));
    }

    /// ### DEPRECATED: Use `firstRouteSegment` instead
    ///
    pub const FirstRouteSegment = firstRouteSegment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#firstRouteSegment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn firstRouteSegment(self: QGeoRoute) QGeoRouteSegment {
        return .{ .ptr = qtc.QGeoRoute_FirstRouteSegment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `segmentsCount` instead
    ///
    pub const SegmentsCount = segmentsCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segmentsCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn segmentsCount(self: QGeoRoute) isize {
        return qtc.QGeoRoute_SegmentsCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `segments` instead
    ///
    pub const Segments = segments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn segments(self: QGeoRoute, allocator: std.mem.Allocator) []QGeoRouteSegment {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_Segments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoRouteSegment, _arr.len) catch @panic("QGeoRoute.segments: Memory allocation failed");
        const _data_val: [*]QtC.QGeoRouteSegment = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTravelTime` instead
    ///
    pub const SetTravelTime = setTravelTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` secs: i32 `
    ///
    pub fn setTravelTime(self: QGeoRoute, secs: i32) void {
        qtc.QGeoRoute_SetTravelTime(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `travelTime` instead
    ///
    pub const TravelTime = travelTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn travelTime(self: QGeoRoute) i32 {
        return qtc.QGeoRoute_TravelTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDistance` instead
    ///
    pub const SetDistance = setDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` _distance: f64 `
    ///
    pub fn setDistance(self: QGeoRoute, _distance: f64) void {
        qtc.QGeoRoute_SetDistance(@ptrCast(self.ptr), @bitCast(_distance));
    }

    /// ### DEPRECATED: Use `distance` instead
    ///
    pub const Distance = distance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#distance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn distance(self: QGeoRoute) f64 {
        return qtc.QGeoRoute_Distance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTravelMode` instead
    ///
    pub const SetTravelMode = setTravelMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` mode: qgeorouterequest_enums.TravelMode `
    ///
    pub fn setTravelMode(self: QGeoRoute, mode: i32) void {
        qtc.QGeoRoute_SetTravelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `travelMode` instead
    ///
    pub const TravelMode = travelMode;

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
    pub fn travelMode(self: QGeoRoute) i32 {
        return qtc.QGeoRoute_TravelMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` _path: []QGeoCoordinate `
    ///
    pub fn setPath(self: QGeoRoute, _path: []QGeoCoordinate) void {
        const path_list = qtc.libqt_list{
            .len = _path.len,
            .data = @ptrCast(_path.ptr),
        };
        qtc.QGeoRoute_SetPath(@ptrCast(self.ptr), path_list);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QGeoRoute, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_Path(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("QGeoRoute.path: Memory allocation failed");
        const _data_val: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setRouteLegs` instead
    ///
    pub const SetRouteLegs = setRouteLegs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteLegs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` legs: []QGeoRoute `
    ///
    pub fn setRouteLegs(self: QGeoRoute, legs: []QGeoRoute) void {
        const legs_list = qtc.libqt_list{
            .len = legs.len,
            .data = @ptrCast(legs.ptr),
        };
        qtc.QGeoRoute_SetRouteLegs(@ptrCast(self.ptr), legs_list);
    }

    /// ### DEPRECATED: Use `routeLegs` instead
    ///
    pub const RouteLegs = routeLegs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeLegs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn routeLegs(self: QGeoRoute, allocator: std.mem.Allocator) []QGeoRoute {
        const _arr: qtc.libqt_list = qtc.QGeoRoute_RouteLegs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoRoute, _arr.len) catch @panic("QGeoRoute.routeLegs: Memory allocation failed");
        const _data_val: [*]QtC.QGeoRoute = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setExtendedAttributes` instead
    ///
    pub const SetExtendedAttributes = setExtendedAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _extendedAttributes: ArrayMap_constu8_QVariant `
    ///
    pub fn setExtendedAttributes(self: QGeoRoute, allocator: std.mem.Allocator, _extendedAttributes: ArrayMap_constu8_QVariant) void {
        const extendedAttributes_count = _extendedAttributes.count();
        const extendedAttributes_keys = allocator.alloc(qtc.libqt_string, extendedAttributes_count) catch @panic("QGeoRoute.setExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_keys);
        const extendedAttributes_values = allocator.alloc(QtC.QVariant, extendedAttributes_count) catch @panic("QGeoRoute.setExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_values);
        var i: usize = 0;
        var extendedAttributes_it = _extendedAttributes.iterator();
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

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: QGeoRoute, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoRoute_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QGeoRoute.extendedAttributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QGeoRoute.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setLegIndex` instead
    ///
    pub const SetLegIndex = setLegIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setLegIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` idx: i32 `
    ///
    pub fn setLegIndex(self: QGeoRoute, idx: i32) void {
        qtc.QGeoRoute_SetLegIndex(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### DEPRECATED: Use `legIndex` instead
    ///
    pub const LegIndex = legIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#legIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn legIndex(self: QGeoRoute) i32 {
        return qtc.QGeoRoute_LegIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOverallRoute` instead
    ///
    pub const SetOverallRoute = setOverallRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setOverallRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    /// ` route: QGeoRoute `
    ///
    pub fn setOverallRoute(self: QGeoRoute, route: anytype) void {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        qtc.QGeoRoute_SetOverallRoute(@ptrCast(self.ptr), @ptrCast(route.ptr));
    }

    /// ### DEPRECATED: Use `overallRoute` instead
    ///
    pub const OverallRoute = overallRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#overallRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn overallRoute(self: QGeoRoute) QGeoRoute {
        return .{ .ptr = qtc.QGeoRoute_OverallRoute(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#dtor.QGeoRoute)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRoute `
    ///
    pub fn delete(self: QGeoRoute) void {
        qtc.QGeoRoute_Delete(@ptrCast(self.ptr));
    }
};
