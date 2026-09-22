const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QInputMethodEvent__Attribute = @import("libqt6").QInputMethodEvent__Attribute;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVirtualKeyboardInputEngine = @import("libqt6").QVirtualKeyboardInputEngine;
const QVirtualKeyboardObserver = @import("libqt6").QVirtualKeyboardObserver;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html)
pub const QVirtualKeyboardInputContext = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVirtualKeyboardInputContext,

    pub const _is_QVirtualKeyboardInputContext = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVirtualKeyboardInputContext object in C++ memory
    ///
    pub fn new() QVirtualKeyboardInputContext {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVirtualKeyboardInputContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVirtualKeyboardInputContext {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn metaObject(self: QVirtualKeyboardInputContext) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVirtualKeyboardInputContext, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVirtualKeyboardInputContext_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn superMetaObject(self: QVirtualKeyboardInputContext) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVirtualKeyboardInputContext, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardInputContext_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVirtualKeyboardInputContext_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVirtualKeyboardInputContext, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardInputContext_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVirtualKeyboardInputContext, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardInputContext_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVirtualKeyboardInputContext_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QVirtualKeyboardInputContext, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardInputContext_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QVirtualKeyboardInputContext_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isShiftActive` instead
    ///
    pub const IsShiftActive = isShiftActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isShiftActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isShiftActive(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_IsShiftActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCapsLockActive` instead
    ///
    pub const IsCapsLockActive = isCapsLockActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isCapsLockActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isCapsLockActive(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_IsCapsLockActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUppercase` instead
    ///
    pub const IsUppercase = isUppercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isUppercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isUppercase(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_IsUppercase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `anchorPosition` instead
    ///
    pub const AnchorPosition = anchorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn anchorPosition(self: QVirtualKeyboardInputContext) i32 {
        return qtc.QVirtualKeyboardInputContext_AnchorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn cursorPosition(self: QVirtualKeyboardInputContext) i32 {
        return qtc.QVirtualKeyboardInputContext_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QVirtualKeyboardInputContext) i32 {
        return qtc.QVirtualKeyboardInputContext_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `preeditText` instead
    ///
    pub const PreeditText = preeditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preeditText(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVirtualKeyboardInputContext_PreeditText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.preeditText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPreeditText` instead
    ///
    pub const SetPreeditText = setPreeditText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setPreeditText(self: QVirtualKeyboardInputContext, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputContext_SetPreeditText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `preeditTextAttributes` instead
    ///
    pub const PreeditTextAttributes = preeditTextAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditTextAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preeditTextAttributes(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []QInputMethodEvent__Attribute {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardInputContext_PreeditTextAttributes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QInputMethodEvent__Attribute, _arr.len) catch @panic("QVirtualKeyboardInputContext.preeditTextAttributes: Memory allocation failed");
        const _data_val: [*]QtC.QInputMethodEvent__Attribute = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `surroundingText` instead
    ///
    pub const SurroundingText = surroundingText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#surroundingText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn surroundingText(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVirtualKeyboardInputContext_SurroundingText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.surroundingText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedText(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVirtualKeyboardInputContext_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `anchorRectangle` instead
    ///
    pub const AnchorRectangle = anchorRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn anchorRectangle(self: QVirtualKeyboardInputContext) QRectF {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_AnchorRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRectangle` instead
    ///
    pub const CursorRectangle = cursorRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn cursorRectangle(self: QVirtualKeyboardInputContext) QRectF {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_CursorRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAnimating` instead
    ///
    pub const IsAnimating = isAnimating;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isAnimating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isAnimating(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_IsAnimating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimating` instead
    ///
    pub const SetAnimating = setAnimating;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setAnimating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _isAnimating: bool `
    ///
    pub fn setAnimating(self: QVirtualKeyboardInputContext, _isAnimating: bool) void {
        qtc.QVirtualKeyboardInputContext_SetAnimating(@ptrCast(self.ptr), _isAnimating);
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locale(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVirtualKeyboardInputContext_Locale(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.locale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inputItem` instead
    ///
    pub const InputItem = inputItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn inputItem(self: QVirtualKeyboardInputContext) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_InputItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputEngine` instead
    ///
    pub const InputEngine = inputEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn inputEngine(self: QVirtualKeyboardInputContext) QVirtualKeyboardInputEngine {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_InputEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isSelectionControlVisible` instead
    ///
    pub const IsSelectionControlVisible = isSelectionControlVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isSelectionControlVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isSelectionControlVisible(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_IsSelectionControlVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `anchorRectIntersectsClipRect` instead
    ///
    pub const AnchorRectIntersectsClipRect = anchorRectIntersectsClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectIntersectsClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn anchorRectIntersectsClipRect(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_AnchorRectIntersectsClipRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cursorRectIntersectsClipRect` instead
    ///
    pub const CursorRectIntersectsClipRect = cursorRectIntersectsClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectIntersectsClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn cursorRectIntersectsClipRect(self: QVirtualKeyboardInputContext) bool {
        return qtc.QVirtualKeyboardInputContext_CursorRectIntersectsClipRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyboardObserver` instead
    ///
    pub const KeyboardObserver = keyboardObserver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#keyboardObserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn keyboardObserver(self: QVirtualKeyboardInputContext) QVirtualKeyboardObserver {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_KeyboardObserver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sendKeyClick` instead
    ///
    pub const SendKeyClick = sendKeyClick;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#sendKeyClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` key: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn sendKeyClick(self: QVirtualKeyboardInputContext, key: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputContext_SendKeyClick(@ptrCast(self.ptr), @bitCast(key), text_str);
    }

    /// ### DEPRECATED: Use `commit` instead
    ///
    pub const Commit = commit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn commit(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_Commit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commit2` instead
    ///
    pub const Commit2 = commit2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    pub fn commit2(self: QVirtualKeyboardInputContext, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputContext_Commit2(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn clear(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionOnFocusObject` instead
    ///
    pub const SetSelectionOnFocusObject = setSelectionOnFocusObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setSelectionOnFocusObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` anchorPos: QPointF `
    ///
    /// ` cursorPos: QPointF `
    ///
    pub fn setSelectionOnFocusObject(self: QVirtualKeyboardInputContext, anchorPos: anytype, cursorPos: anytype) void {
        comptime _ = @TypeOf(anchorPos)._is_QPointF;
        comptime _ = @TypeOf(cursorPos)._is_QPointF;
        qtc.QVirtualKeyboardInputContext_SetSelectionOnFocusObject(@ptrCast(self.ptr), @ptrCast(anchorPos.ptr), @ptrCast(cursorPos.ptr));
    }

    /// ### DEPRECATED: Use `preeditTextChanged` instead
    ///
    pub const PreeditTextChanged = preeditTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn preeditTextChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_PreeditTextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreeditTextChanged` instead
    ///
    pub const OnPreeditTextChanged = onPreeditTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onPreeditTextChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_PreeditTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodHintsChanged` instead
    ///
    pub const InputMethodHintsChanged = inputMethodHintsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputMethodHintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn inputMethodHintsChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_InputMethodHintsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodHintsChanged` instead
    ///
    pub const OnInputMethodHintsChanged = onInputMethodHintsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputMethodHintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onInputMethodHintsChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_InputMethodHintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surroundingTextChanged` instead
    ///
    pub const SurroundingTextChanged = surroundingTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#surroundingTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn surroundingTextChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_SurroundingTextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSurroundingTextChanged` instead
    ///
    pub const OnSurroundingTextChanged = onSurroundingTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#surroundingTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onSurroundingTextChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_SurroundingTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedTextChanged` instead
    ///
    pub const SelectedTextChanged = selectedTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectedTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn selectedTextChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_SelectedTextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedTextChanged` instead
    ///
    pub const OnSelectedTextChanged = onSelectedTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectedTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onSelectedTextChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_SelectedTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `anchorPositionChanged` instead
    ///
    pub const AnchorPositionChanged = anchorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn anchorPositionChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_AnchorPositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnchorPositionChanged` instead
    ///
    pub const OnAnchorPositionChanged = onAnchorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onAnchorPositionChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_AnchorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn cursorPositionChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `anchorRectangleChanged` instead
    ///
    pub const AnchorRectangleChanged = anchorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn anchorRectangleChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_AnchorRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnchorRectangleChanged` instead
    ///
    pub const OnAnchorRectangleChanged = onAnchorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onAnchorRectangleChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_AnchorRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorRectangleChanged` instead
    ///
    pub const CursorRectangleChanged = cursorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectangleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn cursorRectangleChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_CursorRectangleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorRectangleChanged` instead
    ///
    pub const OnCursorRectangleChanged = onCursorRectangleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectangleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onCursorRectangleChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_CursorRectangleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shiftActiveChanged` instead
    ///
    pub const ShiftActiveChanged = shiftActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#shiftActiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn shiftActiveChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_ShiftActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShiftActiveChanged` instead
    ///
    pub const OnShiftActiveChanged = onShiftActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#shiftActiveChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onShiftActiveChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_ShiftActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `capsLockActiveChanged` instead
    ///
    pub const CapsLockActiveChanged = capsLockActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#capsLockActiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn capsLockActiveChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_CapsLockActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCapsLockActiveChanged` instead
    ///
    pub const OnCapsLockActiveChanged = onCapsLockActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#capsLockActiveChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onCapsLockActiveChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_CapsLockActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `uppercaseChanged` instead
    ///
    pub const UppercaseChanged = uppercaseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#uppercaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn uppercaseChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_UppercaseChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUppercaseChanged` instead
    ///
    pub const OnUppercaseChanged = onUppercaseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#uppercaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onUppercaseChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_UppercaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `animatingChanged` instead
    ///
    pub const AnimatingChanged = animatingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#animatingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn animatingChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_AnimatingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnimatingChanged` instead
    ///
    pub const OnAnimatingChanged = onAnimatingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#animatingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onAnimatingChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_AnimatingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localeChanged` instead
    ///
    pub const LocaleChanged = localeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn localeChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_LocaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLocaleChanged` instead
    ///
    pub const OnLocaleChanged = onLocaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onLocaleChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputItemChanged` instead
    ///
    pub const InputItemChanged = inputItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn inputItemChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_InputItemChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputItemChanged` instead
    ///
    pub const OnInputItemChanged = onInputItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onInputItemChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_InputItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionControlVisibleChanged` instead
    ///
    pub const SelectionControlVisibleChanged = selectionControlVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectionControlVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn selectionControlVisibleChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_SelectionControlVisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionControlVisibleChanged` instead
    ///
    pub const OnSelectionControlVisibleChanged = onSelectionControlVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectionControlVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onSelectionControlVisibleChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_SelectionControlVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `anchorRectIntersectsClipRectChanged` instead
    ///
    pub const AnchorRectIntersectsClipRectChanged = anchorRectIntersectsClipRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectIntersectsClipRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn anchorRectIntersectsClipRectChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_AnchorRectIntersectsClipRectChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAnchorRectIntersectsClipRectChanged` instead
    ///
    pub const OnAnchorRectIntersectsClipRectChanged = onAnchorRectIntersectsClipRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectIntersectsClipRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onAnchorRectIntersectsClipRectChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_AnchorRectIntersectsClipRectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorRectIntersectsClipRectChanged` instead
    ///
    pub const CursorRectIntersectsClipRectChanged = cursorRectIntersectsClipRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectIntersectsClipRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn cursorRectIntersectsClipRectChanged(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_CursorRectIntersectsClipRectChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorRectIntersectsClipRectChanged` instead
    ///
    pub const OnCursorRectIntersectsClipRectChanged = onCursorRectIntersectsClipRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectIntersectsClipRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onCursorRectIntersectsClipRectChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_Connect_CursorRectIntersectsClipRectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QVirtualKeyboardInputContext_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.tr2: Memory allocation failed");
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
        var _str = qtc.QVirtualKeyboardInputContext_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPreeditText2` instead
    ///
    pub const SetPreeditText2 = setPreeditText2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    /// ` attributes: []QInputMethodEvent__Attribute `
    ///
    pub fn setPreeditText2(self: QVirtualKeyboardInputContext, text: []const u8, attributes: []QInputMethodEvent__Attribute) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const attributes_list = qtc.libqt_list{
            .len = attributes.len,
            .data = @ptrCast(attributes.ptr),
        };
        qtc.QVirtualKeyboardInputContext_SetPreeditText2(@ptrCast(self.ptr), text_str, attributes_list);
    }

    /// ### DEPRECATED: Use `setPreeditText3` instead
    ///
    pub const SetPreeditText3 = setPreeditText3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    /// ` attributes: []QInputMethodEvent__Attribute `
    ///
    /// ` replaceFrom: i32 `
    ///
    pub fn setPreeditText3(self: QVirtualKeyboardInputContext, text: []const u8, attributes: []QInputMethodEvent__Attribute, replaceFrom: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const attributes_list = qtc.libqt_list{
            .len = attributes.len,
            .data = @ptrCast(attributes.ptr),
        };
        qtc.QVirtualKeyboardInputContext_SetPreeditText3(@ptrCast(self.ptr), text_str, attributes_list, @bitCast(replaceFrom));
    }

    /// ### DEPRECATED: Use `setPreeditText4` instead
    ///
    pub const SetPreeditText4 = setPreeditText4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    /// ` attributes: []QInputMethodEvent__Attribute `
    ///
    /// ` replaceFrom: i32 `
    ///
    /// ` replaceLength: i32 `
    ///
    pub fn setPreeditText4(self: QVirtualKeyboardInputContext, text: []const u8, attributes: []QInputMethodEvent__Attribute, replaceFrom: i32, replaceLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const attributes_list = qtc.libqt_list{
            .len = attributes.len,
            .data = @ptrCast(attributes.ptr),
        };
        qtc.QVirtualKeyboardInputContext_SetPreeditText4(@ptrCast(self.ptr), text_str, attributes_list, @bitCast(replaceFrom), @bitCast(replaceLength));
    }

    /// ### DEPRECATED: Use `sendKeyClick3` instead
    ///
    pub const SendKeyClick3 = sendKeyClick3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#sendKeyClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` key: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn sendKeyClick3(self: QVirtualKeyboardInputContext, key: i32, text: []const u8, modifiers: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputContext_SendKeyClick3(@ptrCast(self.ptr), @bitCast(key), text_str, @bitCast(modifiers));
    }

    /// ### DEPRECATED: Use `commit22` instead
    ///
    pub const Commit22 = commit22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    pub fn commit22(self: QVirtualKeyboardInputContext, text: []const u8, replaceFrom: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputContext_Commit22(@ptrCast(self.ptr), text_str, @bitCast(replaceFrom));
    }

    /// ### DEPRECATED: Use `commit3` instead
    ///
    pub const Commit3 = commit3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` text: []const u8 `
    ///
    /// ` replaceFrom: i32 `
    ///
    /// ` replaceLength: i32 `
    ///
    pub fn commit3(self: QVirtualKeyboardInputContext, text: []const u8, replaceFrom: i32, replaceLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVirtualKeyboardInputContext_Commit3(@ptrCast(self.ptr), text_str, @bitCast(replaceFrom), @bitCast(replaceLength));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardInputContext.objectName: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVirtualKeyboardInputContext, name: []const u8) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isWidgetType(self: QVirtualKeyboardInputContext) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isWindowType(self: QVirtualKeyboardInputContext) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn isQuickItemType(self: QVirtualKeyboardInputContext) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn signalsBlocked(self: QVirtualKeyboardInputContext) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVirtualKeyboardInputContext, b: bool) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn thread(self: QVirtualKeyboardInputContext) QThread {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVirtualKeyboardInputContext, _thread: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVirtualKeyboardInputContext, interval: i32) i32 {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVirtualKeyboardInputContext, time: i64) i32 {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVirtualKeyboardInputContext, id: i32) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVirtualKeyboardInputContext, id: i32) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVirtualKeyboardInputContext.children: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVirtualKeyboardInputContext, _parent: anytype) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVirtualKeyboardInputContext, filterObj: anytype) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVirtualKeyboardInputContext, obj: anytype) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVirtualKeyboardInputContext, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn disconnect3(self: QVirtualKeyboardInputContext) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVirtualKeyboardInputContext, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn dumpObjectTree(self: QVirtualKeyboardInputContext) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn dumpObjectInfo(self: QVirtualKeyboardInputContext) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVirtualKeyboardInputContext, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVirtualKeyboardInputContext, name: [:0]const u8) QVariant {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVirtualKeyboardInputContext, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVirtualKeyboardInputContext.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardInputContext.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn bindingStorage(self: QVirtualKeyboardInputContext) QBindingStorage {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn bindingStorage2(self: QVirtualKeyboardInputContext) QBindingStorage {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn destroyed(self: QVirtualKeyboardInputContext) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn parent(self: QVirtualKeyboardInputContext) QObject {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVirtualKeyboardInputContext, classname: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn deleteLater(self: QVirtualKeyboardInputContext) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVirtualKeyboardInputContext, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVirtualKeyboardInputContext, time: i64, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVirtualKeyboardInputContext, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVirtualKeyboardInputContext, signal: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVirtualKeyboardInputContext, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVirtualKeyboardInputContext, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVirtualKeyboardInputContext, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVirtualKeyboardInputContext, param1: anytype) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QObject) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVirtualKeyboardInputContext, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardInputContext_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVirtualKeyboardInputContext, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardInputContext_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QEvent) callconv(.c) bool) void {
        qtc.QVirtualKeyboardInputContext_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVirtualKeyboardInputContext, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardInputContext_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVirtualKeyboardInputContext, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardInputContext_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVirtualKeyboardInputContext_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVirtualKeyboardInputContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVirtualKeyboardInputContext_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVirtualKeyboardInputContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVirtualKeyboardInputContext_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QTimerEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVirtualKeyboardInputContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVirtualKeyboardInputContext_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVirtualKeyboardInputContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVirtualKeyboardInputContext_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QChildEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVirtualKeyboardInputContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVirtualKeyboardInputContext_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVirtualKeyboardInputContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVirtualKeyboardInputContext_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVirtualKeyboardInputContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardInputContext_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVirtualKeyboardInputContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardInputContext_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QMetaMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVirtualKeyboardInputContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardInputContext_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVirtualKeyboardInputContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardInputContext_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QMetaMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardInputContext_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn sender(self: QVirtualKeyboardInputContext) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn superSender(self: QVirtualKeyboardInputContext) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardInputContext_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVirtualKeyboardInputContext, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVirtualKeyboardInputContext_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn senderSignalIndex(self: QVirtualKeyboardInputContext) i32 {
        return qtc.QVirtualKeyboardInputContext_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn superSenderSignalIndex(self: QVirtualKeyboardInputContext) i32 {
        return qtc.QVirtualKeyboardInputContext_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVirtualKeyboardInputContext, callback: *const fn () callconv(.c) i32) void {
        qtc.QVirtualKeyboardInputContext_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVirtualKeyboardInputContext, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVirtualKeyboardInputContext_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVirtualKeyboardInputContext, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVirtualKeyboardInputContext_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVirtualKeyboardInputContext_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVirtualKeyboardInputContext, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVirtualKeyboardInputContext_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVirtualKeyboardInputContext, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVirtualKeyboardInputContext_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardInputContext`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, QMetaMethod) callconv(.c) bool) void {
        qtc.QVirtualKeyboardInputContext_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardInputContext `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardInputContext, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVirtualKeyboardInputContext, callback: *const fn (QVirtualKeyboardInputContext, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#dtor.QVirtualKeyboardInputContext)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVirtualKeyboardInputContext `
    ///
    pub fn delete(self: QVirtualKeyboardInputContext) void {
        qtc.QVirtualKeyboardInputContext_Delete(@ptrCast(self.ptr));
    }
};
