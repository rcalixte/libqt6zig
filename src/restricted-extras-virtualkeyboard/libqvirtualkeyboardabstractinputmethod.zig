const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVirtualKeyboardInputContext = @import("libqt6").QVirtualKeyboardInputContext;
const QVirtualKeyboardInputEngine = @import("libqt6").QVirtualKeyboardInputEngine;
const QVirtualKeyboardTrace = @import("libqt6").QVirtualKeyboardTrace;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qvirtualkeyboardinputengine_enums = @import("libqvirtualkeyboardinputengine.zig").enums;
const qvirtualkeyboardselectionlistmodel_enums = @import("libqvirtualkeyboardselectionlistmodel.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html)
pub const QVirtualKeyboardAbstractInputMethod = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVirtualKeyboardAbstractInputMethod,

    pub const _is_QVirtualKeyboardAbstractInputMethod = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVirtualKeyboardAbstractInputMethod object in C++ memory
    ///
    pub fn new() QVirtualKeyboardAbstractInputMethod {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVirtualKeyboardAbstractInputMethod object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVirtualKeyboardAbstractInputMethod {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn metaObject(self: QVirtualKeyboardAbstractInputMethod) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn superMetaObject(self: QVirtualKeyboardAbstractInputMethod) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVirtualKeyboardAbstractInputMethod, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardAbstractInputMethod_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVirtualKeyboardAbstractInputMethod, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVirtualKeyboardAbstractInputMethod, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardAbstractInputMethod_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QVirtualKeyboardAbstractInputMethod, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QVirtualKeyboardAbstractInputMethod_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardAbstractInputMethod.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inputContext` instead
    ///
    pub const InputContext = inputContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn inputContext(self: QVirtualKeyboardAbstractInputMethod) QVirtualKeyboardInputContext {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_InputContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputEngine` instead
    ///
    pub const InputEngine = inputEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn inputEngine(self: QVirtualKeyboardAbstractInputMethod) QVirtualKeyboardInputEngine {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_InputEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputModes` instead
    ///
    pub const InputModes = inputModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` []qvirtualkeyboardinputengine_enums.InputMode `
    ///
    pub fn inputModes(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator, locale: []const u8) []i32 {
        const locale_str = qtc.libqt_string{
            .len = locale.len,
            .data = locale.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardAbstractInputMethod_InputModes(@ptrCast(self.ptr), locale_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.inputModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onInputModes` instead
    ///
    pub const OnInputModes = onInputModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputModes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, locale: [*:0]const u8) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn onInputModes(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, [*:0]const u8) callconv(.c) qtc.libqt_list) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnInputModes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputModes` instead
    ///
    pub const SuperInputModes = superInputModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputModes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` []qvirtualkeyboardinputengine_enums.InputMode `
    ///
    pub fn superInputModes(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator, locale: []const u8) []i32 {
        const locale_str = qtc.libqt_string{
            .len = locale.len,
            .data = locale.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardAbstractInputMethod_SuperInputModes(@ptrCast(self.ptr), locale_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.inputModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setInputMode` instead
    ///
    pub const SetInputMode = setInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setInputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` locale: []const u8 `
    ///
    /// ` inputMode: qvirtualkeyboardinputengine_enums.InputMode `
    ///
    pub fn setInputMode(self: QVirtualKeyboardAbstractInputMethod, locale: []const u8, inputMode: i32) bool {
        const locale_str = qtc.libqt_string{
            .len = locale.len,
            .data = locale.ptr,
        };
        return qtc.QVirtualKeyboardAbstractInputMethod_SetInputMode(@ptrCast(self.ptr), locale_str, @bitCast(inputMode));
    }

    /// ### DEPRECATED: Use `onSetInputMode` instead
    ///
    pub const OnSetInputMode = onSetInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setInputMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, locale: [*:0]const u8, inputMode: qvirtualkeyboardinputengine_enums.InputMode) callconv(.c) bool `
    ///
    pub fn onSetInputMode(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSetInputMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetInputMode` instead
    ///
    pub const SuperSetInputMode = superSetInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setInputMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` locale: []const u8 `
    ///
    /// ` inputMode: qvirtualkeyboardinputengine_enums.InputMode `
    ///
    pub fn superSetInputMode(self: QVirtualKeyboardAbstractInputMethod, locale: []const u8, inputMode: i32) bool {
        const locale_str = qtc.libqt_string{
            .len = locale.len,
            .data = locale.ptr,
        };
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperSetInputMode(@ptrCast(self.ptr), locale_str, @bitCast(inputMode));
    }

    /// ### DEPRECATED: Use `setTextCase` instead
    ///
    pub const SetTextCase = setTextCase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setTextCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` textCase: qvirtualkeyboardinputengine_enums.TextCase `
    ///
    pub fn setTextCase(self: QVirtualKeyboardAbstractInputMethod, textCase: i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_SetTextCase(@ptrCast(self.ptr), @bitCast(textCase));
    }

    /// ### DEPRECATED: Use `onSetTextCase` instead
    ///
    pub const OnSetTextCase = onSetTextCase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setTextCase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, textCase: qvirtualkeyboardinputengine_enums.TextCase) callconv(.c) bool `
    ///
    pub fn onSetTextCase(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSetTextCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTextCase` instead
    ///
    pub const SuperSetTextCase = superSetTextCase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setTextCase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` textCase: qvirtualkeyboardinputengine_enums.TextCase `
    ///
    pub fn superSetTextCase(self: QVirtualKeyboardAbstractInputMethod, textCase: i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperSetTextCase(@ptrCast(self.ptr), @bitCast(textCase));
    }

    /// ### DEPRECATED: Use `keyEvent` instead
    ///
    pub const KeyEvent = keyEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#keyEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn keyEvent(self: QVirtualKeyboardAbstractInputMethod, key: i32, text: []const u8, modifiers: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QVirtualKeyboardAbstractInputMethod_KeyEvent(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers));
    }

    /// ### DEPRECATED: Use `onKeyEvent` instead
    ///
    pub const OnKeyEvent = onKeyEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#keyEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, key: qnamespace_enums.Key, text: [*:0]const u8, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) bool `
    ///
    pub fn onKeyEvent(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnKeyEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyEvent` instead
    ///
    pub const SuperKeyEvent = superKeyEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#keyEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn superKeyEvent(self: QVirtualKeyboardAbstractInputMethod, key: i32, text: []const u8, modifiers: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperKeyEvent(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers));
    }

    /// ### DEPRECATED: Use `selectionLists` instead
    ///
    pub const SelectionLists = selectionLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    pub fn selectionLists(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardAbstractInputMethod_SelectionLists(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.selectionLists: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onSelectionLists` instead
    ///
    pub const OnSelectionLists = onSelectionLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionLists)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn onSelectionLists(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSelectionLists(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectionLists` instead
    ///
    pub const SuperSelectionLists = superSelectionLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionLists)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    pub fn superSelectionLists(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardAbstractInputMethod_SuperSelectionLists(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.selectionLists: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selectionListItemCount` instead
    ///
    pub const SelectionListItemCount = selectionListItemCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    pub fn selectionListItemCount(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32) i32 {
        return qtc.QVirtualKeyboardAbstractInputMethod_SelectionListItemCount(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onSelectionListItemCount` instead
    ///
    pub const OnSelectionListItemCount = onSelectionListItemCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, typeVal: qvirtualkeyboardselectionlistmodel_enums.Type) callconv(.c) i32 `
    ///
    pub fn onSelectionListItemCount(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32) callconv(.c) i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSelectionListItemCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectionListItemCount` instead
    ///
    pub const SuperSelectionListItemCount = superSelectionListItemCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    pub fn superSelectionListItemCount(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32) i32 {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemCount(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `selectionListData` instead
    ///
    pub const SelectionListData = selectionListData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    /// ` role: qvirtualkeyboardselectionlistmodel_enums.Role `
    ///
    pub fn selectionListData(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_SelectionListData(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onSelectionListData` instead
    ///
    pub const OnSelectionListData = onSelectionListData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, typeVal: qvirtualkeyboardselectionlistmodel_enums.Type, index: i32, role: qvirtualkeyboardselectionlistmodel_enums.Role) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSelectionListData(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSelectionListData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectionListData` instead
    ///
    pub const SuperSelectionListData = superSelectionListData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    /// ` role: qvirtualkeyboardselectionlistmodel_enums.Role `
    ///
    pub fn superSelectionListData(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_SuperSelectionListData(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `selectionListItemSelected` instead
    ///
    pub const SelectionListItemSelected = selectionListItemSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    pub fn selectionListItemSelected(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSelectionListItemSelected` instead
    ///
    pub const OnSelectionListItemSelected = onSelectionListItemSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemSelected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, typeVal: qvirtualkeyboardselectionlistmodel_enums.Type, index: i32) callconv(.c) void `
    ///
    pub fn onSelectionListItemSelected(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSelectionListItemSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectionListItemSelected` instead
    ///
    pub const SuperSelectionListItemSelected = superSelectionListItemSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemSelected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    pub fn superSelectionListItemSelected(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemSelected(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index));
    }

    /// ### DEPRECATED: Use `selectionListRemoveItem` instead
    ///
    pub const SelectionListRemoveItem = selectionListRemoveItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListRemoveItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    pub fn selectionListRemoveItem(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSelectionListRemoveItem` instead
    ///
    pub const OnSelectionListRemoveItem = onSelectionListRemoveItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListRemoveItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, typeVal: qvirtualkeyboardselectionlistmodel_enums.Type, index: i32) callconv(.c) bool `
    ///
    pub fn onSelectionListRemoveItem(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, i32) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSelectionListRemoveItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectionListRemoveItem` instead
    ///
    pub const SuperSelectionListRemoveItem = superSelectionListRemoveItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListRemoveItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    pub fn superSelectionListRemoveItem(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperSelectionListRemoveItem(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index));
    }

    /// ### DEPRECATED: Use `patternRecognitionModes` instead
    ///
    pub const PatternRecognitionModes = patternRecognitionModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#patternRecognitionModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qvirtualkeyboardinputengine_enums.PatternRecognitionMode `
    ///
    pub fn patternRecognitionModes(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.patternRecognitionModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPatternRecognitionModes` instead
    ///
    pub const OnPatternRecognitionModes = onPatternRecognitionModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#patternRecognitionModes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn onPatternRecognitionModes(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnPatternRecognitionModes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPatternRecognitionModes` instead
    ///
    pub const SuperPatternRecognitionModes = superPatternRecognitionModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#patternRecognitionModes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qvirtualkeyboardinputengine_enums.PatternRecognitionMode `
    ///
    pub fn superPatternRecognitionModes(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardAbstractInputMethod_SuperPatternRecognitionModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.patternRecognitionModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `traceBegin` instead
    ///
    pub const TraceBegin = traceBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
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
    pub fn traceBegin(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator, traceId: i32, patternRecognitionMode: i32, traceCaptureDeviceInfo: ArrayMap_constu8_QVariant, traceScreenInfo: ArrayMap_constu8_QVariant) QVirtualKeyboardTrace {
        const traceCaptureDeviceInfo_count = traceCaptureDeviceInfo.count();
        const traceCaptureDeviceInfo_keys = allocator.alloc(qtc.libqt_string, traceCaptureDeviceInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
        defer allocator.free(traceCaptureDeviceInfo_keys);
        const traceCaptureDeviceInfo_values = allocator.alloc(QtC.QVariant, traceCaptureDeviceInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
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
        const traceScreenInfo_keys = allocator.alloc(qtc.libqt_string, traceScreenInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
        defer allocator.free(traceScreenInfo_keys);
        const traceScreenInfo_values = allocator.alloc(QtC.QVariant, traceScreenInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
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
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_TraceBegin(@ptrCast(self.ptr), @bitCast(traceId), @bitCast(patternRecognitionMode), traceCaptureDeviceInfo_map, traceScreenInfo_map) };
    }

    /// ### DEPRECATED: Use `onTraceBegin` instead
    ///
    pub const OnTraceBegin = onTraceBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceBegin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, traceId: i32, patternRecognitionMode: qvirtualkeyboardinputengine_enums.PatternRecognitionMode, traceCaptureDeviceInfo: qtc.libqt_map (ArrayMap_constu8_QVariant), traceScreenInfo: qtc.libqt_map (ArrayMap_constu8_QVariant)) callconv(.c) QVirtualKeyboardTrace `
    ///
    pub fn onTraceBegin(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, i32, qtc.libqt_map, qtc.libqt_map) callconv(.c) QVirtualKeyboardTrace) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnTraceBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTraceBegin` instead
    ///
    pub const SuperTraceBegin = superTraceBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceBegin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
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
    pub fn superTraceBegin(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator, traceId: i32, patternRecognitionMode: i32, traceCaptureDeviceInfo: ArrayMap_constu8_QVariant, traceScreenInfo: ArrayMap_constu8_QVariant) QVirtualKeyboardTrace {
        const traceCaptureDeviceInfo_count = traceCaptureDeviceInfo.count();
        const traceCaptureDeviceInfo_keys = allocator.alloc(qtc.libqt_string, traceCaptureDeviceInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
        defer allocator.free(traceCaptureDeviceInfo_keys);
        const traceCaptureDeviceInfo_values = allocator.alloc(QtC.QVariant, traceCaptureDeviceInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
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
        const traceScreenInfo_keys = allocator.alloc(qtc.libqt_string, traceScreenInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
        defer allocator.free(traceScreenInfo_keys);
        const traceScreenInfo_values = allocator.alloc(QtC.QVariant, traceScreenInfo_count) catch @panic("QVirtualKeyboardAbstractInputMethod.traceBegin: Memory allocation failed");
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
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_SuperTraceBegin(@ptrCast(self.ptr), @bitCast(traceId), @bitCast(patternRecognitionMode), traceCaptureDeviceInfo_map, traceScreenInfo_map) };
    }

    /// ### DEPRECATED: Use `traceEnd` instead
    ///
    pub const TraceEnd = traceEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` trace: QVirtualKeyboardTrace `
    ///
    pub fn traceEnd(self: QVirtualKeyboardAbstractInputMethod, trace: anytype) bool {
        comptime _ = @TypeOf(trace)._is_QVirtualKeyboardTrace;
        return qtc.QVirtualKeyboardAbstractInputMethod_TraceEnd(@ptrCast(self.ptr), @ptrCast(trace.ptr));
    }

    /// ### DEPRECATED: Use `onTraceEnd` instead
    ///
    pub const OnTraceEnd = onTraceEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceEnd)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, trace: QVirtualKeyboardTrace) callconv(.c) bool `
    ///
    pub fn onTraceEnd(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QVirtualKeyboardTrace) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnTraceEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTraceEnd` instead
    ///
    pub const SuperTraceEnd = superTraceEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceEnd)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` trace: QVirtualKeyboardTrace `
    ///
    pub fn superTraceEnd(self: QVirtualKeyboardAbstractInputMethod, trace: anytype) bool {
        comptime _ = @TypeOf(trace)._is_QVirtualKeyboardTrace;
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperTraceEnd(@ptrCast(self.ptr), @ptrCast(trace.ptr));
    }

    /// ### DEPRECATED: Use `reselect` instead
    ///
    pub const Reselect = reselect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` cursorPosition: i32 `
    ///
    /// ` reselectFlags: *const flag of qvirtualkeyboardinputengine_enums.ReselectFlag `
    ///
    pub fn reselect(self: QVirtualKeyboardAbstractInputMethod, cursorPosition: i32, reselectFlags: *const i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_Reselect(@ptrCast(self.ptr), @bitCast(cursorPosition), @ptrCast(reselectFlags));
    }

    /// ### DEPRECATED: Use `onReselect` instead
    ///
    pub const OnReselect = onReselect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reselect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, cursorPosition: i32, reselectFlags: *const flag of qvirtualkeyboardinputengine_enums.ReselectFlag) callconv(.c) bool `
    ///
    pub fn onReselect(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, *const i32) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnReselect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReselect` instead
    ///
    pub const SuperReselect = superReselect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reselect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` cursorPosition: i32 `
    ///
    /// ` reselectFlags: *const flag of qvirtualkeyboardinputengine_enums.ReselectFlag `
    ///
    pub fn superReselect(self: QVirtualKeyboardAbstractInputMethod, cursorPosition: i32, reselectFlags: *const i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperReselect(@ptrCast(self.ptr), @bitCast(cursorPosition), @ptrCast(reselectFlags));
    }

    /// ### DEPRECATED: Use `clickPreeditText` instead
    ///
    pub const ClickPreeditText = clickPreeditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clickPreeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn clickPreeditText(self: QVirtualKeyboardAbstractInputMethod, cursorPosition: i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_ClickPreeditText(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// ### DEPRECATED: Use `onClickPreeditText` instead
    ///
    pub const OnClickPreeditText = onClickPreeditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clickPreeditText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, cursorPosition: i32) callconv(.c) bool `
    ///
    pub fn onClickPreeditText(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnClickPreeditText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClickPreeditText` instead
    ///
    pub const SuperClickPreeditText = superClickPreeditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clickPreeditText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn superClickPreeditText(self: QVirtualKeyboardAbstractInputMethod, cursorPosition: i32) bool {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperClickPreeditText(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// ### DEPRECATED: Use `selectionListChanged` instead
    ///
    pub const SelectionListChanged = selectionListChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    pub fn selectionListChanged(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SelectionListChanged(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onSelectionListChanged` instead
    ///
    pub const OnSelectionListChanged = onSelectionListChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, typeVal: qvirtualkeyboardselectionlistmodel_enums.Type) callconv(.c) void `
    ///
    pub fn onSelectionListChanged(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_Connect_SelectionListChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionListActiveItemChanged` instead
    ///
    pub const SelectionListActiveItemChanged = selectionListActiveItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListActiveItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` typeVal: qvirtualkeyboardselectionlistmodel_enums.Type `
    ///
    /// ` index: i32 `
    ///
    pub fn selectionListActiveItemChanged(self: QVirtualKeyboardAbstractInputMethod, typeVal: i32, index: i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SelectionListActiveItemChanged(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSelectionListActiveItemChanged` instead
    ///
    pub const OnSelectionListActiveItemChanged = onSelectionListActiveItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListActiveItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, typeVal: qvirtualkeyboardselectionlistmodel_enums.Type, index: i32) callconv(.c) void `
    ///
    pub fn onSelectionListActiveItemChanged(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, i32, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_Connect_SelectionListActiveItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionListsChanged` instead
    ///
    pub const SelectionListsChanged = selectionListsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn selectionListsChanged(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SelectionListsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionListsChanged` instead
    ///
    pub const OnSelectionListsChanged = onSelectionListsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod) callconv(.c) void `
    ///
    pub fn onSelectionListsChanged(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_Connect_SelectionListsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn reset(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReset(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn superReset(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn update(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdate` instead
    ///
    pub const OnUpdate = onUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#update)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdate(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdate` instead
    ///
    pub const SuperUpdate = superUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#update)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn superUpdate(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SuperUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearInputMode` instead
    ///
    pub const ClearInputMode = clearInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clearInputMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn clearInputMode(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_ClearInputMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearInputMode` instead
    ///
    pub const OnClearInputMode = onClearInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clearInputMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClearInputMode(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnClearInputMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClearInputMode` instead
    ///
    pub const SuperClearInputMode = superClearInputMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clearInputMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn superClearInputMode(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_SuperClearInputMode(@ptrCast(self.ptr));
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
        var _str = qtc.QVirtualKeyboardAbstractInputMethod_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardAbstractInputMethod.tr2: Memory allocation failed");
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
        var _str = qtc.QVirtualKeyboardAbstractInputMethod_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardAbstractInputMethod.tr3: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardAbstractInputMethod.objectName: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVirtualKeyboardAbstractInputMethod, name: []const u8) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn isWidgetType(self: QVirtualKeyboardAbstractInputMethod) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn isWindowType(self: QVirtualKeyboardAbstractInputMethod) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn isQuickItemType(self: QVirtualKeyboardAbstractInputMethod) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn signalsBlocked(self: QVirtualKeyboardAbstractInputMethod) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVirtualKeyboardAbstractInputMethod, b: bool) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn thread(self: QVirtualKeyboardAbstractInputMethod) QThread {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVirtualKeyboardAbstractInputMethod, _thread: anytype) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVirtualKeyboardAbstractInputMethod, interval: i32) i32 {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVirtualKeyboardAbstractInputMethod, time: i64) i32 {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVirtualKeyboardAbstractInputMethod, id: i32) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVirtualKeyboardAbstractInputMethod, id: i32) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.children: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVirtualKeyboardAbstractInputMethod, _parent: anytype) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVirtualKeyboardAbstractInputMethod, filterObj: anytype) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVirtualKeyboardAbstractInputMethod, obj: anytype) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVirtualKeyboardAbstractInputMethod, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn disconnect3(self: QVirtualKeyboardAbstractInputMethod) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVirtualKeyboardAbstractInputMethod, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn dumpObjectTree(self: QVirtualKeyboardAbstractInputMethod) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn dumpObjectInfo(self: QVirtualKeyboardAbstractInputMethod) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVirtualKeyboardAbstractInputMethod, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVirtualKeyboardAbstractInputMethod, name: [:0]const u8) QVariant {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVirtualKeyboardAbstractInputMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVirtualKeyboardAbstractInputMethod.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardAbstractInputMethod.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn bindingStorage(self: QVirtualKeyboardAbstractInputMethod) QBindingStorage {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn bindingStorage2(self: QVirtualKeyboardAbstractInputMethod) QBindingStorage {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn destroyed(self: QVirtualKeyboardAbstractInputMethod) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn parent(self: QVirtualKeyboardAbstractInputMethod) QObject {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVirtualKeyboardAbstractInputMethod, classname: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn deleteLater(self: QVirtualKeyboardAbstractInputMethod) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVirtualKeyboardAbstractInputMethod, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVirtualKeyboardAbstractInputMethod, time: i64, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVirtualKeyboardAbstractInputMethod, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVirtualKeyboardAbstractInputMethod, signal: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVirtualKeyboardAbstractInputMethod, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVirtualKeyboardAbstractInputMethod, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVirtualKeyboardAbstractInputMethod, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVirtualKeyboardAbstractInputMethod, param1: anytype) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QObject) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardAbstractInputMethod_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QEvent) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVirtualKeyboardAbstractInputMethod, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardAbstractInputMethod_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVirtualKeyboardAbstractInputMethod, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVirtualKeyboardAbstractInputMethod_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVirtualKeyboardAbstractInputMethod_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QTimerEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVirtualKeyboardAbstractInputMethod_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVirtualKeyboardAbstractInputMethod_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QChildEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVirtualKeyboardAbstractInputMethod_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVirtualKeyboardAbstractInputMethod, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVirtualKeyboardAbstractInputMethod_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVirtualKeyboardAbstractInputMethod, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardAbstractInputMethod_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVirtualKeyboardAbstractInputMethod, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardAbstractInputMethod_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QMetaMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVirtualKeyboardAbstractInputMethod, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardAbstractInputMethod_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVirtualKeyboardAbstractInputMethod, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardAbstractInputMethod_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QMetaMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn sender(self: QVirtualKeyboardAbstractInputMethod) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn superSender(self: QVirtualKeyboardAbstractInputMethod) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardAbstractInputMethod_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn senderSignalIndex(self: QVirtualKeyboardAbstractInputMethod) i32 {
        return qtc.QVirtualKeyboardAbstractInputMethod_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn superSenderSignalIndex(self: QVirtualKeyboardAbstractInputMethod) i32 {
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn () callconv(.c) i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVirtualKeyboardAbstractInputMethod, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVirtualKeyboardAbstractInputMethod_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVirtualKeyboardAbstractInputMethod, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVirtualKeyboardAbstractInputMethod, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVirtualKeyboardAbstractInputMethod_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVirtualKeyboardAbstractInputMethod, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVirtualKeyboardAbstractInputMethod_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, QMetaMethod) callconv(.c) bool) void {
        qtc.QVirtualKeyboardAbstractInputMethod_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardAbstractInputMethod, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVirtualKeyboardAbstractInputMethod, callback: *const fn (QVirtualKeyboardAbstractInputMethod, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#dtor.QVirtualKeyboardAbstractInputMethod)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVirtualKeyboardAbstractInputMethod `
    ///
    pub fn delete(self: QVirtualKeyboardAbstractInputMethod) void {
        qtc.QVirtualKeyboardAbstractInputMethod_Delete(@ptrCast(self.ptr));
    }
};
