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

    /// New constructs a new QPdfPageNavigator object.
    ///
    pub fn New() QPdfPageNavigator {
        return .{ .ptr = qtc.QPdfPageNavigator_new() };
    }

    /// New2 constructs a new QPdfPageNavigator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QPdfPageNavigator {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPdfPageNavigator_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn MetaObject(self: QPdfPageNavigator) QMetaObject {
        return .{ .ptr = qtc.QPdfPageNavigator_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QPdfPageNavigator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPdfPageNavigator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn SuperMetaObject(self: QPdfPageNavigator) QMetaObject {
        return .{ .ptr = qtc.QPdfPageNavigator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPdfPageNavigator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfPageNavigator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPdfPageNavigator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPdfPageNavigator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfPageNavigator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QPdfPageNavigator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfPageNavigator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfPageNavigator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QPdfPageNavigator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfPageNavigator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfpagenavigator.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn CurrentPage(self: QPdfPageNavigator) i32 {
        return qtc.QPdfPageNavigator_CurrentPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn CurrentLocation(self: QPdfPageNavigator) QPointF {
        return .{ .ptr = qtc.QPdfPageNavigator_CurrentLocation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn CurrentZoom(self: QPdfPageNavigator) f64 {
        return qtc.QPdfPageNavigator_CurrentZoom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn BackAvailable(self: QPdfPageNavigator) bool {
        return qtc.QPdfPageNavigator_BackAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn ForwardAvailable(self: QPdfPageNavigator) bool {
        return qtc.QPdfPageNavigator_ForwardAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Clear(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` destination: QPdfLink `
    ///
    pub fn Jump(self: QPdfPageNavigator, destination: anytype) void {
        comptime _ = @TypeOf(destination)._is_QPdfLink;
        qtc.QPdfPageNavigator_Jump(@ptrCast(self.ptr), @ptrCast(destination.ptr));
    }

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
    pub fn Jump2(self: QPdfPageNavigator, page: i32, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_Jump2(@ptrCast(self.ptr), @bitCast(page), @ptrCast(location.ptr));
    }

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
    pub fn Update(self: QPdfPageNavigator, page: i32, location: anytype, zoom: f64) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_Update(@ptrCast(self.ptr), @bitCast(page), @ptrCast(location.ptr), @bitCast(zoom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Forward(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Forward(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Back(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Back(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` page: i32 `
    ///
    pub fn CurrentPageChanged(self: QPdfPageNavigator, page: i32) void {
        qtc.QPdfPageNavigator_CurrentPageChanged(@ptrCast(self.ptr), @bitCast(page));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, page: i32) callconv(.c) void `
    ///
    pub fn OnCurrentPageChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, i32) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_CurrentPageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` location: QPointF `
    ///
    pub fn CurrentLocationChanged(self: QPdfPageNavigator, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_CurrentLocationChanged(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, location: QPointF) callconv(.c) void `
    ///
    pub fn OnCurrentLocationChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QPointF) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_CurrentLocationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` zoom: f64 `
    ///
    pub fn CurrentZoomChanged(self: QPdfPageNavigator, zoom: f64) void {
        qtc.QPdfPageNavigator_CurrentZoomChanged(@ptrCast(self.ptr), @bitCast(zoom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, zoom: f64) callconv(.c) void `
    ///
    pub fn OnCurrentZoomChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, f64) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_CurrentZoomChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` available: bool `
    ///
    pub fn BackAvailableChanged(self: QPdfPageNavigator, available: bool) void {
        qtc.QPdfPageNavigator_BackAvailableChanged(@ptrCast(self.ptr), available);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, available: bool) callconv(.c) void `
    ///
    pub fn OnBackAvailableChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, bool) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_BackAvailableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` available: bool `
    ///
    pub fn ForwardAvailableChanged(self: QPdfPageNavigator, available: bool) void {
        qtc.QPdfPageNavigator_ForwardAvailableChanged(@ptrCast(self.ptr), available);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, available: bool) callconv(.c) void `
    ///
    pub fn OnForwardAvailableChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, bool) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_ForwardAvailableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` current: QPdfLink `
    ///
    pub fn Jumped(self: QPdfPageNavigator, current: anytype) void {
        comptime _ = @TypeOf(current)._is_QPdfLink;
        qtc.QPdfPageNavigator_Jumped(@ptrCast(self.ptr), @ptrCast(current.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` callback: *const fn (self: QPdfPageNavigator, current: QPdfLink) callconv(.c) void `
    ///
    pub fn OnJumped(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QPdfLink) callconv(.c) void) void {
        qtc.QPdfPageNavigator_Connect_Jumped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn CurrentLink(self: QPdfPageNavigator) QPdfLink {
        return .{ .ptr = qtc.QPdfPageNavigator_CurrentLink(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCurrentLink(self: QPdfPageNavigator, callback: *const fn () callconv(.c) QPdfLink) void {
        qtc.QPdfPageNavigator_OnCurrentLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentLink` instead
    ///
    pub const QBaseCurrentLink = SuperCurrentLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn SuperCurrentLink(self: QPdfPageNavigator) QPdfLink {
        return .{ .ptr = qtc.QPdfPageNavigator_SuperCurrentLink(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfpagenavigator.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfpagenavigator.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Jump3(self: QPdfPageNavigator, page: i32, location: anytype, zoom: f64) void {
        comptime _ = @TypeOf(location)._is_QPointF;
        qtc.QPdfPageNavigator_Jump3(@ptrCast(self.ptr), @bitCast(page), @ptrCast(location.ptr), @bitCast(zoom));
    }

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
    pub fn ObjectName(self: QPdfPageNavigator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfpagenavigator.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QPdfPageNavigator, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn IsWidgetType(self: QPdfPageNavigator) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn IsWindowType(self: QPdfPageNavigator) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn IsQuickItemType(self: QPdfPageNavigator) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn SignalsBlocked(self: QPdfPageNavigator) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QPdfPageNavigator, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Thread(self: QPdfPageNavigator) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPdfPageNavigator, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QPdfPageNavigator, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QPdfPageNavigator, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QPdfPageNavigator, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QPdfPageNavigator, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QPdfPageNavigator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpdfpagenavigator.Children: Memory allocation failed");
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPdfPageNavigator, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QPdfPageNavigator, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QPdfPageNavigator, obj: anytype) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPdfPageNavigator, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Disconnect3(self: QPdfPageNavigator) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QPdfPageNavigator, receiver: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn DumpObjectTree(self: QPdfPageNavigator) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn DumpObjectInfo(self: QPdfPageNavigator) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QPdfPageNavigator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPdfPageNavigator, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QPdfPageNavigator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpdfpagenavigator.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpdfpagenavigator.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn BindingStorage(self: QPdfPageNavigator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn BindingStorage2(self: QPdfPageNavigator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Destroyed(self: QPdfPageNavigator) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Parent(self: QPdfPageNavigator) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QPdfPageNavigator, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn DeleteLater(self: QPdfPageNavigator) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QPdfPageNavigator, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QPdfPageNavigator, time: i64, timerType: i32) i32 {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPdfPageNavigator, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPdfPageNavigator, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QPdfPageNavigator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPdfPageNavigator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPdfPageNavigator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPdfPageNavigator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QObject) callconv(.c) void) void {
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPdfPageNavigator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPdfPageNavigator_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPdfPageNavigator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPdfPageNavigator_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QEvent) callconv(.c) bool) void {
        qtc.QPdfPageNavigator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPdfPageNavigator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPdfPageNavigator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPdfPageNavigator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPdfPageNavigator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPdfPageNavigator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPdfPageNavigator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPdfPageNavigator_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPdfPageNavigator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPdfPageNavigator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QTimerEvent) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPdfPageNavigator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPdfPageNavigator_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPdfPageNavigator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPdfPageNavigator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QChildEvent) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPdfPageNavigator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPdfPageNavigator_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPdfPageNavigator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPdfPageNavigator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QEvent) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPdfPageNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfPageNavigator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfPageNavigator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QPdfPageNavigator) QObject {
        return .{ .ptr = qtc.QPdfPageNavigator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn SuperSender(self: QPdfPageNavigator) QObject {
        return .{ .ptr = qtc.QPdfPageNavigator_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QPdfPageNavigator, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPdfPageNavigator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QPdfPageNavigator) i32 {
        return qtc.QPdfPageNavigator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    pub fn SuperSenderSignalIndex(self: QPdfPageNavigator) i32 {
        return qtc.QPdfPageNavigator_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QPdfPageNavigator, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfPageNavigator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QPdfPageNavigator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfPageNavigator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPdfPageNavigator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfPageNavigator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPdfPageNavigator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QPdfPageNavigator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfPageNavigator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfPageNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPdfPageNavigator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfPageNavigator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, QMetaMethod) callconv(.c) bool) void {
        qtc.QPdfPageNavigator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QPdfPageNavigator, callback: *const fn (QPdfPageNavigator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#dtor.QPdfPageNavigator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfPageNavigator `
    ///
    pub fn Delete(self: QPdfPageNavigator) void {
        qtc.QPdfPageNavigator_Delete(@ptrCast(self.ptr));
    }
};
