const C = @import("qt6c");
const qinputmethod_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qinputmethod.html
pub const qinputmethod = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QInputMethod_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QInputMethod_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QInputMethod, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QInputMethod_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QInputMethod_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn InputItemTransform(self: ?*anyopaque) ?*C.QTransform {
        return C.QInputMethod_InputItemTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
    ///
    /// ``` self: ?*C.QInputMethod, transform: ?*C.QTransform ```
    pub fn SetInputItemTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        C.QInputMethod_SetInputItemTransform(@ptrCast(self), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn InputItemRectangle(self: ?*anyopaque) ?*C.QRectF {
        return C.QInputMethod_InputItemRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
    ///
    /// ``` self: ?*C.QInputMethod, rect: ?*C.QRectF ```
    pub fn SetInputItemRectangle(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QInputMethod_SetInputItemRectangle(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn CursorRectangle(self: ?*anyopaque) ?*C.QRectF {
        return C.QInputMethod_CursorRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn AnchorRectangle(self: ?*anyopaque) ?*C.QRectF {
        return C.QInputMethod_AnchorRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn KeyboardRectangle(self: ?*anyopaque) ?*C.QRectF {
        return C.QInputMethod_KeyboardRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn InputItemClipRectangle(self: ?*anyopaque) ?*C.QRectF {
        return C.QInputMethod_InputItemClipRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QInputMethod_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
    ///
    /// ``` self: ?*C.QInputMethod, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QInputMethod_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn IsAnimating(self: ?*anyopaque) bool {
        return C.QInputMethod_IsAnimating(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#locale)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Locale(self: ?*anyopaque) ?*C.QLocale {
        return C.QInputMethod_Locale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirection)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn InputDirection(self: ?*anyopaque) i64 {
        return C.QInputMethod_InputDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
    ///
    /// ``` query: qnamespace_enums.InputMethodQuery, argument: ?*C.QVariant ```
    pub fn QueryFocusObject(query: i64, argument: ?*anyopaque) ?*C.QVariant {
        return C.QInputMethod_QueryFocusObject(@intCast(query), @ptrCast(argument));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#show)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Show(self: ?*anyopaque) void {
        C.QInputMethod_Show(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#hide)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QInputMethod_Hide(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#update)
    ///
    /// ``` self: ?*C.QInputMethod, queries: i32 ```
    pub fn Update(self: ?*anyopaque, queries: i64) void {
        C.QInputMethod_Update(@ptrCast(self), @intCast(queries));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#reset)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Reset(self: ?*anyopaque) void {
        C.QInputMethod_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#commit)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Commit(self: ?*anyopaque) void {
        C.QInputMethod_Commit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#invokeAction)
    ///
    /// ``` self: ?*C.QInputMethod, a: qinputmethod_enums.Action, cursorPosition: i32 ```
    pub fn InvokeAction(self: ?*anyopaque, a: i64, cursorPosition: i32) void {
        C.QInputMethod_InvokeAction(@ptrCast(self), @intCast(a), @intCast(cursorPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn CursorRectangleChanged(self: ?*anyopaque) void {
        C.QInputMethod_CursorRectangleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnCursorRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_CursorRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn AnchorRectangleChanged(self: ?*anyopaque) void {
        C.QInputMethod_AnchorRectangleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnAnchorRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_AnchorRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn KeyboardRectangleChanged(self: ?*anyopaque) void {
        C.QInputMethod_KeyboardRectangleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnKeyboardRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_KeyboardRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn InputItemClipRectangleChanged(self: ?*anyopaque) void {
        C.QInputMethod_InputItemClipRectangleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnInputItemClipRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_InputItemClipRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        C.QInputMethod_VisibleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn AnimatingChanged(self: ?*anyopaque) void {
        C.QInputMethod_AnimatingChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnAnimatingChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_AnimatingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn LocaleChanged(self: ?*anyopaque) void {
        C.QInputMethod_LocaleChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod) callconv(.c) void ```
    pub fn OnLocaleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QInputMethod_Connect_LocaleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ``` self: ?*C.QInputMethod, newDirection: qnamespace_enums.LayoutDirection ```
    pub fn InputDirectionChanged(self: ?*anyopaque, newDirection: i64) void {
        C.QInputMethod_InputDirectionChanged(@ptrCast(self), @intCast(newDirection));
    }

    /// ``` self: ?*C.QInputMethod, slot: fn (?*C.QInputMethod, qnamespace_enums.LayoutDirection) callconv(.c) void ```
    pub fn OnInputDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QInputMethod_Connect_InputDirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QInputMethod_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QInputMethod_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QInputMethod, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QInputMethod, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QInputMethod, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QInputMethod, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QInputMethod, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QInputMethod, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QInputMethod, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QInputMethod, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QInputMethod, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QInputMethod, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QInputMethod, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QInputMethod, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QInputMethod, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QInputMethod, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QInputMethod, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QInputMethod, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QInputMethod, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QInputMethod ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QInputMethod, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QInputMethod, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QInputMethod, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qinputmethod.html#types
pub const enums = struct {
    pub const Action = enum {
        pub const Click: i32 = 0;
        pub const ContextMenu: i32 = 1;
    };
};
