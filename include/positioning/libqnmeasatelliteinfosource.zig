const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeosatelliteinfo_enums = @import("libqgeosatelliteinfo.zig").enums;
const qgeosatelliteinfosource_enums = @import("libqgeosatelliteinfosource.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnmeasatelliteinfosource_enums = enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html)
pub const qnmeasatelliteinfosource = struct {
    /// New constructs a new QNmeaSatelliteInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    pub fn New(mode: i32) QtC.QNmeaSatelliteInfoSource {
        return qtc.QNmeaSatelliteInfoSource_new(@bitCast(mode));
    }

    /// New2 constructs a new QNmeaSatelliteInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(mode: i32, parent: ?*anyopaque) QtC.QNmeaSatelliteInfoSource {
        return qtc.QNmeaSatelliteInfoSource_new2(@bitCast(mode), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNmeaSatelliteInfoSource_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QNmeaSatelliteInfoSource_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNmeaSatelliteInfoSource_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaSatelliteInfoSource_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaSatelliteInfoSource_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.UpdateMode `
    ///
    pub fn UpdateMode(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_UpdateMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` source: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SetDevice(@ptrCast(self), @ptrCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QNmeaSatelliteInfoSource_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetUpdateInterval(self: ?*anyopaque, msec: i32) void {
        qtc.QNmeaSatelliteInfoSource_SetUpdateInterval(@ptrCast(self), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, msec: i32) callconv(.c) void `
    ///
    pub fn OnSetUpdateInterval(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnSetUpdateInterval(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SuperSetUpdateInterval(self: ?*anyopaque, msec: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperSetUpdateInterval(@ptrCast(self), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn MinimumUpdateInterval(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_MinimumUpdateInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMinimumUpdateInterval(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnMinimumUpdateInterval(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SuperMinimumUpdateInterval(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperMinimumUpdateInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfosource_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnError(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SuperError(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetBackendProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SetBackendProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnSetBackendProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnSetBackendProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperSetBackendProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperSetBackendProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn BackendProperty(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_BackendProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, name: [*:0]const u8) callconv(.c) QtC.QVariant `
    ///
    pub fn OnBackendProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QVariant) void {
        qtc.QNmeaSatelliteInfoSource_OnBackendProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperBackendProperty(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperBackendProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn StartUpdates(self: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_StartUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartUpdates(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnStartUpdates(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SuperStartUpdates(self: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperStartUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn StopUpdates(self: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_StopUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopUpdates(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnStopUpdates(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SuperStopUpdates(self: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperStopUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn RequestUpdate(self: ?*anyopaque, timeout: i32) void {
        qtc.QNmeaSatelliteInfoSource_RequestUpdate(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, timeout: i32) callconv(.c) void `
    ///
    pub fn OnRequestUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnRequestUpdate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SuperRequestUpdate(self: ?*anyopaque, timeout: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperRequestUpdate(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
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
    pub fn ParseSatellitesInUseFromNmea(self: ?*anyopaque, data: [:0]const u8, size: i32, pnrsInUse: []i32) i32 {
        const data_Cstring = data.ptr;
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(@ptrCast(self), data_Cstring, @bitCast(size), pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, data: [*:0]const u8, size: i32, pnrsInUse: qtc.libqt_list ([]i32)) callconv(.c) i32 `
    ///
    pub fn OnParseSatellitesInUseFromNmea(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, qtc.libqt_list) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
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
    pub fn SuperParseSatellitesInUseFromNmea(self: ?*anyopaque, data: [:0]const u8, size: i32, pnrsInUse: []i32) i32 {
        const data_Cstring = data.ptr;
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea(@ptrCast(self), data_Cstring, @bitCast(size), pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` pnrsInUse: []i32 `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn ParseSatellitesInUseFromNmea2(self: ?*anyopaque, data: []u8, pnrsInUse: []i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2(@ptrCast(self), data_str, pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, data: qtc.libqt_string, pnrsInUse: qtc.libqt_list ([]i32)) callconv(.c) i32 `
    ///
    pub fn OnParseSatellitesInUseFromNmea2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, qtc.libqt_list) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` pnrsInUse: []i32 `
    ///
    /// ## Returns:
    ///
    /// ` qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    pub fn SuperParseSatellitesInUseFromNmea2(self: ?*anyopaque, data: []u8, pnrsInUse: []i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const pnrsInUse_list = qtc.libqt_list{
            .len = pnrsInUse.len,
            .data = pnrsInUse.ptr,
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea2(@ptrCast(self), data_str, pnrsInUse_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` infos: []QtC.QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn ParseSatelliteInfoFromNmea(self: ?*anyopaque, data: [:0]const u8, size: i32, infos: []QtC.QGeoSatelliteInfo, system: *i32) i32 {
        const data_Cstring = data.ptr;
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(@ptrCast(self), data_Cstring, @bitCast(size), infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, data: [*:0]const u8, size: i32, infos: qtc.libqt_list ([]QtC.QGeoSatelliteInfo), system: *qgeosatelliteinfo_enums.SatelliteSystem) callconv(.c) i32 `
    ///
    pub fn OnParseSatelliteInfoFromNmea(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, qtc.libqt_list, *i32) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` infos: []QtC.QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn SuperParseSatelliteInfoFromNmea(self: ?*anyopaque, data: [:0]const u8, size: i32, infos: []QtC.QGeoSatelliteInfo, system: *i32) i32 {
        const data_Cstring = data.ptr;
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea(@ptrCast(self), data_Cstring, @bitCast(size), infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` infos: []QtC.QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn ParseSatelliteInfoFromNmea2(self: ?*anyopaque, data: []u8, infos: []QtC.QGeoSatelliteInfo, system: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2(@ptrCast(self), data_str, infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, data: qtc.libqt_string, infos: qtc.libqt_list ([]QtC.QGeoSatelliteInfo), system: *qgeosatelliteinfo_enums.SatelliteSystem) callconv(.c) i32 `
    ///
    pub fn OnParseSatelliteInfoFromNmea2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, qtc.libqt_list, *i32) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` data: []u8 `
    ///
    /// ` infos: []QtC.QGeoSatelliteInfo `
    ///
    /// ` system: *qgeosatelliteinfo_enums.SatelliteSystem `
    ///
    /// ## Returns:
    ///
    /// ` qnmeasatelliteinfosource_enums.SatelliteInfoParseStatus `
    ///
    pub fn SuperParseSatelliteInfoFromNmea2(self: ?*anyopaque, data: []u8, infos: []QtC.QGeoSatelliteInfo, system: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        return qtc.QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea2(@ptrCast(self), data_str, infos_list, @ptrCast(system));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` satelliteError: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SetError(self: ?*anyopaque, satelliteError: i32) void {
        qtc.QNmeaSatelliteInfoSource_SetError(@ptrCast(self), @bitCast(satelliteError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, satelliteError: qgeosatelliteinfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnSetError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` satelliteError: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn SuperSetError(self: ?*anyopaque, satelliteError: i32) void {
        qtc.QNmeaSatelliteInfoSource_SuperSetError(@ptrCast(self), @bitCast(satelliteError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateDefaultSource(parent: ?*anyopaque) QtC.QGeoSatelliteInfoSource {
        return qtc.QGeoSatelliteInfoSource_CreateDefaultSource(@ptrCast(parent));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateSource(sourceName: []const u8, parent: ?*anyopaque) QtC.QGeoSatelliteInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        return qtc.QGeoSatelliteInfoSource_CreateSource(sourceName_str, @ptrCast(parent));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` parameters: arraymap_constu8_qtcqvariant `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreateDefaultSource2(parameters: arraymap_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QGeoSatelliteInfoSource {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoSatelliteInfoSource_CreateDefaultSource2(parameters_map, @ptrCast(parent));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parameters: arraymap_constu8_qtcqvariant `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreateSource2(sourceName: []const u8, parameters: arraymap_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QGeoSatelliteInfoSource {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoSatelliteInfoSource_CreateSource2(sourceName_str, parameters_map, @ptrCast(parent));
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
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoSatelliteInfoSource_SourceName(@ptrCast(self));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn UpdateInterval(self: ?*anyopaque) i32 {
        return qtc.QGeoSatelliteInfoSource_UpdateInterval(@ptrCast(self));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` satellites: []QtC.QGeoSatelliteInfo `
    ///
    pub fn SatellitesInViewUpdated(self: ?*anyopaque, satellites: []QtC.QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInViewUpdated(@ptrCast(self), satellites_list);
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, satellites: qtc.libqt_list ([]QtC.QGeoSatelliteInfo)) callconv(.c) void `
    ///
    pub fn OnSatellitesInViewUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` satellites: []QtC.QGeoSatelliteInfo `
    ///
    pub fn SatellitesInUseUpdated(self: ?*anyopaque, satellites: []QtC.QGeoSatelliteInfo) void {
        const satellites_list = qtc.libqt_list{
            .len = satellites.len,
            .data = @ptrCast(satellites.ptr),
        };
        qtc.QGeoSatelliteInfoSource_SatellitesInUseUpdated(@ptrCast(self), satellites_list);
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, satellites: qtc.libqt_list ([]QtC.QGeoSatelliteInfo)) callconv(.c) void `
    ///
    pub fn OnSatellitesInUseUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` param1: qgeosatelliteinfosource_enums.Error `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QGeoSatelliteInfoSource_ErrorOccurred(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QGeoSatelliteInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, param1: qgeosatelliteinfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGeoSatelliteInfoSource_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qnmeasatelliteinfosource.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaSatelliteInfoSource_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaSatelliteInfoSource_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaSatelliteInfoSource_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaSatelliteInfoSource_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaSatelliteInfoSource_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNmeaSatelliteInfoSource_Sender(@ptrCast(self));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNmeaSatelliteInfoSource_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QNmeaSatelliteInfoSource_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNmeaSatelliteInfoSource_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaSatelliteInfoSource_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaSatelliteInfoSource_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNmeaSatelliteInfoSource_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNmeaSatelliteInfoSource_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNmeaSatelliteInfoSource_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaSatelliteInfoSource_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaSatelliteInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QNmeaSatelliteInfoSource `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QNmeaSatelliteInfoSource_Delete(@ptrCast(self));
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
