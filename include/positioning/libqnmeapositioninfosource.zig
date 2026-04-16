const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoPositionInfo = @import("libqt6").QGeoPositionInfo;
const QGeoPositionInfoSource = @import("libqt6").QGeoPositionInfoSource;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeopositioninfosource_enums = @import("libqgeopositioninfosource.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnmeapositioninfosource_enums = enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html)
pub const QNmeaPositionInfoSource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNmeaPositionInfoSource,

    pub const _is_QNmeaPositionInfoSource = {};
    pub const _is_QGeoPositionInfoSource = {};
    pub const _is_QObject = {};

    /// New constructs a new QNmeaPositionInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` updateMode: qnmeapositioninfosource_enums.UpdateMode `
    ///
    pub fn New(updateMode: i32) QNmeaPositionInfoSource {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_new(@bitCast(updateMode)) };
    }

    /// New2 constructs a new QNmeaPositionInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` updateMode: qnmeapositioninfosource_enums.UpdateMode `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(updateMode: i32, parent: anytype) QNmeaPositionInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QNmeaPositionInfoSource_new2(@bitCast(updateMode), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn MetaObject(self: QNmeaPositionInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNmeaPositionInfoSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SuperMetaObject(self: QNmeaPositionInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QNmeaPositionInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaPositionInfoSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QNmeaPositionInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaPositionInfoSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QNmeaPositionInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QNmeaPositionInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUserEquivalentRangeError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` uere: f64 `
    ///
    pub fn SetUserEquivalentRangeError(self: QNmeaPositionInfoSource, uere: f64) void {
        qtc.QNmeaPositionInfoSource_SetUserEquivalentRangeError(@ptrCast(self.ptr), @bitCast(uere));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#userEquivalentRangeError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn UserEquivalentRangeError(self: QNmeaPositionInfoSource) f64 {
        return qtc.QNmeaPositionInfoSource_UserEquivalentRangeError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#updateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qnmeapositioninfosource_enums.UpdateMode `
    ///
    pub fn UpdateMode(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_UpdateMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` source: QIODevice `
    ///
    pub fn SetDevice(self: QNmeaPositionInfoSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QIODevice;
        qtc.QNmeaPositionInfoSource_SetDevice(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Device(self: QNmeaPositionInfoSource) QIODevice {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetUpdateInterval(self: QNmeaPositionInfoSource, msec: i32) void {
        qtc.QNmeaPositionInfoSource_SetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, msec: i32) callconv(.c) void `
    ///
    pub fn OnSetUpdateInterval(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUpdateInterval` instead
    ///
    pub const QBaseSetUpdateInterval = SuperSetUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SuperSetUpdateInterval(self: QNmeaPositionInfoSource, msec: i32) void {
        qtc.QNmeaPositionInfoSource_SuperSetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn LastKnownPosition(self: QNmeaPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) QGeoPositionInfo {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_LastKnownPosition(@ptrCast(self.ptr), fromSatellitePositioningMethodsOnly) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) callconv(.c) QGeoPositionInfo `
    ///
    pub fn OnLastKnownPosition(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, bool) callconv(.c) QGeoPositionInfo) void {
        qtc.QNmeaPositionInfoSource_OnLastKnownPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLastKnownPosition` instead
    ///
    pub const QBaseLastKnownPosition = SuperLastKnownPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn SuperLastKnownPosition(self: QNmeaPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) QGeoPositionInfo {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperLastKnownPosition(@ptrCast(self.ptr), fromSatellitePositioningMethodsOnly) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn SupportedPositioningMethods(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SupportedPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedPositioningMethods(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnSupportedPositioningMethods(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedPositioningMethods` instead
    ///
    pub const QBaseSupportedPositioningMethods = SuperSupportedPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn SuperSupportedPositioningMethods(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperSupportedPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn MinimumUpdateInterval(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_MinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMinimumUpdateInterval(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnMinimumUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumUpdateInterval` instead
    ///
    pub const QBaseMinimumUpdateInterval = SuperMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SuperMinimumUpdateInterval(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperMinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeopositioninfosource_enums.Error `
    ///
    pub fn Error(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnError(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperError` instead
    ///
    pub const QBaseError = SuperError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeopositioninfosource_enums.Error `
    ///
    pub fn SuperError(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn StartUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_StartUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartUpdates(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnStartUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartUpdates` instead
    ///
    pub const QBaseStartUpdates = SuperStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SuperStartUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_SuperStartUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn StopUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_StopUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopUpdates(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnStopUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStopUpdates` instead
    ///
    pub const QBaseStopUpdates = SuperStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SuperStopUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_SuperStopUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn RequestUpdate(self: QNmeaPositionInfoSource, timeout: i32) void {
        qtc.QNmeaPositionInfoSource_RequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, timeout: i32) callconv(.c) void `
    ///
    pub fn OnRequestUpdate(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRequestUpdate` instead
    ///
    pub const QBaseRequestUpdate = SuperRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SuperRequestUpdate(self: QNmeaPositionInfoSource, timeout: i32) void {
        qtc.QNmeaPositionInfoSource_SuperRequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` posInfo: QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn ParsePosInfoFromNmeaData(self: QNmeaPositionInfoSource, data: [:0]const u8, size: i32, posInfo: anytype, hasFix: *bool) bool {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(@ptrCast(self.ptr), data_Cstring, @bitCast(size), @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, data: [*:0]const u8, size: i32, posInfo: QGeoPositionInfo, hasFix: *bool) callconv(.c) bool `
    ///
    pub fn OnParsePosInfoFromNmeaData(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8, i32, QGeoPositionInfo, *bool) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParsePosInfoFromNmeaData` instead
    ///
    pub const QBaseParsePosInfoFromNmeaData = SuperParsePosInfoFromNmeaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` posInfo: QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn SuperParsePosInfoFromNmeaData(self: QNmeaPositionInfoSource, data: [:0]const u8, size: i32, posInfo: anytype, hasFix: *bool) bool {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData(@ptrCast(self.ptr), data_Cstring, @bitCast(size), @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` posInfo: QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn ParsePosInfoFromNmeaData2(self: QNmeaPositionInfoSource, data: []u8, posInfo: anytype, hasFix: *bool) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(@ptrCast(self.ptr), data_str, @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, data: qtc.libqt_string, posInfo: QGeoPositionInfo, hasFix: *bool) callconv(.c) bool `
    ///
    pub fn OnParsePosInfoFromNmeaData2(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, qtc.libqt_string, QGeoPositionInfo, *bool) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParsePosInfoFromNmeaData2` instead
    ///
    pub const QBaseParsePosInfoFromNmeaData2 = SuperParsePosInfoFromNmeaData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` posInfo: QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn SuperParsePosInfoFromNmeaData2(self: QNmeaPositionInfoSource, data: []u8, posInfo: anytype, hasFix: *bool) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData2(@ptrCast(self.ptr), data_str, @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` positionError: qgeopositioninfosource_enums.Error `
    ///
    pub fn SetError(self: QNmeaPositionInfoSource, positionError: i32) void {
        qtc.QNmeaPositionInfoSource_SetError(@ptrCast(self.ptr), @bitCast(positionError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, positionError: qgeopositioninfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnSetError(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetError` instead
    ///
    pub const QBaseSetError = SuperSetError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` positionError: qgeopositioninfosource_enums.Error `
    ///
    pub fn SuperSetError(self: QNmeaPositionInfoSource, positionError: i32) void {
        qtc.QNmeaPositionInfoSource_SuperSetError(@ptrCast(self.ptr), @bitCast(positionError));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#updateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn UpdateInterval(self: QNmeaPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_UpdateInterval(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#preferredPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn PreferredPositioningMethods(self: QNmeaPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_PreferredPositioningMethods(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceName(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPositionInfoSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.SourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateDefaultSource(parent: anytype) QGeoPositionInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateDefaultSource(@ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateDefaultSource2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, parent: anytype) QGeoPositionInfoSource {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qnmeapositioninfosource.CreateDefaultSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qnmeapositioninfosource.CreateDefaultSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateDefaultSource2(parameters_map, @ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateSource(sourceName: []const u8, parent: anytype) QGeoPositionInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateSource(sourceName_str, @ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateSource2(allocator: std.mem.Allocator, sourceName: []const u8, parameters: ArrayMap_constu8_QVariant, parent: anytype) QGeoPositionInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qnmeapositioninfosource.CreateSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qnmeapositioninfosource.CreateSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateSource2(sourceName_str, parameters_map, @ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSources(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoPositionInfoSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qnmeapositioninfosource.AvailableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnmeapositioninfosource.AvailableSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` update: QGeoPositionInfo `
    ///
    pub fn PositionUpdated(self: QNmeaPositionInfoSource, update: anytype) void {
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfoSource_PositionUpdated(@ptrCast(self.ptr), @ptrCast(update.ptr));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, update: QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn OnPositionUpdated(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_PositionUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: qgeopositioninfosource_enums.Error `
    ///
    pub fn ErrorOccurred(self: QNmeaPositionInfoSource, param1: i32) void {
        qtc.QGeoPositionInfoSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: qgeopositioninfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SupportedPositioningMethodsChanged(self: QNmeaPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_SupportedPositioningMethodsChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource) callconv(.c) void `
    ///
    pub fn OnSupportedPositioningMethodsChanged(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QNmeaPositionInfoSource, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn IsWidgetType(self: QNmeaPositionInfoSource) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn IsWindowType(self: QNmeaPositionInfoSource) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn IsQuickItemType(self: QNmeaPositionInfoSource) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SignalsBlocked(self: QNmeaPositionInfoSource) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QNmeaPositionInfoSource, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Thread(self: QNmeaPositionInfoSource) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QNmeaPositionInfoSource, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QNmeaPositionInfoSource, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QNmeaPositionInfoSource, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QNmeaPositionInfoSource, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QNmeaPositionInfoSource, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qnmeapositioninfosource.Children: Memory allocation failed");
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QNmeaPositionInfoSource, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QNmeaPositionInfoSource, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QNmeaPositionInfoSource, obj: anytype) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QNmeaPositionInfoSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Disconnect3(self: QNmeaPositionInfoSource) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QNmeaPositionInfoSource, receiver: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn DumpObjectTree(self: QNmeaPositionInfoSource) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn DumpObjectInfo(self: QNmeaPositionInfoSource) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QNmeaPositionInfoSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QNmeaPositionInfoSource, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnmeapositioninfosource.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnmeapositioninfosource.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn BindingStorage(self: QNmeaPositionInfoSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn BindingStorage2(self: QNmeaPositionInfoSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Destroyed(self: QNmeaPositionInfoSource) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Parent(self: QNmeaPositionInfoSource) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QNmeaPositionInfoSource, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn DeleteLater(self: QNmeaPositionInfoSource) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QNmeaPositionInfoSource, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QNmeaPositionInfoSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QNmeaPositionInfoSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QNmeaPositionInfoSource, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QNmeaPositionInfoSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QNmeaPositionInfoSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QNmeaPositionInfoSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QNmeaPositionInfoSource, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` methods: flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn SetPreferredPositioningMethods(self: QNmeaPositionInfoSource, methods: i32) void {
        qtc.QNmeaPositionInfoSource_SetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(methods));
    }

    /// ### DEPRECATED: Use `SuperSetPreferredPositioningMethods` instead
    ///
    pub const QBaseSetPreferredPositioningMethods = SuperSetPreferredPositioningMethods;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` methods: flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn SuperSetPreferredPositioningMethods(self: QNmeaPositionInfoSource, methods: i32) void {
        qtc.QNmeaPositionInfoSource_SuperSetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(methods));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, methods: flag of qgeopositioninfosource_enums.PositioningMethod) callconv(.c) void `
    ///
    pub fn OnSetPreferredPositioningMethods(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetBackendProperty(self: QNmeaPositionInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaPositionInfoSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetBackendProperty` instead
    ///
    pub const QBaseSetBackendProperty = SuperSetBackendProperty;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetBackendProperty(self: QNmeaPositionInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaPositionInfoSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, name: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn OnSetBackendProperty(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn BackendProperty(self: QNmeaPositionInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaPositionInfoSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `SuperBackendProperty` instead
    ///
    pub const QBaseBackendProperty = SuperBackendProperty;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperBackendProperty(self: QNmeaPositionInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, name: [*:0]const u8) callconv(.c) QVariant `
    ///
    pub fn OnBackendProperty(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QNmeaPositionInfoSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QNmeaPositionInfoSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QNmeaPositionInfoSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QEvent) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QNmeaPositionInfoSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QNmeaPositionInfoSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QNmeaPositionInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNmeaPositionInfoSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QNmeaPositionInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNmeaPositionInfoSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QTimerEvent) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QNmeaPositionInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNmeaPositionInfoSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QNmeaPositionInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNmeaPositionInfoSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QChildEvent) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QNmeaPositionInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNmeaPositionInfoSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QNmeaPositionInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNmeaPositionInfoSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QEvent) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Sender(self: QNmeaPositionInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SuperSender(self: QNmeaPositionInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNmeaPositionInfoSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SenderSignalIndex(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn SuperSenderSignalIndex(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QNmeaPositionInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaPositionInfoSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QNmeaPositionInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaPositionInfoSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QNmeaPositionInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaPositionInfoSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QNmeaPositionInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaPositionInfoSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#dtor.QNmeaPositionInfoSource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn Delete(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#public-types)
pub const enums = struct {
    pub const UpdateMode = enum(i32) {
        pub const RealTimeMode: i32 = 1;
        pub const SimulationMode: i32 = 2;
    };
};
