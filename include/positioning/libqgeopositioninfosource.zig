const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoPositionInfo = @import("libqt6").QGeoPositionInfo;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeopositioninfosource_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html)
pub const QGeoPositionInfoSource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoPositionInfoSource,

    pub const _is_QGeoPositionInfoSource = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoPositionInfoSource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) QGeoPositionInfoSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoPositionInfoSource_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn metaObject(self: QGeoPositionInfoSource) QMetaObject {
        return .{ .ptr = qtc.QGeoPositionInfoSource_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoPositionInfoSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn superMetaObject(self: QGeoPositionInfoSource) QMetaObject {
        return .{ .ptr = qtc.QGeoPositionInfoSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGeoPositionInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoPositionInfoSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoPositionInfoSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGeoPositionInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoPositionInfoSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGeoPositionInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoPositionInfoSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoPositionInfoSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGeoPositionInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoPositionInfoSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPositionInfoSource.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUpdateInterval` instead
    ///
    pub const SetUpdateInterval = setUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn setUpdateInterval(self: QGeoPositionInfoSource, msec: i32) void {
        qtc.QGeoPositionInfoSource_SetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `onSetUpdateInterval` instead
    ///
    pub const OnSetUpdateInterval = onSetUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, msec: i32) callconv(.c) void `
    ///
    pub fn onSetUpdateInterval(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnSetUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetUpdateInterval` instead
    ///
    pub const SuperSetUpdateInterval = superSetUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn superSetUpdateInterval(self: QGeoPositionInfoSource, msec: i32) void {
        qtc.QGeoPositionInfoSource_SuperSetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `updateInterval` instead
    ///
    pub const UpdateInterval = updateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#updateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn updateInterval(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_UpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredPositioningMethods` instead
    ///
    pub const SetPreferredPositioningMethods = setPreferredPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` methods: flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn setPreferredPositioningMethods(self: QGeoPositionInfoSource, methods: i32) void {
        qtc.QGeoPositionInfoSource_SetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(methods));
    }

    /// ### DEPRECATED: Use `onSetPreferredPositioningMethods` instead
    ///
    pub const OnSetPreferredPositioningMethods = onSetPreferredPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, methods: flag of qgeopositioninfosource_enums.PositioningMethod) callconv(.c) void `
    ///
    pub fn onSetPreferredPositioningMethods(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnSetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPreferredPositioningMethods` instead
    ///
    pub const SuperSetPreferredPositioningMethods = superSetPreferredPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` methods: flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn superSetPreferredPositioningMethods(self: QGeoPositionInfoSource, methods: i32) void {
        qtc.QGeoPositionInfoSource_SuperSetPreferredPositioningMethods(@ptrCast(self.ptr), @bitCast(methods));
    }

    /// ### DEPRECATED: Use `preferredPositioningMethods` instead
    ///
    pub const PreferredPositioningMethods = preferredPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#preferredPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn preferredPositioningMethods(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_PreferredPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastKnownPosition` instead
    ///
    pub const LastKnownPosition = lastKnownPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn lastKnownPosition(self: QGeoPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) QGeoPositionInfo {
        return .{ .ptr = qtc.QGeoPositionInfoSource_LastKnownPosition(@ptrCast(self.ptr), fromSatellitePositioningMethodsOnly) };
    }

    /// ### DEPRECATED: Use `onLastKnownPosition` instead
    ///
    pub const OnLastKnownPosition = onLastKnownPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) callconv(.c) QGeoPositionInfo `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLastKnownPosition(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, bool) callconv(.c) QGeoPositionInfo) void {
        qtc.QGeoPositionInfoSource_OnLastKnownPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLastKnownPosition` instead
    ///
    pub const SuperLastKnownPosition = superLastKnownPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn superLastKnownPosition(self: QGeoPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) QGeoPositionInfo {
        return .{ .ptr = qtc.QGeoPositionInfoSource_SuperLastKnownPosition(@ptrCast(self.ptr), fromSatellitePositioningMethodsOnly) };
    }

    /// ### DEPRECATED: Use `supportedPositioningMethods` instead
    ///
    pub const SupportedPositioningMethods = supportedPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn supportedPositioningMethods(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_SupportedPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedPositioningMethods` instead
    ///
    pub const OnSupportedPositioningMethods = onSupportedPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedPositioningMethods(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoPositionInfoSource_OnSupportedPositioningMethods(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedPositioningMethods` instead
    ///
    pub const SuperSupportedPositioningMethods = superSupportedPositioningMethods;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn superSupportedPositioningMethods(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_SuperSupportedPositioningMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumUpdateInterval` instead
    ///
    pub const MinimumUpdateInterval = minimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn minimumUpdateInterval(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_MinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMinimumUpdateInterval` instead
    ///
    pub const OnMinimumUpdateInterval = onMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onMinimumUpdateInterval(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoPositionInfoSource_OnMinimumUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumUpdateInterval` instead
    ///
    pub const SuperMinimumUpdateInterval = superMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn superMinimumUpdateInterval(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_SuperMinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sourceName` instead
    ///
    pub const SourceName = sourceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sourceName(self: QGeoPositionInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPositionInfoSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPositionInfoSource.sourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBackendProperty` instead
    ///
    pub const SetBackendProperty = setBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setBackendProperty(self: QGeoPositionInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoPositionInfoSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetBackendProperty` instead
    ///
    pub const OnSetBackendProperty = onSetBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, name: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn onSetBackendProperty(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QGeoPositionInfoSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBackendProperty` instead
    ///
    pub const SuperSetBackendProperty = superSetBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn superSetBackendProperty(self: QGeoPositionInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoPositionInfoSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `backendProperty` instead
    ///
    pub const BackendProperty = backendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn backendProperty(self: QGeoPositionInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoPositionInfoSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onBackendProperty` instead
    ///
    pub const OnBackendProperty = onBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, name: [*:0]const u8) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackendProperty(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QGeoPositionInfoSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBackendProperty` instead
    ///
    pub const SuperBackendProperty = superBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn superBackendProperty(self: QGeoPositionInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoPositionInfoSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `createDefaultSource` instead
    ///
    pub const CreateDefaultSource = createDefaultSource;

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
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoPositionInfoSource.createDefaultSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoPositionInfoSource.createDefaultSource2: Memory allocation failed");
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
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoPositionInfoSource.createSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoPositionInfoSource.createSource2: Memory allocation failed");
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QGeoPositionInfoSource.availableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoPositionInfoSource.availableSources: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeopositioninfosource_enums.Error `
    ///
    pub fn error0(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onError(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoPositionInfoSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superError` instead
    ///
    pub const SuperError = superError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeopositioninfosource_enums.Error `
    ///
    pub fn superError(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startUpdates` instead
    ///
    pub const StartUpdates = startUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn startUpdates(self: QGeoPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_StartUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartUpdates` instead
    ///
    pub const OnStartUpdates = onStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartUpdates(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnStartUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartUpdates` instead
    ///
    pub const SuperStartUpdates = superStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn superStartUpdates(self: QGeoPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_SuperStartUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stopUpdates` instead
    ///
    pub const StopUpdates = stopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn stopUpdates(self: QGeoPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_StopUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStopUpdates` instead
    ///
    pub const OnStopUpdates = onStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStopUpdates(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnStopUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStopUpdates` instead
    ///
    pub const SuperStopUpdates = superStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn superStopUpdates(self: QGeoPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_SuperStopUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn requestUpdate(self: QGeoPositionInfoSource, timeout: i32) void {
        qtc.QGeoPositionInfoSource_RequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `onRequestUpdate` instead
    ///
    pub const OnRequestUpdate = onRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, timeout: i32) callconv(.c) void `
    ///
    pub fn onRequestUpdate(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestUpdate` instead
    ///
    pub const SuperRequestUpdate = superRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn superRequestUpdate(self: QGeoPositionInfoSource, timeout: i32) void {
        qtc.QGeoPositionInfoSource_SuperRequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `positionUpdated` instead
    ///
    pub const PositionUpdated = positionUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` update: QGeoPositionInfo `
    ///
    pub fn positionUpdated(self: QGeoPositionInfoSource, update: anytype) void {
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfoSource_PositionUpdated(@ptrCast(self.ptr), @ptrCast(update.ptr));
    }

    /// ### DEPRECATED: Use `onPositionUpdated` instead
    ///
    pub const OnPositionUpdated = onPositionUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, update: QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn onPositionUpdated(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_PositionUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` param1: qgeopositioninfosource_enums.Error `
    ///
    pub fn errorOccurred(self: QGeoPositionInfoSource, param1: i32) void {
        qtc.QGeoPositionInfoSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, param1: qgeopositioninfosource_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedPositioningMethodsChanged` instead
    ///
    pub const SupportedPositioningMethodsChanged = supportedPositioningMethodsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn supportedPositioningMethodsChanged(self: QGeoPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_SupportedPositioningMethodsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedPositioningMethodsChanged` instead
    ///
    pub const OnSupportedPositioningMethodsChanged = onSupportedPositioningMethodsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource) callconv(.c) void `
    ///
    pub fn onSupportedPositioningMethodsChanged(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPositionInfoSource.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPositionInfoSource.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGeoPositionInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoPositionInfoSource.objectName: Memory allocation failed");
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGeoPositionInfoSource, name: []const u8) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn isWidgetType(self: QGeoPositionInfoSource) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn isWindowType(self: QGeoPositionInfoSource) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn isQuickItemType(self: QGeoPositionInfoSource) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn signalsBlocked(self: QGeoPositionInfoSource) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGeoPositionInfoSource, b: bool) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn thread(self: QGeoPositionInfoSource) QThread {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGeoPositionInfoSource, _thread: anytype) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGeoPositionInfoSource, interval: i32) i32 {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGeoPositionInfoSource, time: i64) i32 {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGeoPositionInfoSource, id: i32) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGeoPositionInfoSource, id: i32) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGeoPositionInfoSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGeoPositionInfoSource.children: Memory allocation failed");
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGeoPositionInfoSource, _parent: anytype) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGeoPositionInfoSource, filterObj: anytype) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGeoPositionInfoSource, obj: anytype) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGeoPositionInfoSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn disconnect3(self: QGeoPositionInfoSource) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGeoPositionInfoSource, receiver: anytype) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn dumpObjectTree(self: QGeoPositionInfoSource) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn dumpObjectInfo(self: QGeoPositionInfoSource) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGeoPositionInfoSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGeoPositionInfoSource, name: [:0]const u8) QVariant {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGeoPositionInfoSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGeoPositionInfoSource.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoPositionInfoSource.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn bindingStorage(self: QGeoPositionInfoSource) QBindingStorage {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn bindingStorage2(self: QGeoPositionInfoSource) QBindingStorage {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn destroyed(self: QGeoPositionInfoSource) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource) callconv(.c) void) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn parent(self: QGeoPositionInfoSource) QObject {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGeoPositionInfoSource, classname: [:0]const u8) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn deleteLater(self: QGeoPositionInfoSource) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGeoPositionInfoSource, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGeoPositionInfoSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGeoPositionInfoSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGeoPositionInfoSource, signal: [:0]const u8) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGeoPositionInfoSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGeoPositionInfoSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGeoPositionInfoSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGeoPositionInfoSource, param1: anytype) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QObject) callconv(.c) void) void {
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGeoPositionInfoSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoPositionInfoSource_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGeoPositionInfoSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoPositionInfoSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QEvent) callconv(.c) bool) void {
        qtc.QGeoPositionInfoSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGeoPositionInfoSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoPositionInfoSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGeoPositionInfoSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoPositionInfoSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoPositionInfoSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGeoPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoPositionInfoSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGeoPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoPositionInfoSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGeoPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoPositionInfoSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGeoPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoPositionInfoSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QChildEvent) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGeoPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoPositionInfoSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGeoPositionInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoPositionInfoSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QEvent) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGeoPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoPositionInfoSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGeoPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoPositionInfoSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGeoPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoPositionInfoSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGeoPositionInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoPositionInfoSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn sender(self: QGeoPositionInfoSource) QObject {
        return .{ .ptr = qtc.QGeoPositionInfoSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn superSender(self: QGeoPositionInfoSource) QObject {
        return .{ .ptr = qtc.QGeoPositionInfoSource_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoPositionInfoSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn senderSignalIndex(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn superSenderSignalIndex(self: QGeoPositionInfoSource) i32 {
        return qtc.QGeoPositionInfoSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGeoPositionInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoPositionInfoSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGeoPositionInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoPositionInfoSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGeoPositionInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoPositionInfoSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoPositionInfoSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGeoPositionInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoPositionInfoSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGeoPositionInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoPositionInfoSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoPositionInfoSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoPositionInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGeoPositionInfoSource, callback: *const fn (QGeoPositionInfoSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#dtor.QGeoPositionInfoSource)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPositionInfoSource `
    ///
    pub fn delete(self: QGeoPositionInfoSource) void {
        qtc.QGeoPositionInfoSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const AccessError: i32 = 0;
        pub const ClosedError: i32 = 1;
        pub const UnknownSourceError: i32 = 2;
        pub const NoError: i32 = 3;
        pub const UpdateTimeoutError: i32 = 4;
    };

    pub const PositioningMethod = enum(i32) {
        pub const NoPositioningMethods: i32 = 0;
        pub const SatellitePositioningMethods: i32 = 255;
        pub const NonSatellitePositioningMethods: i32 = -256;
        pub const AllPositioningMethods: i32 = -1;
    };
};
