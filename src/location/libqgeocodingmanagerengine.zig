const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoAddress = @import("libqt6").QGeoAddress;
const QGeoCodeReply = @import("libqt6").QGeoCodeReply;
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoShape = @import("libqt6").QGeoShape;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeocodereply_enums = @import("libqgeocodereply.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html)
pub const QGeoCodingManagerEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoCodingManagerEngine,

    pub const _is_QGeoCodingManagerEngine = {};
    pub const _is_QObject = {};

    /// New constructs a new QGeoCodingManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn New(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) QGeoCodingManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeocodingmanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeocodingmanagerengine.New: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoCodingManagerEngine_new(parameters_map) };
    }

    /// New2 constructs a new QGeoCodingManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, parent: anytype) QGeoCodingManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeocodingmanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeocodingmanagerengine.New2: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoCodingManagerEngine_new2(parameters_map, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn MetaObject(self: QGeoCodingManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QGeoCodingManagerEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGeoCodingManagerEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoCodingManagerEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn SuperMetaObject(self: QGeoCodingManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QGeoCodingManagerEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGeoCodingManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoCodingManagerEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoCodingManagerEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGeoCodingManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoCodingManagerEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGeoCodingManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoCodingManagerEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoCodingManagerEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGeoCodingManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoCodingManagerEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodingmanagerengine.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManagerName(self: QGeoCodingManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCodingManagerEngine_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodingmanagerengine.ManagerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn ManagerVersion(self: QGeoCodingManagerEngine) i32 {
        return qtc.QGeoCodingManagerEngine_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` address: QGeoAddress `
    ///
    /// ` bounds: QGeoShape `
    ///
    pub fn Geocode(self: QGeoCodingManagerEngine, address: anytype, bounds: anytype) QGeoCodeReply {
        comptime _ = @TypeOf(address)._is_QGeoAddress;
        comptime _ = @TypeOf(bounds)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCodingManagerEngine_Geocode(@ptrCast(self.ptr), @ptrCast(address.ptr), @ptrCast(bounds.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, address: QGeoAddress, bounds: QGeoShape) callconv(.c) QGeoCodeReply `
    ///
    pub fn OnGeocode(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QGeoAddress, QGeoShape) callconv(.c) QGeoCodeReply) void {
        qtc.QGeoCodingManagerEngine_OnGeocode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeocode` instead
    ///
    pub const QBaseGeocode = SuperGeocode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` address: QGeoAddress `
    ///
    /// ` bounds: QGeoShape `
    ///
    pub fn SuperGeocode(self: QGeoCodingManagerEngine, address: anytype, bounds: anytype) QGeoCodeReply {
        comptime _ = @TypeOf(address)._is_QGeoAddress;
        comptime _ = @TypeOf(bounds)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCodingManagerEngine_SuperGeocode(@ptrCast(self.ptr), @ptrCast(address.ptr), @ptrCast(bounds.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` address: []const u8 `
    ///
    /// ` limit: i32 `
    ///
    /// ` offset: i32 `
    ///
    /// ` bounds: QGeoShape `
    ///
    pub fn Geocode2(self: QGeoCodingManagerEngine, address: []const u8, limit: i32, offset: i32, bounds: anytype) QGeoCodeReply {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        comptime _ = @TypeOf(bounds)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCodingManagerEngine_Geocode2(@ptrCast(self.ptr), address_str, @bitCast(limit), @bitCast(offset), @ptrCast(bounds.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, address: [*:0]const u8, limit: i32, offset: i32, bounds: QGeoShape) callconv(.c) QGeoCodeReply `
    ///
    pub fn OnGeocode2(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, [*:0]const u8, i32, i32, QGeoShape) callconv(.c) QGeoCodeReply) void {
        qtc.QGeoCodingManagerEngine_OnGeocode2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeocode2` instead
    ///
    pub const QBaseGeocode2 = SuperGeocode2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` address: []const u8 `
    ///
    /// ` limit: i32 `
    ///
    /// ` offset: i32 `
    ///
    /// ` bounds: QGeoShape `
    ///
    pub fn SuperGeocode2(self: QGeoCodingManagerEngine, address: []const u8, limit: i32, offset: i32, bounds: anytype) QGeoCodeReply {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        comptime _ = @TypeOf(bounds)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCodingManagerEngine_SuperGeocode2(@ptrCast(self.ptr), address_str, @bitCast(limit), @bitCast(offset), @ptrCast(bounds.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#reverseGeocode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    /// ` bounds: QGeoShape `
    ///
    pub fn ReverseGeocode(self: QGeoCodingManagerEngine, coordinate: anytype, bounds: anytype) QGeoCodeReply {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        comptime _ = @TypeOf(bounds)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCodingManagerEngine_ReverseGeocode(@ptrCast(self.ptr), @ptrCast(coordinate.ptr), @ptrCast(bounds.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#reverseGeocode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, coordinate: QGeoCoordinate, bounds: QGeoShape) callconv(.c) QGeoCodeReply `
    ///
    pub fn OnReverseGeocode(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QGeoCoordinate, QGeoShape) callconv(.c) QGeoCodeReply) void {
        qtc.QGeoCodingManagerEngine_OnReverseGeocode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReverseGeocode` instead
    ///
    pub const QBaseReverseGeocode = SuperReverseGeocode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#reverseGeocode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    /// ` bounds: QGeoShape `
    ///
    pub fn SuperReverseGeocode(self: QGeoCodingManagerEngine, coordinate: anytype, bounds: anytype) QGeoCodeReply {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        comptime _ = @TypeOf(bounds)._is_QGeoShape;
        return .{ .ptr = qtc.QGeoCodingManagerEngine_SuperReverseGeocode(@ptrCast(self.ptr), @ptrCast(coordinate.ptr), @ptrCast(bounds.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QGeoCodingManagerEngine, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QGeoCodingManagerEngine_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Locale(self: QGeoCodingManagerEngine) QLocale {
        return .{ .ptr = qtc.QGeoCodingManagerEngine_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` reply: QGeoCodeReply `
    ///
    pub fn Finished(self: QGeoCodingManagerEngine, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QGeoCodeReply;
        qtc.QGeoCodingManagerEngine_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, reply: QGeoCodeReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QGeoCodeReply) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` reply: QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: QGeoCodingManagerEngine, reply: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(reply)._is_QGeoCodeReply;
        qtc.QGeoCodingManagerEngine_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, reply: QGeoCodeReply, errorVal: qgeocodereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QGeoCodeReply, i32) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodingmanagerengine.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodingmanagerengine.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` reply: QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred3(self: QGeoCodingManagerEngine, reply: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(reply)._is_QGeoCodeReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoCodingManagerEngine_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(reply.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, reply: QGeoCodeReply, errorVal: qgeocodereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred3(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QGeoCodeReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGeoCodingManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodingmanagerengine.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGeoCodingManagerEngine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn IsWidgetType(self: QGeoCodingManagerEngine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn IsWindowType(self: QGeoCodingManagerEngine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn IsQuickItemType(self: QGeoCodingManagerEngine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn SignalsBlocked(self: QGeoCodingManagerEngine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGeoCodingManagerEngine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Thread(self: QGeoCodingManagerEngine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGeoCodingManagerEngine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGeoCodingManagerEngine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGeoCodingManagerEngine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGeoCodingManagerEngine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGeoCodingManagerEngine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGeoCodingManagerEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgeocodingmanagerengine.Children: Memory allocation failed");
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGeoCodingManagerEngine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGeoCodingManagerEngine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGeoCodingManagerEngine, obj: anytype) void {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGeoCodingManagerEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Disconnect3(self: QGeoCodingManagerEngine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGeoCodingManagerEngine, receiver: anytype) bool {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn DumpObjectTree(self: QGeoCodingManagerEngine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn DumpObjectInfo(self: QGeoCodingManagerEngine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGeoCodingManagerEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGeoCodingManagerEngine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGeoCodingManagerEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgeocodingmanagerengine.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeocodingmanagerengine.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn BindingStorage(self: QGeoCodingManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn BindingStorage2(self: QGeoCodingManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Destroyed(self: QGeoCodingManagerEngine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Parent(self: QGeoCodingManagerEngine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGeoCodingManagerEngine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn DeleteLater(self: QGeoCodingManagerEngine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGeoCodingManagerEngine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGeoCodingManagerEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGeoCodingManagerEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGeoCodingManagerEngine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGeoCodingManagerEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGeoCodingManagerEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGeoCodingManagerEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGeoCodingManagerEngine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QObject) callconv(.c) void) void {
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGeoCodingManagerEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoCodingManagerEngine_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGeoCodingManagerEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoCodingManagerEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QEvent) callconv(.c) bool) void {
        qtc.QGeoCodingManagerEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGeoCodingManagerEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoCodingManagerEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGeoCodingManagerEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGeoCodingManagerEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoCodingManagerEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGeoCodingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoCodingManagerEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGeoCodingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGeoCodingManagerEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGeoCodingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoCodingManagerEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGeoCodingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGeoCodingManagerEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QChildEvent) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGeoCodingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoCodingManagerEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGeoCodingManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGeoCodingManagerEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QEvent) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGeoCodingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodingManagerEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGeoCodingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodingManagerEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGeoCodingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodingManagerEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGeoCodingManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodingManagerEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoCodingManagerEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Sender(self: QGeoCodingManagerEngine) QObject {
        return .{ .ptr = qtc.QGeoCodingManagerEngine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn SuperSender(self: QGeoCodingManagerEngine) QObject {
        return .{ .ptr = qtc.QGeoCodingManagerEngine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGeoCodingManagerEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoCodingManagerEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn SenderSignalIndex(self: QGeoCodingManagerEngine) i32 {
        return qtc.QGeoCodingManagerEngine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn SuperSenderSignalIndex(self: QGeoCodingManagerEngine) i32 {
        return qtc.QGeoCodingManagerEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGeoCodingManagerEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoCodingManagerEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGeoCodingManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoCodingManagerEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGeoCodingManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoCodingManagerEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoCodingManagerEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGeoCodingManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoCodingManagerEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGeoCodingManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoCodingManagerEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine`
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoCodingManagerEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    /// ` callback: *const fn (self: QGeoCodingManagerEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGeoCodingManagerEngine, callback: *const fn (QGeoCodingManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#dtor.QGeoCodingManagerEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoCodingManagerEngine `
    ///
    pub fn Delete(self: QGeoCodingManagerEngine) void {
        qtc.QGeoCodingManagerEngine_Delete(@ptrCast(self.ptr));
    }
};
