const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeocodereply_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html)
pub const qgeocodereply = struct {
    /// New constructs a new QGeoCodeReply object.
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn New(errorVal: i32, errorString: []const u8) QtC.QGeoCodeReply {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };

        return qtc.QGeoCodeReply_new(@intCast(errorVal), errorString_str);
    }

    /// New2 constructs a new QGeoCodeReply object.
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(errorVal: i32, errorString: []const u8, parent: ?*anyopaque) QtC.QGeoCodeReply {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };

        return qtc.QGeoCodeReply_new2(@intCast(errorVal), errorString_str, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGeoCodeReply_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QGeoCodeReply_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGeoCodeReply_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoCodeReply_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoCodeReply_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoCodeReply_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoCodeReply_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoCodeReply_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoCodeReply_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodereply.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_IsFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ## Returns:
    ///
    /// ` qgeocodereply_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QGeoCodeReply_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCodeReply_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodereply.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Viewport(self: ?*anyopaque) QtC.QGeoShape {
        return qtc.QGeoCodeReply_Viewport(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#locations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGeoLocation {
        const _arr: qtc.libqt_list = qtc.QGeoCodeReply_Locations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGeoLocation, _arr.len) catch @panic("qgeocodereply.Locations: Memory allocation failed");
        const _data: [*]QtC.QGeoLocation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Limit(self: ?*anyopaque) i64 {
        return qtc.QGeoCodeReply_Limit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Offset(self: ?*anyopaque) i64 {
        return qtc.QGeoCodeReply_Offset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Abort(self: ?*anyopaque) void {
        qtc.QGeoCodeReply_Abort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAbort(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGeoCodeReply_OnAbort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn QBaseAbort(self: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseAbort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Finished(self: ?*anyopaque) void {
        qtc.QGeoCodeReply_Finished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#aborted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Aborted(self: ?*anyopaque) void {
        qtc.QGeoCodeReply_Aborted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#aborted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply) callconv(.c) void `
    ///
    pub fn OnAborted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_Aborted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32) void {
        qtc.QGeoCodeReply_ErrorOccurred(@ptrCast(self), @intCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, errorVal: qgeocodereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetError(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoCodeReply_SetError(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, errorVal: qgeocodereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn QBaseSetError(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoCodeReply_QBaseSetError(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` finished: bool `
    ///
    pub fn SetFinished(self: ?*anyopaque, finished: bool) void {
        qtc.QGeoCodeReply_SetFinished(@ptrCast(self), finished);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, finished: bool) callconv(.c) void `
    ///
    pub fn OnSetFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` finished: bool `
    ///
    pub fn QBaseSetFinished(self: ?*anyopaque, finished: bool) void {
        qtc.QGeoCodeReply_QBaseSetFinished(@ptrCast(self), finished);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` viewport: QtC.QGeoShape `
    ///
    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QGeoCodeReply_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, viewport: QtC.QGeoShape) callconv(.c) void `
    ///
    pub fn OnSetViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetViewport(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` viewport: QtC.QGeoShape `
    ///
    pub fn QBaseSetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseSetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` location: QtC.QGeoLocation `
    ///
    pub fn AddLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QGeoCodeReply_AddLocation(@ptrCast(self), @ptrCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, location: QtC.QGeoLocation) callconv(.c) void `
    ///
    pub fn OnAddLocation(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnAddLocation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` location: QtC.QGeoLocation `
    ///
    pub fn QBaseAddLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseAddLocation(@ptrCast(self), @ptrCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` locations: []QtC.QGeoLocation `
    ///
    pub fn SetLocations(self: ?*anyopaque, locations: []QtC.QGeoLocation) void {
        const locations_list = qtc.libqt_list{
            .len = locations.len,
            .data = @ptrCast(locations.ptr),
        };
        qtc.QGeoCodeReply_SetLocations(@ptrCast(self), locations_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, locations: [*]QtC.QGeoLocation) callconv(.c) void `
    ///
    pub fn OnSetLocations(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QGeoLocation) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetLocations(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` locations: []QtC.QGeoLocation `
    ///
    pub fn QBaseSetLocations(self: ?*anyopaque, locations: []QtC.QGeoLocation) void {
        const locations_list = qtc.libqt_list{
            .len = locations.len,
            .data = @ptrCast(locations.ptr),
        };
        qtc.QGeoCodeReply_QBaseSetLocations(@ptrCast(self), locations_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` limit: i64 `
    ///
    pub fn SetLimit(self: ?*anyopaque, limit: i64) void {
        qtc.QGeoCodeReply_SetLimit(@ptrCast(self), @intCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, limit: i64) callconv(.c) void `
    ///
    pub fn OnSetLimit(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetLimit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` limit: i64 `
    ///
    pub fn QBaseSetLimit(self: ?*anyopaque, limit: i64) void {
        qtc.QGeoCodeReply_QBaseSetLimit(@ptrCast(self), @intCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` offset: i64 `
    ///
    pub fn SetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QGeoCodeReply_SetOffset(@ptrCast(self), @intCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, offset: i64) callconv(.c) void `
    ///
    pub fn OnSetOffset(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetOffset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` offset: i64 `
    ///
    pub fn QBaseSetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QGeoCodeReply_QBaseSetOffset(@ptrCast(self), @intCast(offset));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodereply.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodereply.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred2(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QGeoCodeReply_ErrorOccurred2(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, errorVal: qgeocodereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_ErrorOccurred2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeocodereply.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgeocodereply.Children: Memory allocation failed");
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgeocodereply.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgeocodereply.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply) callconv(.c) void `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
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
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGeoCodeReply_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGeoCodeReply_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGeoCodeReply_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGeoCodeReply_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGeoCodeReply_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGeoCodeReply_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGeoCodeReply_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGeoCodeReply_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGeoCodeReply_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGeoCodeReply_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QGeoCodeReply_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGeoCodeReply_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGeoCodeReply_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoCodeReply_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoCodeReply_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoCodeReply_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoCodeReply_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGeoCodeReply_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGeoCodeReply_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QtC.QGeoCodeReply, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#dtor.QGeoCodeReply)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoCodeReply `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoCodeReply_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#public-types)
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const EngineNotSetError: i32 = 1;
        pub const CommunicationError: i32 = 2;
        pub const ParseError: i32 = 3;
        pub const UnsupportedOptionError: i32 = 4;
        pub const CombinationError: i32 = 5;
        pub const UnknownError: i32 = 6;
    };
};
