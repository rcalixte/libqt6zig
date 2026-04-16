const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChar = @import("libqt6").QChar;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html)
pub const QStyleHints = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyleHints,

    pub const _is_QStyleHints = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn MetaObject(self: QStyleHints) QMetaObject {
        return .{ .ptr = qtc.QStyleHints_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QStyleHints, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStyleHints_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QStyleHints, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStyleHints_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` mouseDoubleClickInterval: i32 `
    ///
    pub fn SetMouseDoubleClickInterval(self: QStyleHints, mouseDoubleClickInterval: i32) void {
        qtc.QStyleHints_SetMouseDoubleClickInterval(@ptrCast(self.ptr), @bitCast(mouseDoubleClickInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn MouseDoubleClickInterval(self: QStyleHints) i32 {
        return qtc.QStyleHints_MouseDoubleClickInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn MouseDoubleClickDistance(self: QStyleHints) i32 {
        return qtc.QStyleHints_MouseDoubleClickDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn TouchDoubleTapDistance(self: QStyleHints) i32 {
        return qtc.QStyleHints_TouchDoubleTapDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` mousePressAndHoldInterval: i32 `
    ///
    pub fn SetMousePressAndHoldInterval(self: QStyleHints, mousePressAndHoldInterval: i32) void {
        qtc.QStyleHints_SetMousePressAndHoldInterval(@ptrCast(self.ptr), @bitCast(mousePressAndHoldInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn MousePressAndHoldInterval(self: QStyleHints) i32 {
        return qtc.QStyleHints_MousePressAndHoldInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` startDragDistance: i32 `
    ///
    pub fn SetStartDragDistance(self: QStyleHints, startDragDistance: i32) void {
        qtc.QStyleHints_SetStartDragDistance(@ptrCast(self.ptr), @bitCast(startDragDistance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn StartDragDistance(self: QStyleHints) i32 {
        return qtc.QStyleHints_StartDragDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` startDragTime: i32 `
    ///
    pub fn SetStartDragTime(self: QStyleHints, startDragTime: i32) void {
        qtc.QStyleHints_SetStartDragTime(@ptrCast(self.ptr), @bitCast(startDragTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn StartDragTime(self: QStyleHints) i32 {
        return qtc.QStyleHints_StartDragTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn StartDragVelocity(self: QStyleHints) i32 {
        return qtc.QStyleHints_StartDragVelocity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` keyboardInputInterval: i32 `
    ///
    pub fn SetKeyboardInputInterval(self: QStyleHints, keyboardInputInterval: i32) void {
        qtc.QStyleHints_SetKeyboardInputInterval(@ptrCast(self.ptr), @bitCast(keyboardInputInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn KeyboardInputInterval(self: QStyleHints) i32 {
        return qtc.QStyleHints_KeyboardInputInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn KeyboardAutoRepeatRate(self: QStyleHints) i32 {
        return qtc.QStyleHints_KeyboardAutoRepeatRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRateF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn KeyboardAutoRepeatRateF(self: QStyleHints) f64 {
        return qtc.QStyleHints_KeyboardAutoRepeatRateF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` cursorFlashTime: i32 `
    ///
    pub fn SetCursorFlashTime(self: QStyleHints, cursorFlashTime: i32) void {
        qtc.QStyleHints_SetCursorFlashTime(@ptrCast(self.ptr), @bitCast(cursorFlashTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn CursorFlashTime(self: QStyleHints) i32 {
        return qtc.QStyleHints_CursorFlashTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn ShowIsFullScreen(self: QStyleHints) bool {
        return qtc.QStyleHints_ShowIsFullScreen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn ShowIsMaximized(self: QStyleHints) bool {
        return qtc.QStyleHints_ShowIsMaximized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn ShowShortcutsInContextMenus(self: QStyleHints) bool {
        return qtc.QStyleHints_ShowShortcutsInContextMenus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` showShortcutsInContextMenus: bool `
    ///
    pub fn SetShowShortcutsInContextMenus(self: QStyleHints, showShortcutsInContextMenus: bool) void {
        qtc.QStyleHints_SetShowShortcutsInContextMenus(@ptrCast(self.ptr), showShortcutsInContextMenus);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTrigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuTrigger `
    ///
    pub fn ContextMenuTrigger(self: QStyleHints) i32 {
        return qtc.QStyleHints_ContextMenuTrigger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setContextMenuTrigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` contextMenuTrigger: qnamespace_enums.ContextMenuTrigger `
    ///
    pub fn SetContextMenuTrigger(self: QStyleHints, contextMenuTrigger: i32) void {
        qtc.QStyleHints_SetContextMenuTrigger(@ptrCast(self.ptr), @bitCast(contextMenuTrigger));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn PasswordMaskDelay(self: QStyleHints) i32 {
        return qtc.QStyleHints_PasswordMaskDelay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn PasswordMaskCharacter(self: QStyleHints) QChar {
        return .{ .ptr = qtc.QStyleHints_PasswordMaskCharacter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn FontSmoothingGamma(self: QStyleHints) f64 {
        return qtc.QStyleHints_FontSmoothingGamma(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn UseRtlExtensions(self: QStyleHints) bool {
        return qtc.QStyleHints_UseRtlExtensions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn SetFocusOnTouchRelease(self: QStyleHints) bool {
        return qtc.QStyleHints_SetFocusOnTouchRelease(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TabFocusBehavior `
    ///
    pub fn TabFocusBehavior(self: QStyleHints) i32 {
        return qtc.QStyleHints_TabFocusBehavior(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` tabFocusBehavior: qnamespace_enums.TabFocusBehavior `
    ///
    pub fn SetTabFocusBehavior(self: QStyleHints, tabFocusBehavior: i32) void {
        qtc.QStyleHints_SetTabFocusBehavior(@ptrCast(self.ptr), @bitCast(tabFocusBehavior));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn SingleClickActivation(self: QStyleHints) bool {
        return qtc.QStyleHints_SingleClickActivation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn UseHoverEffects(self: QStyleHints) bool {
        return qtc.QStyleHints_UseHoverEffects(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` useHoverEffects: bool `
    ///
    pub fn SetUseHoverEffects(self: QStyleHints, useHoverEffects: bool) void {
        qtc.QStyleHints_SetUseHoverEffects(@ptrCast(self.ptr), useHoverEffects);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn WheelScrollLines(self: QStyleHints) i32 {
        return qtc.QStyleHints_WheelScrollLines(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` scrollLines: i32 `
    ///
    pub fn SetWheelScrollLines(self: QStyleHints, scrollLines: i32) void {
        qtc.QStyleHints_SetWheelScrollLines(@ptrCast(self.ptr), @bitCast(scrollLines));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` threshold: i32 `
    ///
    pub fn SetMouseQuickSelectionThreshold(self: QStyleHints, threshold: i32) void {
        qtc.QStyleHints_SetMouseQuickSelectionThreshold(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn MouseQuickSelectionThreshold(self: QStyleHints) i32 {
        return qtc.QStyleHints_MouseQuickSelectionThreshold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ColorScheme `
    ///
    pub fn ColorScheme(self: QStyleHints) i32 {
        return qtc.QStyleHints_ColorScheme(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setColorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` scheme: qnamespace_enums.ColorScheme `
    ///
    pub fn SetColorScheme(self: QStyleHints, scheme: i32) void {
        qtc.QStyleHints_SetColorScheme(@ptrCast(self.ptr), @bitCast(scheme));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#unsetColorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn UnsetColorScheme(self: QStyleHints) void {
        qtc.QStyleHints_UnsetColorScheme(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` cursorFlashTime: i32 `
    ///
    pub fn CursorFlashTimeChanged(self: QStyleHints, cursorFlashTime: i32) void {
        qtc.QStyleHints_CursorFlashTimeChanged(@ptrCast(self.ptr), @bitCast(cursorFlashTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, cursorFlashTime: i32) callconv(.c) void `
    ///
    pub fn OnCursorFlashTimeChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_CursorFlashTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` keyboardInputInterval: i32 `
    ///
    pub fn KeyboardInputIntervalChanged(self: QStyleHints, keyboardInputInterval: i32) void {
        qtc.QStyleHints_KeyboardInputIntervalChanged(@ptrCast(self.ptr), @bitCast(keyboardInputInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, keyboardInputInterval: i32) callconv(.c) void `
    ///
    pub fn OnKeyboardInputIntervalChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_KeyboardInputIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` mouseDoubleClickInterval: i32 `
    ///
    pub fn MouseDoubleClickIntervalChanged(self: QStyleHints, mouseDoubleClickInterval: i32) void {
        qtc.QStyleHints_MouseDoubleClickIntervalChanged(@ptrCast(self.ptr), @bitCast(mouseDoubleClickInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, mouseDoubleClickInterval: i32) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickIntervalChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MouseDoubleClickIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` mousePressAndHoldInterval: i32 `
    ///
    pub fn MousePressAndHoldIntervalChanged(self: QStyleHints, mousePressAndHoldInterval: i32) void {
        qtc.QStyleHints_MousePressAndHoldIntervalChanged(@ptrCast(self.ptr), @bitCast(mousePressAndHoldInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, mousePressAndHoldInterval: i32) callconv(.c) void `
    ///
    pub fn OnMousePressAndHoldIntervalChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MousePressAndHoldIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` startDragDistance: i32 `
    ///
    pub fn StartDragDistanceChanged(self: QStyleHints, startDragDistance: i32) void {
        qtc.QStyleHints_StartDragDistanceChanged(@ptrCast(self.ptr), @bitCast(startDragDistance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, startDragDistance: i32) callconv(.c) void `
    ///
    pub fn OnStartDragDistanceChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_StartDragDistanceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` startDragTime: i32 `
    ///
    pub fn StartDragTimeChanged(self: QStyleHints, startDragTime: i32) void {
        qtc.QStyleHints_StartDragTimeChanged(@ptrCast(self.ptr), @bitCast(startDragTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, startDragTime: i32) callconv(.c) void `
    ///
    pub fn OnStartDragTimeChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_StartDragTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` tabFocusBehavior: qnamespace_enums.TabFocusBehavior `
    ///
    pub fn TabFocusBehaviorChanged(self: QStyleHints, tabFocusBehavior: i32) void {
        qtc.QStyleHints_TabFocusBehaviorChanged(@ptrCast(self.ptr), @bitCast(tabFocusBehavior));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, tabFocusBehavior: qnamespace_enums.TabFocusBehavior) callconv(.c) void `
    ///
    pub fn OnTabFocusBehaviorChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_TabFocusBehaviorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` useHoverEffects: bool `
    ///
    pub fn UseHoverEffectsChanged(self: QStyleHints, useHoverEffects: bool) void {
        qtc.QStyleHints_UseHoverEffectsChanged(@ptrCast(self.ptr), useHoverEffects);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, useHoverEffects: bool) callconv(.c) void `
    ///
    pub fn OnUseHoverEffectsChanged(self: QStyleHints, callback: *const fn (QStyleHints, bool) callconv(.c) void) void {
        qtc.QStyleHints_Connect_UseHoverEffectsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` param1: bool `
    ///
    pub fn ShowShortcutsInContextMenusChanged(self: QStyleHints, param1: bool) void {
        qtc.QStyleHints_ShowShortcutsInContextMenusChanged(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, param1: bool) callconv(.c) void `
    ///
    pub fn OnShowShortcutsInContextMenusChanged(self: QStyleHints, callback: *const fn (QStyleHints, bool) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ShowShortcutsInContextMenusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` contextMenuTrigger: qnamespace_enums.ContextMenuTrigger `
    ///
    pub fn ContextMenuTriggerChanged(self: QStyleHints, contextMenuTrigger: i32) void {
        qtc.QStyleHints_ContextMenuTriggerChanged(@ptrCast(self.ptr), @bitCast(contextMenuTrigger));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, contextMenuTrigger: qnamespace_enums.ContextMenuTrigger) callconv(.c) void `
    ///
    pub fn OnContextMenuTriggerChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ContextMenuTriggerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` scrollLines: i32 `
    ///
    pub fn WheelScrollLinesChanged(self: QStyleHints, scrollLines: i32) void {
        qtc.QStyleHints_WheelScrollLinesChanged(@ptrCast(self.ptr), @bitCast(scrollLines));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, scrollLines: i32) callconv(.c) void `
    ///
    pub fn OnWheelScrollLinesChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_WheelScrollLinesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` threshold: i32 `
    ///
    pub fn MouseQuickSelectionThresholdChanged(self: QStyleHints, threshold: i32) void {
        qtc.QStyleHints_MouseQuickSelectionThresholdChanged(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, threshold: i32) callconv(.c) void `
    ///
    pub fn OnMouseQuickSelectionThresholdChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MouseQuickSelectionThresholdChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` colorScheme: qnamespace_enums.ColorScheme `
    ///
    pub fn ColorSchemeChanged(self: QStyleHints, colorScheme: i32) void {
        qtc.QStyleHints_ColorSchemeChanged(@ptrCast(self.ptr), @bitCast(colorScheme));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, colorScheme: qnamespace_enums.ColorScheme) callconv(.c) void `
    ///
    pub fn OnColorSchemeChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ColorSchemeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QStyleHints, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QStyleHints, watched: anytype, event: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QStyleHints, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstylehints.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QStyleHints, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn IsWidgetType(self: QStyleHints) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn IsWindowType(self: QStyleHints) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn IsQuickItemType(self: QStyleHints) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn SignalsBlocked(self: QStyleHints) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QStyleHints, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn Thread(self: QStyleHints) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QStyleHints, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QStyleHints, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QStyleHints, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QStyleHints, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QStyleHints, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QStyleHints, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qstylehints.Children: Memory allocation failed");
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
    /// ` self: QStyleHints `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QStyleHints, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QStyleHints, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QStyleHints, obj: anytype) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QStyleHints, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QStyleHints `
    ///
    pub fn Disconnect3(self: QStyleHints) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QStyleHints, receiver: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn DumpObjectTree(self: QStyleHints) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn DumpObjectInfo(self: QStyleHints) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QStyleHints, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QStyleHints, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QStyleHints, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qstylehints.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstylehints.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QStyleHints `
    ///
    pub fn BindingStorage(self: QStyleHints) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn BindingStorage2(self: QStyleHints) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn Destroyed(self: QStyleHints) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QStyleHints, callback: *const fn (QStyleHints) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn Parent(self: QStyleHints) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QStyleHints, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn DeleteLater(self: QStyleHints) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QStyleHints, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QStyleHints, time: i64, timerType: i32) i32 {
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
    /// ` self: QStyleHints `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QStyleHints, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QStyleHints `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QStyleHints, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QStyleHints, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QStyleHints, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QStyleHints, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QStyleHints, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QStyleHints, callback: *const fn (QStyleHints, QObject) callconv(.c) void) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QStyleHints, callback: *const fn (QStyleHints, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#dtor.QStyleHints)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHints `
    ///
    pub fn Delete(self: QStyleHints) void {
        qtc.QStyleHints_Delete(@ptrCast(self.ptr));
    }
};
