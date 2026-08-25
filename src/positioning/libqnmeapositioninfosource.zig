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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNmeaPositionInfoSource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _updateMode: qnmeapositioninfosource_enums.UpdateMode `
    ///
    pub fn new(_updateMode: i32) QNmeaPositionInfoSource {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_new(@bitCast(_updateMode)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNmeaPositionInfoSource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _updateMode: qnmeapositioninfosource_enums.UpdateMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_updateMode: i32, _parent: anytype) QNmeaPositionInfoSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QNmeaPositionInfoSource_new2(@bitCast(_updateMode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn metaObject(self: QNmeaPositionInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNmeaPositionInfoSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn superMetaObject(self: QNmeaPositionInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QNmeaPositionInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaPositionInfoSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QNmeaPositionInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaPositionInfoSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QNmeaPositionInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QNmeaPositionInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaPositionInfoSource.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserEquivalentRangeError` instead
    ///
    pub const SetUserEquivalentRangeError = setUserEquivalentRangeError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUserEquivalentRangeError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` uere: f64 `
    ///
    pub fn setUserEquivalentRangeError(self: QNmeaPositionInfoSource, uere: f64) void {
        qtc.QNmeaPositionInfoSource_SetUserEquivalentRangeError(@ptrCast(self.ptr), @bitCast(uere));
    }

    /// ### DEPRECATED: Use `userEquivalentRangeError` instead
    ///
    pub const UserEquivalentRangeError = userEquivalentRangeError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#userEquivalentRangeError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn userEquivalentRangeError(self: QNmeaPositionInfoSource) f64 {
        return qtc.QNmeaPositionInfoSource_UserEquivalentRangeError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateMode` instead
    ///
    pub const UpdateMode = updateMode;

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
    pub fn updateMode(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_UpdateMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` source: QIODevice `
    ///
    pub fn setDevice(self: QNmeaPositionInfoSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QIODevice;
        qtc.QNmeaPositionInfoSource_SetDevice(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn device(self: QNmeaPositionInfoSource) QIODevice {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUpdateInterval` instead
    ///
    pub const SetUpdateInterval = setUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn setUpdateInterval(self: QNmeaPositionInfoSource, msec: i32) void {
        qtc.QNmeaPositionInfoSource_SetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `onSetUpdateInterval` instead
    ///
    pub const OnSetUpdateInterval = onSetUpdateInterval;

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
    pub fn onSetUpdateInterval(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetUpdateInterval` instead
    ///
    pub const SuperSetUpdateInterval = superSetUpdateInterval;

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
    pub fn superSetUpdateInterval(self: QNmeaPositionInfoSource, msec: i32) void {
        qtc.QNmeaPositionInfoSource_SuperSetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `lastKnownPosition` instead
    ///
    pub const LastKnownPosition = lastKnownPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn lastKnownPosition(self: QNmeaPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) QGeoPositionInfo {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_LastKnownPosition(@ptrCast(self.ptr), fromSatellitePositioningMethodsOnly) };
    }

    /// ### DEPRECATED: Use `onLastKnownPosition` instead
    ///
    pub const OnLastKnownPosition = onLastKnownPosition;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLastKnownPosition(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, bool) callconv(.c) QGeoPositionInfo) void {
        qtc.QNmeaPositionInfoSource_OnLastKnownPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLastKnownPosition` instead
    ///
    pub const SuperLastKnownPosition = superLastKnownPosition;

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
    pub fn superLastKnownPosition(self: QNmeaPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) QGeoPositionInfo {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperLastKnownPosition(@ptrCast(self.ptr), fromSatellitePositioningMethodsOnly) };
    }

    /// ### DEPRECATED: Use `supportedPositioningMethods` instead
    ///
    pub const SupportedPositioningMethods = supportedPositioningMethods;

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
    pub fn supportedPositioningMethods(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SupportedPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedPositioningMethods` instead
    ///
    pub const OnSupportedPositioningMethods = onSupportedPositioningMethods;

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
    pub fn onSupportedPositioningMethods(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnSupportedPositioningMethods(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedPositioningMethods` instead
    ///
    pub const SuperSupportedPositioningMethods = superSupportedPositioningMethods;

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
    pub fn superSupportedPositioningMethods(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperSupportedPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumUpdateInterval` instead
    ///
    pub const MinimumUpdateInterval = minimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn minimumUpdateInterval(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_MinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMinimumUpdateInterval` instead
    ///
    pub const OnMinimumUpdateInterval = onMinimumUpdateInterval;

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
    pub fn onMinimumUpdateInterval(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnMinimumUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumUpdateInterval` instead
    ///
    pub const SuperMinimumUpdateInterval = superMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn superMinimumUpdateInterval(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperMinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

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
    pub fn onError(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superError` instead
    ///
    pub const SuperError = superError;

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
    pub fn superError(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startUpdates` instead
    ///
    pub const StartUpdates = startUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn startUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_StartUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartUpdates` instead
    ///
    pub const OnStartUpdates = onStartUpdates;

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
    pub fn onStartUpdates(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnStartUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartUpdates` instead
    ///
    pub const SuperStartUpdates = superStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn superStartUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_SuperStartUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stopUpdates` instead
    ///
    pub const StopUpdates = stopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn stopUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_StopUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStopUpdates` instead
    ///
    pub const OnStopUpdates = onStopUpdates;

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
    pub fn onStopUpdates(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnStopUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStopUpdates` instead
    ///
    pub const SuperStopUpdates = superStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn superStopUpdates(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_SuperStopUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn requestUpdate(self: QNmeaPositionInfoSource, timeout: i32) void {
        qtc.QNmeaPositionInfoSource_RequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `onRequestUpdate` instead
    ///
    pub const OnRequestUpdate = onRequestUpdate;

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
    pub fn onRequestUpdate(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestUpdate` instead
    ///
    pub const SuperRequestUpdate = superRequestUpdate;

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
    pub fn superRequestUpdate(self: QNmeaPositionInfoSource, timeout: i32) void {
        qtc.QNmeaPositionInfoSource_SuperRequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `parsePosInfoFromNmeaData` instead
    ///
    pub const ParsePosInfoFromNmeaData = parsePosInfoFromNmeaData;

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
    pub fn parsePosInfoFromNmeaData(self: QNmeaPositionInfoSource, data: [:0]const u8, size: i32, posInfo: anytype, hasFix: *bool) bool {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(@ptrCast(self.ptr), data_Cstring, @bitCast(size), @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### DEPRECATED: Use `onParsePosInfoFromNmeaData` instead
    ///
    pub const OnParsePosInfoFromNmeaData = onParsePosInfoFromNmeaData;

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
    pub fn onParsePosInfoFromNmeaData(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8, i32, QGeoPositionInfo, *bool) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParsePosInfoFromNmeaData` instead
    ///
    pub const SuperParsePosInfoFromNmeaData = superParsePosInfoFromNmeaData;

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
    pub fn superParsePosInfoFromNmeaData(self: QNmeaPositionInfoSource, data: [:0]const u8, size: i32, posInfo: anytype, hasFix: *bool) bool {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData(@ptrCast(self.ptr), data_Cstring, @bitCast(size), @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### DEPRECATED: Use `parsePosInfoFromNmeaData2` instead
    ///
    pub const ParsePosInfoFromNmeaData2 = parsePosInfoFromNmeaData2;

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
    pub fn parsePosInfoFromNmeaData2(self: QNmeaPositionInfoSource, data: []u8, posInfo: anytype, hasFix: *bool) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(@ptrCast(self.ptr), data_str, @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### DEPRECATED: Use `onParsePosInfoFromNmeaData2` instead
    ///
    pub const OnParsePosInfoFromNmeaData2 = onParsePosInfoFromNmeaData2;

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
    pub fn onParsePosInfoFromNmeaData2(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, qtc.libqt_string, QGeoPositionInfo, *bool) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParsePosInfoFromNmeaData2` instead
    ///
    pub const SuperParsePosInfoFromNmeaData2 = superParsePosInfoFromNmeaData2;

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
    pub fn superParsePosInfoFromNmeaData2(self: QNmeaPositionInfoSource, data: []u8, posInfo: anytype, hasFix: *bool) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(posInfo)._is_QGeoPositionInfo;
        return qtc.QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData2(@ptrCast(self.ptr), data_str, @ptrCast(posInfo.ptr), @ptrCast(hasFix));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` positionError: qgeopositioninfosource_enums.Error `
    ///
    pub fn setError(self: QNmeaPositionInfoSource, positionError: i32) void {
        qtc.QNmeaPositionInfoSource_SetError(@ptrCast(self.ptr), @bitCast(positionError));
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

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
    pub fn onSetError(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

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
    pub fn superSetError(self: QNmeaPositionInfoSource, positionError: i32) void {
        qtc.QNmeaPositionInfoSource_SuperSetError(@ptrCast(self.ptr), @bitCast(positionError));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaPositionInfoSource.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaPositionInfoSource.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `updateInterval` instead
    ///
    pub const UpdateInterval = updateInterval;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#updateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn updateInterval(self: QNmeaPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_UpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `preferredPositioningMethods` instead
    ///
    pub const PreferredPositioningMethods = preferredPositioningMethods;

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
    pub fn preferredPositioningMethods(self: QNmeaPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_PreferredPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sourceName` instead
    ///
    pub const SourceName = sourceName;

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
    pub fn sourceName(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPositionInfoSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaPositionInfoSource.sourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createDefaultSource` instead
    ///
    pub const CreateDefaultSource = createDefaultSource;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn createDefaultSource(_parent: anytype) QGeoPositionInfoSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateDefaultSource(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createDefaultSource2` instead
    ///
    pub const CreateDefaultSource2 = createDefaultSource2;

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
    /// ` _parent: QObject `
    ///
    pub fn createDefaultSource2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, _parent: anytype) QGeoPositionInfoSource {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QNmeaPositionInfoSource.createDefaultSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QNmeaPositionInfoSource.createDefaultSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateDefaultSource2(parameters_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createSource` instead
    ///
    pub const CreateSource = createSource;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sourceName: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createSource(_sourceName: []const u8, _parent: anytype) QGeoPositionInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = _sourceName.len,
            .data = _sourceName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateSource(sourceName_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createSource2` instead
    ///
    pub const CreateSource2 = createSource2;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _sourceName: []const u8 `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createSource2(allocator: std.mem.Allocator, _sourceName: []const u8, parameters: ArrayMap_constu8_QVariant, _parent: anytype) QGeoPositionInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = _sourceName.len,
            .data = _sourceName.ptr,
        };
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QNmeaPositionInfoSource.createSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QNmeaPositionInfoSource.createSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSource_CreateSource2(sourceName_str, parameters_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `availableSources` instead
    ///
    pub const AvailableSources = availableSources;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableSources(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoPositionInfoSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QNmeaPositionInfoSource.availableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNmeaPositionInfoSource.availableSources: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `positionUpdated` instead
    ///
    pub const PositionUpdated = positionUpdated;

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
    pub fn positionUpdated(self: QNmeaPositionInfoSource, update: anytype) void {
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfoSource_PositionUpdated(@ptrCast(self.ptr), @ptrCast(update.ptr));
    }

    /// ### DEPRECATED: Use `onPositionUpdated` instead
    ///
    pub const OnPositionUpdated = onPositionUpdated;

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
    pub fn onPositionUpdated(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_PositionUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    pub fn errorOccurred(self: QNmeaPositionInfoSource, param1: i32) void {
        qtc.QGeoPositionInfoSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

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
    pub fn onErrorOccurred(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedPositioningMethodsChanged` instead
    ///
    pub const SupportedPositioningMethodsChanged = supportedPositioningMethodsChanged;

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn supportedPositioningMethodsChanged(self: QNmeaPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_SupportedPositioningMethodsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedPositioningMethodsChanged` instead
    ///
    pub const OnSupportedPositioningMethodsChanged = onSupportedPositioningMethodsChanged;

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
    pub fn onSupportedPositioningMethodsChanged(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaPositionInfoSource.objectName: Memory allocation failed");
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QNmeaPositionInfoSource, name: []const u8) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn isWidgetType(self: QNmeaPositionInfoSource) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn isWindowType(self: QNmeaPositionInfoSource) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn isQuickItemType(self: QNmeaPositionInfoSource) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn signalsBlocked(self: QNmeaPositionInfoSource) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QNmeaPositionInfoSource, b: bool) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn thread(self: QNmeaPositionInfoSource) QThread {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QNmeaPositionInfoSource, _thread: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QNmeaPositionInfoSource, interval: i32) i32 {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QNmeaPositionInfoSource, time: i64) i32 {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QNmeaPositionInfoSource, id: i32) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QNmeaPositionInfoSource, id: i32) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QNmeaPositionInfoSource.children: Memory allocation failed");
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QNmeaPositionInfoSource, _parent: anytype) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QNmeaPositionInfoSource, filterObj: anytype) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QNmeaPositionInfoSource, obj: anytype) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QNmeaPositionInfoSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn disconnect3(self: QNmeaPositionInfoSource) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QNmeaPositionInfoSource, receiver: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn dumpObjectTree(self: QNmeaPositionInfoSource) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn dumpObjectInfo(self: QNmeaPositionInfoSource) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QNmeaPositionInfoSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QNmeaPositionInfoSource, name: [:0]const u8) QVariant {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QNmeaPositionInfoSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNmeaPositionInfoSource.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNmeaPositionInfoSource.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn bindingStorage(self: QNmeaPositionInfoSource) QBindingStorage {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn bindingStorage2(self: QNmeaPositionInfoSource) QBindingStorage {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn destroyed(self: QNmeaPositionInfoSource) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource) callconv(.c) void) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn parent(self: QNmeaPositionInfoSource) QObject {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QNmeaPositionInfoSource, classname: [:0]const u8) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn deleteLater(self: QNmeaPositionInfoSource) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QNmeaPositionInfoSource, interval: i32, timerType: i32) i32 {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QNmeaPositionInfoSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QNmeaPositionInfoSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QNmeaPositionInfoSource, signal: [:0]const u8) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QNmeaPositionInfoSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QNmeaPositionInfoSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QNmeaPositionInfoSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QNmeaPositionInfoSource, param1: anytype) void {
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPreferredPositioningMethods` instead
    ///
    pub const SetPreferredPositioningMethods = setPreferredPositioningMethods;

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
    pub fn setPreferredPositioningMethods(self: QNmeaPositionInfoSource, methods: i32) void {
        qtc.QNmeaPositionInfoSource_SetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(methods));
    }

    /// ### DEPRECATED: Use `superSetPreferredPositioningMethods` instead
    ///
    pub const SuperSetPreferredPositioningMethods = superSetPreferredPositioningMethods;

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
    pub fn superSetPreferredPositioningMethods(self: QNmeaPositionInfoSource, methods: i32) void {
        qtc.QNmeaPositionInfoSource_SuperSetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(methods));
    }

    /// ### DEPRECATED: Use `onSetPreferredPositioningMethods` instead
    ///
    pub const OnSetPreferredPositioningMethods = onSetPreferredPositioningMethods;

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
    pub fn onSetPreferredPositioningMethods(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setBackendProperty` instead
    ///
    pub const SetBackendProperty = setBackendProperty;

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
    pub fn setBackendProperty(self: QNmeaPositionInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaPositionInfoSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `superSetBackendProperty` instead
    ///
    pub const SuperSetBackendProperty = superSetBackendProperty;

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
    pub fn superSetBackendProperty(self: QNmeaPositionInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaPositionInfoSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetBackendProperty` instead
    ///
    pub const OnSetBackendProperty = onSetBackendProperty;

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
    pub fn onSetBackendProperty(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backendProperty` instead
    ///
    pub const BackendProperty = backendProperty;

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
    pub fn backendProperty(self: QNmeaPositionInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaPositionInfoSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `superBackendProperty` instead
    ///
    pub const SuperBackendProperty = superBackendProperty;

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
    pub fn superBackendProperty(self: QNmeaPositionInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onBackendProperty` instead
    ///
    pub const OnBackendProperty = onBackendProperty;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackendProperty(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QNmeaPositionInfoSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QNmeaPositionInfoSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QNmeaPositionInfoSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QEvent) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QNmeaPositionInfoSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QNmeaPositionInfoSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaPositionInfoSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QNmeaPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNmeaPositionInfoSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QNmeaPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNmeaPositionInfoSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QTimerEvent) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QNmeaPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNmeaPositionInfoSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QNmeaPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNmeaPositionInfoSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QChildEvent) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QNmeaPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNmeaPositionInfoSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QNmeaPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNmeaPositionInfoSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QEvent) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QNmeaPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaPositionInfoSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn sender(self: QNmeaPositionInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn superSender(self: QNmeaPositionInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaPositionInfoSource_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNmeaPositionInfoSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn senderSignalIndex(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn superSenderSignalIndex(self: QNmeaPositionInfoSource) i32 {
        return qtc.QNmeaPositionInfoSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QNmeaPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QNmeaPositionInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaPositionInfoSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QNmeaPositionInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaPositionInfoSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QNmeaPositionInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaPositionInfoSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QNmeaPositionInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaPositionInfoSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaPositionInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QNmeaPositionInfoSource, callback: *const fn (QNmeaPositionInfoSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#dtor.QNmeaPositionInfoSource)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNmeaPositionInfoSource `
    ///
    pub fn delete(self: QNmeaPositionInfoSource) void {
        qtc.QNmeaPositionInfoSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#public-types)
pub const enums = struct {
    pub const UpdateMode = enum {
        pub const RealTimeMode: i32 = 1;
        pub const SimulationMode: i32 = 2;
    };
};
