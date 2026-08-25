const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const kkeysequencerecorder_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html)
pub const KKeySequenceRecorder = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KKeySequenceRecorder,

    pub const _is_KKeySequenceRecorder = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KKeySequenceRecorder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    pub fn new(_window: anytype) KKeySequenceRecorder {
        comptime _ = @TypeOf(_window)._is_QWindow;
        return .{ .ptr = qtc.KKeySequenceRecorder_new(@ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KKeySequenceRecorder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_window: anytype, _parent: anytype) KKeySequenceRecorder {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KKeySequenceRecorder_new2(@ptrCast(_window.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn metaObject(self: KKeySequenceRecorder) QMetaObject {
        return .{ .ptr = qtc.KKeySequenceRecorder_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KKeySequenceRecorder, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KKeySequenceRecorder_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn superMetaObject(self: KKeySequenceRecorder) QMetaObject {
        return .{ .ptr = qtc.KKeySequenceRecorder_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KKeySequenceRecorder, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KKeySequenceRecorder_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KKeySequenceRecorder_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KKeySequenceRecorder, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KKeySequenceRecorder_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KKeySequenceRecorder, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KKeySequenceRecorder_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KKeySequenceRecorder_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KKeySequenceRecorder, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KKeySequenceRecorder_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KKeySequenceRecorder.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startRecording` instead
    ///
    pub const StartRecording = startRecording;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#startRecording)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn startRecording(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_StartRecording(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRecording` instead
    ///
    pub const IsRecording = isRecording;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#isRecording)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn isRecording(self: KKeySequenceRecorder) bool {
        return qtc.KKeySequenceRecorder_IsRecording(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentKeySequence` instead
    ///
    pub const CurrentKeySequence = currentKeySequence;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#currentKeySequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn currentKeySequence(self: KKeySequenceRecorder) QKeySequence {
        return .{ .ptr = qtc.KKeySequenceRecorder_CurrentKeySequence(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCurrentKeySequence` instead
    ///
    pub const SetCurrentKeySequence = setCurrentKeySequence;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#setCurrentKeySequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` sequence: QKeySequence `
    ///
    pub fn setCurrentKeySequence(self: KKeySequenceRecorder, sequence: anytype) void {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        qtc.KKeySequenceRecorder_SetCurrentKeySequence(@ptrCast(self.ptr), @ptrCast(sequence.ptr));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn window(self: KKeySequenceRecorder) QWindow {
        return .{ .ptr = qtc.KKeySequenceRecorder_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _window: QWindow `
    ///
    pub fn setWindow(self: KKeySequenceRecorder, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QWindow;
        qtc.KKeySequenceRecorder_SetWindow(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `multiKeyShortcutsAllowed` instead
    ///
    pub const MultiKeyShortcutsAllowed = multiKeyShortcutsAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#multiKeyShortcutsAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn multiKeyShortcutsAllowed(self: KKeySequenceRecorder) bool {
        return qtc.KKeySequenceRecorder_MultiKeyShortcutsAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMultiKeyShortcutsAllowed` instead
    ///
    pub const SetMultiKeyShortcutsAllowed = setMultiKeyShortcutsAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#setMultiKeyShortcutsAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` allowed: bool `
    ///
    pub fn setMultiKeyShortcutsAllowed(self: KKeySequenceRecorder, allowed: bool) void {
        qtc.KKeySequenceRecorder_SetMultiKeyShortcutsAllowed(@ptrCast(self.ptr), allowed);
    }

    /// ### DEPRECATED: Use `setModifierlessAllowed` instead
    ///
    pub const SetModifierlessAllowed = setModifierlessAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#setModifierlessAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` allowed: bool `
    ///
    pub fn setModifierlessAllowed(self: KKeySequenceRecorder, allowed: bool) void {
        qtc.KKeySequenceRecorder_SetModifierlessAllowed(@ptrCast(self.ptr), allowed);
    }

    /// ### DEPRECATED: Use `modifierlessAllowed` instead
    ///
    pub const ModifierlessAllowed = modifierlessAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#modifierlessAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn modifierlessAllowed(self: KKeySequenceRecorder) bool {
        return qtc.KKeySequenceRecorder_ModifierlessAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifierOnlyAllowed` instead
    ///
    pub const SetModifierOnlyAllowed = setModifierOnlyAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#setModifierOnlyAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` allowed: bool `
    ///
    pub fn setModifierOnlyAllowed(self: KKeySequenceRecorder, allowed: bool) void {
        qtc.KKeySequenceRecorder_SetModifierOnlyAllowed(@ptrCast(self.ptr), allowed);
    }

    /// ### DEPRECATED: Use `modifierOnlyAllowed` instead
    ///
    pub const ModifierOnlyAllowed = modifierOnlyAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#modifierOnlyAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn modifierOnlyAllowed(self: KKeySequenceRecorder) bool {
        return qtc.KKeySequenceRecorder_ModifierOnlyAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPatterns` instead
    ///
    pub const SetPatterns = setPatterns;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#setPatterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _patterns: flag of kkeysequencerecorder_enums.Pattern `
    ///
    pub fn setPatterns(self: KKeySequenceRecorder, _patterns: i32) void {
        qtc.KKeySequenceRecorder_SetPatterns(@ptrCast(self.ptr), @bitCast(_patterns));
    }

    /// ### DEPRECATED: Use `patterns` instead
    ///
    pub const Patterns = patterns;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#patterns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ## Returns:
    ///
    /// ` flag of kkeysequencerecorder_enums.Pattern `
    ///
    pub fn patterns(self: KKeySequenceRecorder) i32 {
        return qtc.KKeySequenceRecorder_Patterns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancelRecording` instead
    ///
    pub const CancelRecording = cancelRecording;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#cancelRecording)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn cancelRecording(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_CancelRecording(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gotKeySequence` instead
    ///
    pub const GotKeySequence = gotKeySequence;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#gotKeySequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` keySequence: QKeySequence `
    ///
    pub fn gotKeySequence(self: KKeySequenceRecorder, keySequence: anytype) void {
        comptime _ = @TypeOf(keySequence)._is_QKeySequence;
        qtc.KKeySequenceRecorder_GotKeySequence(@ptrCast(self.ptr), @ptrCast(keySequence.ptr));
    }

    /// ### DEPRECATED: Use `onGotKeySequence` instead
    ///
    pub const OnGotKeySequence = onGotKeySequence;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#gotKeySequence)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, keySequence: QKeySequence) callconv(.c) void `
    ///
    pub fn onGotKeySequence(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QKeySequence) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_GotKeySequence(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recordingChanged` instead
    ///
    pub const RecordingChanged = recordingChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#recordingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn recordingChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_RecordingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRecordingChanged` instead
    ///
    pub const OnRecordingChanged = onRecordingChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#recordingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onRecordingChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_RecordingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowChanged` instead
    ///
    pub const WindowChanged = windowChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#windowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn windowChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_WindowChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWindowChanged` instead
    ///
    pub const OnWindowChanged = onWindowChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#windowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onWindowChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_WindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentKeySequenceChanged` instead
    ///
    pub const CurrentKeySequenceChanged = currentKeySequenceChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#currentKeySequenceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn currentKeySequenceChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_CurrentKeySequenceChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentKeySequenceChanged` instead
    ///
    pub const OnCurrentKeySequenceChanged = onCurrentKeySequenceChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#currentKeySequenceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onCurrentKeySequenceChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_CurrentKeySequenceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiKeyShortcutsAllowedChanged` instead
    ///
    pub const MultiKeyShortcutsAllowedChanged = multiKeyShortcutsAllowedChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#multiKeyShortcutsAllowedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn multiKeyShortcutsAllowedChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_MultiKeyShortcutsAllowedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMultiKeyShortcutsAllowedChanged` instead
    ///
    pub const OnMultiKeyShortcutsAllowedChanged = onMultiKeyShortcutsAllowedChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#multiKeyShortcutsAllowedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onMultiKeyShortcutsAllowedChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_MultiKeyShortcutsAllowedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modifierlessAllowedChanged` instead
    ///
    pub const ModifierlessAllowedChanged = modifierlessAllowedChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#modifierlessAllowedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn modifierlessAllowedChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_ModifierlessAllowedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModifierlessAllowedChanged` instead
    ///
    pub const OnModifierlessAllowedChanged = onModifierlessAllowedChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#modifierlessAllowedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onModifierlessAllowedChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_ModifierlessAllowedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modifierOnlyAllowedChanged` instead
    ///
    pub const ModifierOnlyAllowedChanged = modifierOnlyAllowedChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#modifierOnlyAllowedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn modifierOnlyAllowedChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_ModifierOnlyAllowedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModifierOnlyAllowedChanged` instead
    ///
    pub const OnModifierOnlyAllowedChanged = onModifierOnlyAllowedChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#modifierOnlyAllowedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onModifierOnlyAllowedChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_ModifierOnlyAllowedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `patternsChanged` instead
    ///
    pub const PatternsChanged = patternsChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#patternsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn patternsChanged(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_PatternsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPatternsChanged` instead
    ///
    pub const OnPatternsChanged = onPatternsChanged;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#patternsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onPatternsChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_Connect_PatternsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KKeySequenceRecorder.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KKeySequenceRecorder.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KKeySequenceRecorder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KKeySequenceRecorder.objectName: Memory allocation failed");
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KKeySequenceRecorder, name: []const u8) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn isWidgetType(self: KKeySequenceRecorder) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn isWindowType(self: KKeySequenceRecorder) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn isQuickItemType(self: KKeySequenceRecorder) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn signalsBlocked(self: KKeySequenceRecorder) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KKeySequenceRecorder, b: bool) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn thread(self: KKeySequenceRecorder) QThread {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KKeySequenceRecorder, _thread: anytype) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KKeySequenceRecorder, interval: i32) i32 {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KKeySequenceRecorder, time: i64) i32 {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KKeySequenceRecorder, id: i32) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KKeySequenceRecorder, id: i32) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KKeySequenceRecorder, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KKeySequenceRecorder.children: Memory allocation failed");
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KKeySequenceRecorder, _parent: anytype) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KKeySequenceRecorder, filterObj: anytype) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KKeySequenceRecorder, obj: anytype) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KKeySequenceRecorder, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn disconnect3(self: KKeySequenceRecorder) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KKeySequenceRecorder, receiver: anytype) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn dumpObjectTree(self: KKeySequenceRecorder) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn dumpObjectInfo(self: KKeySequenceRecorder) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KKeySequenceRecorder, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KKeySequenceRecorder, name: [:0]const u8) QVariant {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KKeySequenceRecorder, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KKeySequenceRecorder.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KKeySequenceRecorder.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn bindingStorage(self: KKeySequenceRecorder) QBindingStorage {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn bindingStorage2(self: KKeySequenceRecorder) QBindingStorage {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn destroyed(self: KKeySequenceRecorder) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder) callconv(.c) void) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn parent(self: KKeySequenceRecorder) QObject {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KKeySequenceRecorder, classname: [:0]const u8) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn deleteLater(self: KKeySequenceRecorder) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KKeySequenceRecorder, interval: i32, timerType: i32) i32 {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KKeySequenceRecorder, time: i64, timerType: i32) i32 {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KKeySequenceRecorder, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KKeySequenceRecorder, signal: [:0]const u8) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KKeySequenceRecorder, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KKeySequenceRecorder, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KKeySequenceRecorder, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KKeySequenceRecorder, param1: anytype) void {
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KKeySequenceRecorder, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KKeySequenceRecorder_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KKeySequenceRecorder, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KKeySequenceRecorder_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QEvent) callconv(.c) bool) void {
        qtc.KKeySequenceRecorder_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KKeySequenceRecorder, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KKeySequenceRecorder_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KKeySequenceRecorder, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KKeySequenceRecorder_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QObject, QEvent) callconv(.c) bool) void {
        qtc.KKeySequenceRecorder_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KKeySequenceRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KKeySequenceRecorder_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KKeySequenceRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KKeySequenceRecorder_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QTimerEvent) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KKeySequenceRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KKeySequenceRecorder_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KKeySequenceRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KKeySequenceRecorder_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QChildEvent) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KKeySequenceRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KKeySequenceRecorder_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KKeySequenceRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KKeySequenceRecorder_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QEvent) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KKeySequenceRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KKeySequenceRecorder_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KKeySequenceRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KKeySequenceRecorder_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QMetaMethod) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KKeySequenceRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KKeySequenceRecorder_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KKeySequenceRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KKeySequenceRecorder_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QMetaMethod) callconv(.c) void) void {
        qtc.KKeySequenceRecorder_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn sender(self: KKeySequenceRecorder) QObject {
        return .{ .ptr = qtc.KKeySequenceRecorder_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn superSender(self: KKeySequenceRecorder) QObject {
        return .{ .ptr = qtc.KKeySequenceRecorder_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KKeySequenceRecorder, callback: *const fn () callconv(.c) QObject) void {
        qtc.KKeySequenceRecorder_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn senderSignalIndex(self: KKeySequenceRecorder) i32 {
        return qtc.KKeySequenceRecorder_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn superSenderSignalIndex(self: KKeySequenceRecorder) i32 {
        return qtc.KKeySequenceRecorder_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KKeySequenceRecorder, callback: *const fn () callconv(.c) i32) void {
        qtc.KKeySequenceRecorder_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KKeySequenceRecorder, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KKeySequenceRecorder_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KKeySequenceRecorder, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KKeySequenceRecorder_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, [*:0]const u8) callconv(.c) i32) void {
        qtc.KKeySequenceRecorder_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KKeySequenceRecorder, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KKeySequenceRecorder_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KKeySequenceRecorder, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KKeySequenceRecorder_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KKeySequenceRecorder`
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, QMetaMethod) callconv(.c) bool) void {
        qtc.KKeySequenceRecorder_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KKeySequenceRecorder `
    ///
    /// ` callback: *const fn (self: KKeySequenceRecorder, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KKeySequenceRecorder, callback: *const fn (KKeySequenceRecorder, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#dtor.KKeySequenceRecorder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KKeySequenceRecorder `
    ///
    pub fn delete(self: KKeySequenceRecorder) void {
        qtc.KKeySequenceRecorder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kkeysequencerecorder.html#public-types)
pub const enums = struct {
    pub const Pattern = enum {
        pub const Modifier: i32 = 1;
        pub const Key: i32 = 2;
        pub const ModifierAndKey: i32 = 4;
    };
};
