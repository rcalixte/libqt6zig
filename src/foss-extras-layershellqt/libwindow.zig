const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const window_enums = enums;

/// https://invent.kde.org/plasma/layer-shell-qt
pub const layershellqt__window = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.LayerShellQt__Window_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.LayerShellQt__Window, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.LayerShellQt__Window_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.LayerShellQt__Window, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.LayerShellQt__Window_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt::window.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, anchor: flag of window_enums.Anchor ```
    pub fn SetAnchors(self: ?*anyopaque, anchor: i32) void {
        qtc.LayerShellQt__Window_SetAnchors(@ptrCast(self), @intCast(anchor));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    ///
    /// Returns: ``` flag of window_enums.Anchor ```
    pub fn Anchors(self: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_Anchors(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, zone: i32 ```
    pub fn SetExclusiveZone(self: ?*anyopaque, zone: i32) void {
        qtc.LayerShellQt__Window_SetExclusiveZone(@ptrCast(self), @intCast(zone));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn ExclusionZone(self: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_ExclusionZone(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, edge: window_enums.Anchor ```
    pub fn SetExclusiveEdge(self: ?*anyopaque, edge: i32) void {
        qtc.LayerShellQt__Window_SetExclusiveEdge(@ptrCast(self), @intCast(edge));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    ///
    /// Returns: ``` window_enums.Anchor ```
    pub fn ExclusiveEdge(self: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_ExclusiveEdge(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, margins: QtC.QMargins ```
    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.LayerShellQt__Window_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn Margins(self: ?*anyopaque) QtC.QMargins {
        return qtc.LayerShellQt__Window_Margins(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, interactivity: window_enums.KeyboardInteractivity ```
    pub fn SetKeyboardInteractivity(self: ?*anyopaque, interactivity: i32) void {
        qtc.LayerShellQt__Window_SetKeyboardInteractivity(@ptrCast(self), @intCast(interactivity));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    ///
    /// Returns: ``` window_enums.KeyboardInteractivity ```
    pub fn KeyboardInteractivity(self: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_KeyboardInteractivity(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, layer: window_enums.Layer ```
    pub fn SetLayer(self: ?*anyopaque, layer: i32) void {
        qtc.LayerShellQt__Window_SetLayer(@ptrCast(self), @intCast(layer));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    ///
    /// Returns: ``` window_enums.Layer ```
    pub fn Layer(self: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_Layer(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, screenConfiguration: window_enums.ScreenConfiguration ```
    pub fn SetScreenConfiguration(self: ?*anyopaque, screenConfiguration: i32) void {
        qtc.LayerShellQt__Window_SetScreenConfiguration(@ptrCast(self), @intCast(screenConfiguration));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    ///
    /// Returns: ``` window_enums.ScreenConfiguration ```
    pub fn ScreenConfiguration(self: ?*anyopaque) i32 {
        return qtc.LayerShellQt__Window_ScreenConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, scope: []const u8 ```
    pub fn SetScope(self: ?*anyopaque, scope: []const u8) void {
        const scope_str = qtc.libqt_string{
            .len = scope.len,
            .data = scope.ptr,
        };
        qtc.LayerShellQt__Window_SetScope(@ptrCast(self), scope_str);
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, allocator: std.mem.Allocator ```
    pub fn Scope(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.LayerShellQt__Window_Scope(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt::window.Scope: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, close: bool ```
    pub fn SetCloseOnDismissed(self: ?*anyopaque, close: bool) void {
        qtc.LayerShellQt__Window_SetCloseOnDismissed(@ptrCast(self), close);
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn CloseOnDismissed(self: ?*anyopaque) bool {
        return qtc.LayerShellQt__Window_CloseOnDismissed(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn Get(window: ?*anyopaque) QtC.LayerShellQt__Window {
        return qtc.LayerShellQt__Window_Get(@ptrCast(window));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` object: QtC.QObject ```
    pub fn QmlAttachedProperties(object: ?*anyopaque) QtC.LayerShellQt__Window {
        return qtc.LayerShellQt__Window_QmlAttachedProperties(@ptrCast(object));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn AnchorsChanged(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_AnchorsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnAnchorsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_AnchorsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn ExclusionZoneChanged(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_ExclusionZoneChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnExclusionZoneChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_ExclusionZoneChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn ExclusiveEdgeChanged(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_ExclusiveEdgeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnExclusiveEdgeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_ExclusiveEdgeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn MarginsChanged(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_MarginsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnMarginsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_MarginsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn KeyboardInteractivityChanged(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_KeyboardInteractivityChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnKeyboardInteractivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_KeyboardInteractivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn LayerChanged(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_LayerChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnLayerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.LayerShellQt__Window_Connect_LayerChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.LayerShellQt__Window_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt::window.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.LayerShellQt__Window_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt::window.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.LayerShellQt__Window, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.LayerShellQt__Window, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.LayerShellQt__Window, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("layershellqt::window.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.LayerShellQt__Window, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.LayerShellQt__Window, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.LayerShellQt__Window, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.LayerShellQt__Window, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.LayerShellQt__Window, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.LayerShellQt__Window, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.LayerShellQt__Window, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("layershellqt::window.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.LayerShellQt__Window, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.LayerShellQt__Window, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.LayerShellQt__Window, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.LayerShellQt__Window, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.LayerShellQt__Window, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.LayerShellQt__Window, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.LayerShellQt__Window, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("layershellqt::window.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("layershellqt::window.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.LayerShellQt__Window, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.LayerShellQt__Window, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.LayerShellQt__Window, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.LayerShellQt__Window, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.LayerShellQt__Window, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.LayerShellQt__Window, callback: *const fn (self: QtC.LayerShellQt__Window, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.LayerShellQt__Window ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.LayerShellQt__Window_Delete(@ptrCast(self));
    }
};

/// https://invent.kde.org/plasma/layer-shell-qt
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
