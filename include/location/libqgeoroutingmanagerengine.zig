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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoRoutingManagerEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn new(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) QGeoRoutingManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoRoutingManagerEngine.new: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoRoutingManagerEngine.new: Memory allocation failed");
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

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoRoutingManagerEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, _parent: anytype) QGeoRoutingManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoRoutingManagerEngine.new2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoRoutingManagerEngine.new2: Memory allocation failed");
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
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_new2(parameters_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn metaObject(self: QGeoRoutingManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QGeoRoutingManagerEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoRoutingManagerEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn superMetaObject(self: QGeoRoutingManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGeoRoutingManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoRoutingManagerEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoRoutingManagerEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGeoRoutingManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoRoutingManagerEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QGeoRoutingManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoRoutingManagerEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoRoutingManagerEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QGeoRoutingManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoRoutingManagerEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManagerEngine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerName` instead
    ///
    pub const ManagerName = managerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn managerName(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRoutingManagerEngine_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManagerEngine.managerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerVersion` instead
    ///
    pub const ManagerVersion = managerVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn managerVersion(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `calculateRoute` instead
    ///
    pub const CalculateRoute = calculateRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` request: QGeoRouteRequest `
    ///
    pub fn calculateRoute(self: QGeoRoutingManagerEngine, request: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(request)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_CalculateRoute(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `onCalculateRoute` instead
    ///
    pub const OnCalculateRoute = onCalculateRoute;

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
    pub fn onCalculateRoute(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteRequest) callconv(.c) QGeoRouteReply) void {
        qtc.QGeoRoutingManagerEngine_OnCalculateRoute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCalculateRoute` instead
    ///
    pub const SuperCalculateRoute = superCalculateRoute;

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
    pub fn superCalculateRoute(self: QGeoRoutingManagerEngine, request: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(request)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperCalculateRoute(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `updateRoute` instead
    ///
    pub const UpdateRoute = updateRoute;

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
    pub fn updateRoute(self: QGeoRoutingManagerEngine, route: anytype, position: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_UpdateRoute(@ptrCast(self.ptr), @ptrCast(route.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `onUpdateRoute` instead
    ///
    pub const OnUpdateRoute = onUpdateRoute;

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
    pub fn onUpdateRoute(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRoute, QGeoCoordinate) callconv(.c) QGeoRouteReply) void {
        qtc.QGeoRoutingManagerEngine_OnUpdateRoute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateRoute` instead
    ///
    pub const SuperUpdateRoute = superUpdateRoute;

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
    pub fn superUpdateRoute(self: QGeoRoutingManagerEngine, route: anytype, position: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperUpdateRoute(@ptrCast(self.ptr), @ptrCast(route.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedTravelModes` instead
    ///
    pub const SupportedTravelModes = supportedTravelModes;

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
    pub fn supportedTravelModes(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedTravelModes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedFeatureTypes` instead
    ///
    pub const SupportedFeatureTypes = supportedFeatureTypes;

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
    pub fn supportedFeatureTypes(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedFeatureTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedFeatureWeights` instead
    ///
    pub const SupportedFeatureWeights = supportedFeatureWeights;

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
    pub fn supportedFeatureWeights(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedFeatureWeights(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedRouteOptimizations` instead
    ///
    pub const SupportedRouteOptimizations = supportedRouteOptimizations;

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
    pub fn supportedRouteOptimizations(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedRouteOptimizations(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedSegmentDetails` instead
    ///
    pub const SupportedSegmentDetails = supportedSegmentDetails;

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
    pub fn supportedSegmentDetails(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedSegmentDetails(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedManeuverDetails` instead
    ///
    pub const SupportedManeuverDetails = supportedManeuverDetails;

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
    pub fn supportedManeuverDetails(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SupportedManeuverDetails(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QGeoRoutingManagerEngine, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QGeoRoutingManagerEngine_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn locale(self: QGeoRoutingManagerEngine) QLocale {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMeasurementSystem` instead
    ///
    pub const SetMeasurementSystem = setMeasurementSystem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setMeasurementSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` system: qlocale_enums.MeasurementSystem `
    ///
    pub fn setMeasurementSystem(self: QGeoRoutingManagerEngine, system: i32) void {
        qtc.QGeoRoutingManagerEngine_SetMeasurementSystem(@ptrCast(self.ptr), @bitCast(system));
    }

    /// ### DEPRECATED: Use `measurementSystem` instead
    ///
    pub const MeasurementSystem = measurementSystem;

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
    pub fn measurementSystem(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_MeasurementSystem(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    pub fn finished(self: QGeoRoutingManagerEngine, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        qtc.QGeoRoutingManagerEngine_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, reply: QGeoRouteReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteReply) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    pub fn errorOccurred(self: QGeoRoutingManagerEngine, reply: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        qtc.QGeoRoutingManagerEngine_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, reply: QGeoRouteReply, errorVal: qgeoroutereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteReply, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSupportedTravelModes` instead
    ///
    pub const SetSupportedTravelModes = setSupportedTravelModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` travelModes: flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn setSupportedTravelModes(self: QGeoRoutingManagerEngine, travelModes: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedTravelModes(@ptrCast(self.ptr), @bitCast(travelModes));
    }

    /// ### DEPRECATED: Use `onSetSupportedTravelModes` instead
    ///
    pub const OnSetSupportedTravelModes = onSetSupportedTravelModes;

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
    pub fn onSetSupportedTravelModes(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedTravelModes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportedTravelModes` instead
    ///
    pub const SuperSetSupportedTravelModes = superSetSupportedTravelModes;

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
    pub fn superSetSupportedTravelModes(self: QGeoRoutingManagerEngine, travelModes: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedTravelModes(@ptrCast(self.ptr), @bitCast(travelModes));
    }

    /// ### DEPRECATED: Use `setSupportedFeatureTypes` instead
    ///
    pub const SetSupportedFeatureTypes = setSupportedFeatureTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` featureTypes: flag of qgeorouterequest_enums.FeatureType `
    ///
    pub fn setSupportedFeatureTypes(self: QGeoRoutingManagerEngine, featureTypes: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedFeatureTypes(@ptrCast(self.ptr), @bitCast(featureTypes));
    }

    /// ### DEPRECATED: Use `onSetSupportedFeatureTypes` instead
    ///
    pub const OnSetSupportedFeatureTypes = onSetSupportedFeatureTypes;

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
    pub fn onSetSupportedFeatureTypes(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedFeatureTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportedFeatureTypes` instead
    ///
    pub const SuperSetSupportedFeatureTypes = superSetSupportedFeatureTypes;

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
    pub fn superSetSupportedFeatureTypes(self: QGeoRoutingManagerEngine, featureTypes: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedFeatureTypes(@ptrCast(self.ptr), @bitCast(featureTypes));
    }

    /// ### DEPRECATED: Use `setSupportedFeatureWeights` instead
    ///
    pub const SetSupportedFeatureWeights = setSupportedFeatureWeights;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` featureWeights: flag of qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn setSupportedFeatureWeights(self: QGeoRoutingManagerEngine, featureWeights: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedFeatureWeights(@ptrCast(self.ptr), @bitCast(featureWeights));
    }

    /// ### DEPRECATED: Use `onSetSupportedFeatureWeights` instead
    ///
    pub const OnSetSupportedFeatureWeights = onSetSupportedFeatureWeights;

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
    pub fn onSetSupportedFeatureWeights(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedFeatureWeights(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportedFeatureWeights` instead
    ///
    pub const SuperSetSupportedFeatureWeights = superSetSupportedFeatureWeights;

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
    pub fn superSetSupportedFeatureWeights(self: QGeoRoutingManagerEngine, featureWeights: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedFeatureWeights(@ptrCast(self.ptr), @bitCast(featureWeights));
    }

    /// ### DEPRECATED: Use `setSupportedRouteOptimizations` instead
    ///
    pub const SetSupportedRouteOptimizations = setSupportedRouteOptimizations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` optimizations: flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn setSupportedRouteOptimizations(self: QGeoRoutingManagerEngine, optimizations: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(@ptrCast(self.ptr), @bitCast(optimizations));
    }

    /// ### DEPRECATED: Use `onSetSupportedRouteOptimizations` instead
    ///
    pub const OnSetSupportedRouteOptimizations = onSetSupportedRouteOptimizations;

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
    pub fn onSetSupportedRouteOptimizations(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedRouteOptimizations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportedRouteOptimizations` instead
    ///
    pub const SuperSetSupportedRouteOptimizations = superSetSupportedRouteOptimizations;

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
    pub fn superSetSupportedRouteOptimizations(self: QGeoRoutingManagerEngine, optimizations: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedRouteOptimizations(@ptrCast(self.ptr), @bitCast(optimizations));
    }

    /// ### DEPRECATED: Use `setSupportedSegmentDetails` instead
    ///
    pub const SetSupportedSegmentDetails = setSupportedSegmentDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` segmentDetails: flag of qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn setSupportedSegmentDetails(self: QGeoRoutingManagerEngine, segmentDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedSegmentDetails(@ptrCast(self.ptr), @bitCast(segmentDetails));
    }

    /// ### DEPRECATED: Use `onSetSupportedSegmentDetails` instead
    ///
    pub const OnSetSupportedSegmentDetails = onSetSupportedSegmentDetails;

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
    pub fn onSetSupportedSegmentDetails(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedSegmentDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportedSegmentDetails` instead
    ///
    pub const SuperSetSupportedSegmentDetails = superSetSupportedSegmentDetails;

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
    pub fn superSetSupportedSegmentDetails(self: QGeoRoutingManagerEngine, segmentDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedSegmentDetails(@ptrCast(self.ptr), @bitCast(segmentDetails));
    }

    /// ### DEPRECATED: Use `setSupportedManeuverDetails` instead
    ///
    pub const SetSupportedManeuverDetails = setSupportedManeuverDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` maneuverDetails: flag of qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn setSupportedManeuverDetails(self: QGeoRoutingManagerEngine, maneuverDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SetSupportedManeuverDetails(@ptrCast(self.ptr), @bitCast(maneuverDetails));
    }

    /// ### DEPRECATED: Use `onSetSupportedManeuverDetails` instead
    ///
    pub const OnSetSupportedManeuverDetails = onSetSupportedManeuverDetails;

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
    pub fn onSetSupportedManeuverDetails(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnSetSupportedManeuverDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSupportedManeuverDetails` instead
    ///
    pub const SuperSetSupportedManeuverDetails = superSetSupportedManeuverDetails;

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
    pub fn superSetSupportedManeuverDetails(self: QGeoRoutingManagerEngine, maneuverDetails: i32) void {
        qtc.QGeoRoutingManagerEngine_SuperSetSupportedManeuverDetails(@ptrCast(self.ptr), @bitCast(maneuverDetails));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManagerEngine.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManagerEngine.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorOccurred3` instead
    ///
    pub const ErrorOccurred3 = errorOccurred3;

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
    pub fn errorOccurred3(self: QGeoRoutingManagerEngine, reply: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoRoutingManagerEngine_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred3` instead
    ///
    pub const OnErrorOccurred3 = onErrorOccurred3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManagerEngine, reply: QGeoRouteReply, errorVal: qgeoroutereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred3(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QGeoRouteReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManagerEngine.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QGeoRoutingManagerEngine, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn isWidgetType(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn isWindowType(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn isQuickItemType(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn signalsBlocked(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QGeoRoutingManagerEngine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn thread(self: QGeoRoutingManagerEngine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGeoRoutingManagerEngine, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QGeoRoutingManagerEngine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QGeoRoutingManagerEngine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QGeoRoutingManagerEngine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QGeoRoutingManagerEngine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGeoRoutingManagerEngine.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGeoRoutingManagerEngine, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QGeoRoutingManagerEngine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QGeoRoutingManagerEngine, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGeoRoutingManagerEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn disconnect3(self: QGeoRoutingManagerEngine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QGeoRoutingManagerEngine, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn dumpObjectTree(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn dumpObjectInfo(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QGeoRoutingManagerEngine, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QGeoRoutingManagerEngine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QGeoRoutingManagerEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGeoRoutingManagerEngine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoRoutingManagerEngine.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn bindingStorage(self: QGeoRoutingManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn bindingStorage2(self: QGeoRoutingManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn destroyed(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn parent(self: QGeoRoutingManagerEngine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QGeoRoutingManagerEngine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn deleteLater(self: QGeoRoutingManagerEngine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QGeoRoutingManagerEngine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QGeoRoutingManagerEngine, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGeoRoutingManagerEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QGeoRoutingManagerEngine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QGeoRoutingManagerEngine, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QGeoRoutingManagerEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QGeoRoutingManagerEngine, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QGeoRoutingManagerEngine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGeoRoutingManagerEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGeoRoutingManagerEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QEvent) callconv(.c) bool) void {
        qtc.QGeoRoutingManagerEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGeoRoutingManagerEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGeoRoutingManagerEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoRoutingManagerEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoRoutingManagerEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGeoRoutingManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoRoutingManagerEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGeoRoutingManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoRoutingManagerEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGeoRoutingManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoRoutingManagerEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGeoRoutingManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoRoutingManagerEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QChildEvent) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGeoRoutingManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoRoutingManagerEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGeoRoutingManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoRoutingManagerEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QEvent) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QGeoRoutingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoRoutingManagerEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoRoutingManagerEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QGeoRoutingManagerEngine) QObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QGeoRoutingManagerEngine) QObject {
        return .{ .ptr = qtc.QGeoRoutingManagerEngine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QGeoRoutingManagerEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoRoutingManagerEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QGeoRoutingManagerEngine) i32 {
        return qtc.QGeoRoutingManagerEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QGeoRoutingManagerEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoRoutingManagerEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QGeoRoutingManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoRoutingManagerEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QGeoRoutingManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoRoutingManagerEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoRoutingManagerEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QGeoRoutingManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoRoutingManagerEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QGeoRoutingManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoRoutingManagerEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoRoutingManagerEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QGeoRoutingManagerEngine, callback: *const fn (QGeoRoutingManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#dtor.QGeoRoutingManagerEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRoutingManagerEngine `
    ///
    pub fn delete(self: QGeoRoutingManagerEngine) void {
        qtc.QGeoRoutingManagerEngine_Delete(@ptrCast(self.ptr));
    }
};
