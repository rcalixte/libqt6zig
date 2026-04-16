const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoSatelliteInfo = @import("libqt6").QGeoSatelliteInfo;
const QGeoSatelliteInfoSource = @import("libqt6").QGeoSatelliteInfoSource;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeosatelliteinfo_enums = @import("libqgeosatelliteinfo.zig").enums;
const qgeosatelliteinfosource_enums = @import("libqgeosatelliteinfosource.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnmeasatelliteinfosource_enums = enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html)
pub const QNmeaSatelliteInfoSource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNmeaSatelliteInfoSource,

    pub const _is_QNmeaSatelliteInfoSource = {};
    pub const _is_QGeoSatelliteInfoSource = {};
    pub const _is_QObject = {};

    /// New constructs a new QNmeaSatelliteInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    pub fn New(mode: i32) QNmeaSatelliteInfoSource {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_new(@bitCast(mode)) };
    }

    /// New2 constructs a new QNmeaSatelliteInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(mode: i32, parent: anytype) QNmeaSatelliteInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_new2(@bitCast(mode), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn MetaObject(self: QNmeaSatelliteInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNmeaSatelliteInfoSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SuperMetaObject(self: QNmeaSatelliteInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QNmeaSatelliteInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaSatelliteInfoSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QNmeaSatelliteInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaSatelliteInfoSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QNmeaSatelliteInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QNmeaSatelliteInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeasatelliteinfosource.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#updateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    pub fn UpdateMode(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_UpdateMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` source: QIODevice `
    ///
    pub fn SetDevice(self: QNmeaSatelliteInfoSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QIODevice;
        qtc.QNmeaSatelliteInfoSource_SetDevice(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Device(self: QNmeaSatelliteInfoSource) QIODevice {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetUpdateInterval(self: QNmeaSatelliteInfoSource, msec: i32) void {
        qtc.QNmeaSatelliteInfoSource_SetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, msec: i32) callconv(.c) void `
    ///
    pub fn OnSetUpdateInterval(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnSetUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUpdateInterval` instead
    ///
    pub const QBaseSetUpdateInterval = SuperSetUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SuperSetUpdateInterval(self: QNmeaSatelliteInfoSource, msec: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperSetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn MinimumUpdateInterval(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_MinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMinimumUpdateInterval(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnMinimumUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumUpdateInterval` instead
    ///
    pub const QBaseMinimumUpdateInterval = SuperMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SuperMinimumUpdateInterval(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperMinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfosource_enums.Error `
    ///
    pub fn Error(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnError(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperError` instead
    ///
    pub const QBaseError = SuperError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SuperError(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetBackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaSatelliteInfoSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, name: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn OnSetBackendProperty(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBackendProperty` instead
    ///
    pub const QBaseSetBackendProperty = SuperSetBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetBackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaSatelliteInfoSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn BackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, name: [*:0]const u8) callconv(.c) QVariant `
    ///
    pub fn OnBackendProperty(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QNmeaSatelliteInfoSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBackendProperty` instead
    ///
    pub const QBaseBackendProperty = SuperBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperBackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn StartUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_StartUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartUpdates(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnStartUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartUpdates` instead
    ///
    pub const QBaseStartUpdates = SuperStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SuperStartUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_SuperStartUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn StopUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_StopUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopUpdates(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnStopUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStopUpdates` instead
    ///
    pub const QBaseStopUpdates = SuperStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SuperStopUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_SuperStopUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn RequestUpdate(self: QNmeaSatelliteInfoSource, timeout: i32) void {
        qtc.QNmeaSatelliteInfoSource_RequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, timeout: i32) callconv(.c) void `
    ///
    pub fn OnRequestUpdate(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRequestUpdate` instead
    ///
    pub const QBaseRequestUpdate = SuperRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SuperRequestUpdate(self: QNmeaSatelliteInfoSource, timeout: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperRequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` pnrsInUse: []i32 `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn ParseSatellitesInUseFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, pnrsInUse: []i32) i32 {
        const data_Cstring = data.ptr;
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, data: [*:0]const u8, size: i32, pnrsInUse: qtc.libqt_list ([]i32)) callconv(.c) i32 `
    ///
    pub fn OnParseSatellitesInUseFromNmea(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8, i32, qtc.libqt_list) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParseSatellitesInUseFromNmea` instead
    ///
    pub const QBaseParseSatellitesInUseFromNmea = SuperParseSatellitesInUseFromNmea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` pnrsInUse: []i32 `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SuperParseSatellitesInUseFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, pnrsInUse: []i32) i32 {
        const data_Cstring = data.ptr;
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` pnrsInUse: []i32 `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn ParseSatellitesInUseFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, pnrsInUse: []i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2(@ptrCast(self.ptr), data_str, pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, data: qtc.libqt_string, pnrsInUse: qtc.libqt_list ([]i32)) callconv(.c) i32 `
    ///
    pub fn OnParseSatellitesInUseFromNmea2(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_string, qtc.libqt_list) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParseSatellitesInUseFromNmea2` instead
    ///
    pub const QBaseParseSatellitesInUseFromNmea2 = SuperParseSatellitesInUseFromNmea2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` pnrsInUse: []i32 `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SuperParseSatellitesInUseFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, pnrsInUse: []i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea2(@ptrCast(self.ptr), data_str, pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` infos: []QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn ParseSatelliteInfoFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, infos: []QGeoSatelliteInfo, system: *i32) i32 {
        const data_Cstring = data.ptr;
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, data: [*:0]const u8, size: i32, infos: qtc.libqt_list ([]QGeoSatelliteInfo), system: *qgeosatelliteinfo_enums.SatelliteSystem) callconv(.c) i32 `
    ///
    pub fn OnParseSatelliteInfoFromNmea(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8, i32, qtc.libqt_list, *i32) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParseSatelliteInfoFromNmea` instead
    ///
    pub const QBaseParseSatelliteInfoFromNmea = SuperParseSatelliteInfoFromNmea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` infos: []QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn SuperParseSatelliteInfoFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, infos: []QGeoSatelliteInfo, system: *i32) i32 {
        const data_Cstring = data.ptr;
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` infos: []QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn ParseSatelliteInfoFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, infos: []QGeoSatelliteInfo, system: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2(@ptrCast(self.ptr), data_str, infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, data: qtc.libqt_string, infos: qtc.libqt_list ([]QGeoSatelliteInfo), system: *qgeosatelliteinfo_enums.SatelliteSystem) callconv(.c) i32 `
    ///
    pub fn OnParseSatelliteInfoFromNmea2(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_string, qtc.libqt_list, *i32) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParseSatelliteInfoFromNmea2` instead
    ///
    pub const QBaseParseSatelliteInfoFromNmea2 = SuperParseSatelliteInfoFromNmea2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` infos: []QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn SuperParseSatelliteInfoFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, infos: []QGeoSatelliteInfo, system: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea2(@ptrCast(self.ptr), data_str, infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` satelliteError: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SetError(self: QNmeaSatelliteInfoSource, satelliteError: i32) void {
        qtc.QNmeaSatelliteInfoSource_SetError(@ptrCast(self.ptr), @bitCast(satelliteError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, satelliteError: qgeosatelliteinfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnSetError(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetError` instead
    ///
    pub const QBaseSetError = SuperSetError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` satelliteError: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SuperSetError(self: QNmeaSatelliteInfoSource, satelliteError: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperSetError(@ptrCast(self.ptr), @bitCast(satelliteError));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeasatelliteinfosource.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeasatelliteinfosource.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateDefaultSource(parent: anytype) QGeoSatelliteInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateDefaultSource(@ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateSource(sourceName: []const u8, parent: anytype) QGeoSatelliteInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateSource(sourceName_str, @ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateDefaultSource2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, parent: anytype) QGeoSatelliteInfoSource {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qnmeasatelliteinfosource.CreateDefaultSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qnmeasatelliteinfosource.CreateDefaultSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateDefaultSource2(parameters_map, @ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
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
    pub fn CreateSource2(allocator: std.mem.Allocator, sourceName: []const u8, parameters: ArrayMap_constu8_QVariant, parent: anytype) QGeoSatelliteInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qnmeasatelliteinfosource.CreateSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qnmeasatelliteinfosource.CreateSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateSource2(sourceName_str, parameters_map, @ptrCast(parent.ptr)) };
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSources(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoSatelliteInfoSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qnmeasatelliteinfosource.AvailableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnmeasatelliteinfosource.AvailableSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceName(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoSatelliteInfoSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeasatelliteinfosource.SourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#updateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn UpdateInterval(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_UpdateInterval(@ptrCast(self.ptr));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` satellites: []QGeoSatelliteInfo `
    ///
    pub fn SatellitesInViewUpdated(self: QNmeaSatelliteInfoSource, satellites: []QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInViewUpdated(@ptrCast(self.ptr), satellites_list);
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, satellites: qtc.libqt_list ([]QGeoSatelliteInfo)) callconv(.c) void `
    ///
    pub fn OnSatellitesInViewUpdated(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` satellites: []QGeoSatelliteInfo `
    ///
    pub fn SatellitesInUseUpdated(self: QNmeaSatelliteInfoSource, satellites: []QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInUseUpdated(@ptrCast(self.ptr), satellites_list);
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, satellites: qtc.libqt_list ([]QGeoSatelliteInfo)) callconv(.c) void `
    ///
    pub fn OnSatellitesInUseUpdated(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn ErrorOccurred(self: QNmeaSatelliteInfoSource, param1: i32) void {
        qtc.QGeoSatelliteInfoSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: qgeosatelliteinfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeasatelliteinfosource.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QNmeaSatelliteInfoSource, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn IsWidgetType(self: QNmeaSatelliteInfoSource) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn IsWindowType(self: QNmeaSatelliteInfoSource) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn IsQuickItemType(self: QNmeaSatelliteInfoSource) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SignalsBlocked(self: QNmeaSatelliteInfoSource) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QNmeaSatelliteInfoSource, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Thread(self: QNmeaSatelliteInfoSource) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QNmeaSatelliteInfoSource, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QNmeaSatelliteInfoSource, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QNmeaSatelliteInfoSource, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QNmeaSatelliteInfoSource, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QNmeaSatelliteInfoSource, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qnmeasatelliteinfosource.Children: Memory allocation failed");
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QNmeaSatelliteInfoSource, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QNmeaSatelliteInfoSource, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QNmeaSatelliteInfoSource, obj: anytype) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QNmeaSatelliteInfoSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Disconnect3(self: QNmeaSatelliteInfoSource) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QNmeaSatelliteInfoSource, receiver: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn DumpObjectTree(self: QNmeaSatelliteInfoSource) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn DumpObjectInfo(self: QNmeaSatelliteInfoSource) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QNmeaSatelliteInfoSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QNmeaSatelliteInfoSource, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnmeasatelliteinfosource.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnmeasatelliteinfosource.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn BindingStorage(self: QNmeaSatelliteInfoSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn BindingStorage2(self: QNmeaSatelliteInfoSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Destroyed(self: QNmeaSatelliteInfoSource) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Parent(self: QNmeaSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QNmeaSatelliteInfoSource, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn DeleteLater(self: QNmeaSatelliteInfoSource) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QNmeaSatelliteInfoSource, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QNmeaSatelliteInfoSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QNmeaSatelliteInfoSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QNmeaSatelliteInfoSource, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QNmeaSatelliteInfoSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QNmeaSatelliteInfoSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QNmeaSatelliteInfoSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QNmeaSatelliteInfoSource, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QObject) callconv(.c) void) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QNmeaSatelliteInfoSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QNmeaSatelliteInfoSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QEvent) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QNmeaSatelliteInfoSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QNmeaSatelliteInfoSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QNmeaSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNmeaSatelliteInfoSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QNmeaSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNmeaSatelliteInfoSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QTimerEvent) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QNmeaSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNmeaSatelliteInfoSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QNmeaSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNmeaSatelliteInfoSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QChildEvent) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QNmeaSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNmeaSatelliteInfoSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QNmeaSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNmeaSatelliteInfoSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QEvent) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Sender(self: QNmeaSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SuperSender(self: QNmeaSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNmeaSatelliteInfoSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SenderSignalIndex(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn SuperSenderSignalIndex(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QNmeaSatelliteInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaSatelliteInfoSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QNmeaSatelliteInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaSatelliteInfoSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QNmeaSatelliteInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaSatelliteInfoSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QNmeaSatelliteInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaSatelliteInfoSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#dtor.QNmeaSatelliteInfoSource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn Delete(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#public-types)
pub const enums = struct {
    pub const UpdateMode = enum(i32) {
        pub const RealTimeMode: i32 = 1;
        pub const SimulationMode: i32 = 2;
    };

    pub const SatelliteInfoParseStatus = enum(i32) {
        pub const NotParsed: i32 = 0;
        pub const PartiallyParsed: i32 = 1;
        pub const FullyParsed: i32 = 2;
    };
};
