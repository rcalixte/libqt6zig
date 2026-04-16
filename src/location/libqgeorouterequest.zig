const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRectangle = @import("libqt6").QGeoRectangle;
const qgeorouterequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)
pub const QGeoRouteRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoRouteRequest,

    pub const _is_QGeoRouteRequest = {};

    /// New constructs a new QGeoRouteRequest object.
    ///
    pub fn New() QGeoRouteRequest {
        return .{ .ptr = qtc.QGeoRouteRequest_new() };
    }

    /// New2 constructs a new QGeoRouteRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: QGeoCoordinate `
    ///
    /// ` destination: QGeoCoordinate `
    ///
    pub fn New2(origin: anytype, destination: anytype) QGeoRouteRequest {
        comptime _ = @TypeOf(origin)._is_QGeoCoordinate;
        comptime _ = @TypeOf(destination)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRouteRequest_new2(@ptrCast(origin.ptr), @ptrCast(destination.ptr)) };
    }

    /// New3 constructs a new QGeoRouteRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRouteRequest `
    ///
    pub fn New3(other: anytype) QGeoRouteRequest {
        comptime _ = @TypeOf(other)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRouteRequest_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QGeoRouteRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` waypoints: []QGeoCoordinate `
    ///
    pub fn New4(waypoints: []QGeoCoordinate) QGeoRouteRequest {
        const waypoints_list = qtc.libqt_list{
            .len = waypoints.len,
            .data = @ptrCast(waypoints.ptr),
        };
        return .{ .ptr = qtc.QGeoRouteRequest_new4(waypoints_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` other: QGeoRouteRequest `
    ///
    pub fn OperatorAssign(self: QGeoRouteRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteRequest;
        qtc.QGeoRouteRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` other: QGeoRouteRequest `
    ///
    pub fn Swap(self: QGeoRouteRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteRequest;
        qtc.QGeoRouteRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setWaypoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` waypoints: []QGeoCoordinate `
    ///
    pub fn SetWaypoints(self: QGeoRouteRequest, waypoints: []QGeoCoordinate) void {
        const waypoints_list = qtc.libqt_list{
            .len = waypoints.len,
            .data = @ptrCast(waypoints.ptr),
        };
        qtc.QGeoRouteRequest_SetWaypoints(@ptrCast(self.ptr), waypoints_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#waypoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Waypoints(self: QGeoRouteRequest, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_Waypoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("qgeorouterequest.Waypoints: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setExcludeAreas)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` areas: []QGeoRectangle `
    ///
    pub fn SetExcludeAreas(self: QGeoRouteRequest, areas: []QGeoRectangle) void {
        const areas_list = qtc.libqt_list{
            .len = areas.len,
            .data = @ptrCast(areas.ptr),
        };
        qtc.QGeoRouteRequest_SetExcludeAreas(@ptrCast(self.ptr), areas_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#excludeAreas)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExcludeAreas(self: QGeoRouteRequest, allocator: std.mem.Allocator) []QGeoRectangle {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_ExcludeAreas(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoRectangle, _arr.len) catch @panic("qgeorouterequest.ExcludeAreas: Memory allocation failed");
        const _data: [*]QtC.QGeoRectangle = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setNumberAlternativeRoutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` alternatives: i32 `
    ///
    pub fn SetNumberAlternativeRoutes(self: QGeoRouteRequest, alternatives: i32) void {
        qtc.QGeoRouteRequest_SetNumberAlternativeRoutes(@ptrCast(self.ptr), @bitCast(alternatives));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#numberAlternativeRoutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    pub fn NumberAlternativeRoutes(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_NumberAlternativeRoutes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` travelModes: flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn SetTravelModes(self: QGeoRouteRequest, travelModes: i32) void {
        qtc.QGeoRouteRequest_SetTravelModes(@ptrCast(self.ptr), @bitCast(travelModes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#travelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn TravelModes(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_TravelModes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setFeatureWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` featureType: qgeorouterequest_enums.FeatureType `
    ///
    /// ` featureWeight: qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn SetFeatureWeight(self: QGeoRouteRequest, featureType: i32, featureWeight: i32) void {
        qtc.QGeoRouteRequest_SetFeatureWeight(@ptrCast(self.ptr), @bitCast(featureType), @bitCast(featureWeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#featureWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` featureType: qgeorouterequest_enums.FeatureType `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn FeatureWeight(self: QGeoRouteRequest, featureType: i32) i32 {
        return qtc.QGeoRouteRequest_FeatureWeight(@ptrCast(self.ptr), @bitCast(featureType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#featureTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qgeorouterequest_enums.FeatureType `
    ///
    pub fn FeatureTypes(self: QGeoRouteRequest, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_FeatureTypes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qgeorouterequest.FeatureTypes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setRouteOptimization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` optimization: flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn SetRouteOptimization(self: QGeoRouteRequest, optimization: i32) void {
        qtc.QGeoRouteRequest_SetRouteOptimization(@ptrCast(self.ptr), @bitCast(optimization));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#routeOptimization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn RouteOptimization(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_RouteOptimization(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setSegmentDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` segmentDetail: qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SetSegmentDetail(self: QGeoRouteRequest, segmentDetail: i32) void {
        qtc.QGeoRouteRequest_SetSegmentDetail(@ptrCast(self.ptr), @bitCast(segmentDetail));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#segmentDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SegmentDetail(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_SegmentDetail(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setManeuverDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` maneuverDetail: qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn SetManeuverDetail(self: QGeoRouteRequest, maneuverDetail: i32) void {
        qtc.QGeoRouteRequest_SetManeuverDetail(@ptrCast(self.ptr), @bitCast(maneuverDetail));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#maneuverDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn ManeuverDetail(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_ManeuverDetail(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setDepartureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` departureTime: QDateTime `
    ///
    pub fn SetDepartureTime(self: QGeoRouteRequest, departureTime: anytype) void {
        comptime _ = @TypeOf(departureTime)._is_QDateTime;
        qtc.QGeoRouteRequest_SetDepartureTime(@ptrCast(self.ptr), @ptrCast(departureTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#departureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    pub fn DepartureTime(self: QGeoRouteRequest) QDateTime {
        return .{ .ptr = qtc.QGeoRouteRequest_DepartureTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#dtor.QGeoRouteRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRouteRequest `
    ///
    pub fn Delete(self: QGeoRouteRequest) void {
        qtc.QGeoRouteRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)
pub const enums = struct {
    pub const TravelMode = enum(i32) {
        pub const CarTravel: i32 = 1;
        pub const PedestrianTravel: i32 = 2;
        pub const BicycleTravel: i32 = 4;
        pub const PublicTransitTravel: i32 = 8;
        pub const TruckTravel: i32 = 16;
    };

    pub const FeatureType = enum(i32) {
        pub const NoFeature: i32 = 0;
        pub const TollFeature: i32 = 1;
        pub const HighwayFeature: i32 = 2;
        pub const PublicTransitFeature: i32 = 4;
        pub const FerryFeature: i32 = 8;
        pub const TunnelFeature: i32 = 16;
        pub const DirtRoadFeature: i32 = 32;
        pub const ParksFeature: i32 = 64;
        pub const MotorPoolLaneFeature: i32 = 128;
        pub const TrafficFeature: i32 = 256;
    };

    pub const FeatureWeight = enum(i32) {
        pub const NeutralFeatureWeight: i32 = 0;
        pub const PreferFeatureWeight: i32 = 1;
        pub const RequireFeatureWeight: i32 = 2;
        pub const AvoidFeatureWeight: i32 = 4;
        pub const DisallowFeatureWeight: i32 = 8;
    };

    pub const RouteOptimization = enum(i32) {
        pub const ShortestRoute: i32 = 1;
        pub const FastestRoute: i32 = 2;
        pub const MostEconomicRoute: i32 = 4;
        pub const MostScenicRoute: i32 = 8;
    };

    pub const SegmentDetail = enum(i32) {
        pub const NoSegmentData: i32 = 0;
        pub const BasicSegmentData: i32 = 1;
    };

    pub const ManeuverDetail = enum(i32) {
        pub const NoManeuvers: i32 = 0;
        pub const BasicManeuvers: i32 = 1;
    };
};
