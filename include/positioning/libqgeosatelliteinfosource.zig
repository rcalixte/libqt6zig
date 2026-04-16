const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoSatelliteInfo = @import("libqt6").QGeoSatelliteInfo;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeosatelliteinfosource_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html)
pub const QGeoSatelliteInfoSource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoSatelliteInfoSource,

    pub const _is_QGeoSatelliteInfoSource = {};
    pub const _is_QObject = {};

    /// New constructs a new QGeoSatelliteInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) QGeoSatelliteInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn MetaObject(self: QGeoSatelliteInfoSource) QMetaObject {
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoSatelliteInfoSource_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SuperMetaObject(self: QGeoSatelliteInfoSource) QMetaObject {
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGeoSatelliteInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoSatelliteInfoSource_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoSatelliteInfoSource_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGeoSatelliteInfoSource, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoSatelliteInfoSource_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGeoSatelliteInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoSatelliteInfoSource_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoSatelliteInfoSource_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGeoSatelliteInfoSource, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoSatelliteInfoSource_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeosatelliteinfosource.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeosatelliteinfosource.CreateDefaultSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeosatelliteinfosource.CreateDefaultSource2: Memory allocation failed");
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
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeosatelliteinfosource.CreateSource2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeosatelliteinfosource.CreateSource2: Memory allocation failed");
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qgeosatelliteinfosource.AvailableSources: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeosatelliteinfosource.AvailableSources: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceName(self: QGeoSatelliteInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoSatelliteInfoSource_SourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeosatelliteinfosource.SourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetUpdateInterval(self: QGeoSatelliteInfoSource, msec: i32) void {
        qtc.QGeoSatelliteInfoSource_SetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, msec: i32) callconv(.c) void `
    ///
    pub fn OnSetUpdateInterval(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnSetUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUpdateInterval` instead
    ///
    pub const QBaseSetUpdateInterval = SuperSetUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SuperSetUpdateInterval(self: QGeoSatelliteInfoSource, msec: i32) void {
        qtc.QGeoSatelliteInfoSource_SuperSetUpdateInterval(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#updateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn UpdateInterval(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_UpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn MinimumUpdateInterval(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_MinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMinimumUpdateInterval(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoSatelliteInfoSource_OnMinimumUpdateInterval(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumUpdateInterval` instead
    ///
    pub const QBaseMinimumUpdateInterval = SuperMinimumUpdateInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SuperMinimumUpdateInterval(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_SuperMinimumUpdateInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfosource_enums.Error `
    ///
    pub fn Error(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnError(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoSatelliteInfoSource_OnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperError` instead
    ///
    pub const QBaseError = SuperError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SuperError(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_SuperError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetBackendProperty(self: QGeoSatelliteInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoSatelliteInfoSource_SetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, name: [*:0]const u8, value: QVariant) callconv(.c) bool `
    ///
    pub fn OnSetBackendProperty(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, [*:0]const u8, QVariant) callconv(.c) bool) void {
        qtc.QGeoSatelliteInfoSource_OnSetBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBackendProperty` instead
    ///
    pub const QBaseSetBackendProperty = SuperSetBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetBackendProperty(self: QGeoSatelliteInfoSource, name: []const u8, value: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QGeoSatelliteInfoSource_SuperSetBackendProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn BackendProperty(self: QGeoSatelliteInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_BackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, name: [*:0]const u8) callconv(.c) QVariant `
    ///
    pub fn OnBackendProperty(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QGeoSatelliteInfoSource_OnBackendProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBackendProperty` instead
    ///
    pub const QBaseBackendProperty = SuperBackendProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperBackendProperty(self: QGeoSatelliteInfoSource, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_SuperBackendProperty(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn StartUpdates(self: QGeoSatelliteInfoSource) void {
        qtc.QGeoSatelliteInfoSource_StartUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartUpdates(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnStartUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartUpdates` instead
    ///
    pub const QBaseStartUpdates = SuperStartUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SuperStartUpdates(self: QGeoSatelliteInfoSource) void {
        qtc.QGeoSatelliteInfoSource_SuperStartUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn StopUpdates(self: QGeoSatelliteInfoSource) void {
        qtc.QGeoSatelliteInfoSource_StopUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopUpdates(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnStopUpdates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStopUpdates` instead
    ///
    pub const QBaseStopUpdates = SuperStopUpdates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SuperStopUpdates(self: QGeoSatelliteInfoSource) void {
        qtc.QGeoSatelliteInfoSource_SuperStopUpdates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn RequestUpdate(self: QGeoSatelliteInfoSource, timeout: i32) void {
        qtc.QGeoSatelliteInfoSource_RequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, timeout: i32) callconv(.c) void `
    ///
    pub fn OnRequestUpdate(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnRequestUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRequestUpdate` instead
    ///
    pub const QBaseRequestUpdate = SuperRequestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SuperRequestUpdate(self: QGeoSatelliteInfoSource, timeout: i32) void {
        qtc.QGeoSatelliteInfoSource_SuperRequestUpdate(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` satellites: []QGeoSatelliteInfo `
    ///
    pub fn SatellitesInViewUpdated(self: QGeoSatelliteInfoSource, satellites: []QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInViewUpdated(@ptrCast(self.ptr), satellites_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, satellites: qtc.libqt_list ([]QGeoSatelliteInfo)) callconv(.c) void `
    ///
    pub fn OnSatellitesInViewUpdated(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` satellites: []QGeoSatelliteInfo `
    ///
    pub fn SatellitesInUseUpdated(self: QGeoSatelliteInfoSource, satellites: []QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInUseUpdated(@ptrCast(self.ptr), satellites_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, satellites: qtc.libqt_list ([]QGeoSatelliteInfo)) callconv(.c) void `
    ///
    pub fn OnSatellitesInUseUpdated(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` param1: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn ErrorOccurred(self: QGeoSatelliteInfoSource, param1: i32) void {
        qtc.QGeoSatelliteInfoSource_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, param1: qgeosatelliteinfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, i32) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeosatelliteinfosource.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeosatelliteinfosource.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGeoSatelliteInfoSource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeosatelliteinfosource.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGeoSatelliteInfoSource, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn IsWidgetType(self: QGeoSatelliteInfoSource) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn IsWindowType(self: QGeoSatelliteInfoSource) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn IsQuickItemType(self: QGeoSatelliteInfoSource) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SignalsBlocked(self: QGeoSatelliteInfoSource) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGeoSatelliteInfoSource, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn Thread(self: QGeoSatelliteInfoSource) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGeoSatelliteInfoSource, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGeoSatelliteInfoSource, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGeoSatelliteInfoSource, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGeoSatelliteInfoSource, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGeoSatelliteInfoSource, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGeoSatelliteInfoSource, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgeosatelliteinfosource.Children: Memory allocation failed");
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGeoSatelliteInfoSource, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGeoSatelliteInfoSource, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGeoSatelliteInfoSource, obj: anytype) void {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGeoSatelliteInfoSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn Disconnect3(self: QGeoSatelliteInfoSource) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGeoSatelliteInfoSource, receiver: anytype) bool {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn DumpObjectTree(self: QGeoSatelliteInfoSource) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn DumpObjectInfo(self: QGeoSatelliteInfoSource) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGeoSatelliteInfoSource, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGeoSatelliteInfoSource, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGeoSatelliteInfoSource, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgeosatelliteinfosource.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeosatelliteinfosource.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn BindingStorage(self: QGeoSatelliteInfoSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn BindingStorage2(self: QGeoSatelliteInfoSource) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn Destroyed(self: QGeoSatelliteInfoSource) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn Parent(self: QGeoSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGeoSatelliteInfoSource, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn DeleteLater(self: QGeoSatelliteInfoSource) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGeoSatelliteInfoSource, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGeoSatelliteInfoSource, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGeoSatelliteInfoSource, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGeoSatelliteInfoSource, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGeoSatelliteInfoSource, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGeoSatelliteInfoSource, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGeoSatelliteInfoSource, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGeoSatelliteInfoSource, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QObject) callconv(.c) void) void {
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGeoSatelliteInfoSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoSatelliteInfoSource_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGeoSatelliteInfoSource, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoSatelliteInfoSource_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QEvent) callconv(.c) bool) void {
        qtc.QGeoSatelliteInfoSource_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGeoSatelliteInfoSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoSatelliteInfoSource_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGeoSatelliteInfoSource, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoSatelliteInfoSource_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoSatelliteInfoSource_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGeoSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoSatelliteInfoSource_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGeoSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoSatelliteInfoSource_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGeoSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoSatelliteInfoSource_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGeoSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoSatelliteInfoSource_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QChildEvent) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGeoSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoSatelliteInfoSource_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGeoSatelliteInfoSource, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoSatelliteInfoSource_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QEvent) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGeoSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoSatelliteInfoSource_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGeoSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoSatelliteInfoSource_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGeoSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoSatelliteInfoSource_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGeoSatelliteInfoSource, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoSatelliteInfoSource_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn Sender(self: QGeoSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SuperSender(self: QGeoSatelliteInfoSource) QObject {
        return .{ .ptr = qtc.QGeoSatelliteInfoSource_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoSatelliteInfoSource_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SenderSignalIndex(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn SuperSenderSignalIndex(self: QGeoSatelliteInfoSource) i32 {
        return qtc.QGeoSatelliteInfoSource_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGeoSatelliteInfoSource, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoSatelliteInfoSource_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGeoSatelliteInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoSatelliteInfoSource_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGeoSatelliteInfoSource, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoSatelliteInfoSource_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoSatelliteInfoSource_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGeoSatelliteInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoSatelliteInfoSource_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGeoSatelliteInfoSource, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoSatelliteInfoSource_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoSatelliteInfoSource_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QGeoSatelliteInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGeoSatelliteInfoSource, callback: *const fn (QGeoSatelliteInfoSource, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#dtor.QGeoSatelliteInfoSource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoSatelliteInfoSource `
    ///
    pub fn Delete(self: QGeoSatelliteInfoSource) void {
        qtc.QGeoSatelliteInfoSource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const AccessError: i32 = 0;
        pub const ClosedError: i32 = 1;
        pub const NoError: i32 = 2;
        pub const UnknownSourceError: i32 = -1;
        pub const UpdateTimeoutError: i32 = 3;
    };
};
