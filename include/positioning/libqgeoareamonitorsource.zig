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

    /// New constructs a new QGeoAreaMonitorSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) QGeoAreaMonitorSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoAreaMonitorSource_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn MetaObject(self: QGeoAreaMonitorSource) QMetaObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoAreaMonitorSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn SuperMetaObject(self: QGeoAreaMonitorSource) QMetaObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGeoAreaMonitorSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoAreaMonitorSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoAreaMonitorSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGeoAreaMonitorSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoAreaMonitorSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGeoAreaMonitorSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoAreaMonitorSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QGeoAreaMonitorSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoAreaMonitorSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorsource.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateDefaultSource(parent: anytype) QGeoAreaMonitorSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoAreaMonitorSource_CreateDefaultSource(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateSource(sourceName: []const u8, parent: anytype) QGeoAreaMonitorSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoAreaMonitorSource_CreateSource(sourceName_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSources(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qgeoareamonitorsource.AvailableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeoareamonitorsource.AvailableSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` source: QGeoPositionInfoSource `
    ///
    pub fn SetPositionInfoSource(self: QGeoAreaMonitorSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QGeoPositionInfoSource;
        qtc.QGeoAreaMonitorSource_SetPositionInfoSource(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

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
    pub fn OnSetPositionInfoSource(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoPositionInfoSource) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnSetPositionInfoSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPositionInfoSource` instead
    ///
    pub const QBaseSetPositionInfoSource = SuperSetPositionInfoSource;

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
    pub fn SuperSetPositionInfoSource(self: QGeoAreaMonitorSource, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QGeoPositionInfoSource;
        qtc.QGeoAreaMonitorSource_SuperSetPositionInfoSource(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn PositionInfoSource(self: QGeoAreaMonitorSource) QGeoPositionInfoSource {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_PositionInfoSource(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPositionInfoSource(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) QGeoPositionInfoSource) void {
        qtc.QGeoAreaMonitorSource_OnPositionInfoSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPositionInfoSource` instead
    ///
    pub const QBasePositionInfoSource = SuperPositionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn SuperPositionInfoSource(self: QGeoAreaMonitorSource) QGeoPositionInfoSource {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperPositionInfoSource(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceName(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorsource.SourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Error(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_Error(@ptrCast(self.ptr));
    }

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
    pub fn OnError(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperError` instead
    ///
    pub const QBaseError = SuperError;

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
    pub fn SuperError(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SuperError(@ptrCast(self.ptr));
    }

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
    pub fn SupportedAreaMonitorFeatures(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SupportedAreaMonitorFeatures(@ptrCast(self.ptr));
    }

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
    pub fn OnSupportedAreaMonitorFeatures(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnSupportedAreaMonitorFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedAreaMonitorFeatures` instead
    ///
    pub const QBaseSupportedAreaMonitorFeatures = SuperSupportedAreaMonitorFeatures;

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
    pub fn SuperSupportedAreaMonitorFeatures(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SuperSupportedAreaMonitorFeatures(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn StartMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_StartMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

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
    pub fn OnStartMonitoring(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnStartMonitoring(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartMonitoring` instead
    ///
    pub const QBaseStartMonitoring = SuperStartMonitoring;

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
    pub fn SuperStartMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_SuperStartMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn StopMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_StopMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

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
    pub fn OnStopMonitoring(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnStopMonitoring(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStopMonitoring` instead
    ///
    pub const QBaseStopMonitoring = SuperStopMonitoring;

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
    pub fn SuperStopMonitoring(self: QGeoAreaMonitorSource, monitor: anytype) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        return qtc.QGeoAreaMonitorSource_SuperStopMonitoring(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

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
    pub fn RequestUpdate(self: QGeoAreaMonitorSource, monitor: anytype, signal: [:0]const u8) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_RequestUpdate(@ptrCast(self.ptr), @ptrCast(monitor.ptr), signal_Cstring);
    }

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
    pub fn OnRequestUpdate(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo, [*:0]const u8) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRequestUpdate` instead
    ///
    pub const QBaseRequestUpdate = SuperRequestUpdate;

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
    pub fn SuperRequestUpdate(self: QGeoAreaMonitorSource, monitor: anytype, signal: [:0]const u8) bool {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_SuperRequestUpdate(@ptrCast(self.ptr), @ptrCast(monitor.ptr), signal_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActiveMonitors(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []QGeoAreaMonitorInfo {
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_ActiveMonitors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("qgeoareamonitorsource.ActiveMonitors: Memory allocation failed");
        const _data: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnActiveMonitors(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QGeoAreaMonitorSource_OnActiveMonitors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActiveMonitors` instead
    ///
    pub const QBaseActiveMonitors = SuperActiveMonitors;

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
    pub fn SuperActiveMonitors(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []QGeoAreaMonitorInfo {
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_SuperActiveMonitors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("qgeoareamonitorsource.ActiveMonitors: Memory allocation failed");
        const _data: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn ActiveMonitors2(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator, lookupArea: anytype) []QGeoAreaMonitorInfo {
        comptime _ = @TypeOf(lookupArea)._is_QGeoShape;
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_ActiveMonitors2(@ptrCast(self.ptr), @ptrCast(lookupArea.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("qgeoareamonitorsource.ActiveMonitors2: Memory allocation failed");
        const _data: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnActiveMonitors2(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoShape) callconv(.c) qtc.libqt_list) void {
        qtc.QGeoAreaMonitorSource_OnActiveMonitors2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActiveMonitors2` instead
    ///
    pub const QBaseActiveMonitors2 = SuperActiveMonitors2;

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
    pub fn SuperActiveMonitors2(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator, lookupArea: anytype) []QGeoAreaMonitorInfo {
        comptime _ = @TypeOf(lookupArea)._is_QGeoShape;
        const _arr: qtc.libqt_list = qtc.QGeoAreaMonitorSource_SuperActiveMonitors2(@ptrCast(self.ptr), @ptrCast(lookupArea.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoAreaMonitorInfo, _arr.len) catch @panic("qgeoareamonitorsource.ActiveMonitors2: Memory allocation failed");
        const _data: [*]QtC.QGeoAreaMonitorInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn SetBackendProperty(self: QGeoAreaMonitorSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoAreaMonitorSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

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
    pub fn OnSetBackendProperty(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBackendProperty` instead
    ///
    pub const QBaseSetBackendProperty = SuperSetBackendProperty;

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
    pub fn SuperSetBackendProperty(self: QGeoAreaMonitorSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoAreaMonitorSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn BackendProperty(self: QGeoAreaMonitorSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoAreaMonitorSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

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
    pub fn OnBackendProperty(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QGeoAreaMonitorSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBackendProperty` instead
    ///
    pub const QBaseBackendProperty = SuperBackendProperty;

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
    pub fn SuperBackendProperty(self: QGeoAreaMonitorSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

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
    pub fn AreaEntered(self: QGeoAreaMonitorSource, monitor: anytype, update: anytype) void {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoAreaMonitorSource_AreaEntered(@ptrCast(self.ptr), @ptrCast(monitor.ptr), @ptrCast(update.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo, update: QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn OnAreaEntered(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_AreaEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AreaExited(self: QGeoAreaMonitorSource, monitor: anytype, update: anytype) void {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        comptime _ = @TypeOf(update)._is_QGeoPositionInfo;
        qtc.QGeoAreaMonitorSource_AreaExited(@ptrCast(self.ptr), @ptrCast(monitor.ptr), @ptrCast(update.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaExited)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo, update: QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn OnAreaExited(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo, QGeoPositionInfo) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_AreaExited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#monitorExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` monitor: QGeoAreaMonitorInfo `
    ///
    pub fn MonitorExpired(self: QGeoAreaMonitorSource, monitor: anytype) void {
        comptime _ = @TypeOf(monitor)._is_QGeoAreaMonitorInfo;
        qtc.QGeoAreaMonitorSource_MonitorExpired(@ptrCast(self.ptr), @ptrCast(monitor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#monitorExpired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, monitor: QGeoAreaMonitorInfo) callconv(.c) void `
    ///
    pub fn OnMonitorExpired(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QGeoAreaMonitorInfo) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_MonitorExpired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` errorVal: qgeoareamonitorsource_enums.Error `
    ///
    pub fn ErrorOccurred(self: QGeoAreaMonitorSource, errorVal: i32) void {
        qtc.QGeoAreaMonitorSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` callback: *const fn (self: QGeoAreaMonitorSource, errorVal: qgeoareamonitorsource_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, i32) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorsource.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorsource.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorsource.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGeoAreaMonitorSource, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn IsWidgetType(self: QGeoAreaMonitorSource) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn IsWindowType(self: QGeoAreaMonitorSource) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn IsQuickItemType(self: QGeoAreaMonitorSource) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn SignalsBlocked(self: QGeoAreaMonitorSource) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGeoAreaMonitorSource, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn Thread(self: QGeoAreaMonitorSource) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGeoAreaMonitorSource, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGeoAreaMonitorSource, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGeoAreaMonitorSource, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGeoAreaMonitorSource, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGeoAreaMonitorSource, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgeoareamonitorsource.Children: Memory allocation failed");
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGeoAreaMonitorSource, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGeoAreaMonitorSource, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGeoAreaMonitorSource, obj: anytype) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGeoAreaMonitorSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn Disconnect3(self: QGeoAreaMonitorSource) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGeoAreaMonitorSource, receiver: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn DumpObjectTree(self: QGeoAreaMonitorSource) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn DumpObjectInfo(self: QGeoAreaMonitorSource) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGeoAreaMonitorSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGeoAreaMonitorSource, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGeoAreaMonitorSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgeoareamonitorsource.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeoareamonitorsource.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn BindingStorage(self: QGeoAreaMonitorSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn BindingStorage2(self: QGeoAreaMonitorSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn Destroyed(self: QGeoAreaMonitorSource) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn Parent(self: QGeoAreaMonitorSource) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGeoAreaMonitorSource, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn DeleteLater(self: QGeoAreaMonitorSource) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGeoAreaMonitorSource, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGeoAreaMonitorSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGeoAreaMonitorSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGeoAreaMonitorSource, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGeoAreaMonitorSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGeoAreaMonitorSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGeoAreaMonitorSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGeoAreaMonitorSource, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QObject) callconv(.c) void) void {
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGeoAreaMonitorSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGeoAreaMonitorSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QEvent) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGeoAreaMonitorSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGeoAreaMonitorSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoAreaMonitorSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGeoAreaMonitorSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoAreaMonitorSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGeoAreaMonitorSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoAreaMonitorSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGeoAreaMonitorSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoAreaMonitorSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGeoAreaMonitorSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoAreaMonitorSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QChildEvent) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGeoAreaMonitorSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoAreaMonitorSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGeoAreaMonitorSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoAreaMonitorSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QEvent) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGeoAreaMonitorSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoAreaMonitorSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoAreaMonitorSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QGeoAreaMonitorSource) QObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn SuperSender(self: QGeoAreaMonitorSource) QObject {
        return .{ .ptr = qtc.QGeoAreaMonitorSource_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoAreaMonitorSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn SuperSenderSignalIndex(self: QGeoAreaMonitorSource) i32 {
        return qtc.QGeoAreaMonitorSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QGeoAreaMonitorSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QGeoAreaMonitorSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGeoAreaMonitorSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoAreaMonitorSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoAreaMonitorSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QGeoAreaMonitorSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoAreaMonitorSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoAreaMonitorSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGeoAreaMonitorSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoAreaMonitorSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoAreaMonitorSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QGeoAreaMonitorSource, callback: *const fn (QGeoAreaMonitorSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#dtor.QGeoAreaMonitorSource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoAreaMonitorSource `
    ///
    pub fn Delete(self: QGeoAreaMonitorSource) void {
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
