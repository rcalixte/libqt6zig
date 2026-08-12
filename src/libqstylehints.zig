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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn metaObject(self: QStyleHints) QMetaObject {
        return .{ .ptr = qtc.QStyleHints_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QStyleHints, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStyleHints_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QStyleHints, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStyleHints_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyleHints.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMouseDoubleClickInterval` instead
    ///
    pub const SetMouseDoubleClickInterval = setMouseDoubleClickInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _mouseDoubleClickInterval: i32 `
    ///
    pub fn setMouseDoubleClickInterval(self: QStyleHints, _mouseDoubleClickInterval: i32) void {
        qtc.QStyleHints_SetMouseDoubleClickInterval(@ptrCast(self.ptr), @bitCast(_mouseDoubleClickInterval));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickInterval` instead
    ///
    pub const MouseDoubleClickInterval = mouseDoubleClickInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn mouseDoubleClickInterval(self: QStyleHints) i32 {
        return qtc.QStyleHints_MouseDoubleClickInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickDistance` instead
    ///
    pub const MouseDoubleClickDistance = mouseDoubleClickDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn mouseDoubleClickDistance(self: QStyleHints) i32 {
        return qtc.QStyleHints_MouseDoubleClickDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `touchDoubleTapDistance` instead
    ///
    pub const TouchDoubleTapDistance = touchDoubleTapDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn touchDoubleTapDistance(self: QStyleHints) i32 {
        return qtc.QStyleHints_TouchDoubleTapDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMousePressAndHoldInterval` instead
    ///
    pub const SetMousePressAndHoldInterval = setMousePressAndHoldInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _mousePressAndHoldInterval: i32 `
    ///
    pub fn setMousePressAndHoldInterval(self: QStyleHints, _mousePressAndHoldInterval: i32) void {
        qtc.QStyleHints_SetMousePressAndHoldInterval(@ptrCast(self.ptr), @bitCast(_mousePressAndHoldInterval));
    }

    /// ### DEPRECATED: Use `mousePressAndHoldInterval` instead
    ///
    pub const MousePressAndHoldInterval = mousePressAndHoldInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn mousePressAndHoldInterval(self: QStyleHints) i32 {
        return qtc.QStyleHints_MousePressAndHoldInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStartDragDistance` instead
    ///
    pub const SetStartDragDistance = setStartDragDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _startDragDistance: i32 `
    ///
    pub fn setStartDragDistance(self: QStyleHints, _startDragDistance: i32) void {
        qtc.QStyleHints_SetStartDragDistance(@ptrCast(self.ptr), @bitCast(_startDragDistance));
    }

    /// ### DEPRECATED: Use `startDragDistance` instead
    ///
    pub const StartDragDistance = startDragDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn startDragDistance(self: QStyleHints) i32 {
        return qtc.QStyleHints_StartDragDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStartDragTime` instead
    ///
    pub const SetStartDragTime = setStartDragTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _startDragTime: i32 `
    ///
    pub fn setStartDragTime(self: QStyleHints, _startDragTime: i32) void {
        qtc.QStyleHints_SetStartDragTime(@ptrCast(self.ptr), @bitCast(_startDragTime));
    }

    /// ### DEPRECATED: Use `startDragTime` instead
    ///
    pub const StartDragTime = startDragTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn startDragTime(self: QStyleHints) i32 {
        return qtc.QStyleHints_StartDragTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startDragVelocity` instead
    ///
    pub const StartDragVelocity = startDragVelocity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn startDragVelocity(self: QStyleHints) i32 {
        return qtc.QStyleHints_StartDragVelocity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardInputInterval` instead
    ///
    pub const SetKeyboardInputInterval = setKeyboardInputInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _keyboardInputInterval: i32 `
    ///
    pub fn setKeyboardInputInterval(self: QStyleHints, _keyboardInputInterval: i32) void {
        qtc.QStyleHints_SetKeyboardInputInterval(@ptrCast(self.ptr), @bitCast(_keyboardInputInterval));
    }

    /// ### DEPRECATED: Use `keyboardInputInterval` instead
    ///
    pub const KeyboardInputInterval = keyboardInputInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn keyboardInputInterval(self: QStyleHints) i32 {
        return qtc.QStyleHints_KeyboardInputInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyboardAutoRepeatRate` instead
    ///
    pub const KeyboardAutoRepeatRate = keyboardAutoRepeatRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn keyboardAutoRepeatRate(self: QStyleHints) i32 {
        return qtc.QStyleHints_KeyboardAutoRepeatRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyboardAutoRepeatRateF` instead
    ///
    pub const KeyboardAutoRepeatRateF = keyboardAutoRepeatRateF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRateF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn keyboardAutoRepeatRateF(self: QStyleHints) f64 {
        return qtc.QStyleHints_KeyboardAutoRepeatRateF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorFlashTime` instead
    ///
    pub const SetCursorFlashTime = setCursorFlashTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _cursorFlashTime: i32 `
    ///
    pub fn setCursorFlashTime(self: QStyleHints, _cursorFlashTime: i32) void {
        qtc.QStyleHints_SetCursorFlashTime(@ptrCast(self.ptr), @bitCast(_cursorFlashTime));
    }

    /// ### DEPRECATED: Use `cursorFlashTime` instead
    ///
    pub const CursorFlashTime = cursorFlashTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn cursorFlashTime(self: QStyleHints) i32 {
        return qtc.QStyleHints_CursorFlashTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showIsFullScreen` instead
    ///
    pub const ShowIsFullScreen = showIsFullScreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn showIsFullScreen(self: QStyleHints) bool {
        return qtc.QStyleHints_ShowIsFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showIsMaximized` instead
    ///
    pub const ShowIsMaximized = showIsMaximized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn showIsMaximized(self: QStyleHints) bool {
        return qtc.QStyleHints_ShowIsMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showShortcutsInContextMenus` instead
    ///
    pub const ShowShortcutsInContextMenus = showShortcutsInContextMenus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn showShortcutsInContextMenus(self: QStyleHints) bool {
        return qtc.QStyleHints_ShowShortcutsInContextMenus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowShortcutsInContextMenus` instead
    ///
    pub const SetShowShortcutsInContextMenus = setShowShortcutsInContextMenus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _showShortcutsInContextMenus: bool `
    ///
    pub fn setShowShortcutsInContextMenus(self: QStyleHints, _showShortcutsInContextMenus: bool) void {
        qtc.QStyleHints_SetShowShortcutsInContextMenus(@ptrCast(self.ptr), _showShortcutsInContextMenus);
    }

    /// ### DEPRECATED: Use `contextMenuTrigger` instead
    ///
    pub const ContextMenuTrigger = contextMenuTrigger;

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
    pub fn contextMenuTrigger(self: QStyleHints) i32 {
        return qtc.QStyleHints_ContextMenuTrigger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContextMenuTrigger` instead
    ///
    pub const SetContextMenuTrigger = setContextMenuTrigger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setContextMenuTrigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _contextMenuTrigger: qnamespace_enums.ContextMenuTrigger `
    ///
    pub fn setContextMenuTrigger(self: QStyleHints, _contextMenuTrigger: i32) void {
        qtc.QStyleHints_SetContextMenuTrigger(@ptrCast(self.ptr), @bitCast(_contextMenuTrigger));
    }

    /// ### DEPRECATED: Use `passwordMaskDelay` instead
    ///
    pub const PasswordMaskDelay = passwordMaskDelay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn passwordMaskDelay(self: QStyleHints) i32 {
        return qtc.QStyleHints_PasswordMaskDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `passwordMaskCharacter` instead
    ///
    pub const PasswordMaskCharacter = passwordMaskCharacter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn passwordMaskCharacter(self: QStyleHints) QChar {
        return .{ .ptr = qtc.QStyleHints_PasswordMaskCharacter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontSmoothingGamma` instead
    ///
    pub const FontSmoothingGamma = fontSmoothingGamma;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn fontSmoothingGamma(self: QStyleHints) f64 {
        return qtc.QStyleHints_FontSmoothingGamma(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `useRtlExtensions` instead
    ///
    pub const UseRtlExtensions = useRtlExtensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn useRtlExtensions(self: QStyleHints) bool {
        return qtc.QStyleHints_UseRtlExtensions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusOnTouchRelease` instead
    ///
    pub const SetFocusOnTouchRelease = setFocusOnTouchRelease;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn setFocusOnTouchRelease(self: QStyleHints) bool {
        return qtc.QStyleHints_SetFocusOnTouchRelease(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tabFocusBehavior` instead
    ///
    pub const TabFocusBehavior = tabFocusBehavior;

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
    pub fn tabFocusBehavior(self: QStyleHints) i32 {
        return qtc.QStyleHints_TabFocusBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabFocusBehavior` instead
    ///
    pub const SetTabFocusBehavior = setTabFocusBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _tabFocusBehavior: qnamespace_enums.TabFocusBehavior `
    ///
    pub fn setTabFocusBehavior(self: QStyleHints, _tabFocusBehavior: i32) void {
        qtc.QStyleHints_SetTabFocusBehavior(@ptrCast(self.ptr), @bitCast(_tabFocusBehavior));
    }

    /// ### DEPRECATED: Use `singleClickActivation` instead
    ///
    pub const SingleClickActivation = singleClickActivation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn singleClickActivation(self: QStyleHints) bool {
        return qtc.QStyleHints_SingleClickActivation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `useHoverEffects` instead
    ///
    pub const UseHoverEffects = useHoverEffects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn useHoverEffects(self: QStyleHints) bool {
        return qtc.QStyleHints_UseHoverEffects(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUseHoverEffects` instead
    ///
    pub const SetUseHoverEffects = setUseHoverEffects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _useHoverEffects: bool `
    ///
    pub fn setUseHoverEffects(self: QStyleHints, _useHoverEffects: bool) void {
        qtc.QStyleHints_SetUseHoverEffects(@ptrCast(self.ptr), _useHoverEffects);
    }

    /// ### DEPRECATED: Use `wheelScrollLines` instead
    ///
    pub const WheelScrollLines = wheelScrollLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn wheelScrollLines(self: QStyleHints) i32 {
        return qtc.QStyleHints_WheelScrollLines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWheelScrollLines` instead
    ///
    pub const SetWheelScrollLines = setWheelScrollLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` scrollLines: i32 `
    ///
    pub fn setWheelScrollLines(self: QStyleHints, scrollLines: i32) void {
        qtc.QStyleHints_SetWheelScrollLines(@ptrCast(self.ptr), @bitCast(scrollLines));
    }

    /// ### DEPRECATED: Use `setMouseQuickSelectionThreshold` instead
    ///
    pub const SetMouseQuickSelectionThreshold = setMouseQuickSelectionThreshold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` threshold: i32 `
    ///
    pub fn setMouseQuickSelectionThreshold(self: QStyleHints, threshold: i32) void {
        qtc.QStyleHints_SetMouseQuickSelectionThreshold(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### DEPRECATED: Use `mouseQuickSelectionThreshold` instead
    ///
    pub const MouseQuickSelectionThreshold = mouseQuickSelectionThreshold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn mouseQuickSelectionThreshold(self: QStyleHints) i32 {
        return qtc.QStyleHints_MouseQuickSelectionThreshold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorScheme` instead
    ///
    pub const ColorScheme = colorScheme;

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
    pub fn colorScheme(self: QStyleHints) i32 {
        return qtc.QStyleHints_ColorScheme(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorScheme` instead
    ///
    pub const SetColorScheme = setColorScheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setColorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` scheme: qnamespace_enums.ColorScheme `
    ///
    pub fn setColorScheme(self: QStyleHints, scheme: i32) void {
        qtc.QStyleHints_SetColorScheme(@ptrCast(self.ptr), @bitCast(scheme));
    }

    /// ### DEPRECATED: Use `unsetColorScheme` instead
    ///
    pub const UnsetColorScheme = unsetColorScheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#unsetColorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    pub fn unsetColorScheme(self: QStyleHints) void {
        qtc.QStyleHints_UnsetColorScheme(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cursorFlashTimeChanged` instead
    ///
    pub const CursorFlashTimeChanged = cursorFlashTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _cursorFlashTime: i32 `
    ///
    pub fn cursorFlashTimeChanged(self: QStyleHints, _cursorFlashTime: i32) void {
        qtc.QStyleHints_CursorFlashTimeChanged(@ptrCast(self.ptr), @bitCast(_cursorFlashTime));
    }

    /// ### DEPRECATED: Use `onCursorFlashTimeChanged` instead
    ///
    pub const OnCursorFlashTimeChanged = onCursorFlashTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, cursorFlashTime: i32) callconv(.c) void `
    ///
    pub fn onCursorFlashTimeChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_CursorFlashTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyboardInputIntervalChanged` instead
    ///
    pub const KeyboardInputIntervalChanged = keyboardInputIntervalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _keyboardInputInterval: i32 `
    ///
    pub fn keyboardInputIntervalChanged(self: QStyleHints, _keyboardInputInterval: i32) void {
        qtc.QStyleHints_KeyboardInputIntervalChanged(@ptrCast(self.ptr), @bitCast(_keyboardInputInterval));
    }

    /// ### DEPRECATED: Use `onKeyboardInputIntervalChanged` instead
    ///
    pub const OnKeyboardInputIntervalChanged = onKeyboardInputIntervalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, keyboardInputInterval: i32) callconv(.c) void `
    ///
    pub fn onKeyboardInputIntervalChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_KeyboardInputIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickIntervalChanged` instead
    ///
    pub const MouseDoubleClickIntervalChanged = mouseDoubleClickIntervalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _mouseDoubleClickInterval: i32 `
    ///
    pub fn mouseDoubleClickIntervalChanged(self: QStyleHints, _mouseDoubleClickInterval: i32) void {
        qtc.QStyleHints_MouseDoubleClickIntervalChanged(@ptrCast(self.ptr), @bitCast(_mouseDoubleClickInterval));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickIntervalChanged` instead
    ///
    pub const OnMouseDoubleClickIntervalChanged = onMouseDoubleClickIntervalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, mouseDoubleClickInterval: i32) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickIntervalChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MouseDoubleClickIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressAndHoldIntervalChanged` instead
    ///
    pub const MousePressAndHoldIntervalChanged = mousePressAndHoldIntervalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _mousePressAndHoldInterval: i32 `
    ///
    pub fn mousePressAndHoldIntervalChanged(self: QStyleHints, _mousePressAndHoldInterval: i32) void {
        qtc.QStyleHints_MousePressAndHoldIntervalChanged(@ptrCast(self.ptr), @bitCast(_mousePressAndHoldInterval));
    }

    /// ### DEPRECATED: Use `onMousePressAndHoldIntervalChanged` instead
    ///
    pub const OnMousePressAndHoldIntervalChanged = onMousePressAndHoldIntervalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, mousePressAndHoldInterval: i32) callconv(.c) void `
    ///
    pub fn onMousePressAndHoldIntervalChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MousePressAndHoldIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startDragDistanceChanged` instead
    ///
    pub const StartDragDistanceChanged = startDragDistanceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _startDragDistance: i32 `
    ///
    pub fn startDragDistanceChanged(self: QStyleHints, _startDragDistance: i32) void {
        qtc.QStyleHints_StartDragDistanceChanged(@ptrCast(self.ptr), @bitCast(_startDragDistance));
    }

    /// ### DEPRECATED: Use `onStartDragDistanceChanged` instead
    ///
    pub const OnStartDragDistanceChanged = onStartDragDistanceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, startDragDistance: i32) callconv(.c) void `
    ///
    pub fn onStartDragDistanceChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_StartDragDistanceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startDragTimeChanged` instead
    ///
    pub const StartDragTimeChanged = startDragTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _startDragTime: i32 `
    ///
    pub fn startDragTimeChanged(self: QStyleHints, _startDragTime: i32) void {
        qtc.QStyleHints_StartDragTimeChanged(@ptrCast(self.ptr), @bitCast(_startDragTime));
    }

    /// ### DEPRECATED: Use `onStartDragTimeChanged` instead
    ///
    pub const OnStartDragTimeChanged = onStartDragTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, startDragTime: i32) callconv(.c) void `
    ///
    pub fn onStartDragTimeChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_StartDragTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabFocusBehaviorChanged` instead
    ///
    pub const TabFocusBehaviorChanged = tabFocusBehaviorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _tabFocusBehavior: qnamespace_enums.TabFocusBehavior `
    ///
    pub fn tabFocusBehaviorChanged(self: QStyleHints, _tabFocusBehavior: i32) void {
        qtc.QStyleHints_TabFocusBehaviorChanged(@ptrCast(self.ptr), @bitCast(_tabFocusBehavior));
    }

    /// ### DEPRECATED: Use `onTabFocusBehaviorChanged` instead
    ///
    pub const OnTabFocusBehaviorChanged = onTabFocusBehaviorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, tabFocusBehavior: qnamespace_enums.TabFocusBehavior) callconv(.c) void `
    ///
    pub fn onTabFocusBehaviorChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_TabFocusBehaviorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useHoverEffectsChanged` instead
    ///
    pub const UseHoverEffectsChanged = useHoverEffectsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _useHoverEffects: bool `
    ///
    pub fn useHoverEffectsChanged(self: QStyleHints, _useHoverEffects: bool) void {
        qtc.QStyleHints_UseHoverEffectsChanged(@ptrCast(self.ptr), _useHoverEffects);
    }

    /// ### DEPRECATED: Use `onUseHoverEffectsChanged` instead
    ///
    pub const OnUseHoverEffectsChanged = onUseHoverEffectsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, useHoverEffects: bool) callconv(.c) void `
    ///
    pub fn onUseHoverEffectsChanged(self: QStyleHints, callback: *const fn (QStyleHints, bool) callconv(.c) void) void {
        qtc.QStyleHints_Connect_UseHoverEffectsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showShortcutsInContextMenusChanged` instead
    ///
    pub const ShowShortcutsInContextMenusChanged = showShortcutsInContextMenusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` param1: bool `
    ///
    pub fn showShortcutsInContextMenusChanged(self: QStyleHints, param1: bool) void {
        qtc.QStyleHints_ShowShortcutsInContextMenusChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onShowShortcutsInContextMenusChanged` instead
    ///
    pub const OnShowShortcutsInContextMenusChanged = onShowShortcutsInContextMenusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, param1: bool) callconv(.c) void `
    ///
    pub fn onShowShortcutsInContextMenusChanged(self: QStyleHints, callback: *const fn (QStyleHints, bool) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ShowShortcutsInContextMenusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuTriggerChanged` instead
    ///
    pub const ContextMenuTriggerChanged = contextMenuTriggerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _contextMenuTrigger: qnamespace_enums.ContextMenuTrigger `
    ///
    pub fn contextMenuTriggerChanged(self: QStyleHints, _contextMenuTrigger: i32) void {
        qtc.QStyleHints_ContextMenuTriggerChanged(@ptrCast(self.ptr), @bitCast(_contextMenuTrigger));
    }

    /// ### DEPRECATED: Use `onContextMenuTriggerChanged` instead
    ///
    pub const OnContextMenuTriggerChanged = onContextMenuTriggerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, contextMenuTrigger: qnamespace_enums.ContextMenuTrigger) callconv(.c) void `
    ///
    pub fn onContextMenuTriggerChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ContextMenuTriggerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelScrollLinesChanged` instead
    ///
    pub const WheelScrollLinesChanged = wheelScrollLinesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` scrollLines: i32 `
    ///
    pub fn wheelScrollLinesChanged(self: QStyleHints, scrollLines: i32) void {
        qtc.QStyleHints_WheelScrollLinesChanged(@ptrCast(self.ptr), @bitCast(scrollLines));
    }

    /// ### DEPRECATED: Use `onWheelScrollLinesChanged` instead
    ///
    pub const OnWheelScrollLinesChanged = onWheelScrollLinesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, scrollLines: i32) callconv(.c) void `
    ///
    pub fn onWheelScrollLinesChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_WheelScrollLinesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseQuickSelectionThresholdChanged` instead
    ///
    pub const MouseQuickSelectionThresholdChanged = mouseQuickSelectionThresholdChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` threshold: i32 `
    ///
    pub fn mouseQuickSelectionThresholdChanged(self: QStyleHints, threshold: i32) void {
        qtc.QStyleHints_MouseQuickSelectionThresholdChanged(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### DEPRECATED: Use `onMouseQuickSelectionThresholdChanged` instead
    ///
    pub const OnMouseQuickSelectionThresholdChanged = onMouseQuickSelectionThresholdChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, threshold: i32) callconv(.c) void `
    ///
    pub fn onMouseQuickSelectionThresholdChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_MouseQuickSelectionThresholdChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorSchemeChanged` instead
    ///
    pub const ColorSchemeChanged = colorSchemeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyleHints `
    ///
    /// ` _colorScheme: qnamespace_enums.ColorScheme `
    ///
    pub fn colorSchemeChanged(self: QStyleHints, _colorScheme: i32) void {
        qtc.QStyleHints_ColorSchemeChanged(@ptrCast(self.ptr), @bitCast(_colorScheme));
    }

    /// ### DEPRECATED: Use `onColorSchemeChanged` instead
    ///
    pub const OnColorSchemeChanged = onColorSchemeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, colorScheme: qnamespace_enums.ColorScheme) callconv(.c) void `
    ///
    pub fn onColorSchemeChanged(self: QStyleHints, callback: *const fn (QStyleHints, i32) callconv(.c) void) void {
        qtc.QStyleHints_Connect_ColorSchemeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyleHints.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyleHints.tr3: Memory allocation failed");
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
    /// ` self: QStyleHints `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QStyleHints, _event: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QStyleHints, watched: anytype, _event: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QStyleHints, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyleHints.objectName: Memory allocation failed");
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
    /// ` self: QStyleHints `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QStyleHints, name: []const u8) void {
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
    /// ` self: QStyleHints `
    ///
    pub fn isWidgetType(self: QStyleHints) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn isWindowType(self: QStyleHints) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn isQuickItemType(self: QStyleHints) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn signalsBlocked(self: QStyleHints) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QStyleHints, b: bool) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn thread(self: QStyleHints) QThread {
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
    /// ` self: QStyleHints `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QStyleHints, _thread: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QStyleHints, interval: i32) i32 {
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
    /// ` self: QStyleHints `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QStyleHints, time: i64) i32 {
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
    /// ` self: QStyleHints `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QStyleHints, id: i32) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QStyleHints, id: i32) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QStyleHints, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QStyleHints.children: Memory allocation failed");
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
    /// ` self: QStyleHints `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QStyleHints, _parent: anytype) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QStyleHints, filterObj: anytype) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QStyleHints, obj: anytype) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QStyleHints, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QStyleHints `
    ///
    pub fn disconnect3(self: QStyleHints) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QStyleHints, receiver: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn dumpObjectTree(self: QStyleHints) void {
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
    /// ` self: QStyleHints `
    ///
    pub fn dumpObjectInfo(self: QStyleHints) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QStyleHints, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QStyleHints, name: [:0]const u8) QVariant {
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
    /// ` self: QStyleHints `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QStyleHints, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QStyleHints.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStyleHints.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QStyleHints `
    ///
    pub fn bindingStorage(self: QStyleHints) QBindingStorage {
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
    /// ` self: QStyleHints `
    ///
    pub fn bindingStorage2(self: QStyleHints) QBindingStorage {
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
    /// ` self: QStyleHints `
    ///
    pub fn destroyed(self: QStyleHints) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QStyleHints, callback: *const fn (QStyleHints) callconv(.c) void) void {
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
    /// ` self: QStyleHints `
    ///
    pub fn parent(self: QStyleHints) QObject {
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
    /// ` self: QStyleHints `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QStyleHints, classname: [:0]const u8) bool {
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
    /// ` self: QStyleHints `
    ///
    pub fn deleteLater(self: QStyleHints) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QStyleHints, interval: i32, timerType: i32) i32 {
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
    /// ` self: QStyleHints `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QStyleHints, time: i64, timerType: i32) i32 {
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
    /// ` self: QStyleHints `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QStyleHints, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QStyleHints `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QStyleHints, signal: [:0]const u8) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QStyleHints, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QStyleHints, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QStyleHints, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStyleHints `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QStyleHints, param1: anytype) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QStyleHints, callback: *const fn (QStyleHints, QObject) callconv(.c) void) void {
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
    /// ` self: QStyleHints `
    ///
    /// ` callback: *const fn (self: QStyleHints, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QStyleHints, callback: *const fn (QStyleHints, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#dtor.QStyleHints)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyleHints `
    ///
    pub fn delete(self: QStyleHints) void {
        qtc.QStyleHints_Delete(@ptrCast(self.ptr));
    }
};
