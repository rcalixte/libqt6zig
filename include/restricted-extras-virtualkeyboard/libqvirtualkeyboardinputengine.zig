const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QVirtualKeyboardAbstractInputMethod = @import("libqt6").QVirtualKeyboardAbstractInputMethod;
const QVirtualKeyboardInputContext = @import("libqt6").QVirtualKeyboardInputContext;
const QVirtualKeyboardSelectionListModel = @import("libqt6").QVirtualKeyboardSelectionListModel;
const QVirtualKeyboardTrace = @import("libqt6").QVirtualKeyboardTrace;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qvirtualkeyboardinputengine_enums = enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html)
pub const QVirtualKeyboardInputEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVirtualKeyboardInputEngine,

    pub const _is_QVirtualKeyboardInputEngine = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn metaObject(self: QVirtualKeyboardInputEngine) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardInputEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVirtualKeyboardInputEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardInputEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVirtualKeyboardInputEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardInputEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QVirtualKeyboardInputEngine_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputEngine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `virtualKeyPress` instead
    ///
    pub const VirtualKeyPress = virtualKeyPress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyPress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` repeat: bool `
    ///
    pub fn virtualKeyPress(self: QVirtualKeyboardInputEngine, key: i32, text: []const u8, modifiers: i32, repeat: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QVirtualKeyboardInputEngine_VirtualKeyPress(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers), repeat);
    }

    /// ### DEPRECATED: Use `virtualKeyCancel` instead
    ///
    pub const VirtualKeyCancel = virtualKeyCancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn virtualKeyCancel(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_VirtualKeyCancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `virtualKeyRelease` instead
    ///
    pub const VirtualKeyRelease = virtualKeyRelease;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyRelease)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn virtualKeyRelease(self: QVirtualKeyboardInputEngine, key: i32, text: []const u8, modifiers: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QVirtualKeyboardInputEngine_VirtualKeyRelease(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers));
    }

    /// ### DEPRECATED: Use `virtualKeyClick` instead
    ///
    pub const VirtualKeyClick = virtualKeyClick;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn virtualKeyClick(self: QVirtualKeyboardInputEngine, key: i32, text: []const u8, modifiers: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QVirtualKeyboardInputEngine_VirtualKeyClick(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers));
    }

    /// ### DEPRECATED: Use `inputContext` instead
    ///
    pub const InputContext = inputContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputContext(self: QVirtualKeyboardInputEngine) QVirtualKeyboardInputContext {
        return .{ .ptr = qtc.QVirtualKeyboardInputEngine_InputContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeKey` instead
    ///
    pub const ActiveKey = activeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#activeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Key `
    ///
    pub fn activeKey(self: QVirtualKeyboardInputEngine) i32 {
        return qtc.QVirtualKeyboardInputEngine_ActiveKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `previousKey` instead
    ///
    pub const PreviousKey = previousKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#previousKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Key `
    ///
    pub fn previousKey(self: QVirtualKeyboardInputEngine) i32 {
        return qtc.QVirtualKeyboardInputEngine_PreviousKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inputMethod` instead
    ///
    pub const InputMethod = inputMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputMethod(self: QVirtualKeyboardInputEngine) QVirtualKeyboardAbstractInputMethod {
        return .{ .ptr = qtc.QVirtualKeyboardInputEngine_InputMethod(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInputMethod` instead
    ///
    pub const SetInputMethod = setInputMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#setInputMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _inputMethod: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn setInputMethod(self: QVirtualKeyboardInputEngine, _inputMethod: anytype) void {
        comptime _ = @TypeOf(_inputMethod)._is_QVirtualKeyboardAbstractInputMethod;
        qtc.QVirtualKeyboardInputEngine_SetInputMethod(@ptrCast(self.ptr), @ptrCast(_inputMethod.ptr));
    }

    /// ### DEPRECATED: Use `inputModes` instead
    ///
    pub const InputModes = inputModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inputModes(self: QVirtualKeyboardInputEngine, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardInputEngine_InputModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardInputEngine.inputModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inputMode` instead
    ///
    pub const InputMode = inputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ## Returns:
    ///
    /// ` qvirtualkeyboardinputengine_enums.InputMode `
    ///
    pub fn inputMode(self: QVirtualKeyboardInputEngine) i32 {
        return qtc.QVirtualKeyboardInputEngine_InputMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMode` instead
    ///
    pub const SetInputMode = setInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#setInputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _inputMode: qvirtualkeyboardinputengine_enums.InputMode `
    ///
    pub fn setInputMode(self: QVirtualKeyboardInputEngine, _inputMode: i32) void {
        qtc.QVirtualKeyboardInputEngine_SetInputMode(@ptrCast(self.ptr), @bitCast(_inputMode));
    }

    /// ### DEPRECATED: Use `wordCandidateListModel` instead
    ///
    pub const WordCandidateListModel = wordCandidateListModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn wordCandidateListModel(self: QVirtualKeyboardInputEngine) QVirtualKeyboardSelectionListModel {
        return .{ .ptr = qtc.QVirtualKeyboardInputEngine_WordCandidateListModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `wordCandidateListVisibleHint` instead
    ///
    pub const WordCandidateListVisibleHint = wordCandidateListVisibleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListVisibleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn wordCandidateListVisibleHint(self: QVirtualKeyboardInputEngine) bool {
        return qtc.QVirtualKeyboardInputEngine_WordCandidateListVisibleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `patternRecognitionModes` instead
    ///
    pub const PatternRecognitionModes = patternRecognitionModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#patternRecognitionModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn patternRecognitionModes(self: QVirtualKeyboardInputEngine, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardInputEngine_PatternRecognitionModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardInputEngine.patternRecognitionModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `traceBegin` instead
    ///
    pub const TraceBegin = traceBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#traceBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` traceId: i32 `
    ///
    /// ` patternRecognitionMode: qvirtualkeyboardinputengine_enums.PatternRecognitionMode `
    ///
    /// ` traceCaptureDeviceInfo: ArrayMap_constu8_QVariant `
    ///
    /// ` traceScreenInfo: ArrayMap_constu8_QVariant `
    ///
    pub fn traceBegin(self: QVirtualKeyboardInputEngine, allocator: std.mem.Allocator, traceId: i32, patternRecognitionMode: i32, traceCaptureDeviceInfo: ArrayMap_constu8_QVariant, traceScreenInfo: ArrayMap_constu8_QVariant) QVirtualKeyboardTrace {
        const traceCaptureDeviceInfo_count = traceCaptureDeviceInfo.count();
        const traceCaptureDeviceInfo_keys = allocator.alloc(qtc.libqt_string, traceCaptureDeviceInfo_count) catch @panic("QVirtualKeyboardInputEngine.traceBegin: Memory allocation failed");
        defer allocator.free(traceCaptureDeviceInfo_keys);
        const traceCaptureDeviceInfo_values = allocator.alloc(QtC.QVariant, traceCaptureDeviceInfo_count) catch @panic("QVirtualKeyboardInputEngine.traceBegin: Memory allocation failed");
        defer allocator.free(traceCaptureDeviceInfo_values);
        var traceCaptureDeviceInfo_i: usize = 0;
        var traceCaptureDeviceInfo_it = traceCaptureDeviceInfo.iterator();
        while (traceCaptureDeviceInfo_it.next()) |it_entry| : (traceCaptureDeviceInfo_i += 1) {
            const traceCaptureDeviceInfo_key = it_entry.key_ptr.*;
            traceCaptureDeviceInfo_keys[traceCaptureDeviceInfo_i] = qtc.libqt_string{
                .len = traceCaptureDeviceInfo_key.len,
                .data = traceCaptureDeviceInfo_key.ptr,
            };
            traceCaptureDeviceInfo_values[traceCaptureDeviceInfo_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const traceCaptureDeviceInfo_map = qtc.libqt_map{
            .len = traceCaptureDeviceInfo_count,
            .keys = @ptrCast(traceCaptureDeviceInfo_keys.ptr),
            .values = @ptrCast(traceCaptureDeviceInfo_values.ptr),
        };
        const traceScreenInfo_count = traceScreenInfo.count();
        const traceScreenInfo_keys = allocator.alloc(qtc.libqt_string, traceScreenInfo_count) catch @panic("QVirtualKeyboardInputEngine.traceBegin: Memory allocation failed");
        defer allocator.free(traceScreenInfo_keys);
        const traceScreenInfo_values = allocator.alloc(QtC.QVariant, traceScreenInfo_count) catch @panic("QVirtualKeyboardInputEngine.traceBegin: Memory allocation failed");
        defer allocator.free(traceScreenInfo_values);
        var traceScreenInfo_i: usize = 0;
        var traceScreenInfo_it = traceScreenInfo.iterator();
        while (traceScreenInfo_it.next()) |it_entry| : (traceScreenInfo_i += 1) {
            const traceScreenInfo_key = it_entry.key_ptr.*;
            traceScreenInfo_keys[traceScreenInfo_i] = qtc.libqt_string{
                .len = traceScreenInfo_key.len,
                .data = traceScreenInfo_key.ptr,
            };
            traceScreenInfo_values[traceScreenInfo_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const traceScreenInfo_map = qtc.libqt_map{
            .len = traceScreenInfo_count,
            .keys = @ptrCast(traceScreenInfo_keys.ptr),
            .values = @ptrCast(traceScreenInfo_values.ptr),
        };
        return .{ .ptr = qtc.QVirtualKeyboardInputEngine_TraceBegin(@ptrCast(self.ptr), @bitCast(traceId), @bitCast(patternRecognitionMode), traceCaptureDeviceInfo_map, traceScreenInfo_map) };
    }

    /// ### DEPRECATED: Use `traceEnd` instead
    ///
    pub const TraceEnd = traceEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#traceEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` trace: QVirtualKeyboardTrace `
    ///
    pub fn traceEnd(self: QVirtualKeyboardInputEngine, trace: anytype) bool {
        comptime _ = @TypeOf(trace)._is_QVirtualKeyboardTrace;
        return qtc.QVirtualKeyboardInputEngine_TraceEnd(@ptrCast(self.ptr), @ptrCast(trace.ptr));
    }

    /// ### DEPRECATED: Use `reselect` instead
    ///
    pub const Reselect = reselect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#reselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` cursorPosition: i32 `
    ///
    /// ` reselectFlags: *const flag of qvirtualkeyboardinputengine_enums.ReselectFlag `
    ///
    pub fn reselect(self: QVirtualKeyboardInputEngine, cursorPosition: i32, reselectFlags: *const i32) bool {
        return qtc.QVirtualKeyboardInputEngine_Reselect(@ptrCast(self.ptr), @bitCast(cursorPosition), @ptrCast(reselectFlags));
    }

    /// ### DEPRECATED: Use `clickPreeditText` instead
    ///
    pub const ClickPreeditText = clickPreeditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#clickPreeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn clickPreeditText(self: QVirtualKeyboardInputEngine, cursorPosition: i32) bool {
        return qtc.QVirtualKeyboardInputEngine_ClickPreeditText(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// ### DEPRECATED: Use `virtualKeyClicked` instead
    ///
    pub const VirtualKeyClicked = virtualKeyClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` isAutoRepeat: bool `
    ///
    pub fn virtualKeyClicked(self: QVirtualKeyboardInputEngine, key: i32, text: []const u8, modifiers: i32, isAutoRepeat: bool) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputEngine_VirtualKeyClicked(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers), isAutoRepeat);
    }

    /// ### DEPRECATED: Use `onVirtualKeyClicked` instead
    ///
    pub const OnVirtualKeyClicked = onVirtualKeyClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine, key: qnamespace_enums.Key, text: [*:0]const u8, modifiers: flag of qnamespace_enums.KeyboardModifier, isAutoRepeat: bool) callconv(.c) void `
    ///
    pub fn onVirtualKeyClicked(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine, i32, [*:0]const u8, i32, bool) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_VirtualKeyClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeKeyChanged` instead
    ///
    pub const ActiveKeyChanged = activeKeyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#activeKeyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn activeKeyChanged(self: QVirtualKeyboardInputEngine, key: i32) void {
        qtc.QVirtualKeyboardInputEngine_ActiveKeyChanged(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `onActiveKeyChanged` instead
    ///
    pub const OnActiveKeyChanged = onActiveKeyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#activeKeyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn onActiveKeyChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_ActiveKeyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `previousKeyChanged` instead
    ///
    pub const PreviousKeyChanged = previousKeyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#previousKeyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn previousKeyChanged(self: QVirtualKeyboardInputEngine, key: i32) void {
        qtc.QVirtualKeyboardInputEngine_PreviousKeyChanged(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `onPreviousKeyChanged` instead
    ///
    pub const OnPreviousKeyChanged = onPreviousKeyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#previousKeyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn onPreviousKeyChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_PreviousKeyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodChanged` instead
    ///
    pub const InputMethodChanged = inputMethodChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputMethodChanged(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_InputMethodChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodChanged` instead
    ///
    pub const OnInputMethodChanged = onInputMethodChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onInputMethodChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_InputMethodChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodReset` instead
    ///
    pub const InputMethodReset = inputMethodReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputMethodReset(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_InputMethodReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodReset` instead
    ///
    pub const OnInputMethodReset = onInputMethodReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onInputMethodReset(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_InputMethodReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodUpdate` instead
    ///
    pub const InputMethodUpdate = inputMethodUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputMethodUpdate(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_InputMethodUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodUpdate` instead
    ///
    pub const OnInputMethodUpdate = onInputMethodUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodUpdate)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onInputMethodUpdate(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_InputMethodUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputModesChanged` instead
    ///
    pub const InputModesChanged = inputModesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputModesChanged(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_InputModesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputModesChanged` instead
    ///
    pub const OnInputModesChanged = onInputModesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onInputModesChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_InputModesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputModeChanged` instead
    ///
    pub const InputModeChanged = inputModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn inputModeChanged(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_InputModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputModeChanged` instead
    ///
    pub const OnInputModeChanged = onInputModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onInputModeChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_InputModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `patternRecognitionModesChanged` instead
    ///
    pub const PatternRecognitionModesChanged = patternRecognitionModesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#patternRecognitionModesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn patternRecognitionModesChanged(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_PatternRecognitionModesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPatternRecognitionModesChanged` instead
    ///
    pub const OnPatternRecognitionModesChanged = onPatternRecognitionModesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#patternRecognitionModesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onPatternRecognitionModesChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_PatternRecognitionModesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wordCandidateListModelChanged` instead
    ///
    pub const WordCandidateListModelChanged = wordCandidateListModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListModelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn wordCandidateListModelChanged(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_WordCandidateListModelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWordCandidateListModelChanged` instead
    ///
    pub const OnWordCandidateListModelChanged = onWordCandidateListModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListModelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onWordCandidateListModelChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_WordCandidateListModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wordCandidateListVisibleHintChanged` instead
    ///
    pub const WordCandidateListVisibleHintChanged = wordCandidateListVisibleHintChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListVisibleHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn wordCandidateListVisibleHintChanged(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_WordCandidateListVisibleHintChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWordCandidateListVisibleHintChanged` instead
    ///
    pub const OnWordCandidateListVisibleHintChanged = onWordCandidateListVisibleHintChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListVisibleHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onWordCandidateListVisibleHintChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputEngine_Connect_WordCandidateListVisibleHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QVirtualKeyboardInputEngine_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputEngine.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QVirtualKeyboardInputEngine_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputEngine.tr3: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVirtualKeyboardInputEngine, _event: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVirtualKeyboardInputEngine, watched: anytype, _event: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVirtualKeyboardInputEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputEngine.objectName: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVirtualKeyboardInputEngine, name: []const u8) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn isWidgetType(self: QVirtualKeyboardInputEngine) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn isWindowType(self: QVirtualKeyboardInputEngine) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn isQuickItemType(self: QVirtualKeyboardInputEngine) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn signalsBlocked(self: QVirtualKeyboardInputEngine) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVirtualKeyboardInputEngine, b: bool) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn thread(self: QVirtualKeyboardInputEngine) QThread {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVirtualKeyboardInputEngine, _thread: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVirtualKeyboardInputEngine, interval: i32) i32 {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVirtualKeyboardInputEngine, time: i64) i32 {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVirtualKeyboardInputEngine, id: i32) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVirtualKeyboardInputEngine, id: i32) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVirtualKeyboardInputEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVirtualKeyboardInputEngine.children: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVirtualKeyboardInputEngine, _parent: anytype) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVirtualKeyboardInputEngine, filterObj: anytype) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVirtualKeyboardInputEngine, obj: anytype) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVirtualKeyboardInputEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn disconnect3(self: QVirtualKeyboardInputEngine) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVirtualKeyboardInputEngine, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn dumpObjectTree(self: QVirtualKeyboardInputEngine) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn dumpObjectInfo(self: QVirtualKeyboardInputEngine) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVirtualKeyboardInputEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVirtualKeyboardInputEngine, name: [:0]const u8) QVariant {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVirtualKeyboardInputEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVirtualKeyboardInputEngine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardInputEngine.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn bindingStorage(self: QVirtualKeyboardInputEngine) QBindingStorage {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn bindingStorage2(self: QVirtualKeyboardInputEngine) QBindingStorage {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn destroyed(self: QVirtualKeyboardInputEngine) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn parent(self: QVirtualKeyboardInputEngine) QObject {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVirtualKeyboardInputEngine, classname: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn deleteLater(self: QVirtualKeyboardInputEngine) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVirtualKeyboardInputEngine, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVirtualKeyboardInputEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVirtualKeyboardInputEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVirtualKeyboardInputEngine, signal: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVirtualKeyboardInputEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVirtualKeyboardInputEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVirtualKeyboardInputEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVirtualKeyboardInputEngine, param1: anytype) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine, QObject) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVirtualKeyboardInputEngine, callback: *const fn (QVirtualKeyboardInputEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#dtor.QVirtualKeyboardInputEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVirtualKeyboardInputEngine `
    ///
    pub fn delete(self: QVirtualKeyboardInputEngine) void {
        qtc.QVirtualKeyboardInputEngine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine-h.html)
pub const qvirtualkeyboardinputengine_h = extern struct {
    /// ### DEPRECATED: Use `qHash` instead
    ///
    pub const QHash = qHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine-h.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qvirtualkeyboardinputengine_enums.InputMode `
    ///
    /// ` seed: u32 `
    ///
    pub fn qHash(key: i32, seed: u32) u32 {
        return qtc.qvirtualkeyboardinputengine_h_QHash(@bitCast(key), @bitCast(seed));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#public-types)
pub const enums = struct {
    pub const TextCase = enum {
        pub const Lower: i32 = 0;
        pub const Upper: i32 = 1;
    };

    pub const InputMode = enum {
        pub const Latin: i32 = 0;
        pub const Numeric: i32 = 1;
        pub const Dialable: i32 = 2;
        pub const Pinyin: i32 = 3;
        pub const Cangjie: i32 = 4;
        pub const Zhuyin: i32 = 5;
        pub const Hangul: i32 = 6;
        pub const Hiragana: i32 = 7;
        pub const Katakana: i32 = 8;
        pub const FullwidthLatin: i32 = 9;
        pub const Greek: i32 = 10;
        pub const Cyrillic: i32 = 11;
        pub const Arabic: i32 = 12;
        pub const Hebrew: i32 = 13;
        pub const ChineseHandwriting: i32 = 14;
        pub const JapaneseHandwriting: i32 = 15;
        pub const KoreanHandwriting: i32 = 16;
        pub const Thai: i32 = 17;
        pub const Stroke: i32 = 18;
        pub const Romaji: i32 = 19;
    };

    pub const PatternRecognitionMode = enum {
        pub const None: i32 = 0;
        pub const PatternRecognitionDisabled: i32 = 0;
        pub const Handwriting: i32 = 1;
        pub const HandwritingRecoginition: i32 = 1;
    };

    pub const ReselectFlag = enum {
        pub const WordBeforeCursor: i32 = 1;
        pub const WordAfterCursor: i32 = 2;
        pub const WordAtCursor: i32 = 3;
    };
};
