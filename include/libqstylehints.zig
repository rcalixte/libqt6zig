const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qstylehints.html
pub const qstylehints = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QStyleHints_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QStyleHints, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QStyleHints_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QStyleHints, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QStyleHints_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QStyleHints_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
    ///
    /// ``` self: ?*C.QStyleHints, mouseDoubleClickInterval: i32 ```
    pub fn SetMouseDoubleClickInterval(self: ?*anyopaque, mouseDoubleClickInterval: i32) void {
        C.QStyleHints_SetMouseDoubleClickInterval(@ptrCast(self), @intCast(mouseDoubleClickInterval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn MouseDoubleClickInterval(self: ?*anyopaque) i32 {
        return C.QStyleHints_MouseDoubleClickInterval(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn MouseDoubleClickDistance(self: ?*anyopaque) i32 {
        return C.QStyleHints_MouseDoubleClickDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn TouchDoubleTapDistance(self: ?*anyopaque) i32 {
        return C.QStyleHints_TouchDoubleTapDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
    ///
    /// ``` self: ?*C.QStyleHints, mousePressAndHoldInterval: i32 ```
    pub fn SetMousePressAndHoldInterval(self: ?*anyopaque, mousePressAndHoldInterval: i32) void {
        C.QStyleHints_SetMousePressAndHoldInterval(@ptrCast(self), @intCast(mousePressAndHoldInterval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn MousePressAndHoldInterval(self: ?*anyopaque) i32 {
        return C.QStyleHints_MousePressAndHoldInterval(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
    ///
    /// ``` self: ?*C.QStyleHints, startDragDistance: i32 ```
    pub fn SetStartDragDistance(self: ?*anyopaque, startDragDistance: i32) void {
        C.QStyleHints_SetStartDragDistance(@ptrCast(self), @intCast(startDragDistance));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn StartDragDistance(self: ?*anyopaque) i32 {
        return C.QStyleHints_StartDragDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
    ///
    /// ``` self: ?*C.QStyleHints, startDragTime: i32 ```
    pub fn SetStartDragTime(self: ?*anyopaque, startDragTime: i32) void {
        C.QStyleHints_SetStartDragTime(@ptrCast(self), @intCast(startDragTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn StartDragTime(self: ?*anyopaque) i32 {
        return C.QStyleHints_StartDragTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn StartDragVelocity(self: ?*anyopaque) i32 {
        return C.QStyleHints_StartDragVelocity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
    ///
    /// ``` self: ?*C.QStyleHints, keyboardInputInterval: i32 ```
    pub fn SetKeyboardInputInterval(self: ?*anyopaque, keyboardInputInterval: i32) void {
        C.QStyleHints_SetKeyboardInputInterval(@ptrCast(self), @intCast(keyboardInputInterval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn KeyboardInputInterval(self: ?*anyopaque) i32 {
        return C.QStyleHints_KeyboardInputInterval(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn KeyboardAutoRepeatRate(self: ?*anyopaque) i32 {
        return C.QStyleHints_KeyboardAutoRepeatRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
    ///
    /// ``` self: ?*C.QStyleHints, cursorFlashTime: i32 ```
    pub fn SetCursorFlashTime(self: ?*anyopaque, cursorFlashTime: i32) void {
        C.QStyleHints_SetCursorFlashTime(@ptrCast(self), @intCast(cursorFlashTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn CursorFlashTime(self: ?*anyopaque) i32 {
        return C.QStyleHints_CursorFlashTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn ShowIsFullScreen(self: ?*anyopaque) bool {
        return C.QStyleHints_ShowIsFullScreen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn ShowIsMaximized(self: ?*anyopaque) bool {
        return C.QStyleHints_ShowIsMaximized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn ShowShortcutsInContextMenus(self: ?*anyopaque) bool {
        return C.QStyleHints_ShowShortcutsInContextMenus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
    ///
    /// ``` self: ?*C.QStyleHints, showShortcutsInContextMenus: bool ```
    pub fn SetShowShortcutsInContextMenus(self: ?*anyopaque, showShortcutsInContextMenus: bool) void {
        C.QStyleHints_SetShowShortcutsInContextMenus(@ptrCast(self), showShortcutsInContextMenus);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn PasswordMaskDelay(self: ?*anyopaque) i32 {
        return C.QStyleHints_PasswordMaskDelay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn PasswordMaskCharacter(self: ?*anyopaque) ?*C.QChar {
        return C.QStyleHints_PasswordMaskCharacter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn FontSmoothingGamma(self: ?*anyopaque) f64 {
        return C.QStyleHints_FontSmoothingGamma(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn UseRtlExtensions(self: ?*anyopaque) bool {
        return C.QStyleHints_UseRtlExtensions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn SetFocusOnTouchRelease(self: ?*anyopaque) bool {
        return C.QStyleHints_SetFocusOnTouchRelease(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehavior)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn TabFocusBehavior(self: ?*anyopaque) i64 {
        return C.QStyleHints_TabFocusBehavior(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
    ///
    /// ``` self: ?*C.QStyleHints, tabFocusBehavior: qnamespace_enums.TabFocusBehavior ```
    pub fn SetTabFocusBehavior(self: ?*anyopaque, tabFocusBehavior: i64) void {
        C.QStyleHints_SetTabFocusBehavior(@ptrCast(self), @intCast(tabFocusBehavior));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn SingleClickActivation(self: ?*anyopaque) bool {
        return C.QStyleHints_SingleClickActivation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn UseHoverEffects(self: ?*anyopaque) bool {
        return C.QStyleHints_UseHoverEffects(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
    ///
    /// ``` self: ?*C.QStyleHints, useHoverEffects: bool ```
    pub fn SetUseHoverEffects(self: ?*anyopaque, useHoverEffects: bool) void {
        C.QStyleHints_SetUseHoverEffects(@ptrCast(self), useHoverEffects);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn WheelScrollLines(self: ?*anyopaque) i32 {
        return C.QStyleHints_WheelScrollLines(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
    ///
    /// ``` self: ?*C.QStyleHints, scrollLines: i32 ```
    pub fn SetWheelScrollLines(self: ?*anyopaque, scrollLines: i32) void {
        C.QStyleHints_SetWheelScrollLines(@ptrCast(self), @intCast(scrollLines));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
    ///
    /// ``` self: ?*C.QStyleHints, threshold: i32 ```
    pub fn SetMouseQuickSelectionThreshold(self: ?*anyopaque, threshold: i32) void {
        C.QStyleHints_SetMouseQuickSelectionThreshold(@ptrCast(self), @intCast(threshold));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn MouseQuickSelectionThreshold(self: ?*anyopaque) i32 {
        return C.QStyleHints_MouseQuickSelectionThreshold(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
    ///
    /// ``` self: ?*C.QStyleHints, cursorFlashTime: i32 ```
    pub fn CursorFlashTimeChanged(self: ?*anyopaque, cursorFlashTime: i32) void {
        C.QStyleHints_CursorFlashTimeChanged(@ptrCast(self), @intCast(cursorFlashTime));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnCursorFlashTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_CursorFlashTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
    ///
    /// ``` self: ?*C.QStyleHints, keyboardInputInterval: i32 ```
    pub fn KeyboardInputIntervalChanged(self: ?*anyopaque, keyboardInputInterval: i32) void {
        C.QStyleHints_KeyboardInputIntervalChanged(@ptrCast(self), @intCast(keyboardInputInterval));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnKeyboardInputIntervalChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_KeyboardInputIntervalChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
    ///
    /// ``` self: ?*C.QStyleHints, mouseDoubleClickInterval: i32 ```
    pub fn MouseDoubleClickIntervalChanged(self: ?*anyopaque, mouseDoubleClickInterval: i32) void {
        C.QStyleHints_MouseDoubleClickIntervalChanged(@ptrCast(self), @intCast(mouseDoubleClickInterval));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnMouseDoubleClickIntervalChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_MouseDoubleClickIntervalChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
    ///
    /// ``` self: ?*C.QStyleHints, mousePressAndHoldInterval: i32 ```
    pub fn MousePressAndHoldIntervalChanged(self: ?*anyopaque, mousePressAndHoldInterval: i32) void {
        C.QStyleHints_MousePressAndHoldIntervalChanged(@ptrCast(self), @intCast(mousePressAndHoldInterval));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnMousePressAndHoldIntervalChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_MousePressAndHoldIntervalChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
    ///
    /// ``` self: ?*C.QStyleHints, startDragDistance: i32 ```
    pub fn StartDragDistanceChanged(self: ?*anyopaque, startDragDistance: i32) void {
        C.QStyleHints_StartDragDistanceChanged(@ptrCast(self), @intCast(startDragDistance));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnStartDragDistanceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_StartDragDistanceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
    ///
    /// ``` self: ?*C.QStyleHints, startDragTime: i32 ```
    pub fn StartDragTimeChanged(self: ?*anyopaque, startDragTime: i32) void {
        C.QStyleHints_StartDragTimeChanged(@ptrCast(self), @intCast(startDragTime));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnStartDragTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_StartDragTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
    ///
    /// ``` self: ?*C.QStyleHints, tabFocusBehavior: qnamespace_enums.TabFocusBehavior ```
    pub fn TabFocusBehaviorChanged(self: ?*anyopaque, tabFocusBehavior: i64) void {
        C.QStyleHints_TabFocusBehaviorChanged(@ptrCast(self), @intCast(tabFocusBehavior));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, qnamespace_enums.TabFocusBehavior) callconv(.c) void ```
    pub fn OnTabFocusBehaviorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QStyleHints_Connect_TabFocusBehaviorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
    ///
    /// ``` self: ?*C.QStyleHints, useHoverEffects: bool ```
    pub fn UseHoverEffectsChanged(self: ?*anyopaque, useHoverEffects: bool) void {
        C.QStyleHints_UseHoverEffectsChanged(@ptrCast(self), useHoverEffects);
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, bool) callconv(.c) void ```
    pub fn OnUseHoverEffectsChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QStyleHints_Connect_UseHoverEffectsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
    ///
    /// ``` self: ?*C.QStyleHints, param1: bool ```
    pub fn ShowShortcutsInContextMenusChanged(self: ?*anyopaque, param1: bool) void {
        C.QStyleHints_ShowShortcutsInContextMenusChanged(@ptrCast(self), param1);
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, bool) callconv(.c) void ```
    pub fn OnShowShortcutsInContextMenusChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QStyleHints_Connect_ShowShortcutsInContextMenusChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
    ///
    /// ``` self: ?*C.QStyleHints, scrollLines: i32 ```
    pub fn WheelScrollLinesChanged(self: ?*anyopaque, scrollLines: i32) void {
        C.QStyleHints_WheelScrollLinesChanged(@ptrCast(self), @intCast(scrollLines));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnWheelScrollLinesChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_WheelScrollLinesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
    ///
    /// ``` self: ?*C.QStyleHints, threshold: i32 ```
    pub fn MouseQuickSelectionThresholdChanged(self: ?*anyopaque, threshold: i32) void {
        C.QStyleHints_MouseQuickSelectionThresholdChanged(@ptrCast(self), @intCast(threshold));
    }

    /// ``` self: ?*C.QStyleHints, slot: fn (?*C.QStyleHints, i32) callconv(.c) void ```
    pub fn OnMouseQuickSelectionThresholdChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QStyleHints_Connect_MouseQuickSelectionThresholdChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QStyleHints_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QStyleHints_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ``` self: ?*C.QStyleHints, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QStyleHints, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QStyleHints, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QStyleHints, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QStyleHints, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QStyleHints, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QStyleHints, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QStyleHints, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QStyleHints, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QStyleHints, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QStyleHints, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QStyleHints, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QStyleHints, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QStyleHints ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QStyleHints, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QStyleHints, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QStyleHints, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QStyleHints ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QStyleHints ```
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
    /// ``` self: ?*C.QStyleHints ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QStyleHints, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QStyleHints, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QStyleHints, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QStyleHints, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QStyleHints ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QStyleHints_Delete(@ptrCast(self));
    }
};
