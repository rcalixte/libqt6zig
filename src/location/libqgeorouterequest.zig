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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoRouteRequest object in C++ memory
    ///
    pub fn new() QGeoRouteRequest {
        return .{ .ptr = qtc.QGeoRouteRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoRouteRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: QGeoCoordinate `
    ///
    /// ` destination: QGeoCoordinate `
    ///
    pub fn new2(origin: anytype, destination: anytype) QGeoRouteRequest {
        comptime _ = @TypeOf(origin)._is_QGeoCoordinate;
        comptime _ = @TypeOf(destination)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRouteRequest_new2(@ptrCast(origin.ptr), @ptrCast(destination.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoRouteRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoRouteRequest `
    ///
    pub fn new3(other: anytype) QGeoRouteRequest {
        comptime _ = @TypeOf(other)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRouteRequest_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGeoRouteRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _waypoints: []QGeoCoordinate `
    ///
    pub fn new4(_waypoints: []QGeoCoordinate) QGeoRouteRequest {
        const waypoints_list = qtc.libqt_list{
            .len = _waypoints.len,
            .data = @ptrCast(_waypoints.ptr),
        };
        return .{ .ptr = qtc.QGeoRouteRequest_new4(waypoints_list) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` other: QGeoRouteRequest `
    ///
    pub fn operatorAssign(self: QGeoRouteRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteRequest;
        qtc.QGeoRouteRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` other: QGeoRouteRequest `
    ///
    pub fn swap(self: QGeoRouteRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoRouteRequest;
        qtc.QGeoRouteRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setWaypoints` instead
    ///
    pub const SetWaypoints = setWaypoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setWaypoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` _waypoints: []QGeoCoordinate `
    ///
    pub fn setWaypoints(self: QGeoRouteRequest, _waypoints: []QGeoCoordinate) void {
        const waypoints_list = qtc.libqt_list{
            .len = _waypoints.len,
            .data = @ptrCast(_waypoints.ptr),
        };
        qtc.QGeoRouteRequest_SetWaypoints(@ptrCast(self.ptr), waypoints_list);
    }

    /// ### DEPRECATED: Use `waypoints` instead
    ///
    pub const Waypoints = waypoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#waypoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn waypoints(self: QGeoRouteRequest, allocator: std.mem.Allocator) []QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_Waypoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoCoordinate, _arr.len) catch @panic("QGeoRouteRequest.waypoints: Memory allocation failed");
        const _data_val: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setExcludeAreas` instead
    ///
    pub const SetExcludeAreas = setExcludeAreas;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setExcludeAreas)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` areas: []QGeoRectangle `
    ///
    pub fn setExcludeAreas(self: QGeoRouteRequest, areas: []QGeoRectangle) void {
        const areas_list = qtc.libqt_list{
            .len = areas.len,
            .data = @ptrCast(areas.ptr),
        };
        qtc.QGeoRouteRequest_SetExcludeAreas(@ptrCast(self.ptr), areas_list);
    }

    /// ### DEPRECATED: Use `excludeAreas` instead
    ///
    pub const ExcludeAreas = excludeAreas;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#excludeAreas)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn excludeAreas(self: QGeoRouteRequest, allocator: std.mem.Allocator) []QGeoRectangle {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_ExcludeAreas(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoRectangle, _arr.len) catch @panic("QGeoRouteRequest.excludeAreas: Memory allocation failed");
        const _data_val: [*]QtC.QGeoRectangle = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setNumberAlternativeRoutes` instead
    ///
    pub const SetNumberAlternativeRoutes = setNumberAlternativeRoutes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setNumberAlternativeRoutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` alternatives: i32 `
    ///
    pub fn setNumberAlternativeRoutes(self: QGeoRouteRequest, alternatives: i32) void {
        qtc.QGeoRouteRequest_SetNumberAlternativeRoutes(@ptrCast(self.ptr), @bitCast(alternatives));
    }

    /// ### DEPRECATED: Use `numberAlternativeRoutes` instead
    ///
    pub const NumberAlternativeRoutes = numberAlternativeRoutes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#numberAlternativeRoutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    pub fn numberAlternativeRoutes(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_NumberAlternativeRoutes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTravelModes` instead
    ///
    pub const SetTravelModes = setTravelModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` _travelModes: flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn setTravelModes(self: QGeoRouteRequest, _travelModes: i32) void {
        qtc.QGeoRouteRequest_SetTravelModes(@ptrCast(self.ptr), @bitCast(_travelModes));
    }

    /// ### DEPRECATED: Use `travelModes` instead
    ///
    pub const TravelModes = travelModes;

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
    pub fn travelModes(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_TravelModes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatureWeight` instead
    ///
    pub const SetFeatureWeight = setFeatureWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setFeatureWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` featureType: qgeorouterequest_enums.FeatureType `
    ///
    /// ` _featureWeight: qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn setFeatureWeight(self: QGeoRouteRequest, featureType: i32, _featureWeight: i32) void {
        qtc.QGeoRouteRequest_SetFeatureWeight(@ptrCast(self.ptr), @bitCast(featureType), @bitCast(_featureWeight));
    }

    /// ### DEPRECATED: Use `featureWeight` instead
    ///
    pub const FeatureWeight = featureWeight;

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
    pub fn featureWeight(self: QGeoRouteRequest, featureType: i32) i32 {
        return qtc.QGeoRouteRequest_FeatureWeight(@ptrCast(self.ptr), @bitCast(featureType));
    }

    /// ### DEPRECATED: Use `featureTypes` instead
    ///
    pub const FeatureTypes = featureTypes;

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
    pub fn featureTypes(self: QGeoRouteRequest, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_FeatureTypes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QGeoRouteRequest.featureTypes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRouteOptimization` instead
    ///
    pub const SetRouteOptimization = setRouteOptimization;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setRouteOptimization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` optimization: flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn setRouteOptimization(self: QGeoRouteRequest, optimization: i32) void {
        qtc.QGeoRouteRequest_SetRouteOptimization(@ptrCast(self.ptr), @bitCast(optimization));
    }

    /// ### DEPRECATED: Use `routeOptimization` instead
    ///
    pub const RouteOptimization = routeOptimization;

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
    pub fn routeOptimization(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_RouteOptimization(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSegmentDetail` instead
    ///
    pub const SetSegmentDetail = setSegmentDetail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setSegmentDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` _segmentDetail: qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn setSegmentDetail(self: QGeoRouteRequest, _segmentDetail: i32) void {
        qtc.QGeoRouteRequest_SetSegmentDetail(@ptrCast(self.ptr), @bitCast(_segmentDetail));
    }

    /// ### DEPRECATED: Use `segmentDetail` instead
    ///
    pub const SegmentDetail = segmentDetail;

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
    pub fn segmentDetail(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_SegmentDetail(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setManeuverDetail` instead
    ///
    pub const SetManeuverDetail = setManeuverDetail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setManeuverDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` _maneuverDetail: qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn setManeuverDetail(self: QGeoRouteRequest, _maneuverDetail: i32) void {
        qtc.QGeoRouteRequest_SetManeuverDetail(@ptrCast(self.ptr), @bitCast(_maneuverDetail));
    }

    /// ### DEPRECATED: Use `maneuverDetail` instead
    ///
    pub const ManeuverDetail = maneuverDetail;

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
    pub fn maneuverDetail(self: QGeoRouteRequest) i32 {
        return qtc.QGeoRouteRequest_ManeuverDetail(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDepartureTime` instead
    ///
    pub const SetDepartureTime = setDepartureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setDepartureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    /// ` _departureTime: QDateTime `
    ///
    pub fn setDepartureTime(self: QGeoRouteRequest, _departureTime: anytype) void {
        comptime _ = @TypeOf(_departureTime)._is_QDateTime;
        qtc.QGeoRouteRequest_SetDepartureTime(@ptrCast(self.ptr), @ptrCast(_departureTime.ptr));
    }

    /// ### DEPRECATED: Use `departureTime` instead
    ///
    pub const DepartureTime = departureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#departureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRouteRequest `
    ///
    pub fn departureTime(self: QGeoRouteRequest) QDateTime {
        return .{ .ptr = qtc.QGeoRouteRequest_DepartureTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#dtor.QGeoRouteRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRouteRequest `
    ///
    pub fn delete(self: QGeoRouteRequest) void {
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
