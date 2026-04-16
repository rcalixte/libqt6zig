const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoRoute = @import("libqt6").QGeoRoute;
const QGeoRouteReply = @import("libqt6").QGeoRouteReply;
const QGeoRouteRequest = @import("libqt6").QGeoRouteRequest;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeoroutereply_enums = @import("libqgeoroutereply.zig").enums;
const qgeorouterequest_enums = @import("libqgeorouterequest.zig").enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html)
pub const QGeoRoutingManagerEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoRoutingManagerEngine,

    pub const _is_QGeoRoutingManagerEngine = {};
    pub const _is_QObject = {};

    /// New constructs a new QGeoRoutingManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn New(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) QGeoRoutingManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeoroutingmanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeoroutingmanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |it_entry| : (i += 1) {
            const parameters_key = it_entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = parameters_key.len,
                .data = parameters_key.ptr,
            };
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_new(parameters_map) };
    }

    /// New2 constructs a new QGeoRoutingManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, parent: anytype) QGeoRoutingManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeoroutingmanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeoroutingmanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |it_entry| : (i += 1) {
            const parameters_key = it_entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = parameters_key.len,
                .data = parameters_key.ptr,
            };
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_new2(parameters_map, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn MetaObject(self: QGeoRoutingManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGeoRoutingManagerEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoRoutingManagerEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn SuperMetaObject(self: QGeoRoutingManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGeoRoutingManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoRoutingManagerEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoRoutingManagerEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGeoRoutingManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoRoutingManagerEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGeoRoutingManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoRoutingManagerEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoRoutingManagerEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGeoRoutingManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoRoutingManagerEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroutingmanagerengine.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManagerName(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRoutingManagerEngine_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroutingmanagerengine.ManagerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn ManagerVersion(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` request: QGeoRouteRequest `
    ///
    pub fn CalculateRoute(self: QGeoRoutingManagerEngine, request: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(request)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_CalculateRoute(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, request: QGeoRouteRequest) callconv(.c) QGeoRouteReply `
    ///
    pub fn OnCalculateRoute(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteRequest) callconv(.c) QGeoRouteReply) void {
        qtc.QGeoRoutingManagerEngine_OnCalculateRoute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCalculateRoute` instead
    ///
    pub const QBaseCalculateRoute = SuperCalculateRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` request: QGeoRouteRequest `
    ///
    pub fn SuperCalculateRoute(self: QGeoRoutingManagerEngine, request: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(request)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperCalculateRoute(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` route: QGeoRoute `
    ///
    /// ` position: QGeoCoordinate `
    ///
    pub fn UpdateRoute(self: QGeoRoutingManagerEngine, route: anytype, position: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_UpdateRoute(@ptrCast(self.ptr), @ptrCast(route.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, route: QGeoRoute, position: QGeoCoordinate) callconv(.c) QGeoRouteReply `
    ///
    pub fn OnUpdateRoute(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRoute, QGeoCoordinate) callconv(.c) QGeoRouteReply) void {
        qtc.QGeoRoutingManagerEngine_OnUpdateRoute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateRoute` instead
    ///
    pub const QBaseUpdateRoute = SuperUpdateRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` route: QGeoRoute `
    ///
    /// ` position: QGeoCoordinate `
    ///
    pub fn SuperUpdateRoute(self: QGeoRoutingManagerEngine, route: anytype, position: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperUpdateRoute(@ptrCast(self.ptr), @ptrCast(route.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn SupportedTravelModes(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedTravelModes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedFeatureTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.FeatureType `
    ///
    pub fn SupportedFeatureTypes(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedFeatureTypes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedFeatureWeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn SupportedFeatureWeights(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedFeatureWeights(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedRouteOptimizations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn SupportedRouteOptimizations(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedRouteOptimizations(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedSegmentDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SupportedSegmentDetails(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedSegmentDetails(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedManeuverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn SupportedManeuverDetails(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedManeuverDetails(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QGeoRoutingManagerEngine, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QGeoRoutingManagerEngine_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Locale(self: QGeoRoutingManagerEngine) QLocale {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setMeasurementSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` system: qlocale_enums.MeasurementSystem `
    ///
    pub fn SetMeasurementSystem(self: QGeoRoutingManagerEngine, system: i32) void {
        qtc.QGeoRoutingManagerEngine_SetMeasurementSystem(@ptrCast(self.ptr), @bitCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#measurementSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.MeasurementSystem `
    ///
    pub fn MeasurementSystem(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_MeasurementSystem(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    pub fn Finished(self: QGeoRoutingManagerEngine, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        qtc.QGeoRoutingManagerEngine_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, reply: QGeoRouteReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteReply) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    /// ` errorVal: qgeoroutereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: QGeoRoutingManagerEngine, reply: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        qtc.QGeoRoutingManagerEngine_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, reply: QGeoRouteReply, errorVal: qgeoroutereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteReply, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` travelModes: flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn SetSupportedTravelModes(self: QGeoRoutingManagerEngine, travelModes: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedTravelModes(@ptrCast(self.ptr), @bitCast(travelModes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, travelModes: flag of qgeorouterequest_enums.TravelMode) callconv(.c) void `
    ///
    pub fn OnSetSupportedTravelModes(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedTravelModes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSupportedTravelModes` instead
    ///
    pub const QBaseSetSupportedTravelModes = SuperSetSupportedTravelModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` travelModes: flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn SuperSetSupportedTravelModes(self: QGeoRoutingManagerEngine, travelModes: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedTravelModes(@ptrCast(self.ptr), @bitCast(travelModes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` featureTypes: flag of qgeorouterequest_enums.FeatureType `
    ///
    pub fn SetSupportedFeatureTypes(self: QGeoRoutingManagerEngine, featureTypes: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedFeatureTypes(@ptrCast(self.ptr), @bitCast(featureTypes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, featureTypes: flag of qgeorouterequest_enums.FeatureType) callconv(.c) void `
    ///
    pub fn OnSetSupportedFeatureTypes(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedFeatureTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSupportedFeatureTypes` instead
    ///
    pub const QBaseSetSupportedFeatureTypes = SuperSetSupportedFeatureTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` featureTypes: flag of qgeorouterequest_enums.FeatureType `
    ///
    pub fn SuperSetSupportedFeatureTypes(self: QGeoRoutingManagerEngine, featureTypes: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedFeatureTypes(@ptrCast(self.ptr), @bitCast(featureTypes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` featureWeights: flag of qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn SetSupportedFeatureWeights(self: QGeoRoutingManagerEngine, featureWeights: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedFeatureWeights(@ptrCast(self.ptr), @bitCast(featureWeights));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, featureWeights: flag of qgeorouterequest_enums.FeatureWeight) callconv(.c) void `
    ///
    pub fn OnSetSupportedFeatureWeights(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedFeatureWeights(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSupportedFeatureWeights` instead
    ///
    pub const QBaseSetSupportedFeatureWeights = SuperSetSupportedFeatureWeights;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` featureWeights: flag of qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn SuperSetSupportedFeatureWeights(self: QGeoRoutingManagerEngine, featureWeights: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedFeatureWeights(@ptrCast(self.ptr), @bitCast(featureWeights));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` optimizations: flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn SetSupportedRouteOptimizations(self: QGeoRoutingManagerEngine, optimizations: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(@ptrCast(self.ptr), @bitCast(optimizations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, optimizations: flag of qgeorouterequest_enums.RouteOptimization) callconv(.c) void `
    ///
    pub fn OnSetSupportedRouteOptimizations(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedRouteOptimizations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSupportedRouteOptimizations` instead
    ///
    pub const QBaseSetSupportedRouteOptimizations = SuperSetSupportedRouteOptimizations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` optimizations: flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn SuperSetSupportedRouteOptimizations(self: QGeoRoutingManagerEngine, optimizations: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedRouteOptimizations(@ptrCast(self.ptr), @bitCast(optimizations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` segmentDetails: flag of qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SetSupportedSegmentDetails(self: QGeoRoutingManagerEngine, segmentDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedSegmentDetails(@ptrCast(self.ptr), @bitCast(segmentDetails));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, segmentDetails: flag of qgeorouterequest_enums.SegmentDetail) callconv(.c) void `
    ///
    pub fn OnSetSupportedSegmentDetails(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedSegmentDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSupportedSegmentDetails` instead
    ///
    pub const QBaseSetSupportedSegmentDetails = SuperSetSupportedSegmentDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` segmentDetails: flag of qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn SuperSetSupportedSegmentDetails(self: QGeoRoutingManagerEngine, segmentDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedSegmentDetails(@ptrCast(self.ptr), @bitCast(segmentDetails));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` maneuverDetails: flag of qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn SetSupportedManeuverDetails(self: QGeoRoutingManagerEngine, maneuverDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedManeuverDetails(@ptrCast(self.ptr), @bitCast(maneuverDetails));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, maneuverDetails: flag of qgeorouterequest_enums.ManeuverDetail) callconv(.c) void `
    ///
    pub fn OnSetSupportedManeuverDetails(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedManeuverDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSupportedManeuverDetails` instead
    ///
    pub const QBaseSetSupportedManeuverDetails = SuperSetSupportedManeuverDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` maneuverDetails: flag of qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn SuperSetSupportedManeuverDetails(self: QGeoRoutingManagerEngine, maneuverDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedManeuverDetails(@ptrCast(self.ptr), @bitCast(maneuverDetails));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroutingmanagerengine.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroutingmanagerengine.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    /// ` errorVal: qgeoroutereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred3(self: QGeoRoutingManagerEngine, reply: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoRoutingManagerEngine_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, reply: QGeoRouteReply, errorVal: qgeoroutereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred3(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoroutingmanagerengine.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGeoRoutingManagerEngine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn IsWidgetType(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn IsWindowType(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn IsQuickItemType(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn SignalsBlocked(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGeoRoutingManagerEngine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Thread(self: QGeoRoutingManagerEngine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGeoRoutingManagerEngine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGeoRoutingManagerEngine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGeoRoutingManagerEngine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGeoRoutingManagerEngine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGeoRoutingManagerEngine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgeoroutingmanagerengine.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGeoRoutingManagerEngine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGeoRoutingManagerEngine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGeoRoutingManagerEngine, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGeoRoutingManagerEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Disconnect3(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGeoRoutingManagerEngine, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn DumpObjectTree(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn DumpObjectInfo(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGeoRoutingManagerEngine, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGeoRoutingManagerEngine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgeoroutingmanagerengine.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeoroutingmanagerengine.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn BindingStorage(self: QGeoRoutingManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn BindingStorage2(self: QGeoRoutingManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Destroyed(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Parent(self: QGeoRoutingManagerEngine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGeoRoutingManagerEngine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn DeleteLater(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGeoRoutingManagerEngine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGeoRoutingManagerEngine, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGeoRoutingManagerEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGeoRoutingManagerEngine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGeoRoutingManagerEngine, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGeoRoutingManagerEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGeoRoutingManagerEngine, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGeoRoutingManagerEngine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGeoRoutingManagerEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGeoRoutingManagerEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QEvent) callconv(.c) bool) void {
        qtc.QGeoRoutingManagerEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGeoRoutingManagerEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGeoRoutingManagerEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoRoutingManagerEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGeoRoutingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoRoutingManagerEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGeoRoutingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoRoutingManagerEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGeoRoutingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoRoutingManagerEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGeoRoutingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoRoutingManagerEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QChildEvent) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGeoRoutingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoRoutingManagerEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGeoRoutingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoRoutingManagerEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QEvent) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Sender(self: QGeoRoutingManagerEngine) QObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn SuperSender(self: QGeoRoutingManagerEngine) QObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGeoRoutingManagerEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoRoutingManagerEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn SenderSignalIndex(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn SuperSenderSignalIndex(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGeoRoutingManagerEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoRoutingManagerEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGeoRoutingManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoRoutingManagerEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGeoRoutingManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoRoutingManagerEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoRoutingManagerEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGeoRoutingManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoRoutingManagerEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGeoRoutingManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoRoutingManagerEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoRoutingManagerEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#dtor.QGeoRoutingManagerEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn Delete(self: QGeoRoutingManagerEngine) void {
        qtc.QGeoRoutingManagerEngine_Delete(@ptrCast(self.ptr));
    }
};
