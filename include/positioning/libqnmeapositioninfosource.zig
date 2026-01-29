const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeopositioninfosource_enums = @import("libqgeopositioninfosource.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnmeapositioninfosource_enums = enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html)
pub const qnmeapositioninfosource = struct {
    /// New constructs a new QNmeaPositionInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` updateMode: qnmeapositioninfosource_enums.UpdateMode `
    ///
    pub fn New(updateMode: i32) QtC.QNmeaPositionInfoSource {
        return qtc.QNmeaPositionInfoSource_new(@intCast(updateMode));
    }

    /// New2 constructs a new QNmeaPositionInfoSource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` updateMode: qnmeapositioninfosource_enums.UpdateMode `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(updateMode: i32, parent: ?*anyopaque) QtC.QNmeaPositionInfoSource {
        return qtc.QNmeaPositionInfoSource_new2(@intCast(updateMode), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNmeaPositionInfoSource_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QNmeaPositionInfoSource_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNmeaPositionInfoSource_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaPositionInfoSource_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNmeaPositionInfoSource_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUserEquivalentRangeError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` uere: f64 `
    ///
    pub fn SetUserEquivalentRangeError(self: ?*anyopaque, uere: f64) void {
        qtc.QNmeaPositionInfoSource_SetUserEquivalentRangeError(@ptrCast(self), @floatCast(uere));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#userEquivalentRangeError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn UserEquivalentRangeError(self: ?*anyopaque) f64 {
        return qtc.QNmeaPositionInfoSource_UserEquivalentRangeError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#updateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qnmeapositioninfosource_enums.UpdateMode `
    ///
    pub fn UpdateMode(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_UpdateMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` source: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_SetDevice(@ptrCast(self), @ptrCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QNmeaPositionInfoSource_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetUpdateInterval(self: ?*anyopaque, msec: i32) void {
        qtc.QNmeaPositionInfoSource_SetUpdateInterval(@ptrCast(self), @intCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, msec: i32) callconv(.c) void `
    ///
    pub fn OnSetUpdateInterval(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetUpdateInterval(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` msec: i32 `
    ///
    pub fn QBaseSetUpdateInterval(self: ?*anyopaque, msec: i32) void {
        qtc.QNmeaPositionInfoSource_QBaseSetUpdateInterval(@ptrCast(self), @intCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn LastKnownPosition(self: ?*anyopaque, fromSatellitePositioningMethodsOnly: bool) QtC.QGeoPositionInfo {
        return qtc.QNmeaPositionInfoSource_LastKnownPosition(@ptrCast(self), fromSatellitePositioningMethodsOnly);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, fromSatellitePositioningMethodsOnly: bool) callconv(.c) QtC.QGeoPositionInfo `
    ///
    pub fn OnLastKnownPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) QtC.QGeoPositionInfo) void {
        qtc.QNmeaPositionInfoSource_OnLastKnownPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` fromSatellitePositioningMethodsOnly: bool `
    ///
    pub fn QBaseLastKnownPosition(self: ?*anyopaque, fromSatellitePositioningMethodsOnly: bool) QtC.QGeoPositionInfo {
        return qtc.QNmeaPositionInfoSource_QBaseLastKnownPosition(@ptrCast(self), fromSatellitePositioningMethodsOnly);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn SupportedPositioningMethods(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_SupportedPositioningMethods(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedPositioningMethods(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnSupportedPositioningMethods(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn QBaseSupportedPositioningMethods(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_QBaseSupportedPositioningMethods(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn MinimumUpdateInterval(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_MinimumUpdateInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMinimumUpdateInterval(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnMinimumUpdateInterval(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QBaseMinimumUpdateInterval(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_QBaseMinimumUpdateInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeopositioninfosource_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnError(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` qgeopositioninfosource_enums.Error `
    ///
    pub fn QBaseError(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_QBaseError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn StartUpdates(self: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_StartUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartUpdates(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnStartUpdates(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QBaseStartUpdates(self: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseStartUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn StopUpdates(self: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_StopUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopUpdates(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnStopUpdates(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QBaseStopUpdates(self: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseStopUpdates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn RequestUpdate(self: ?*anyopaque, timeout: i32) void {
        qtc.QNmeaPositionInfoSource_RequestUpdate(@ptrCast(self), @intCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, timeout: i32) callconv(.c) void `
    ///
    pub fn OnRequestUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnRequestUpdate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` timeout: i32 `
    ///
    pub fn QBaseRequestUpdate(self: ?*anyopaque, timeout: i32) void {
        qtc.QNmeaPositionInfoSource_QBaseRequestUpdate(@ptrCast(self), @intCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` posInfo: QtC.QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn ParsePosInfoFromNmeaData(self: ?*anyopaque, data: [:0]const u8, size: i32, posInfo: ?*anyopaque, hasFix: *bool) bool {
        const data_Cstring = data.ptr;
        return qtc.QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(@ptrCast(self), data_Cstring, @intCast(size), @ptrCast(posInfo), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, data: [*:0]const u8, size: i32, posInfo: QtC.QGeoPositionInfo, hasFix: *bool) callconv(.c) bool `
    ///
    pub fn OnParsePosInfoFromNmeaData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, ?*anyopaque, *bool) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` posInfo: QtC.QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn QBaseParsePosInfoFromNmeaData(self: ?*anyopaque, data: [:0]const u8, size: i32, posInfo: ?*anyopaque, hasFix: *bool) bool {
        const data_Cstring = data.ptr;
        return qtc.QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData(@ptrCast(self), data_Cstring, @intCast(size), @ptrCast(posInfo), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` data: []const u8 `
    ///
    /// ` posInfo: QtC.QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn ParsePosInfoFromNmeaData2(self: ?*anyopaque, data: []const u8, posInfo: ?*anyopaque, hasFix: *bool) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(@ptrCast(self), data_str, @ptrCast(posInfo), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, data: [*:0]const u8, posInfo: QtC.QGeoPositionInfo, hasFix: *bool) callconv(.c) bool `
    ///
    pub fn OnParsePosInfoFromNmeaData2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, *bool) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` data: []const u8 `
    ///
    /// ` posInfo: QtC.QGeoPositionInfo `
    ///
    /// ` hasFix: *bool `
    ///
    pub fn QBaseParsePosInfoFromNmeaData2(self: ?*anyopaque, data: []const u8, posInfo: ?*anyopaque, hasFix: *bool) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData2(@ptrCast(self), data_str, @ptrCast(posInfo), @ptrCast(hasFix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` positionError: qgeopositioninfosource_enums.Error `
    ///
    pub fn SetError(self: ?*anyopaque, positionError: i32) void {
        qtc.QNmeaPositionInfoSource_SetError(@ptrCast(self), @intCast(positionError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, positionError: qgeopositioninfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` positionError: qgeopositioninfosource_enums.Error `
    ///
    pub fn QBaseSetError(self: ?*anyopaque, positionError: i32) void {
        qtc.QNmeaPositionInfoSource_QBaseSetError(@ptrCast(self), @intCast(positionError));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnmeapositioninfosource.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn UpdateInterval(self: ?*anyopaque) i32 {
        return qtc.QGeoPositionInfoSource_UpdateInterval(@ptrCast(self));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#preferredPositioningMethods)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn PreferredPositioningMethods(self: ?*anyopaque) i32 {
        return qtc.QGeoPositionInfoSource_PreferredPositioningMethods(@ptrCast(self));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#sourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoPositionInfoSource_SourceName(@ptrCast(self));
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
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateDefaultSource(parent: ?*anyopaque) QtC.QGeoPositionInfoSource {
        return qtc.QGeoPositionInfoSource_CreateDefaultSource(@ptrCast(parent));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreateDefaultSource2(parameters: map_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QGeoPositionInfoSource {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoPositionInfoSource_CreateDefaultSource2(parameters_map, @ptrCast(parent));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateSource(sourceName: []const u8, parent: ?*anyopaque) QtC.QGeoPositionInfoSource {
        const sourceName_str = qtc.libqt_string{
            .len = sourceName.len,
            .data = sourceName.ptr,
        };
        return qtc.QGeoPositionInfoSource_CreateSource(sourceName_str, @ptrCast(parent));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceName: []const u8 `
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreateSource2(sourceName: []const u8, parameters: map_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QGeoPositionInfoSource {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoPositionInfoSource_CreateSource2(sourceName_str, parameters_map, @ptrCast(parent));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#availableSources)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSources(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QGeoPositionInfoSource_AvailableSources();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` update: QtC.QGeoPositionInfo `
    ///
    pub fn PositionUpdated(self: ?*anyopaque, update: ?*anyopaque) void {
        qtc.QGeoPositionInfoSource_PositionUpdated(@ptrCast(self), @ptrCast(update));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, update: QtC.QGeoPositionInfo) callconv(.c) void `
    ///
    pub fn OnPositionUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_PositionUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` param1: qgeopositioninfosource_enums.Error `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QGeoPositionInfoSource_ErrorOccurred(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, param1: qgeopositioninfosource_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn SupportedPositioningMethodsChanged(self: ?*anyopaque) void {
        qtc.QGeoPositionInfoSource_SupportedPositioningMethodsChanged(@ptrCast(self));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource) callconv(.c) void `
    ///
    pub fn OnSupportedPositioningMethodsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qnmeapositioninfosource.Children: Memory allocation failed");
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
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
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
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
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` methods: flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn SetPreferredPositioningMethods(self: ?*anyopaque, methods: i32) void {
        qtc.QNmeaPositionInfoSource_SetPreferredPositioningMethods(@ptrCast(self), @intCast(methods));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` methods: flag of qgeopositioninfosource_enums.PositioningMethod `
    ///
    pub fn QBaseSetPreferredPositioningMethods(self: ?*anyopaque, methods: i32) void {
        qtc.QNmeaPositionInfoSource_QBaseSetPreferredPositioningMethods(@ptrCast(self), @intCast(methods));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, methods: flag of qgeopositioninfosource_enums.PositioningMethod) callconv(.c) void `
    ///
    pub fn OnSetPreferredPositioningMethods(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnSetPreferredPositioningMethods(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
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
        return qtc.QNmeaPositionInfoSource_SetBackendProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseSetBackendProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaPositionInfoSource_QBaseSetBackendProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) bool `
    ///
    pub fn OnSetBackendProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnSetBackendProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn BackendProperty(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaPositionInfoSource_BackendProperty(@ptrCast(self), name_str);
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseBackendProperty(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNmeaPositionInfoSource_QBaseBackendProperty(@ptrCast(self), name_str);
    }

    /// Inherited from QGeoPositionInfoSource
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, name: [*:0]const u8) callconv(.c) QtC.QVariant `
    ///
    pub fn OnBackendProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QVariant) void {
        qtc.QNmeaPositionInfoSource_OnBackendProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaPositionInfoSource_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaPositionInfoSource_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaPositionInfoSource_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNmeaPositionInfoSource_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNmeaPositionInfoSource_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNmeaPositionInfoSource_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNmeaPositionInfoSource_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QNmeaPositionInfoSource_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNmeaPositionInfoSource_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaPositionInfoSource_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNmeaPositionInfoSource_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNmeaPositionInfoSource_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNmeaPositionInfoSource_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNmeaPositionInfoSource_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource`
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNmeaPositionInfoSource_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    /// ` callback: *const fn (self: QtC.QNmeaPositionInfoSource, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#dtor.QNmeaPositionInfoSource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QNmeaPositionInfoSource `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNmeaPositionInfoSource_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#public-types)
pub const enums = struct {
    pub const UpdateMode = enum {
        pub const RealTimeMode: i32 = 1;
        pub const SimulationMode: i32 = 2;
    };
};
