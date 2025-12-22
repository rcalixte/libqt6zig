const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeorouterequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)
pub const qgeorouterequest = struct {
    /// New constructs a new QGeoRouteRequest object.
    ///
    pub fn New() QtC.QGeoRouteRequest {
        return qtc.QGeoRouteRequest_new();
    }

    /// New2 constructs a new QGeoRouteRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: QtC.QGeoCoordinate `
    ///
    /// ` destination: QtC.QGeoCoordinate `
    ///
    pub fn New2(origin: ?*anyopaque, destination: ?*anyopaque) QtC.QGeoRouteRequest {
        return qtc.QGeoRouteRequest_new2(@ptrCast(origin), @ptrCast(destination));
    }

    /// New3 constructs a new QGeoRouteRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoRouteRequest `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QGeoRouteRequest {
        return qtc.QGeoRouteRequest_new3(@ptrCast(other));
    }

    /// New4 constructs a new QGeoRouteRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` waypoints: []QtC.QGeoCoordinate `
    ///
    pub fn New4(waypoints: []QtC.QGeoCoordinate) QtC.QGeoRouteRequest {
        const waypoints_list = qtc.libqt_list{
            .len = waypoints.len,
            .data = @ptrCast(waypoints.ptr),
        };

        return qtc.QGeoRouteRequest_new4(waypoints_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` other: QtC.QGeoRouteRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRouteRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` other: QtC.QGeoRouteRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoRouteRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setWaypoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` waypoints: []QtC.QGeoCoordinate `
    ///
    pub fn SetWaypoints(self: ?*anyopaque, waypoints: []QtC.QGeoCoordinate) void {
        const waypoints_list = qtc.libqt_list{
            .len = waypoints.len,
            .data = @ptrCast(waypoints.ptr),
        };
        qtc.QGeoRouteRequest_SetWaypoints(@ptrCast(self), waypoints_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#waypoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Waypoints(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoCoordinate {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_Waypoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoCoordinate, _arr.len) catch @panic("qgeorouterequest.Waypoints: Memory allocation failed");
        const _data: [*]QtC.QGeoCoordinate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setExcludeAreas)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` areas: []QtC.QGeoRectangle `
    ///
    pub fn SetExcludeAreas(self: ?*anyopaque, areas: []QtC.QGeoRectangle) void {
        const areas_list = qtc.libqt_list{
            .len = areas.len,
            .data = @ptrCast(areas.ptr),
        };
        qtc.QGeoRouteRequest_SetExcludeAreas(@ptrCast(self), areas_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#excludeAreas)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExcludeAreas(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoRectangle {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_ExcludeAreas(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoRectangle, _arr.len) catch @panic("qgeorouterequest.ExcludeAreas: Memory allocation failed");
        const _data: [*]QtC.QGeoRectangle = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setNumberAlternativeRoutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` alternatives: i32 `
    ///
    pub fn SetNumberAlternativeRoutes(self: ?*anyopaque, alternatives: i32) void {
        qtc.QGeoRouteRequest_SetNumberAlternativeRoutes(@ptrCast(self), @intCast(alternatives));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#numberAlternativeRoutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    pub fn NumberAlternativeRoutes(self: ?*anyopaque) i32 {
        return qtc.QGeoRouteRequest_NumberAlternativeRoutes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` travelModes: flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn SetTravelModes(self: ?*anyopaque, travelModes: i32) void {
        qtc.QGeoRouteRequest_SetTravelModes(@ptrCast(self), @intCast(travelModes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#travelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn TravelModes(self: ?*anyopaque) i32 {
        return qtc.QGeoRouteRequest_TravelModes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setFeatureWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` featureType: qgeorouterequest_enums.FeatureType `
    ///
    /// ` featureWeight: qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn SetFeatureWeight(self: ?*anyopaque, featureType: i32, featureWeight: i32) void {
        qtc.QGeoRouteRequest_SetFeatureWeight(@ptrCast(self), @intCast(featureType), @intCast(featureWeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#featureWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` featureType: qgeorouterequest_enums.FeatureType `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn FeatureWeight(self: ?*anyopaque, featureType: i32) i32 {
        return qtc.QGeoRouteRequest_FeatureWeight(@ptrCast(self), @intCast(featureType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#featureTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qgeorouterequest_enums.FeatureType `
    ///
    pub fn FeatureTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QGeoRouteRequest_FeatureTypes(@ptrCast(self));
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
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` optimization: flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn SetRouteOptimization(self: ?*anyopaque, optimization: i32) void {
        qtc.QGeoRouteRequest_SetRouteOptimization(@ptrCast(self), @intCast(optimization));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#routeOptimization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn RouteOptimization(self: ?*anyopaque) i32 {
        return qtc.QGeoRouteRequest_RouteOptimization(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setSegmentDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` segmentDetail: qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SetSegmentDetail(self: ?*anyopaque, segmentDetail: i32) void {
        qtc.QGeoRouteRequest_SetSegmentDetail(@ptrCast(self), @intCast(segmentDetail));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#segmentDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SegmentDetail(self: ?*anyopaque) i32 {
        return qtc.QGeoRouteRequest_SegmentDetail(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setManeuverDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` maneuverDetail: qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn SetManeuverDetail(self: ?*anyopaque, maneuverDetail: i32) void {
        qtc.QGeoRouteRequest_SetManeuverDetail(@ptrCast(self), @intCast(maneuverDetail));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#maneuverDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ## Returns:
    ///
    /// ` qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn ManeuverDetail(self: ?*anyopaque) i32 {
        return qtc.QGeoRouteRequest_ManeuverDetail(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setDepartureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    /// ` departureTime: QtC.QDateTime `
    ///
    pub fn SetDepartureTime(self: ?*anyopaque, departureTime: ?*anyopaque) void {
        qtc.QGeoRouteRequest_SetDepartureTime(@ptrCast(self), @ptrCast(departureTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#departureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    pub fn DepartureTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QGeoRouteRequest_DepartureTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#dtor.QGeoRouteRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoRouteRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoRouteRequest_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)
pub const enums = struct {
    pub const TravelMode = enum {
        pub const CarTravel: i32 = 1;
        pub const PedestrianTravel: i32 = 2;
        pub const BicycleTravel: i32 = 4;
        pub const PublicTransitTravel: i32 = 8;
        pub const TruckTravel: i32 = 16;
    };

    pub const FeatureType = enum {
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

    pub const FeatureWeight = enum {
        pub const NeutralFeatureWeight: i32 = 0;
        pub const PreferFeatureWeight: i32 = 1;
        pub const RequireFeatureWeight: i32 = 2;
        pub const AvoidFeatureWeight: i32 = 4;
        pub const DisallowFeatureWeight: i32 = 8;
    };

    pub const RouteOptimization = enum {
        pub const ShortestRoute: i32 = 1;
        pub const FastestRoute: i32 = 2;
        pub const MostEconomicRoute: i32 = 4;
        pub const MostScenicRoute: i32 = 8;
    };

    pub const SegmentDetail = enum {
        pub const NoSegmentData: i32 = 0;
        pub const BasicSegmentData: i32 = 1;
    };

    pub const ManeuverDetail = enum {
        pub const NoManeuvers: i32 = 0;
        pub const BasicManeuvers: i32 = 1;
    };
};
