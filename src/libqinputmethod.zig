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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn metaObject(self: QInputMethod) QMetaObject {
        return .{ .ptr = qtc.QInputMethod_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QInputMethod, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QInputMethod_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QInputMethod, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QInputMethod_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QInputMethod.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inputItemTransform` instead
    ///
    pub const InputItemTransform = inputItemTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn inputItemTransform(self: QInputMethod) QTransform {
        return .{ .ptr = qtc.QInputMethod_InputItemTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInputItemTransform` instead
    ///
    pub const SetInputItemTransform = setInputItemTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` transform: QTransform `
    ///
    pub fn setInputItemTransform(self: QInputMethod, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QInputMethod_SetInputItemTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// ### DEPRECATED: Use `inputItemRectangle` instead
    ///
    pub const InputItemRectangle = inputItemRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn inputItemRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_InputItemRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInputItemRectangle` instead
    ///
    pub const SetInputItemRectangle = setInputItemRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setInputItemRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setInputItemRectangle(self: QInputMethod, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QInputMethod_SetInputItemRectangle(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `cursorRectangle` instead
    ///
    pub const CursorRectangle = cursorRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn cursorRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_CursorRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `anchorRectangle` instead
    ///
    pub const AnchorRectangle = anchorRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn anchorRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_AnchorRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `keyboardRectangle` instead
    ///
    pub const KeyboardRectangle = keyboardRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn keyboardRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_KeyboardRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputItemClipRectangle` instead
    ///
    pub const InputItemClipRectangle = inputItemClipRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn inputItemClipRectangle(self: QInputMethod) QRectF {
        return .{ .ptr = qtc.QInputMethod_InputItemClipRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn isVisible(self: QInputMethod) bool {
        return qtc.QInputMethod_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QInputMethod, visible: bool) void {
        qtc.QInputMethod_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isAnimating` instead
    ///
    pub const IsAnimating = isAnimating;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#isAnimating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn isAnimating(self: QInputMethod) bool {
        return qtc.QInputMethod_IsAnimating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn locale(self: QInputMethod) QLocale {
        return .{ .ptr = qtc.QInputMethod_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputDirection` instead
    ///
    pub const InputDirection = inputDirection;

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
    pub fn inputDirection(self: QInputMethod) i32 {
        return qtc.QInputMethod_InputDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryFocusObject` instead
    ///
    pub const QueryFocusObject = queryFocusObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#queryFocusObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn queryFocusObject(query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QInputMethod_QueryFocusObject(@bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn show(self: QInputMethod) void {
        qtc.QInputMethod_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn hide(self: QInputMethod) void {
        qtc.QInputMethod_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn update(self: QInputMethod, queries: i32) void {
        qtc.QInputMethod_Update(@ptrCast(self.ptr), @bitCast(queries));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn reset(self: QInputMethod) void {
        qtc.QInputMethod_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commit` instead
    ///
    pub const Commit = commit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn commit(self: QInputMethod) void {
        qtc.QInputMethod_Commit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invokeAction` instead
    ///
    pub const InvokeAction = invokeAction;

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
    pub fn invokeAction(self: QInputMethod, a: i32, cursorPosition: i32) void {
        qtc.QInputMethod_InvokeAction(@ptrCast(self.ptr), @bitCast(a), @bitCast(cursorPosition));
    }

    /// ### DEPRECATED: Use `cursorRectangleChanged` instead
    ///
    pub const CursorRectangleChanged = cursorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn cursorRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_CursorRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorRectangleChanged` instead
    ///
    pub const OnCursorRectangleChanged = onCursorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#cursorRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onCursorRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_CursorRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `anchorRectangleChanged` instead
    ///
    pub const AnchorRectangleChanged = anchorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn anchorRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_AnchorRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnchorRectangleChanged` instead
    ///
    pub const OnAnchorRectangleChanged = onAnchorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#anchorRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onAnchorRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnchorRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyboardRectangleChanged` instead
    ///
    pub const KeyboardRectangleChanged = keyboardRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn keyboardRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_KeyboardRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onKeyboardRectangleChanged` instead
    ///
    pub const OnKeyboardRectangleChanged = onKeyboardRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#keyboardRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onKeyboardRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_KeyboardRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputItemClipRectangleChanged` instead
    ///
    pub const InputItemClipRectangleChanged = inputItemClipRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn inputItemClipRectangleChanged(self: QInputMethod) void {
        qtc.QInputMethod_InputItemClipRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputItemClipRectangleChanged` instead
    ///
    pub const OnInputItemClipRectangleChanged = onInputItemClipRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputItemClipRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onInputItemClipRectangleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputItemClipRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn visibleChanged(self: QInputMethod) void {
        qtc.QInputMethod_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `animatingChanged` instead
    ///
    pub const AnimatingChanged = animatingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn animatingChanged(self: QInputMethod) void {
        qtc.QInputMethod_AnimatingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnimatingChanged` instead
    ///
    pub const OnAnimatingChanged = onAnimatingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#animatingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onAnimatingChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnimatingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localeChanged` instead
    ///
    pub const LocaleChanged = localeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    pub fn localeChanged(self: QInputMethod) void {
        qtc.QInputMethod_LocaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLocaleChanged` instead
    ///
    pub const OnLocaleChanged = onLocaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onLocaleChanged(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
        qtc.QInputMethod_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputDirectionChanged` instead
    ///
    pub const InputDirectionChanged = inputDirectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QInputMethod `
    ///
    /// ` newDirection: qnamespace_enums.LayoutDirection `
    ///
    pub fn inputDirectionChanged(self: QInputMethod, newDirection: i32) void {
        qtc.QInputMethod_InputDirectionChanged(@ptrCast(self.ptr), @bitCast(newDirection));
    }

    /// ### DEPRECATED: Use `onInputDirectionChanged` instead
    ///
    pub const OnInputDirectionChanged = onInputDirectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#inputDirectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod, newDirection: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn onInputDirectionChanged(self: QInputMethod, callback: *const fn (QInputMethod, i32) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputDirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QInputMethod.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QInputMethod.tr3: Memory allocation failed");
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
    /// ` self: QInputMethod `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QInputMethod, _event: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QInputMethod, watched: anytype, _event: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QInputMethod, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QInputMethod.objectName: Memory allocation failed");
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
    /// ` self: QInputMethod `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QInputMethod, name: []const u8) void {
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
    /// ` self: QInputMethod `
    ///
    pub fn isWidgetType(self: QInputMethod) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn isWindowType(self: QInputMethod) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn isQuickItemType(self: QInputMethod) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn signalsBlocked(self: QInputMethod) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QInputMethod, b: bool) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn thread(self: QInputMethod) QThread {
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
    /// ` self: QInputMethod `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QInputMethod, _thread: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QInputMethod, interval: i32) i32 {
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
    /// ` self: QInputMethod `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QInputMethod, time: i64) i32 {
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
    /// ` self: QInputMethod `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QInputMethod, id: i32) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QInputMethod, id: i32) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QInputMethod, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QInputMethod.children: Memory allocation failed");
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
    /// ` self: QInputMethod `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QInputMethod, _parent: anytype) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QInputMethod, filterObj: anytype) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QInputMethod, obj: anytype) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QInputMethod, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QInputMethod `
    ///
    pub fn disconnect3(self: QInputMethod) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QInputMethod, receiver: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn dumpObjectTree(self: QInputMethod) void {
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
    /// ` self: QInputMethod `
    ///
    pub fn dumpObjectInfo(self: QInputMethod) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QInputMethod, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QInputMethod, name: [:0]const u8) QVariant {
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
    /// ` self: QInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QInputMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QInputMethod.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QInputMethod.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QInputMethod `
    ///
    pub fn bindingStorage(self: QInputMethod) QBindingStorage {
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
    /// ` self: QInputMethod `
    ///
    pub fn bindingStorage2(self: QInputMethod) QBindingStorage {
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
    /// ` self: QInputMethod `
    ///
    pub fn destroyed(self: QInputMethod) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QInputMethod, callback: *const fn (QInputMethod) callconv(.c) void) void {
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
    /// ` self: QInputMethod `
    ///
    pub fn parent(self: QInputMethod) QObject {
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
    /// ` self: QInputMethod `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QInputMethod, classname: [:0]const u8) bool {
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
    /// ` self: QInputMethod `
    ///
    pub fn deleteLater(self: QInputMethod) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QInputMethod, interval: i32, timerType: i32) i32 {
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
    /// ` self: QInputMethod `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QInputMethod, time: i64, timerType: i32) i32 {
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
    /// ` self: QInputMethod `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QInputMethod, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QInputMethod, signal: [:0]const u8) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QInputMethod, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QInputMethod, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QInputMethod, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QInputMethod `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QInputMethod, param1: anytype) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QInputMethod, callback: *const fn (QInputMethod, QObject) callconv(.c) void) void {
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
    /// ` self: QInputMethod `
    ///
    /// ` callback: *const fn (self: QInputMethod, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QInputMethod, callback: *const fn (QInputMethod, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qinputmethod.html#public-types)
pub const enums = struct {
    pub const Action = enum {
        pub const Click: i32 = 0;
        pub const ContextMenu: i32 = 1;
    };
};
