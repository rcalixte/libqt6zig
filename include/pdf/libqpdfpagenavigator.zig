const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPdfLink = @import("libqt6").QPdfLink;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html)
pub const QPdfPageNavigator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfPageNavigator,

    pub const _is_QPdfPageNavigator = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfPageNavigator object in C++ memory
    ///
    pub fn new() QPdfPageNavigator {
        return .{ .ptr = qtc.QPdfPageNavigator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPdfPageNavigator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QPdfPageNavigator {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPdfPageNavigator_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn metaObject(self: QPdfPageNavigator) QMetaObject {
        return .{ .ptr = qtc.QPdfPageNavigator_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPdfPageNavigator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPdfPageNavigator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn superMetaObject(self: QPdfPageNavigator) QMetaObject {
        return .{ .ptr = qtc.QPdfPageNavigator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPdfPageNavigator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfPageNavigator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPdfPageNavigator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPdfPageNavigator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfPageNavigator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QPdfPageNavigator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfPageNavigator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfPageNavigator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QPdfPageNavigator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfPageNavigator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfPageNavigator.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentPage` instead
    ///
    pub const CurrentPage = currentPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn currentPage(self: QPdfPageNavigator) i32 {
        return qtc.QPdfPageNavigator_CurrentPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentLocation` instead
    ///
    pub const CurrentLocation = currentLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn currentLocation(self: QPdfPageNavigator) QPointF {
        return .{ .ptr = qtc.QPdfPageNavigator_CurrentLocation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentZoom` instead
    ///
    pub const CurrentZoom = currentZoom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn currentZoom(self: QPdfPageNavigator) f64 {
        return qtc.QPdfPageNavigator_CurrentZoom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `backAvailable` instead
    ///
    pub const BackAvailable = backAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn backAvailable(self: QPdfPageNavigator) bool {
        return qtc.QPdfPageNavigator_BackAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forwardAvailable` instead
    ///
    pub const ForwardAvailable = forwardAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn forwardAvailable(self: QPdfPageNavigator) bool {
        return qtc.QPdfPageNavigator_ForwardAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn clear(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `jump` instead
    ///
    pub const Jump = jump;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` destination: QPdfLink `
    ///
    pub fn jump(self: QPdfPageNavigator, destination: anytype) void {
        comptime _ = @TypeOf(destination)._is_QPdfLink;
        qtc.QPdfPageNavigator_Jump(@ptrCast(self.ptr), @ptrCast(destination.ptr));
    }

    /// ### DEPRECATED: Use `jump2` instead
    ///
    pub const Jump2 = jump2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` page: i32 `
    ///
    /// ` location: QPointF `
    ///
    pub fn jump2(self: QPdfPageNavigator, page: i32, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_Jump2(@ptrCast(self.ptr), @bitCast(page), @ptrCast(location.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` page: i32 `
    ///
    /// ` location: QPointF `
    ///
    /// ` zoom: f64 `
    ///
    pub fn update(self: QPdfPageNavigator, page: i32, location: anytype, zoom: f64) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_Update(@ptrCast(self.ptr), @bitCast(page), @ptrCast(location.ptr), @bitCast(zoom));
    }

    /// ### DEPRECATED: Use `forward` instead
    ///
    pub const Forward = forward;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn forward(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Forward(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `back` instead
    ///
    pub const Back = back;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn back(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Back(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentPageChanged` instead
    ///
    pub const CurrentPageChanged = currentPageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` page: i32 `
    ///
    pub fn currentPageChanged(self: QPdfPageNavigator, page: i32) void {
        qtc.QPdfPageNavigator_CurrentPageChanged(@ptrCast(self.ptr), @bitCast(page));
    }

    /// ### DEPRECATED: Use `onCurrentPageChanged` instead
    ///
    pub const OnCurrentPageChanged = onCurrentPageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, page: i32) callconv(.c) void `
    ///
    pub fn onCurrentPageChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, i32) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_CurrentPageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentLocationChanged` instead
    ///
    pub const CurrentLocationChanged = currentLocationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` location: QPointF `
    ///
    pub fn currentLocationChanged(self: QPdfPageNavigator, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_CurrentLocationChanged(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentLocationChanged` instead
    ///
    pub const OnCurrentLocationChanged = onCurrentLocationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, location: QPointF) callconv(.c) void `
    ///
    pub fn onCurrentLocationChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QPointF) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_CurrentLocationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentZoomChanged` instead
    ///
    pub const CurrentZoomChanged = currentZoomChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` zoom: f64 `
    ///
    pub fn currentZoomChanged(self: QPdfPageNavigator, zoom: f64) void {
        qtc.QPdfPageNavigator_CurrentZoomChanged(@ptrCast(self.ptr), @bitCast(zoom));
    }

    /// ### DEPRECATED: Use `onCurrentZoomChanged` instead
    ///
    pub const OnCurrentZoomChanged = onCurrentZoomChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, zoom: f64) callconv(.c) void `
    ///
    pub fn onCurrentZoomChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, f64) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_CurrentZoomChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backAvailableChanged` instead
    ///
    pub const BackAvailableChanged = backAvailableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` available: bool `
    ///
    pub fn backAvailableChanged(self: QPdfPageNavigator, available: bool) void {
        qtc.QPdfPageNavigator_BackAvailableChanged(@ptrCast(self.ptr), available);
    }

    /// ### DEPRECATED: Use `onBackAvailableChanged` instead
    ///
    pub const OnBackAvailableChanged = onBackAvailableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, available: bool) callconv(.c) void `
    ///
    pub fn onBackAvailableChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, bool) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_BackAvailableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `forwardAvailableChanged` instead
    ///
    pub const ForwardAvailableChanged = forwardAvailableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` available: bool `
    ///
    pub fn forwardAvailableChanged(self: QPdfPageNavigator, available: bool) void {
        qtc.QPdfPageNavigator_ForwardAvailableChanged(@ptrCast(self.ptr), available);
    }

    /// ### DEPRECATED: Use `onForwardAvailableChanged` instead
    ///
    pub const OnForwardAvailableChanged = onForwardAvailableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, available: bool) callconv(.c) void `
    ///
    pub fn onForwardAvailableChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, bool) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_ForwardAvailableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `jumped` instead
    ///
    pub const Jumped = jumped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` current: QPdfLink `
    ///
    pub fn jumped(self: QPdfPageNavigator, current: anytype) void {
        comptime _ = @TypeOf(current)._is_QPdfLink;
        qtc.QPdfPageNavigator_Jumped(@ptrCast(self.ptr), @ptrCast(current.ptr));
    }

    /// ### DEPRECATED: Use `onJumped` instead
    ///
    pub const OnJumped = onJumped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, current: QPdfLink) callconv(.c) void `
    ///
    pub fn onJumped(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QPdfLink) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_Jumped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentLink` instead
    ///
    pub const CurrentLink = currentLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn currentLink(self: QPdfPageNavigator) QPdfLink {
        return .{ .ptr = qtc.QPdfPageNavigator_CurrentLink(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentLink` instead
    ///
    pub const OnCurrentLink = onCurrentLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn () callconv(.c) QPdfLink `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCurrentLink(self: QPdfPageNavigator, callback: *const fn () callconv(.c) QPdfLink) void {
        qtc.QPdfPageNavigator_OnCurrentLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentLink` instead
    ///
    pub const SuperCurrentLink = superCurrentLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn superCurrentLink(self: QPdfPageNavigator) QPdfLink {
        return .{ .ptr = qtc.QPdfPageNavigator_SuperCurrentLink(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfPageNavigator.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfPageNavigator.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `jump3` instead
    ///
    pub const Jump3 = jump3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` page: i32 `
    ///
    /// ` location: QPointF `
    ///
    /// ` zoom: f64 `
    ///
    pub fn jump3(self: QPdfPageNavigator, page: i32, location: anytype, zoom: f64) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_Jump3(@ptrCast(self.ptr), @bitCast(page), @ptrCast(location.ptr), @bitCast(zoom));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPdfPageNavigator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfPageNavigator.objectName: Memory allocation failed");
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPdfPageNavigator, name: []const u8) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn isWidgetType(self: QPdfPageNavigator) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn isWindowType(self: QPdfPageNavigator) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn isQuickItemType(self: QPdfPageNavigator) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn signalsBlocked(self: QPdfPageNavigator) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPdfPageNavigator, b: bool) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn thread(self: QPdfPageNavigator) QThread {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPdfPageNavigator, _thread: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPdfPageNavigator, interval: i32) i32 {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPdfPageNavigator, time: i64) i32 {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPdfPageNavigator, id: i32) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPdfPageNavigator, id: i32) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPdfPageNavigator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPdfPageNavigator.children: Memory allocation failed");
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPdfPageNavigator, _parent: anytype) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPdfPageNavigator, filterObj: anytype) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPdfPageNavigator, obj: anytype) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPdfPageNavigator, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn disconnect3(self: QPdfPageNavigator) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPdfPageNavigator, receiver: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn dumpObjectTree(self: QPdfPageNavigator) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn dumpObjectInfo(self: QPdfPageNavigator) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPdfPageNavigator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPdfPageNavigator, name: [:0]const u8) QVariant {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPdfPageNavigator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPdfPageNavigator.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPdfPageNavigator.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn bindingStorage(self: QPdfPageNavigator) QBindingStorage {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn bindingStorage2(self: QPdfPageNavigator) QBindingStorage {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn destroyed(self: QPdfPageNavigator) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator) callconv(.c) void) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn parent(self: QPdfPageNavigator) QObject {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPdfPageNavigator, classname: [:0]const u8) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn deleteLater(self: QPdfPageNavigator) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPdfPageNavigator, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPdfPageNavigator, time: i64, timerType: i32) i32 {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPdfPageNavigator, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPdfPageNavigator, signal: [:0]const u8) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPdfPageNavigator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPdfPageNavigator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPdfPageNavigator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPdfPageNavigator, param1: anytype) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QObject) callconv(.c) void) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPdfPageNavigator, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfPageNavigator_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPdfPageNavigator, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfPageNavigator_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QEvent) callconv(.c) bool) void {
        qtc.QPdfPageNavigator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPdfPageNavigator, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfPageNavigator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPdfPageNavigator, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfPageNavigator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPdfPageNavigator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPdfPageNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPdfPageNavigator_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPdfPageNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPdfPageNavigator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QTimerEvent) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPdfPageNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPdfPageNavigator_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPdfPageNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPdfPageNavigator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QChildEvent) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPdfPageNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPdfPageNavigator_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPdfPageNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPdfPageNavigator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QEvent) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn sender(self: QPdfPageNavigator) QObject {
        return .{ .ptr = qtc.QPdfPageNavigator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn superSender(self: QPdfPageNavigator) QObject {
        return .{ .ptr = qtc.QPdfPageNavigator_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPdfPageNavigator, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPdfPageNavigator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn senderSignalIndex(self: QPdfPageNavigator) i32 {
        return qtc.QPdfPageNavigator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn superSenderSignalIndex(self: QPdfPageNavigator) i32 {
        return qtc.QPdfPageNavigator_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPdfPageNavigator, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfPageNavigator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPdfPageNavigator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfPageNavigator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPdfPageNavigator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfPageNavigator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPdfPageNavigator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPdfPageNavigator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfPageNavigator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPdfPageNavigator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfPageNavigator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator`
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QMetaMethod) callconv(.c) bool) void {
        qtc.QPdfPageNavigator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#dtor.QPdfPageNavigator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn delete(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Delete(@ptrCast(self.ptr));
    }
};
