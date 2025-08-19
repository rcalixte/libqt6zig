const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qinputmethod_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qinputmethod.html
pub const qinputmethod = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QInputMethod_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QInputMethod, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QInputMethod_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QInputMethod, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QInputMethod_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QInputMethod_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn InputItemTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QInputMethod_InputItemTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
    ///
    /// ``` self: QtC.QInputMethod, transform: QtC.QTransform ```
    pub fn SetInputItemTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QInputMethod_SetInputItemTransform(@ptrCast(self), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn InputItemRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.QInputMethod_InputItemRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
    ///
    /// ``` self: QtC.QInputMethod, rect: QtC.QRectF ```
    pub fn SetInputItemRectangle(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QInputMethod_SetInputItemRectangle(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn CursorRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.QInputMethod_CursorRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn AnchorRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.QInputMethod_AnchorRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn KeyboardRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.QInputMethod_KeyboardRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn InputItemClipRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.QInputMethod_InputItemClipRectangle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QInputMethod_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
    ///
    /// ``` self: QtC.QInputMethod, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QInputMethod_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn IsAnimating(self: ?*anyopaque) bool {
        return qtc.QInputMethod_IsAnimating(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#locale)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QInputMethod_Locale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirection)
    ///
    /// ``` self: QtC.QInputMethod ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn InputDirection(self: ?*anyopaque) i32 {
        return qtc.QInputMethod_InputDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
    ///
    /// ``` query: qnamespace_enums.InputMethodQuery, argument: QtC.QVariant ```
    pub fn QueryFocusObject(query: i64, argument: ?*anyopaque) QtC.QVariant {
        return qtc.QInputMethod_QueryFocusObject(@intCast(query), @ptrCast(argument));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#show)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QInputMethod_Show(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#hide)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QInputMethod_Hide(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#update)
    ///
    /// ``` self: QtC.QInputMethod, queries: flag of qnamespace_enums.InputMethodQuery ```
    pub fn Update(self: ?*anyopaque, queries: i64) void {
        qtc.QInputMethod_Update(@ptrCast(self), @intCast(queries));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#reset)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QInputMethod_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#commit)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Commit(self: ?*anyopaque) void {
        qtc.QInputMethod_Commit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#invokeAction)
    ///
    /// ``` self: QtC.QInputMethod, a: qinputmethod_enums.Action, cursorPosition: i32 ```
    pub fn InvokeAction(self: ?*anyopaque, a: i32, cursorPosition: i32) void {
        qtc.QInputMethod_InvokeAction(@ptrCast(self), @intCast(a), @intCast(cursorPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn CursorRectangleChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_CursorRectangleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnCursorRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_CursorRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn AnchorRectangleChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_AnchorRectangleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnAnchorRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnchorRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn KeyboardRectangleChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_KeyboardRectangleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnKeyboardRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_KeyboardRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn InputItemClipRectangleChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_InputItemClipRectangleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnInputItemClipRectangleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputItemClipRectangleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_VisibleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn AnimatingChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_AnimatingChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnAnimatingChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnimatingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn LocaleChanged(self: ?*anyopaque) void {
        qtc.QInputMethod_LocaleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnLocaleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_LocaleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ``` self: QtC.QInputMethod, newDirection: qnamespace_enums.LayoutDirection ```
    pub fn InputDirectionChanged(self: ?*anyopaque, newDirection: i32) void {
        qtc.QInputMethod_InputDirectionChanged(@ptrCast(self), @intCast(newDirection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod, newDirection: qnamespace_enums.LayoutDirection) callconv(.c) void ```
    pub fn OnInputDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputDirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QInputMethod_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QInputMethod_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QInputMethod, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QInputMethod, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QInputMethod, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QInputMethod, name: []const u8 ```
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
    /// ``` self: QtC.QInputMethod ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QInputMethod, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QInputMethod, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QInputMethod, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QInputMethod, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QInputMethod, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QInputMethod, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qinputmethod.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QInputMethod, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QInputMethod, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QInputMethod, obj: QtC.QObject ```
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
    /// ``` self: QtC.QInputMethod, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QInputMethod ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QInputMethod, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QInputMethod, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QInputMethod, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qinputmethod.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qinputmethod.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QInputMethod, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QInputMethod ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QInputMethod, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QInputMethod, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QInputMethod, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QInputMethod, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QInputMethod, slot: fn (self: QtC.QInputMethod, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qinputmethod.html#types
pub const enums = struct {
    pub const Action = enum {
        pub const Click: i32 = 0;
        pub const ContextMenu: i32 = 1;
    };
};
