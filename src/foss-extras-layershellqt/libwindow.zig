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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn metaObject(self: LayerShellQt__Window) QMetaObject {
        return .{ .ptr = qtc.LayerShellQt__Window_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: LayerShellQt__Window, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.LayerShellQt__Window_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: LayerShellQt__Window, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("LayerShellQt__Window.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAnchors` instead
    ///
    pub const SetAnchors = setAnchors;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` anchor: flag of window_enums.Anchor `
    ///
    pub fn setAnchors(self: LayerShellQt__Window, anchor: i32) void {
        qtc.LayerShellQt__Window_SetAnchors(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// ### DEPRECATED: Use `anchors` instead
    ///
    pub const Anchors = anchors;

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
    pub fn anchors(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_Anchors(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExclusiveZone` instead
    ///
    pub const SetExclusiveZone = setExclusiveZone;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` zone: i32 `
    ///
    pub fn setExclusiveZone(self: LayerShellQt__Window, zone: i32) void {
        qtc.LayerShellQt__Window_SetExclusiveZone(@ptrCast(self.ptr), @bitCast(zone));
    }

    /// ### DEPRECATED: Use `exclusionZone` instead
    ///
    pub const ExclusionZone = exclusionZone;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn exclusionZone(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_ExclusionZone(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setExclusiveEdge` instead
    ///
    pub const SetExclusiveEdge = setExclusiveEdge;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` edge: window_enums.Anchor `
    ///
    pub fn setExclusiveEdge(self: LayerShellQt__Window, edge: i32) void {
        qtc.LayerShellQt__Window_SetExclusiveEdge(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### DEPRECATED: Use `exclusiveEdge` instead
    ///
    pub const ExclusiveEdge = exclusiveEdge;

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
    pub fn exclusiveEdge(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_ExclusiveEdge(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargins` instead
    ///
    pub const SetMargins = setMargins;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _margins: QMargins `
    ///
    pub fn setMargins(self: LayerShellQt__Window, _margins: anytype) void {
        comptime _ = @TypeOf(_margins)._is_QMargins;
        qtc.LayerShellQt__Window_SetMargins(@ptrCast(self.ptr), @ptrCast(_margins.ptr));
    }

    /// ### DEPRECATED: Use `margins` instead
    ///
    pub const Margins = margins;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn margins(self: LayerShellQt__Window) QMargins {
        return .{ .ptr = qtc.LayerShellQt__Window_Margins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setKeyboardInteractivity` instead
    ///
    pub const SetKeyboardInteractivity = setKeyboardInteractivity;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` interactivity: window_enums.KeyboardInteractivity `
    ///
    pub fn setKeyboardInteractivity(self: LayerShellQt__Window, interactivity: i32) void {
        qtc.LayerShellQt__Window_SetKeyboardInteractivity(@ptrCast(self.ptr), @bitCast(interactivity));
    }

    /// ### DEPRECATED: Use `keyboardInteractivity` instead
    ///
    pub const KeyboardInteractivity = keyboardInteractivity;

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
    pub fn keyboardInteractivity(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_KeyboardInteractivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayer` instead
    ///
    pub const SetLayer = setLayer;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _layer: window_enums.Layer `
    ///
    pub fn setLayer(self: LayerShellQt__Window, _layer: i32) void {
        qtc.LayerShellQt__Window_SetLayer(@ptrCast(self.ptr), @bitCast(_layer));
    }

    /// ### DEPRECATED: Use `layer` instead
    ///
    pub const Layer = layer;

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
    pub fn layer(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_Layer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScreenConfiguration` instead
    ///
    pub const SetScreenConfiguration = setScreenConfiguration;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _screenConfiguration: window_enums.ScreenConfiguration `
    ///
    pub fn setScreenConfiguration(self: LayerShellQt__Window, _screenConfiguration: i32) void {
        qtc.LayerShellQt__Window_SetScreenConfiguration(@ptrCast(self.ptr), @bitCast(_screenConfiguration));
    }

    /// ### DEPRECATED: Use `screenConfiguration` instead
    ///
    pub const ScreenConfiguration = screenConfiguration;

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
    pub fn screenConfiguration(self: LayerShellQt__Window) i32 {
        return qtc.LayerShellQt__Window_ScreenConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScope` instead
    ///
    pub const SetScope = setScope;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _scope: []const u8 `
    ///
    pub fn setScope(self: LayerShellQt__Window, _scope: []const u8) void {
        const scope_str = qtc.libqt_string{
            .len = _scope.len,
            .data = _scope.ptr,
        };
        qtc.LayerShellQt__Window_SetScope(@ptrCast(self.ptr), scope_str);
    }

    /// ### DEPRECATED: Use `scope` instead
    ///
    pub const Scope = scope;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scope(self: LayerShellQt__Window, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.LayerShellQt__Window_Scope(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("LayerShellQt__Window.scope: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCloseOnDismissed` instead
    ///
    pub const SetCloseOnDismissed = setCloseOnDismissed;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` close: bool `
    ///
    pub fn setCloseOnDismissed(self: LayerShellQt__Window, close: bool) void {
        qtc.LayerShellQt__Window_SetCloseOnDismissed(@ptrCast(self.ptr), close);
    }

    /// ### DEPRECATED: Use `closeOnDismissed` instead
    ///
    pub const CloseOnDismissed = closeOnDismissed;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn closeOnDismissed(self: LayerShellQt__Window) bool {
        return qtc.LayerShellQt__Window_CloseOnDismissed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn get(window: anytype) LayerShellQt__Window {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.LayerShellQt__Window_Get(@ptrCast(window.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlAttachedProperties` instead
    ///
    pub const QmlAttachedProperties = qmlAttachedProperties;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    pub fn qmlAttachedProperties(object: anytype) LayerShellQt__Window {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.LayerShellQt__Window_QmlAttachedProperties(@ptrCast(object.ptr)) };
    }

    /// ### DEPRECATED: Use `anchorsChanged` instead
    ///
    pub const AnchorsChanged = anchorsChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn anchorsChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_AnchorsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnchorsChanged` instead
    ///
    pub const OnAnchorsChanged = onAnchorsChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onAnchorsChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_AnchorsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exclusionZoneChanged` instead
    ///
    pub const ExclusionZoneChanged = exclusionZoneChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn exclusionZoneChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_ExclusionZoneChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExclusionZoneChanged` instead
    ///
    pub const OnExclusionZoneChanged = onExclusionZoneChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onExclusionZoneChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_ExclusionZoneChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exclusiveEdgeChanged` instead
    ///
    pub const ExclusiveEdgeChanged = exclusiveEdgeChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn exclusiveEdgeChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_ExclusiveEdgeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExclusiveEdgeChanged` instead
    ///
    pub const OnExclusiveEdgeChanged = onExclusiveEdgeChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onExclusiveEdgeChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_ExclusiveEdgeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `marginsChanged` instead
    ///
    pub const MarginsChanged = marginsChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn marginsChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_MarginsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarginsChanged` instead
    ///
    pub const OnMarginsChanged = onMarginsChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onMarginsChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_MarginsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyboardInteractivityChanged` instead
    ///
    pub const KeyboardInteractivityChanged = keyboardInteractivityChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn keyboardInteractivityChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_KeyboardInteractivityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onKeyboardInteractivityChanged` instead
    ///
    pub const OnKeyboardInteractivityChanged = onKeyboardInteractivityChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onKeyboardInteractivityChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_KeyboardInteractivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layerChanged` instead
    ///
    pub const LayerChanged = layerChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn layerChanged(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_LayerChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayerChanged` instead
    ///
    pub const OnLayerChanged = onLayerChanged;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onLayerChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_LayerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("LayerShellQt__Window.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("LayerShellQt__Window.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: LayerShellQt__Window, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: LayerShellQt__Window, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: LayerShellQt__Window, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("LayerShellQt__Window.objectName: Memory allocation failed");
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: LayerShellQt__Window, name: []const u8) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn isWidgetType(self: LayerShellQt__Window) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn isWindowType(self: LayerShellQt__Window) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn isQuickItemType(self: LayerShellQt__Window) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn signalsBlocked(self: LayerShellQt__Window) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: LayerShellQt__Window, b: bool) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn thread(self: LayerShellQt__Window) QThread {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: LayerShellQt__Window, _thread: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: LayerShellQt__Window, interval: i32) i32 {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: LayerShellQt__Window, time: i64) i32 {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: LayerShellQt__Window, id: i32) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: LayerShellQt__Window, id: i32) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: LayerShellQt__Window, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("LayerShellQt__Window.children: Memory allocation failed");
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: LayerShellQt__Window, _parent: anytype) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: LayerShellQt__Window, filterObj: anytype) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: LayerShellQt__Window, obj: anytype) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: LayerShellQt__Window, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn disconnect3(self: LayerShellQt__Window) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: LayerShellQt__Window, receiver: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn dumpObjectTree(self: LayerShellQt__Window) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn dumpObjectInfo(self: LayerShellQt__Window) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: LayerShellQt__Window, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: LayerShellQt__Window, name: [:0]const u8) QVariant {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: LayerShellQt__Window, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("LayerShellQt__Window.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("LayerShellQt__Window.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn bindingStorage(self: LayerShellQt__Window) QBindingStorage {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn bindingStorage2(self: LayerShellQt__Window) QBindingStorage {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn destroyed(self: LayerShellQt__Window) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window) callconv(.c) void `
    ///
    pub fn onDestroyed(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window) callconv(.c) void) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn parent(self: LayerShellQt__Window) QObject {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: LayerShellQt__Window, classname: [:0]const u8) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    pub fn deleteLater(self: LayerShellQt__Window) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: LayerShellQt__Window, interval: i32, timerType: i32) i32 {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: LayerShellQt__Window, time: i64, timerType: i32) i32 {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: LayerShellQt__Window, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: LayerShellQt__Window, signal: [:0]const u8) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: LayerShellQt__Window, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: LayerShellQt__Window, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: LayerShellQt__Window, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: LayerShellQt__Window, param1: anytype) void {
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: LayerShellQt__Window `
    ///
    /// ` callback: *const fn (self: LayerShellQt__Window, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: LayerShellQt__Window, callback: *const fn (LayerShellQt__Window, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: LayerShellQt__Window `
    ///
    pub fn delete(self: LayerShellQt__Window) void {
        qtc.LayerShellQt__Window_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
pub const enums = struct {
    pub const Anchor = enum {
        pub const AnchorNone: i32 = 0;
        pub const AnchorTop: i32 = 1;
        pub const AnchorBottom: i32 = 2;
        pub const AnchorLeft: i32 = 4;
        pub const AnchorRight: i32 = 8;
    };

    pub const Layer = enum {
        pub const LayerBackground: i32 = 0;
        pub const LayerBottom: i32 = 1;
        pub const LayerTop: i32 = 2;
        pub const LayerOverlay: i32 = 3;
    };

    pub const KeyboardInteractivity = enum {
        pub const KeyboardInteractivityNone: i32 = 0;
        pub const KeyboardInteractivityExclusive: i32 = 1;
        pub const KeyboardInteractivityOnDemand: i32 = 2;
    };

    pub const ScreenConfiguration = enum {
        pub const ScreenFromQWindow: i32 = 0;
        pub const ScreenFromCompositor: i32 = 1;
    };
};
