const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRectF = @import("libqt6").QRectF;
const QThread = @import("libqt6").QThread;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qinputmethod_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html)
pub const QInputMethod = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QInputMethod,

    pub const _is_QInputMethod = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn MetaObject(self: QInputMethod) QMetaObject {
        return .{ .ptr = qtc.QInputMethod_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QInputMethod, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QInputMethod_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QInputMethod, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QInputMethod_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn InputItemTransform(self: QInputMethod) QTransform {
        return .{ .ptr = qtc.QInputMethod_InputItemTransform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` transform: QTransform `
    ///
    pub fn SetInputItemTransform(self: QInputMethod, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QInputMethod_SetInputItemTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn InputItemRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_InputItemRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetInputItemRectangle(self: QInputMethod, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QInputMethod_SetInputItemRectangle(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn CursorRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_CursorRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn AnchorRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_AnchorRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn KeyboardRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_KeyboardRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn InputItemClipRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_InputItemClipRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn IsVisible(self: QInputMethod) bool {
        return qtc.QInputMethod_IsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QInputMethod, visible: bool) void {
        qtc.QInputMethod_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn IsAnimating(self: QInputMethod) bool {
        return qtc.QInputMethod_IsAnimating(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Locale(self: QInputMethod) QLocale {
        return .{ .ptr = qtc.QInputMethod_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn InputDirection(self: QInputMethod) i32 {
        return qtc.QInputMethod_InputDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn QueryFocusObject(query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QInputMethod_QueryFocusObject(@bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Show(self: QInputMethod) void {
        qtc.QInputMethod_Show(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Hide(self: QInputMethod) void {
        qtc.QInputMethod_Hide(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn Update(self: QInputMethod, queries: i32) void {
        qtc.QInputMethod_Update(@ptrCast(self.ptr), @bitCast(queries));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Reset(self: QInputMethod) void {
        qtc.QInputMethod_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Commit(self: QInputMethod) void {
        qtc.QInputMethod_Commit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#invokeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` a: qinputmethod_enums.Action `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn InvokeAction(self: QInputMethod, a: i32, cursorPosition: i32) void {
        qtc.QInputMethod_InvokeAction(@ptrCast(self.ptr), @bitCast(a), @bitCast(cursorPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn CursorRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_CursorRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnCursorRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_CursorRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn AnchorRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_AnchorRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnAnchorRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnchorRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn KeyboardRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_KeyboardRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnKeyboardRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_KeyboardRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn InputItemClipRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_InputItemClipRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnInputItemClipRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputItemClipRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn VisibleChanged(self: QInputMethod) void {
        qtc.QInputMethod_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn AnimatingChanged(self: QInputMethod) void {
        qtc.QInputMethod_AnimatingChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnAnimatingChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnimatingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn LocaleChanged(self: QInputMethod) void {
        qtc.QInputMethod_LocaleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnLocaleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` newDirection: qnamespace_enums.LayoutDirection `
    ///
    pub fn InputDirectionChanged(self: QInputMethod, newDirection: i32) void {
        qtc.QInputMethod_InputDirectionChanged(@ptrCast(self.ptr), @bitCast(newDirection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod, newDirection: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn OnInputDirectionChanged(self: QInputMethod, callback: *const fn (QInputMethod, i32) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputDirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QInputMethod, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QInputMethod, watched: anytype, event: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QInputMethod, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QInputMethod, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn IsWidgetType(self: QInputMethod) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn IsWindowType(self: QInputMethod) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn IsQuickItemType(self: QInputMethod) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn SignalsBlocked(self: QInputMethod) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QInputMethod, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Thread(self: QInputMethod) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QInputMethod, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QInputMethod, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QInputMethod, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QInputMethod, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QInputMethod, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QInputMethod, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qinputmethod.Children: Memory allocation failed");
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
    /// ` self: QInputMethod `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QInputMethod, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QInputMethod, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QInputMethod, obj: anytype) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QInputMethod, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QInputMethod `
    ///
    pub fn Disconnect3(self: QInputMethod) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QInputMethod, receiver: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn DumpObjectTree(self: QInputMethod) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn DumpObjectInfo(self: QInputMethod) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QInputMethod, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QInputMethod, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QInputMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn BindingStorage(self: QInputMethod) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn BindingStorage2(self: QInputMethod) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Destroyed(self: QInputMethod) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn Parent(self: QInputMethod) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QInputMethod, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn DeleteLater(self: QInputMethod) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QInputMethod, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QInputMethod, time: i64, timerType: i32) i32 {
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
    /// ` self: QInputMethod `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QInputMethod, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QInputMethod, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QInputMethod, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QInputMethod, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QInputMethod, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QInputMethod, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QInputMethod, callback: *const fn (QInputMethod, QObject) callconv(.c) void) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QInputMethod, callback: *const fn (QInputMethod, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#public-types)
pub const enums = struct {
    pub const Action = enum(i32) {
        pub const Click: i32 = 0;
        pub const ContextMenu: i32 = 1;
    };
};
