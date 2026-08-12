const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
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
const QVariant = @import("libqt6").QVariant;
const qgeoroutereply_enums = @import("libqgeoroutereply.zig").enums;
const qgeorouterequest_enums = @import("libqgeorouterequest.zig").enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html)
pub const QGeoRoutingManager = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoRoutingManager,

    pub const _is_QGeoRoutingManager = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    pub fn metaObject(self: QGeoRoutingManager) QMetaObject {
        return .{ .ptr = qtc.QGeoRoutingManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGeoRoutingManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoRoutingManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGeoRoutingManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoRoutingManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerName` instead
    ///
    pub const ManagerName = managerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn managerName(self: QGeoRoutingManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoRoutingManager_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManager.managerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerVersion` instead
    ///
    pub const ManagerVersion = managerVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    pub fn managerVersion(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `calculateRoute` instead
    ///
    pub const CalculateRoute = calculateRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#calculateRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` request: QGeoRouteRequest `
    ///
    pub fn calculateRoute(self: QGeoRoutingManager, request: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(request)._is_QGeoRouteRequest;
        return .{ .ptr = qtc.QGeoRoutingManager_CalculateRoute(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `updateRoute` instead
    ///
    pub const UpdateRoute = updateRoute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#updateRoute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` route: QGeoRoute `
    ///
    /// ` position: QGeoCoordinate `
    ///
    pub fn updateRoute(self: QGeoRoutingManager, route: anytype, position: anytype) QGeoRouteReply {
        comptime _ = @TypeOf(route)._is_QGeoRoute;
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        return .{ .ptr = qtc.QGeoRoutingManager_UpdateRoute(@ptrCast(self.ptr), @ptrCast(route.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedTravelModes` instead
    ///
    pub const SupportedTravelModes = supportedTravelModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedTravelModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.TravelMode `
    ///
    pub fn supportedTravelModes(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_SupportedTravelModes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedFeatureTypes` instead
    ///
    pub const SupportedFeatureTypes = supportedFeatureTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedFeatureTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.FeatureType `
    ///
    pub fn supportedFeatureTypes(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_SupportedFeatureTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedFeatureWeights` instead
    ///
    pub const SupportedFeatureWeights = supportedFeatureWeights;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedFeatureWeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.FeatureWeight `
    ///
    pub fn supportedFeatureWeights(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_SupportedFeatureWeights(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedRouteOptimizations` instead
    ///
    pub const SupportedRouteOptimizations = supportedRouteOptimizations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedRouteOptimizations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.RouteOptimization `
    ///
    pub fn supportedRouteOptimizations(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_SupportedRouteOptimizations(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedSegmentDetails` instead
    ///
    pub const SupportedSegmentDetails = supportedSegmentDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedSegmentDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.SegmentDetail `
    ///
    pub fn supportedSegmentDetails(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_SupportedSegmentDetails(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedManeuverDetails` instead
    ///
    pub const SupportedManeuverDetails = supportedManeuverDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedManeuverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeorouterequest_enums.ManeuverDetail `
    ///
    pub fn supportedManeuverDetails(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_SupportedManeuverDetails(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QGeoRoutingManager, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QGeoRoutingManager_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    pub fn locale(self: QGeoRoutingManager) QLocale {
        return .{ .ptr = qtc.QGeoRoutingManager_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMeasurementSystem` instead
    ///
    pub const SetMeasurementSystem = setMeasurementSystem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#setMeasurementSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` system: qlocale_enums.MeasurementSystem `
    ///
    pub fn setMeasurementSystem(self: QGeoRoutingManager, system: i32) void {
        qtc.QGeoRoutingManager_SetMeasurementSystem(@ptrCast(self.ptr), @bitCast(system));
    }

    /// ### DEPRECATED: Use `measurementSystem` instead
    ///
    pub const MeasurementSystem = measurementSystem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#measurementSystem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.MeasurementSystem `
    ///
    pub fn measurementSystem(self: QGeoRoutingManager) i32 {
        return qtc.QGeoRoutingManager_MeasurementSystem(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    pub fn finished(self: QGeoRoutingManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        qtc.QGeoRoutingManager_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManager, reply: QGeoRouteReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QGeoRoutingManager, callback: *const fn (QGeoRoutingManager, QGeoRouteReply) callconv(.c) void) void {
        qtc.QGeoRoutingManager_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    /// ` errorVal: qgeoroutereply_enums.Error `
    ///
    pub fn errorOccurred(self: QGeoRoutingManager, reply: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        qtc.QGeoRoutingManager_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManager, reply: QGeoRouteReply, errorVal: qgeoroutereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QGeoRoutingManager, callback: *const fn (QGeoRoutingManager, QGeoRouteReply, i32) callconv(.c) void) void {
        qtc.QGeoRoutingManager_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorOccurred3` instead
    ///
    pub const ErrorOccurred3 = errorOccurred3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` reply: QGeoRouteReply `
    ///
    /// ` errorVal: qgeoroutereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn errorOccurred3(self: QGeoRoutingManager, reply: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(reply)._is_QGeoRouteReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoRoutingManager_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred3` instead
    ///
    pub const OnErrorOccurred3 = onErrorOccurred3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManager, reply: QGeoRouteReply, errorVal: qgeoroutereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred3(self: QGeoRoutingManager, callback: *const fn (QGeoRoutingManager, QGeoRouteReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoRoutingManager_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGeoRoutingManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoRoutingManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGeoRoutingManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGeoRoutingManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoRoutingManager.objectName: Memory allocation failed");
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGeoRoutingManager, name: []const u8) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn isWidgetType(self: QGeoRoutingManager) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn isWindowType(self: QGeoRoutingManager) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn isQuickItemType(self: QGeoRoutingManager) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn signalsBlocked(self: QGeoRoutingManager) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGeoRoutingManager, b: bool) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn thread(self: QGeoRoutingManager) QThread {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGeoRoutingManager, _thread: anytype) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGeoRoutingManager, interval: i32) i32 {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGeoRoutingManager, time: i64) i32 {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGeoRoutingManager, id: i32) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGeoRoutingManager, id: i32) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGeoRoutingManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGeoRoutingManager.children: Memory allocation failed");
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGeoRoutingManager, _parent: anytype) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGeoRoutingManager, filterObj: anytype) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGeoRoutingManager, obj: anytype) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGeoRoutingManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn disconnect3(self: QGeoRoutingManager) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGeoRoutingManager, receiver: anytype) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn dumpObjectTree(self: QGeoRoutingManager) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn dumpObjectInfo(self: QGeoRoutingManager) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGeoRoutingManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGeoRoutingManager, name: [:0]const u8) QVariant {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGeoRoutingManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGeoRoutingManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoRoutingManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn bindingStorage(self: QGeoRoutingManager) QBindingStorage {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn bindingStorage2(self: QGeoRoutingManager) QBindingStorage {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn destroyed(self: QGeoRoutingManager) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGeoRoutingManager, callback: *const fn (QGeoRoutingManager) callconv(.c) void) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn parent(self: QGeoRoutingManager) QObject {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGeoRoutingManager, classname: [:0]const u8) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    pub fn deleteLater(self: QGeoRoutingManager) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGeoRoutingManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGeoRoutingManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGeoRoutingManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGeoRoutingManager, signal: [:0]const u8) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGeoRoutingManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGeoRoutingManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGeoRoutingManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGeoRoutingManager, param1: anytype) void {
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGeoRoutingManager, callback: *const fn (QGeoRoutingManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoRoutingManager `
    ///
    /// ` callback: *const fn (self: QGeoRoutingManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGeoRoutingManager, callback: *const fn (QGeoRoutingManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#dtor.QGeoRoutingManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoRoutingManager `
    ///
    pub fn delete(self: QGeoRoutingManager) void {
        qtc.QGeoRoutingManager_Delete(@ptrCast(self.ptr));
    }
};
