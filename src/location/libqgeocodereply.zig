const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGeoLocation = @import("libqt6").QGeoLocation;
const QGeoShape = @import("libqt6").QGeoShape;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgeocodereply_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html)
pub const QGeoCodeReply = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoCodeReply,

    pub const _is_QGeoCodeReply = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoCodeReply object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn new(errorVal: i32, _errorString: []const u8) QGeoCodeReply {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        return .{ .ptr = qtc.QGeoCodeReply_new(@bitCast(errorVal), errorString_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoCodeReply object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(errorVal: i32, _errorString: []const u8, _parent: anytype) QGeoCodeReply {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGeoCodeReply_new2(@bitCast(errorVal), errorString_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn metaObject(self: QGeoCodeReply) QMetaObject {
        return .{ .ptr = qtc.QGeoCodeReply_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGeoCodeReply, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGeoCodeReply_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn superMetaObject(self: QGeoCodeReply) QMetaObject {
        return .{ .ptr = qtc.QGeoCodeReply_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGeoCodeReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoCodeReply_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGeoCodeReply_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGeoCodeReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGeoCodeReply_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGeoCodeReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoCodeReply_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGeoCodeReply_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGeoCodeReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGeoCodeReply_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCodeReply.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn isFinished(self: QGeoCodeReply) bool {
        return qtc.QGeoCodeReply_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ## Returns:
    ///
    /// ` qgeocodereply_enums.Error `
    ///
    pub fn error0(self: QGeoCodeReply) i32 {
        return qtc.QGeoCodeReply_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QGeoCodeReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoCodeReply_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCodeReply.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn viewport(self: QGeoCodeReply) QGeoShape {
        return .{ .ptr = qtc.QGeoCodeReply_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `locations` instead
    ///
    pub const Locations = locations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#locations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locations(self: QGeoCodeReply, allocator: std.mem.Allocator) []QGeoLocation {
        const _arr: qtc.libqt_list = qtc.QGeoCodeReply_Locations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGeoLocation, _arr.len) catch @panic("QGeoCodeReply.locations: Memory allocation failed");
        const _data_val: [*]QtC.QGeoLocation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `limit` instead
    ///
    pub const Limit = limit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn limit(self: QGeoCodeReply) isize {
        return qtc.QGeoCodeReply_Limit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn offset(self: QGeoCodeReply) isize {
        return qtc.QGeoCodeReply_Offset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn abort(self: QGeoCodeReply) void {
        qtc.QGeoCodeReply_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAbort` instead
    ///
    pub const OnAbort = onAbort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAbort(self: QGeoCodeReply, callback: *const fn () callconv(.c) void) void {
        qtc.QGeoCodeReply_OnAbort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAbort` instead
    ///
    pub const SuperAbort = superAbort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn superAbort(self: QGeoCodeReply) void {
        qtc.QGeoCodeReply_SuperAbort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn finished(self: QGeoCodeReply) void {
        qtc.QGeoCodeReply_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aborted` instead
    ///
    pub const Aborted = aborted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#aborted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn aborted(self: QGeoCodeReply) void {
        qtc.QGeoCodeReply_Aborted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAborted` instead
    ///
    pub const OnAborted = onAborted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#aborted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply) callconv(.c) void `
    ///
    pub fn onAborted(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_Aborted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    pub fn errorOccurred(self: QGeoCodeReply, errorVal: i32) void {
        qtc.QGeoCodeReply_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, errorVal: qgeocodereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, i32) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setError(self: QGeoCodeReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QGeoCodeReply_SetError(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, errorVal: qgeocodereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetError(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetError(self: QGeoCodeReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QGeoCodeReply_SuperSetError(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `setFinished` instead
    ///
    pub const SetFinished = setFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _finished: bool `
    ///
    pub fn setFinished(self: QGeoCodeReply, _finished: bool) void {
        qtc.QGeoCodeReply_SetFinished(@ptrCast(self.ptr), _finished);
    }

    /// ### DEPRECATED: Use `onSetFinished` instead
    ///
    pub const OnSetFinished = onSetFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, finished: bool) callconv(.c) void `
    ///
    pub fn onSetFinished(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, bool) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFinished` instead
    ///
    pub const SuperSetFinished = superSetFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _finished: bool `
    ///
    pub fn superSetFinished(self: QGeoCodeReply, _finished: bool) void {
        qtc.QGeoCodeReply_SuperSetFinished(@ptrCast(self.ptr), _finished);
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _viewport: QGeoShape `
    ///
    pub fn setViewport(self: QGeoCodeReply, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QGeoShape;
        qtc.QGeoCodeReply_SetViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `onSetViewport` instead
    ///
    pub const OnSetViewport = onSetViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, viewport: QGeoShape) callconv(.c) void `
    ///
    pub fn onSetViewport(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QGeoShape) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetViewport` instead
    ///
    pub const SuperSetViewport = superSetViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _viewport: QGeoShape `
    ///
    pub fn superSetViewport(self: QGeoCodeReply, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QGeoShape;
        qtc.QGeoCodeReply_SuperSetViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `addLocation` instead
    ///
    pub const AddLocation = addLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` location: QGeoLocation `
    ///
    pub fn addLocation(self: QGeoCodeReply, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QGeoLocation;
        qtc.QGeoCodeReply_AddLocation(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### DEPRECATED: Use `onAddLocation` instead
    ///
    pub const OnAddLocation = onAddLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, location: QGeoLocation) callconv(.c) void `
    ///
    pub fn onAddLocation(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QGeoLocation) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnAddLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddLocation` instead
    ///
    pub const SuperAddLocation = superAddLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` location: QGeoLocation `
    ///
    pub fn superAddLocation(self: QGeoCodeReply, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QGeoLocation;
        qtc.QGeoCodeReply_SuperAddLocation(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### DEPRECATED: Use `setLocations` instead
    ///
    pub const SetLocations = setLocations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _locations: []QGeoLocation `
    ///
    pub fn setLocations(self: QGeoCodeReply, _locations: []QGeoLocation) void {
        const locations_list = qtc.libqt_list{
            .len = _locations.len,
            .data = @ptrCast(_locations.ptr),
        };
        qtc.QGeoCodeReply_SetLocations(@ptrCast(self.ptr), locations_list);
    }

    /// ### DEPRECATED: Use `onSetLocations` instead
    ///
    pub const OnSetLocations = onSetLocations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, locations: qtc.libqt_list ([]QGeoLocation)) callconv(.c) void `
    ///
    pub fn onSetLocations(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetLocations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLocations` instead
    ///
    pub const SuperSetLocations = superSetLocations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _locations: []QGeoLocation `
    ///
    pub fn superSetLocations(self: QGeoCodeReply, _locations: []QGeoLocation) void {
        const locations_list = qtc.libqt_list{
            .len = _locations.len,
            .data = @ptrCast(_locations.ptr),
        };
        qtc.QGeoCodeReply_SuperSetLocations(@ptrCast(self.ptr), locations_list);
    }

    /// ### DEPRECATED: Use `setLimit` instead
    ///
    pub const SetLimit = setLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _limit: isize `
    ///
    pub fn setLimit(self: QGeoCodeReply, _limit: isize) void {
        qtc.QGeoCodeReply_SetLimit(@ptrCast(self.ptr), @bitCast(_limit));
    }

    /// ### DEPRECATED: Use `onSetLimit` instead
    ///
    pub const OnSetLimit = onSetLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, limit: isize) callconv(.c) void `
    ///
    pub fn onSetLimit(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, isize) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetLimit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLimit` instead
    ///
    pub const SuperSetLimit = superSetLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _limit: isize `
    ///
    pub fn superSetLimit(self: QGeoCodeReply, _limit: isize) void {
        qtc.QGeoCodeReply_SuperSetLimit(@ptrCast(self.ptr), @bitCast(_limit));
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _offset: isize `
    ///
    pub fn setOffset(self: QGeoCodeReply, _offset: isize) void {
        qtc.QGeoCodeReply_SetOffset(@ptrCast(self.ptr), @bitCast(_offset));
    }

    /// ### DEPRECATED: Use `onSetOffset` instead
    ///
    pub const OnSetOffset = onSetOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, offset: isize) callconv(.c) void `
    ///
    pub fn onSetOffset(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, isize) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnSetOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOffset` instead
    ///
    pub const SuperSetOffset = superSetOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` _offset: isize `
    ///
    pub fn superSetOffset(self: QGeoCodeReply, _offset: isize) void {
        qtc.QGeoCodeReply_SuperSetOffset(@ptrCast(self.ptr), @bitCast(_offset));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCodeReply.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCodeReply.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorOccurred2` instead
    ///
    pub const ErrorOccurred2 = errorOccurred2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` errorVal: qgeocodereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred2(self: QGeoCodeReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QGeoCodeReply_ErrorOccurred2(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred2` instead
    ///
    pub const OnErrorOccurred2 = onErrorOccurred2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, errorVal: qgeocodereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred2(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QGeoCodeReply_Connect_ErrorOccurred2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGeoCodeReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoCodeReply.objectName: Memory allocation failed");
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGeoCodeReply, name: []const u8) void {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn isWidgetType(self: QGeoCodeReply) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn isWindowType(self: QGeoCodeReply) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn isQuickItemType(self: QGeoCodeReply) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn signalsBlocked(self: QGeoCodeReply) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGeoCodeReply, b: bool) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn thread(self: QGeoCodeReply) QThread {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGeoCodeReply, _thread: anytype) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGeoCodeReply, interval: i32) i32 {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGeoCodeReply, time: i64) i32 {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGeoCodeReply, id: i32) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGeoCodeReply, id: i32) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGeoCodeReply, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGeoCodeReply.children: Memory allocation failed");
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGeoCodeReply, _parent: anytype) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGeoCodeReply, filterObj: anytype) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGeoCodeReply, obj: anytype) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGeoCodeReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn disconnect3(self: QGeoCodeReply) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGeoCodeReply, receiver: anytype) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn dumpObjectTree(self: QGeoCodeReply) void {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn dumpObjectInfo(self: QGeoCodeReply) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGeoCodeReply, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGeoCodeReply, name: [:0]const u8) QVariant {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGeoCodeReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGeoCodeReply.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGeoCodeReply.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn bindingStorage(self: QGeoCodeReply) QBindingStorage {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn bindingStorage2(self: QGeoCodeReply) QBindingStorage {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn destroyed(self: QGeoCodeReply) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply) callconv(.c) void) void {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn parent(self: QGeoCodeReply) QObject {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGeoCodeReply, classname: [:0]const u8) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn deleteLater(self: QGeoCodeReply) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGeoCodeReply, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGeoCodeReply, time: i64, timerType: i32) i32 {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGeoCodeReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGeoCodeReply, signal: [:0]const u8) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGeoCodeReply, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGeoCodeReply, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGeoCodeReply, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGeoCodeReply, param1: anytype) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QObject) callconv(.c) void) void {
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGeoCodeReply, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoCodeReply_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGeoCodeReply, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoCodeReply_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QEvent) callconv(.c) bool) void {
        qtc.QGeoCodeReply_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGeoCodeReply, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoCodeReply_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGeoCodeReply, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGeoCodeReply_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGeoCodeReply_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGeoCodeReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoCodeReply_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGeoCodeReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGeoCodeReply_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QTimerEvent) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGeoCodeReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoCodeReply_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGeoCodeReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGeoCodeReply_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QChildEvent) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGeoCodeReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoCodeReply_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGeoCodeReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGeoCodeReply_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QEvent) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGeoCodeReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodeReply_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGeoCodeReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodeReply_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGeoCodeReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodeReply_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGeoCodeReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGeoCodeReply_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QMetaMethod) callconv(.c) void) void {
        qtc.QGeoCodeReply_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn sender(self: QGeoCodeReply) QObject {
        return .{ .ptr = qtc.QGeoCodeReply_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn superSender(self: QGeoCodeReply) QObject {
        return .{ .ptr = qtc.QGeoCodeReply_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGeoCodeReply, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGeoCodeReply_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn senderSignalIndex(self: QGeoCodeReply) i32 {
        return qtc.QGeoCodeReply_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    pub fn superSenderSignalIndex(self: QGeoCodeReply) i32 {
        return qtc.QGeoCodeReply_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGeoCodeReply, callback: *const fn () callconv(.c) i32) void {
        qtc.QGeoCodeReply_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGeoCodeReply, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoCodeReply_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGeoCodeReply, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGeoCodeReply_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGeoCodeReply_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGeoCodeReply, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoCodeReply_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGeoCodeReply, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGeoCodeReply_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGeoCodeReply`
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, QMetaMethod) callconv(.c) bool) void {
        qtc.QGeoCodeReply_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGeoCodeReply `
    ///
    /// ` callback: *const fn (self: QGeoCodeReply, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGeoCodeReply, callback: *const fn (QGeoCodeReply, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#dtor.QGeoCodeReply)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoCodeReply `
    ///
    pub fn delete(self: QGeoCodeReply) void {
        qtc.QGeoCodeReply_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const EngineNotSetError: i32 = 1;
        pub const CommunicationError: i32 = 2;
        pub const ParseError: i32 = 3;
        pub const UnsupportedOptionError: i32 = 4;
        pub const CombinationError: i32 = 5;
        pub const UnknownError: i32 = 6;
    };
};
