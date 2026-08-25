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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNmeaSatelliteInfoSource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    pub fn new(mode: i32) QNmeaSatelliteInfoSource {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_new(@bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNmeaSatelliteInfoSource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(mode: i32, _parent: anytype) QNmeaSatelliteInfoSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_new2(@bitCast(mode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn metaObject(self: QNmeaSatelliteInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNmeaSatelliteInfoSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn superMetaObject(self: QNmeaSatelliteInfoSource) QMetaObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QNmeaSatelliteInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaSatelliteInfoSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QNmeaSatelliteInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaSatelliteInfoSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QNmeaSatelliteInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QNmeaSatelliteInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaSatelliteInfoSource.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `updateMode` instead
    ///
    pub const UpdateMode = updateMode;

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
    pub fn updateMode(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_UpdateMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` source: QIODevice `
    ///
    pub fn setDevice(self: QNmeaSatelliteInfoSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QIODevice;
        qtc.QNmeaSatelliteInfoSource_SetDevice(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn device(self: QNmeaSatelliteInfoSource) QIODevice {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUpdateInterval` instead
    ///
    pub const SetUpdateInterval = setUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn setUpdateInterval(self: QNmeaSatelliteInfoSource, msec: i32) void {
        qtc.QNmeaSatelliteInfoSource_SetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `onSetUpdateInterval` instead
    ///
    pub const OnSetUpdateInterval = onSetUpdateInterval;

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
    pub fn onSetUpdateInterval(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnSetUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetUpdateInterval` instead
    ///
    pub const SuperSetUpdateInterval = superSetUpdateInterval;

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
    pub fn superSetUpdateInterval(self: QNmeaSatelliteInfoSource, msec: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperSetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `minimumUpdateInterval` instead
    ///
    pub const MinimumUpdateInterval = minimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn minimumUpdateInterval(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_MinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMinimumUpdateInterval` instead
    ///
    pub const OnMinimumUpdateInterval = onMinimumUpdateInterval;

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
    pub fn onMinimumUpdateInterval(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnMinimumUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumUpdateInterval` instead
    ///
    pub const SuperMinimumUpdateInterval = superMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn superMinimumUpdateInterval(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperMinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

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
    pub fn onError(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superError` instead
    ///
    pub const SuperError = superError;

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
    pub fn superError(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackendProperty` instead
    ///
    pub const SetBackendProperty = setBackendProperty;

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
    pub fn setBackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaSatelliteInfoSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetBackendProperty` instead
    ///
    pub const OnSetBackendProperty = onSetBackendProperty;

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
    pub fn onSetBackendProperty(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBackendProperty` instead
    ///
    pub const SuperSetBackendProperty = superSetBackendProperty;

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
    pub fn superSetBackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QNmeaSatelliteInfoSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `backendProperty` instead
    ///
    pub const BackendProperty = backendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn backendProperty(self: QNmeaSatelliteInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onBackendProperty` instead
    ///
    pub const OnBackendProperty = onBackendProperty;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackendProperty(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QNmeaSatelliteInfoSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBackendProperty` instead
    ///
    pub const SuperBackendProperty = superBackendProperty;

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
    pub fn superBackendProperty(self: QNmeaSatelliteInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `startUpdates` instead
    ///
    pub const StartUpdates = startUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn startUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_StartUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartUpdates` instead
    ///
    pub const OnStartUpdates = onStartUpdates;

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
    pub fn onStartUpdates(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnStartUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartUpdates` instead
    ///
    pub const SuperStartUpdates = superStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn superStartUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_SuperStartUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stopUpdates` instead
    ///
    pub const StopUpdates = stopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn stopUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_StopUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStopUpdates` instead
    ///
    pub const OnStopUpdates = onStopUpdates;

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
    pub fn onStopUpdates(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnStopUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStopUpdates` instead
    ///
    pub const SuperStopUpdates = superStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn superStopUpdates(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_SuperStopUpdates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn requestUpdate(self: QNmeaSatelliteInfoSource, timeout: i32) void {
        qtc.QNmeaSatelliteInfoSource_RequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `onRequestUpdate` instead
    ///
    pub const OnRequestUpdate = onRequestUpdate;

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
    pub fn onRequestUpdate(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestUpdate` instead
    ///
    pub const SuperRequestUpdate = superRequestUpdate;

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
    pub fn superRequestUpdate(self: QNmeaSatelliteInfoSource, timeout: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperRequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `parseSatellitesInUseFromNmea` instead
    ///
    pub const ParseSatellitesInUseFromNmea = parseSatellitesInUseFromNmea;

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
    pub fn parseSatellitesInUseFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, pnrsInUse: []i32) i32 {
        const data_Cstring = data.ptr;
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), pnrsInUse_list);
    }

    /// ### DEPRECATED: Use `onParseSatellitesInUseFromNmea` instead
    ///
    pub const OnParseSatellitesInUseFromNmea = onParseSatellitesInUseFromNmea;

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
    pub fn onParseSatellitesInUseFromNmea(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8, i32, qtc.libqt_list) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParseSatellitesInUseFromNmea` instead
    ///
    pub const SuperParseSatellitesInUseFromNmea = superParseSatellitesInUseFromNmea;

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
    pub fn superParseSatellitesInUseFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, pnrsInUse: []i32) i32 {
        const data_Cstring = data.ptr;
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), pnrsInUse_list);
    }

    /// ### DEPRECATED: Use `parseSatellitesInUseFromNmea2` instead
    ///
    pub const ParseSatellitesInUseFromNmea2 = parseSatellitesInUseFromNmea2;

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
    pub fn parseSatellitesInUseFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, pnrsInUse: []i32) i32 {
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

    /// ### DEPRECATED: Use `onParseSatellitesInUseFromNmea2` instead
    ///
    pub const OnParseSatellitesInUseFromNmea2 = onParseSatellitesInUseFromNmea2;

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
    pub fn onParseSatellitesInUseFromNmea2(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_string, qtc.libqt_list) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParseSatellitesInUseFromNmea2` instead
    ///
    pub const SuperParseSatellitesInUseFromNmea2 = superParseSatellitesInUseFromNmea2;

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
    pub fn superParseSatellitesInUseFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, pnrsInUse: []i32) i32 {
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

    /// ### DEPRECATED: Use `parseSatelliteInfoFromNmea` instead
    ///
    pub const ParseSatelliteInfoFromNmea = parseSatelliteInfoFromNmea;

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
    pub fn parseSatelliteInfoFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, infos: []QGeoSatelliteInfo, system: *i32) i32 {
        const data_Cstring = data.ptr;
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), infos_list, @ptrCast(system));
    }

    /// ### DEPRECATED: Use `onParseSatelliteInfoFromNmea` instead
    ///
    pub const OnParseSatelliteInfoFromNmea = onParseSatelliteInfoFromNmea;

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
    pub fn onParseSatelliteInfoFromNmea(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8, i32, qtc.libqt_list, *i32) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParseSatelliteInfoFromNmea` instead
    ///
    pub const SuperParseSatelliteInfoFromNmea = superParseSatelliteInfoFromNmea;

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
    pub fn superParseSatelliteInfoFromNmea(self: QNmeaSatelliteInfoSource, data: [:0]const u8, size: i32, infos: []QGeoSatelliteInfo, system: *i32) i32 {
        const data_Cstring = data.ptr;
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea(@ptrCast(self.ptr), data_Cstring, @bitCast(size), infos_list, @ptrCast(system));
    }

    /// ### DEPRECATED: Use `parseSatelliteInfoFromNmea2` instead
    ///
    pub const ParseSatelliteInfoFromNmea2 = parseSatelliteInfoFromNmea2;

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
    pub fn parseSatelliteInfoFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, infos: []QGeoSatelliteInfo, system: *i32) i32 {
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

    /// ### DEPRECATED: Use `onParseSatelliteInfoFromNmea2` instead
    ///
    pub const OnParseSatelliteInfoFromNmea2 = onParseSatelliteInfoFromNmea2;

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
    pub fn onParseSatelliteInfoFromNmea2(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_string, qtc.libqt_list, *i32) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParseSatelliteInfoFromNmea2` instead
    ///
    pub const SuperParseSatelliteInfoFromNmea2 = superParseSatelliteInfoFromNmea2;

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
    pub fn superParseSatelliteInfoFromNmea2(self: QNmeaSatelliteInfoSource, data: []u8, infos: []QGeoSatelliteInfo, system: *i32) i32 {
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

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` satelliteError: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn setError(self: QNmeaSatelliteInfoSource, satelliteError: i32) void {
        qtc.QNmeaSatelliteInfoSource_SetError(@ptrCast(self.ptr), @bitCast(satelliteError));
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

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
    pub fn onSetError(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

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
    pub fn superSetError(self: QNmeaSatelliteInfoSource, satelliteError: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperSetError(@ptrCast(self.ptr), @bitCast(satelliteError));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaSatelliteInfoSource.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaSatelliteInfoSource.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createDefaultSource` instead
    ///
    pub const CreateDefaultSource = createDefaultSource;

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn createDefaultSource(_parent: anytype) QGeoSatelliteInfoSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateDefaultSource(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createSource` instead
    ///
    pub const CreateSource = createSource;

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sourceName: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createSource(_sourceName: []const u8, _parent: anytype) QGeoSatelliteInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = _sourceName.len,
            .data = _sourceName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateSource(sourceName_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createDefaultSource2` instead
    ///
    pub const CreateDefaultSource2 = createDefaultSource2;

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
    /// ` _parent: QObject `
    ///
    pub fn createDefaultSource2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, _parent: anytype) QGeoSatelliteInfoSource {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QNmeaSatelliteInfoSource.createDefaultSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QNmeaSatelliteInfoSource.createDefaultSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateDefaultSource2(parameters_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createSource2` instead
    ///
    pub const CreateSource2 = createSource2;

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
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
    pub fn createSource2(allocator: std.mem.Allocator, _sourceName: []const u8, parameters: ArrayMap_constu8_QVariant, _parent: anytype) QGeoSatelliteInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = _sourceName.len,
            .data = _sourceName.ptr,
        };
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QNmeaSatelliteInfoSource.createSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QNmeaSatelliteInfoSource.createSource2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_CreateSource2(sourceName_str, parameters_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `availableSources` instead
    ///
    pub const AvailableSources = availableSources;

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableSources(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoSatelliteInfoSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QNmeaSatelliteInfoSource.availableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNmeaSatelliteInfoSource.availableSources: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `sourceName` instead
    ///
    pub const SourceName = sourceName;

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
    pub fn sourceName(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoSatelliteInfoSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaSatelliteInfoSource.sourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `updateInterval` instead
    ///
    pub const UpdateInterval = updateInterval;

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#updateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn updateInterval(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_UpdateInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `satellitesInViewUpdated` instead
    ///
    pub const SatellitesInViewUpdated = satellitesInViewUpdated;

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
    pub fn satellitesInViewUpdated(self: QNmeaSatelliteInfoSource, satellites: []QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInViewUpdated(@ptrCast(self.ptr), satellites_list);
    }

    /// ### DEPRECATED: Use `onSatellitesInViewUpdated` instead
    ///
    pub const OnSatellitesInViewUpdated = onSatellitesInViewUpdated;

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
    pub fn onSatellitesInViewUpdated(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `satellitesInUseUpdated` instead
    ///
    pub const SatellitesInUseUpdated = satellitesInUseUpdated;

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
    pub fn satellitesInUseUpdated(self: QNmeaSatelliteInfoSource, satellites: []QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInUseUpdated(@ptrCast(self.ptr), satellites_list);
    }

    /// ### DEPRECATED: Use `onSatellitesInUseUpdated` instead
    ///
    pub const OnSatellitesInUseUpdated = onSatellitesInUseUpdated;

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
    pub fn onSatellitesInUseUpdated(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    pub fn errorOccurred(self: QNmeaSatelliteInfoSource, param1: i32) void {
        qtc.QGeoSatelliteInfoSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

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
    pub fn onErrorOccurred(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNmeaSatelliteInfoSource.objectName: Memory allocation failed");
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QNmeaSatelliteInfoSource, name: []const u8) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn isWidgetType(self: QNmeaSatelliteInfoSource) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn isWindowType(self: QNmeaSatelliteInfoSource) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn isQuickItemType(self: QNmeaSatelliteInfoSource) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn signalsBlocked(self: QNmeaSatelliteInfoSource) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QNmeaSatelliteInfoSource, b: bool) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn thread(self: QNmeaSatelliteInfoSource) QThread {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QNmeaSatelliteInfoSource, _thread: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QNmeaSatelliteInfoSource, interval: i32) i32 {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QNmeaSatelliteInfoSource, time: i64) i32 {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QNmeaSatelliteInfoSource, id: i32) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QNmeaSatelliteInfoSource, id: i32) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QNmeaSatelliteInfoSource.children: Memory allocation failed");
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QNmeaSatelliteInfoSource, _parent: anytype) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QNmeaSatelliteInfoSource, filterObj: anytype) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QNmeaSatelliteInfoSource, obj: anytype) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QNmeaSatelliteInfoSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn disconnect3(self: QNmeaSatelliteInfoSource) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QNmeaSatelliteInfoSource, receiver: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn dumpObjectTree(self: QNmeaSatelliteInfoSource) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn dumpObjectInfo(self: QNmeaSatelliteInfoSource) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QNmeaSatelliteInfoSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QNmeaSatelliteInfoSource, name: [:0]const u8) QVariant {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QNmeaSatelliteInfoSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNmeaSatelliteInfoSource.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNmeaSatelliteInfoSource.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn bindingStorage(self: QNmeaSatelliteInfoSource) QBindingStorage {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn bindingStorage2(self: QNmeaSatelliteInfoSource) QBindingStorage {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn destroyed(self: QNmeaSatelliteInfoSource) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource) callconv(.c) void) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn parent(self: QNmeaSatelliteInfoSource) QObject {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QNmeaSatelliteInfoSource, classname: [:0]const u8) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn deleteLater(self: QNmeaSatelliteInfoSource) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QNmeaSatelliteInfoSource, interval: i32, timerType: i32) i32 {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QNmeaSatelliteInfoSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QNmeaSatelliteInfoSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QNmeaSatelliteInfoSource, signal: [:0]const u8) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QNmeaSatelliteInfoSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QNmeaSatelliteInfoSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QNmeaSatelliteInfoSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QNmeaSatelliteInfoSource, param1: anytype) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QObject) callconv(.c) void) void {
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QNmeaSatelliteInfoSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QNmeaSatelliteInfoSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QEvent) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QNmeaSatelliteInfoSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QNmeaSatelliteInfoSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNmeaSatelliteInfoSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QNmeaSatelliteInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNmeaSatelliteInfoSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QNmeaSatelliteInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNmeaSatelliteInfoSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QTimerEvent) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QNmeaSatelliteInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNmeaSatelliteInfoSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QNmeaSatelliteInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNmeaSatelliteInfoSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QChildEvent) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QNmeaSatelliteInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNmeaSatelliteInfoSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QNmeaSatelliteInfoSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNmeaSatelliteInfoSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QEvent) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QNmeaSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNmeaSatelliteInfoSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn sender(self: QNmeaSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn superSender(self: QNmeaSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QNmeaSatelliteInfoSource_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNmeaSatelliteInfoSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn senderSignalIndex(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn superSenderSignalIndex(self: QNmeaSatelliteInfoSource) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QNmeaSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QNmeaSatelliteInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaSatelliteInfoSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QNmeaSatelliteInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaSatelliteInfoSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QNmeaSatelliteInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaSatelliteInfoSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QNmeaSatelliteInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNmeaSatelliteInfoSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QNmeaSatelliteInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QNmeaSatelliteInfoSource, callback: *const fn (QNmeaSatelliteInfoSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#dtor.QNmeaSatelliteInfoSource)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNmeaSatelliteInfoSource `
    ///
    pub fn delete(self: QNmeaSatelliteInfoSource) void {
        qtc.QNmeaSatelliteInfoSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#public-types)
pub const enums = struct {
    pub const UpdateMode = enum {
        pub const RealTimeMode: i32 = 1;
        pub const SimulationMode: i32 = 2;
    };

    pub const SatelliteInfoParseStatus = enum {
        pub const NotParsed: i32 = 0;
        pub const PartiallyParsed: i32 = 1;
        pub const FullyParsed: i32 = 2;
    };
};
