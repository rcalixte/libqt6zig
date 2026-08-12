const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoAreaMonitorInfo = @import("libqt6").QGeoAreaMonitorInfo;
const QGeoPositionInfo = @import("libqt6").QGeoPositionInfo;
const QGeoPositionInfoSource = @import("libqt6").QGeoPositionInfoSource;
const QGeoShape = @import("libqt6").QGeoShape;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeoareamonitorsource_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html)
pub const QGeoAreaMonitorSource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoAreaMonitorSource,

    pub const _is_QGeoAreaMonitorSource = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoAreaMonitorSource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) QGeoAreaMonitorSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoAreaMonitorSource_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn metaObject(self: QGeoAreaMonitorSource) QMetaObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoAreaMonitorSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn superMetaObject(self: QGeoAreaMonitorSource) QMetaObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGeoAreaMonitorSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoAreaMonitorSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoAreaMonitorSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGeoAreaMonitorSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoAreaMonitorSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGeoAreaMonitorSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoAreaMonitorSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGeoAreaMonitorSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoAreaMonitorSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorSource.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createDefaultSource` instead
    ///
    pub const CreateDefaultSource = createDefaultSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn createDefaultSource(_parent: anytype) QGeoAreaMonitorSource {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoAreaMonitorSource_CreateDefaultSource(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createSource` instead
    ///
    pub const CreateSource = createSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sourceName: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createSource(_sourceName: []const u8, _parent: anytype) QGeoAreaMonitorSource {
        const sourceName_str = qtc.libqt_string{
            .len = _sourceName.len,
            .data = _sourceName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoAreaMonitorSource_CreateSource(sourceName_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `availableSources` instead
    ///
    pub const AvailableSources = availableSources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableSources(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QGeoAreaMonitorSource.availableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoAreaMonitorSource.availableSources: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setPositionInfoSource` instead
    ///
    pub const SetPositionInfoSource = setPositionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` source: QGeoPositionInfoSource `
    ///
    pub fn setPositionInfoSource(self: QGeoAreaMonitorSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QGeoPositionInfoSource;
        qtc.QGeoAreaMonitorSource_SetPositionInfoSource(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onSetPositionInfoSource` instead
    ///
    pub const OnSetPositionInfoSource = onSetPositionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, source: QGeoPositionInfoSource) callconv(.c) void `
    ///
    pub fn onSetPositionInfoSource(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoPositionInfoSource) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnSetPositionInfoSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPositionInfoSource` instead
    ///
    pub const SuperSetPositionInfoSource = superSetPositionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` source: QGeoPositionInfoSource `
    ///
    pub fn superSetPositionInfoSource(self: QGeoAreaMonitorSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QGeoPositionInfoSource;
        qtc.QGeoAreaMonitorSource_SuperSetPositionInfoSource(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `positionInfoSource` instead
    ///
    pub const PositionInfoSource = positionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn positionInfoSource(self: QGeoAreaMonitorSource) QGeoPositionInfoSource {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_PositionInfoSource(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPositionInfoSource` instead
    ///
    pub const OnPositionInfoSource = onPositionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn () callconv(.c) QGeoPositionInfoSource `
    ///
    pub fn onPositionInfoSource(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) QGeoPositionInfoSource) void {
        qtc.QGeoAreaMonitorSource_OnPositionInfoSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPositionInfoSource` instead
    ///
    pub const SuperPositionInfoSource = superPositionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn superPositionInfoSource(self: QGeoAreaMonitorSource) QGeoPositionInfoSource {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperPositionInfoSource(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sourceName` instead
    ///
    pub const SourceName = sourceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sourceName(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorSource.sourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeoareamonitorsource_enums.Error `
    ///
    pub fn error0(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onError(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superError` instead
    ///
    pub const SuperError = superError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#error)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeoareamonitorsource_enums.Error `
    ///
    pub fn superError(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedAreaMonitorFeatures` instead
    ///
    pub const SupportedAreaMonitorFeatures = supportedAreaMonitorFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#supportedAreaMonitorFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeoareamonitorsource_enums.AreaMonitorFeature `
    ///
    pub fn supportedAreaMonitorFeatures(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SupportedAreaMonitorFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedAreaMonitorFeatures` instead
    ///
    pub const OnSupportedAreaMonitorFeatures = onSupportedAreaMonitorFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#supportedAreaMonitorFeatures)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedAreaMonitorFeatures(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnSupportedAreaMonitorFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedAreaMonitorFeatures` instead
    ///
    pub const SuperSupportedAreaMonitorFeatures = superSupportedAreaMonitorFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#supportedAreaMonitorFeatures)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeoareamonitorsource_enums.AreaMonitorFeature `
    ///
    pub fn superSupportedAreaMonitorFeatures(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SuperSupportedAreaMonitorFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startMonitoring` instead
    ///
    pub const StartMonitoring = startMonitoring;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn startMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_StartMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### DEPRECATED: Use `onStartMonitoring` instead
    ///
    pub const OnStartMonitoring = onStartMonitoring;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo) callconv(.c) bool `
    ///
    pub fn onStartMonitoring(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnStartMonitoring(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartMonitoring` instead
    ///
    pub const SuperStartMonitoring = superStartMonitoring;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn superStartMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_SuperStartMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### DEPRECATED: Use `stopMonitoring` instead
    ///
    pub const StopMonitoring = stopMonitoring;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn stopMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_StopMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### DEPRECATED: Use `onStopMonitoring` instead
    ///
    pub const OnStopMonitoring = onStopMonitoring;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo) callconv(.c) bool `
    ///
    pub fn onStopMonitoring(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnStopMonitoring(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStopMonitoring` instead
    ///
    pub const SuperStopMonitoring = superStopMonitoring;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn superStopMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_SuperStopMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn requestUpdate(self: QGeoAreaMonitorSource, monitor: anytype, signal: [:0]const u8) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_RequestUpdate(@ptrCast(self.ptr), @ptrCast(monitor.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onRequestUpdate` instead
    ///
    pub const OnRequestUpdate = onRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo, signal: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onRequestUpdate(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo, [*:0]const u8) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestUpdate` instead
    ///
    pub const SuperRequestUpdate = superRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#requestUpdate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superRequestUpdate(self: QGeoAreaMonitorSource, monitor: anytype, signal: [:0]const u8) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_SuperRequestUpdate(@ptrCast(self.ptr), @ptrCast(monitor.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `activeMonitors` instead
    ///
    pub const ActiveMonitors = activeMonitors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activeMonitors(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []QGeoAreaMonitorInfo {
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_ActiveMonitors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("QGeoAreaMonitorSource.activeMonitors: Memory allocation failed");
        const _data_val: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onActiveMonitors` instead
    ///
    pub const OnActiveMonitors = onActiveMonitors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QGeoAreaMonitorInfo `
    ///
    pub fn onActiveMonitors(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QGeoAreaMonitorSource_OnActiveMonitors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActiveMonitors` instead
    ///
    pub const SuperActiveMonitors = superActiveMonitors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superActiveMonitors(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []QGeoAreaMonitorInfo {
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_SuperActiveMonitors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("QGeoAreaMonitorSource.activeMonitors: Memory allocation failed");
        const _data_val: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `activeMonitors2` instead
    ///
    pub const ActiveMonitors2 = activeMonitors2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lookupArea: QGeoShape `
    ///
    pub fn activeMonitors2(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator, lookupArea: anytype) []QGeoAreaMonitorInfo {
        comptime _ = @TypeOf(lookupArea)._is_QGeoShape;
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_ActiveMonitors2(@ptrCast(self.ptr), @ptrCast(lookupArea.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("QGeoAreaMonitorSource.activeMonitors2: Memory allocation failed");
        const _data_val: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onActiveMonitors2` instead
    ///
    pub const OnActiveMonitors2 = onActiveMonitors2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, lookupArea: QGeoShape) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QGeoAreaMonitorInfo `
    ///
    pub fn onActiveMonitors2(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoShape) callconv(.c) qtc.libqt_list) void {
        qtc.QGeoAreaMonitorSource_OnActiveMonitors2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActiveMonitors2` instead
    ///
    pub const SuperActiveMonitors2 = superActiveMonitors2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lookupArea: QGeoShape `
    ///
    pub fn superActiveMonitors2(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator, lookupArea: anytype) []QGeoAreaMonitorInfo {
        comptime _ = @TypeOf(lookupArea)._is_QGeoShape;
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_SuperActiveMonitors2(@ptrCast(self.ptr), @ptrCast(lookupArea.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("QGeoAreaMonitorSource.activeMonitors2: Memory allocation failed");
        const _data_val: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setBackendProperty` instead
    ///
    pub const SetBackendProperty = setBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setBackendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setBackendProperty(self: QGeoAreaMonitorSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoAreaMonitorSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetBackendProperty` instead
    ///
    pub const OnSetBackendProperty = onSetBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setBackendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, name: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn onSetBackendProperty(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBackendProperty` instead
    ///
    pub const SuperSetBackendProperty = superSetBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setBackendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn superSetBackendProperty(self: QGeoAreaMonitorSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoAreaMonitorSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `backendProperty` instead
    ///
    pub const BackendProperty = backendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn backendProperty(self: QGeoAreaMonitorSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoAreaMonitorSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `onBackendProperty` instead
    ///
    pub const OnBackendProperty = onBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, name: [*:0]const u8) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackendProperty(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QGeoAreaMonitorSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBackendProperty` instead
    ///
    pub const SuperBackendProperty = superBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn superBackendProperty(self: QGeoAreaMonitorSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `areaEntered` instead
    ///
    pub const AreaEntered = areaEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    /// ` update: QGeoPositionInfo `
    ///
    pub fn areaEntered(self: QGeoAreaMonitorSource, monitor: anytype, update: anytype) void {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoAreaMonitorSource_AreaEntered(@ptrCast(self.ptr), @ptrCast(monitor.ptr), @ptrCast(update.ptr));
    }

    /// ### DEPRECATED: Use `onAreaEntered` instead
    ///
    pub const OnAreaEntered = onAreaEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo, update: QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn onAreaEntered(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_AreaEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `areaExited` instead
    ///
    pub const AreaExited = areaExited;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaExited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    /// ` update: QGeoPositionInfo `
    ///
    pub fn areaExited(self: QGeoAreaMonitorSource, monitor: anytype, update: anytype) void {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoAreaMonitorSource_AreaExited(@ptrCast(self.ptr), @ptrCast(monitor.ptr), @ptrCast(update.ptr));
    }

    /// ### DEPRECATED: Use `onAreaExited` instead
    ///
    pub const OnAreaExited = onAreaExited;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaExited)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo, update: QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn onAreaExited(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_AreaExited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `monitorExpired` instead
    ///
    pub const MonitorExpired = monitorExpired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#monitorExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn monitorExpired(self: QGeoAreaMonitorSource, monitor: anytype) void {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        qtc.QGeoAreaMonitorSource_MonitorExpired(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### DEPRECATED: Use `onMonitorExpired` instead
    ///
    pub const OnMonitorExpired = onMonitorExpired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#monitorExpired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo) callconv(.c) void `
    ///
    pub fn onMonitorExpired(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_MonitorExpired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` errorVal: qgeoareamonitorsource_enums.Error `
    ///
    pub fn errorOccurred(self: QGeoAreaMonitorSource, errorVal: i32) void {
        qtc.QGeoAreaMonitorSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, errorVal: qgeoareamonitorsource_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, i32) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorSource.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorSource.tr3: Memory allocation failed");
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorSource.objectName: Memory allocation failed");
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGeoAreaMonitorSource, name: []const u8) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn isWidgetType(self: QGeoAreaMonitorSource) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn isWindowType(self: QGeoAreaMonitorSource) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn isQuickItemType(self: QGeoAreaMonitorSource) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn signalsBlocked(self: QGeoAreaMonitorSource) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGeoAreaMonitorSource, b: bool) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn thread(self: QGeoAreaMonitorSource) QThread {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGeoAreaMonitorSource, _thread: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGeoAreaMonitorSource, interval: i32) i32 {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGeoAreaMonitorSource, time: i64) i32 {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGeoAreaMonitorSource, id: i32) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGeoAreaMonitorSource, id: i32) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGeoAreaMonitorSource.children: Memory allocation failed");
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGeoAreaMonitorSource, _parent: anytype) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGeoAreaMonitorSource, filterObj: anytype) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGeoAreaMonitorSource, obj: anytype) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGeoAreaMonitorSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn disconnect3(self: QGeoAreaMonitorSource) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGeoAreaMonitorSource, receiver: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn dumpObjectTree(self: QGeoAreaMonitorSource) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn dumpObjectInfo(self: QGeoAreaMonitorSource) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGeoAreaMonitorSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGeoAreaMonitorSource, name: [:0]const u8) QVariant {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGeoAreaMonitorSource.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoAreaMonitorSource.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn bindingStorage(self: QGeoAreaMonitorSource) QBindingStorage {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn bindingStorage2(self: QGeoAreaMonitorSource) QBindingStorage {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn destroyed(self: QGeoAreaMonitorSource) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource) callconv(.c) void) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn parent(self: QGeoAreaMonitorSource) QObject {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGeoAreaMonitorSource, classname: [:0]const u8) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn deleteLater(self: QGeoAreaMonitorSource) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGeoAreaMonitorSource, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGeoAreaMonitorSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGeoAreaMonitorSource, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGeoAreaMonitorSource, signal: [:0]const u8) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGeoAreaMonitorSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGeoAreaMonitorSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGeoAreaMonitorSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGeoAreaMonitorSource, param1: anytype) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QObject) callconv(.c) void) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGeoAreaMonitorSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGeoAreaMonitorSource, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QEvent) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGeoAreaMonitorSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGeoAreaMonitorSource, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGeoAreaMonitorSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoAreaMonitorSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGeoAreaMonitorSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoAreaMonitorSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGeoAreaMonitorSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoAreaMonitorSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGeoAreaMonitorSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoAreaMonitorSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QChildEvent) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGeoAreaMonitorSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoAreaMonitorSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGeoAreaMonitorSource, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoAreaMonitorSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QEvent) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn sender(self: QGeoAreaMonitorSource) QObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn superSender(self: QGeoAreaMonitorSource) QObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoAreaMonitorSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn senderSignalIndex(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn superSenderSignalIndex(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGeoAreaMonitorSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGeoAreaMonitorSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGeoAreaMonitorSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoAreaMonitorSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGeoAreaMonitorSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoAreaMonitorSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource`
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#dtor.QGeoAreaMonitorSource)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn delete(self: QGeoAreaMonitorSource) void {
        qtc.QGeoAreaMonitorSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const AccessError: i32 = 0;
        pub const InsufficientPositionInfo: i32 = 1;
        pub const UnknownSourceError: i32 = 2;
        pub const NoError: i32 = 3;
    };

    pub const AreaMonitorFeature = enum(i32) {
        pub const PersistentAreaMonitorFeature: i32 = 1;
        pub const AnyAreaMonitorFeature: i32 = -1;
    };
};
