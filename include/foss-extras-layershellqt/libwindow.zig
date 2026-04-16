const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const window_enums = enums;

/// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
pub const LayerShellQt__Window = extern struct {
    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.LayerShellQt__Window,

    pub const _is_LayerShellQt__Window = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn MetaObject(self: LayerShellQt__Window) QMetaObject {
        return .{ .ptr = qtc.LayerShellQt__Window_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: LayerShellQt__Window, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.LayerShellQt__Window_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: LayerShellQt__Window, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt__window.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` anchor: flag of window_enums.Anchor `
    ///
    pub fn SetAnchors(self: LayerShellQt__Window, anchor: i32) void {
        qtc.LayerShellQt__Window_SetAnchors(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ## Returns:
    ///
    /// ` flag of window_enums.Anchor `
    ///
    pub fn Anchors(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_Anchors(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` zone: i32 `
    ///
    pub fn SetExclusiveZone(self: LayerShellQt__Window, zone: i32) void {
        qtc.LayerShellQt__Window_SetExclusiveZone(@ptrCast(self.ptr), @bitCast(zone));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn ExclusionZone(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_ExclusionZone(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` edge: window_enums.Anchor `
    ///
    pub fn SetExclusiveEdge(self: LayerShellQt__Window, edge: i32) void {
        qtc.LayerShellQt__Window_SetExclusiveEdge(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ## Returns:
    ///
    /// ` window_enums.Anchor `
    ///
    pub fn ExclusiveEdge(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_ExclusiveEdge(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetMargins(self: LayerShellQt__Window, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.LayerShellQt__Window_SetMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn Margins(self: LayerShellQt__Window) QMargins {
        return .{ .ptr = qtc.LayerShellQt__Window_Margins(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` interactivity: window_enums.KeyboardInteractivity `
    ///
    pub fn SetKeyboardInteractivity(self: LayerShellQt__Window, interactivity: i32) void {
        qtc.LayerShellQt__Window_SetKeyboardInteractivity(@ptrCast(self.ptr), @bitCast(interactivity));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ## Returns:
    ///
    /// ` window_enums.KeyboardInteractivity `
    ///
    pub fn KeyboardInteractivity(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_KeyboardInteractivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` layer: window_enums.Layer `
    ///
    pub fn SetLayer(self: LayerShellQt__Window, layer: i32) void {
        qtc.LayerShellQt__Window_SetLayer(@ptrCast(self.ptr), @bitCast(layer));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ## Returns:
    ///
    /// ` window_enums.Layer `
    ///
    pub fn Layer(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_Layer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` screenConfiguration: window_enums.ScreenConfiguration `
    ///
    pub fn SetScreenConfiguration(self: LayerShellQt__Window, screenConfiguration: i32) void {
        qtc.LayerShellQt__Window_SetScreenConfiguration(@ptrCast(self.ptr), @bitCast(screenConfiguration));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ## Returns:
    ///
    /// ` window_enums.ScreenConfiguration `
    ///
    pub fn ScreenConfiguration(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_ScreenConfiguration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` scope: []const u8 `
    ///
    pub fn SetScope(self: LayerShellQt__Window, scope: []const u8) void {
        const scope_str = qtc.libqt_string{
            .len = scope.len,
            .data = scope.ptr,
        };
        qtc.LayerShellQt__Window_SetScope(@ptrCast(self.ptr), scope_str);
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Scope(self: LayerShellQt__Window, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.LayerShellQt__Window_Scope(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt__window.Scope: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` close: bool `
    ///
    pub fn SetCloseOnDismissed(self: LayerShellQt__Window, close: bool) void {
        qtc.LayerShellQt__Window_SetCloseOnDismissed(@ptrCast(self.ptr), close);
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn CloseOnDismissed(self: LayerShellQt__Window) bool {
        return qtc.LayerShellQt__Window_CloseOnDismissed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn Get(window: anytype) LayerShellQt__Window {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.LayerShellQt__Window_Get(@ptrCast(window.ptr)) };
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    pub fn QmlAttachedProperties(object: anytype) LayerShellQt__Window {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.LayerShellQt__Window_QmlAttachedProperties(@ptrCast(object.ptr)) };
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn AnchorsChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_AnchorsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnAnchorsChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_AnchorsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn ExclusionZoneChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_ExclusionZoneChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnExclusionZoneChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_ExclusionZoneChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn ExclusiveEdgeChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_ExclusiveEdgeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnExclusiveEdgeChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_ExclusiveEdgeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn MarginsChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_MarginsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnMarginsChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_MarginsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn KeyboardInteractivityChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_KeyboardInteractivityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnKeyboardInteractivityChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_KeyboardInteractivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn LayerChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_LayerChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnLayerChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_LayerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt__window.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt__window.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: LayerShellQt__Window, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: LayerShellQt__Window, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: LayerShellQt__Window, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt__window.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: LayerShellQt__Window, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn IsWidgetType(self: LayerShellQt__Window) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn IsWindowType(self: LayerShellQt__Window) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn IsQuickItemType(self: LayerShellQt__Window) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn SignalsBlocked(self: LayerShellQt__Window) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: LayerShellQt__Window, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn Thread(self: LayerShellQt__Window) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: LayerShellQt__Window, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: LayerShellQt__Window, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: LayerShellQt__Window, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: LayerShellQt__Window, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: LayerShellQt__Window, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: LayerShellQt__Window, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("layershellqt__window.Children: Memory allocation failed");
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: LayerShellQt__Window, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: LayerShellQt__Window, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: LayerShellQt__Window, obj: anytype) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: LayerShellQt__Window, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn Disconnect3(self: LayerShellQt__Window) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: LayerShellQt__Window, receiver: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn DumpObjectTree(self: LayerShellQt__Window) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn DumpObjectInfo(self: LayerShellQt__Window) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: LayerShellQt__Window, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: LayerShellQt__Window, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: LayerShellQt__Window, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("layershellqt__window.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("layershellqt__window.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn BindingStorage(self: LayerShellQt__Window) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn BindingStorage2(self: LayerShellQt__Window) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn Destroyed(self: LayerShellQt__Window) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn Parent(self: LayerShellQt__Window) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: LayerShellQt__Window, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn DeleteLater(self: LayerShellQt__Window) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: LayerShellQt__Window, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: LayerShellQt__Window, time: i64, timerType: i32) i32 {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: LayerShellQt__Window, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: LayerShellQt__Window, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: LayerShellQt__Window, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: LayerShellQt__Window, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: LayerShellQt__Window, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: LayerShellQt__Window, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn Delete(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
pub const enums = struct {
    pub const Anchor = enum(i32) {
        pub const AnchorNone: i32 = 0;
        pub const AnchorTop: i32 = 1;
        pub const AnchorBottom: i32 = 2;
        pub const AnchorLeft: i32 = 4;
        pub const AnchorRight: i32 = 8;
    };

    pub const Layer = enum(i32) {
        pub const LayerBackground: i32 = 0;
        pub const LayerBottom: i32 = 1;
        pub const LayerTop: i32 = 2;
        pub const LayerOverlay: i32 = 3;
    };

    pub const KeyboardInteractivity = enum(i32) {
        pub const KeyboardInteractivityNone: i32 = 0;
        pub const KeyboardInteractivityExclusive: i32 = 1;
        pub const KeyboardInteractivityOnDemand: i32 = 2;
    };

    pub const ScreenConfiguration = enum(i32) {
        pub const ScreenFromQWindow: i32 = 0;
        pub const ScreenFromCompositor: i32 = 1;
    };
};
