const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Emulation_enums = enums;
const KeyboardTranslator_enums = @import("libKeyboardTranslator.zig").enums;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__Emulation = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__Emulation,

    pub const _is_Konsole__Emulation = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Konsole::Emulation object in C++ memory
    ///
    pub fn new() Konsole__Emulation {
        return .{ .ptr = qtc.Konsole__Emulation_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn metaObject(self: Konsole__Emulation) QMetaObject {
        return .{ .ptr = qtc.Konsole__Emulation_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Konsole__Emulation, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Konsole__Emulation_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn superMetaObject(self: Konsole__Emulation) QMetaObject {
        return .{ .ptr = qtc.Konsole__Emulation_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Konsole__Emulation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Emulation_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Konsole__Emulation_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Konsole__Emulation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Emulation_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Konsole__Emulation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__Emulation_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Konsole__Emulation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__Emulation_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__Emulation.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imageSize` instead
    ///
    pub const ImageSize = imageSize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn imageSize(self: Konsole__Emulation) QSize {
        return .{ .ptr = qtc.Konsole__Emulation_ImageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineCount` instead
    ///
    pub const LineCount = lineCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn lineCount(self: Konsole__Emulation) i32 {
        return qtc.Konsole__Emulation_LineCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearHistory` instead
    ///
    pub const ClearHistory = clearHistory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn clearHistory(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ClearHistory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `eraseChar` instead
    ///
    pub const EraseChar = eraseChar;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn eraseChar(self: Konsole__Emulation) u8 {
        return qtc.Konsole__Emulation_EraseChar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEraseChar` instead
    ///
    pub const OnEraseChar = onEraseChar;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn () callconv(.c) u8 `
    ///
    pub fn onEraseChar(self: Konsole__Emulation, callback: *const fn () callconv(.c) u8) void {
        qtc.Konsole__Emulation_OnEraseChar(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEraseChar` instead
    ///
    pub const SuperEraseChar = superEraseChar;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn superEraseChar(self: Konsole__Emulation) u8 {
        return qtc.Konsole__Emulation_SuperEraseChar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyBindings` instead
    ///
    pub const SetKeyBindings = setKeyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setKeyBindings(self: Konsole__Emulation, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Konsole__Emulation_SetKeyBindings(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `keyBindings` instead
    ///
    pub const KeyBindings = keyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keyBindings(self: Konsole__Emulation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__Emulation_KeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__Emulation.keyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clearEntireScreen` instead
    ///
    pub const ClearEntireScreen = clearEntireScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn clearEntireScreen(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ClearEntireScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearEntireScreen` instead
    ///
    pub const OnClearEntireScreen = onClearEntireScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClearEntireScreen(self: Konsole__Emulation, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnClearEntireScreen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClearEntireScreen` instead
    ///
    pub const SuperClearEntireScreen = superClearEntireScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn superClearEntireScreen(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_SuperClearEntireScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn reset(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReset(self: Konsole__Emulation, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn superReset(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `programUsesMouse` instead
    ///
    pub const ProgramUsesMouse = programUsesMouse;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn programUsesMouse(self: Konsole__Emulation) bool {
        return qtc.Konsole__Emulation_ProgramUsesMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `programBracketedPasteMode` instead
    ///
    pub const ProgramBracketedPasteMode = programBracketedPasteMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn programBracketedPasteMode(self: Konsole__Emulation) bool {
        return qtc.Konsole__Emulation_ProgramBracketedPasteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImageSize` instead
    ///
    pub const SetImageSize = setImageSize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` lines: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn setImageSize(self: Konsole__Emulation, lines: i32, columns: i32) void {
        qtc.Konsole__Emulation_SetImageSize(@ptrCast(self.ptr), @bitCast(lines), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `onSetImageSize` instead
    ///
    pub const OnSetImageSize = onSetImageSize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, lines: i32, columns: i32) callconv(.c) void `
    ///
    pub fn onSetImageSize(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetImageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetImageSize` instead
    ///
    pub const SuperSetImageSize = superSetImageSize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` lines: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn superSetImageSize(self: Konsole__Emulation, lines: i32, columns: i32) void {
        qtc.Konsole__Emulation_SuperSetImageSize(@ptrCast(self.ptr), @bitCast(lines), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `sendText` instead
    ///
    pub const SendText = sendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn sendText(self: Konsole__Emulation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_SendText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSendText` instead
    ///
    pub const OnSendText = onSendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSendText(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSendText` instead
    ///
    pub const SuperSendText = superSendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superSendText(self: Konsole__Emulation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_SuperSendText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `sendKeyEvent` instead
    ///
    pub const SendKeyEvent = sendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: QKeyEvent `
    ///
    /// ` fromPaste: bool `
    ///
    pub fn sendKeyEvent(self: Konsole__Emulation, param1: anytype, fromPaste: bool) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Konsole__Emulation_SendKeyEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr), fromPaste);
    }

    /// ### DEPRECATED: Use `onSendKeyEvent` instead
    ///
    pub const OnSendKeyEvent = onSendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: QKeyEvent, fromPaste: bool) callconv(.c) void `
    ///
    pub fn onSendKeyEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QKeyEvent, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendKeyEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSendKeyEvent` instead
    ///
    pub const SuperSendKeyEvent = superSendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: QKeyEvent `
    ///
    /// ` fromPaste: bool `
    ///
    pub fn superSendKeyEvent(self: Konsole__Emulation, param1: anytype, fromPaste: bool) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Konsole__Emulation_SuperSendKeyEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr), fromPaste);
    }

    /// ### DEPRECATED: Use `sendMouseEvent` instead
    ///
    pub const SendMouseEvent = sendMouseEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` buttons: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` line: i32 `
    ///
    /// ` eventType: i32 `
    ///
    pub fn sendMouseEvent(self: Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32) void {
        qtc.Konsole__Emulation_SendMouseEvent(@ptrCast(self.ptr), @bitCast(buttons), @bitCast(column), @bitCast(line), @bitCast(eventType));
    }

    /// ### DEPRECATED: Use `onSendMouseEvent` instead
    ///
    pub const OnSendMouseEvent = onSendMouseEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32) callconv(.c) void `
    ///
    pub fn onSendMouseEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSendMouseEvent` instead
    ///
    pub const SuperSendMouseEvent = superSendMouseEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` buttons: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` line: i32 `
    ///
    /// ` eventType: i32 `
    ///
    pub fn superSendMouseEvent(self: Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32) void {
        qtc.Konsole__Emulation_SuperSendMouseEvent(@ptrCast(self.ptr), @bitCast(buttons), @bitCast(column), @bitCast(line), @bitCast(eventType));
    }

    /// ### DEPRECATED: Use `sendString` instead
    ///
    pub const SendString = sendString;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` string: [:0]const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn sendString(self: Konsole__Emulation, string: [:0]const u8, length: i32) void {
        const string_Cstring = string.ptr;
        qtc.Konsole__Emulation_SendString(@ptrCast(self.ptr), string_Cstring, @bitCast(length));
    }

    /// ### DEPRECATED: Use `onSendString` instead
    ///
    pub const OnSendString = onSendString;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, string: [*:0]const u8, length: i32) callconv(.c) void `
    ///
    pub fn onSendString(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSendString` instead
    ///
    pub const SuperSendString = superSendString;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` string: [:0]const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn superSendString(self: Konsole__Emulation, string: [:0]const u8, length: i32) void {
        const string_Cstring = string.ptr;
        qtc.Konsole__Emulation_SuperSendString(@ptrCast(self.ptr), string_Cstring, @bitCast(length));
    }

    /// ### DEPRECATED: Use `receiveData` instead
    ///
    pub const ReceiveData = receiveData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` buffer: [:0]const u8 `
    ///
    /// ` len: i32 `
    ///
    pub fn receiveData(self: Konsole__Emulation, buffer: [:0]const u8, len: i32) void {
        const buffer_Cstring = buffer.ptr;
        qtc.Konsole__Emulation_ReceiveData(@ptrCast(self.ptr), buffer_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `sendData` instead
    ///
    pub const SendData = sendData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i32 `
    ///
    pub fn sendData(self: Konsole__Emulation, data: [:0]const u8, len: i32) void {
        const data_Cstring = data.ptr;
        qtc.Konsole__Emulation_SendData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `onSendData` instead
    ///
    pub const OnSendData = onSendData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, data: [*:0]const u8, len: i32) callconv(.c) void `
    ///
    pub fn onSendData(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_SendData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lockPtyRequest` instead
    ///
    pub const LockPtyRequest = lockPtyRequest;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn lockPtyRequest(self: Konsole__Emulation, suspendVal: bool) void {
        qtc.Konsole__Emulation_LockPtyRequest(@ptrCast(self.ptr), suspendVal);
    }

    /// ### DEPRECATED: Use `onLockPtyRequest` instead
    ///
    pub const OnLockPtyRequest = onLockPtyRequest;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, suspendVal: bool) callconv(.c) void `
    ///
    pub fn onLockPtyRequest(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_LockPtyRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useUtf8Request` instead
    ///
    pub const UseUtf8Request = useUtf8Request;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: bool `
    ///
    pub fn useUtf8Request(self: Konsole__Emulation, param1: bool) void {
        qtc.Konsole__Emulation_UseUtf8Request(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onUseUtf8Request` instead
    ///
    pub const OnUseUtf8Request = onUseUtf8Request;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: bool) callconv(.c) void `
    ///
    pub fn onUseUtf8Request(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_UseUtf8Request(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateSet` instead
    ///
    pub const StateSet = stateSet;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` state: i32 `
    ///
    pub fn stateSet(self: Konsole__Emulation, state: i32) void {
        qtc.Konsole__Emulation_StateSet(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onStateSet` instead
    ///
    pub const OnStateSet = onStateSet;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, state: i32) callconv(.c) void `
    ///
    pub fn onStateSet(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_StateSet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zmodemDetected` instead
    ///
    pub const ZmodemDetected = zmodemDetected;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn zmodemDetected(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ZmodemDetected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZmodemDetected` instead
    ///
    pub const OnZmodemDetected = onZmodemDetected;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn onZmodemDetected(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ZmodemDetected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeTabTextColorRequest` instead
    ///
    pub const ChangeTabTextColorRequest = changeTabTextColorRequest;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` color: i32 `
    ///
    pub fn changeTabTextColorRequest(self: Konsole__Emulation, color: i32) void {
        qtc.Konsole__Emulation_ChangeTabTextColorRequest(@ptrCast(self.ptr), @bitCast(color));
    }

    /// ### DEPRECATED: Use `onChangeTabTextColorRequest` instead
    ///
    pub const OnChangeTabTextColorRequest = onChangeTabTextColorRequest;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, color: i32) callconv(.c) void `
    ///
    pub fn onChangeTabTextColorRequest(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ChangeTabTextColorRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `programUsesMouseChanged` instead
    ///
    pub const ProgramUsesMouseChanged = programUsesMouseChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` usesMouse: bool `
    ///
    pub fn programUsesMouseChanged(self: Konsole__Emulation, usesMouse: bool) void {
        qtc.Konsole__Emulation_ProgramUsesMouseChanged(@ptrCast(self.ptr), usesMouse);
    }

    /// ### DEPRECATED: Use `onProgramUsesMouseChanged` instead
    ///
    pub const OnProgramUsesMouseChanged = onProgramUsesMouseChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, usesMouse: bool) callconv(.c) void `
    ///
    pub fn onProgramUsesMouseChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProgramUsesMouseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `programBracketedPasteModeChanged` instead
    ///
    pub const ProgramBracketedPasteModeChanged = programBracketedPasteModeChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` bracketedPasteMode: bool `
    ///
    pub fn programBracketedPasteModeChanged(self: Konsole__Emulation, bracketedPasteMode: bool) void {
        qtc.Konsole__Emulation_ProgramBracketedPasteModeChanged(@ptrCast(self.ptr), bracketedPasteMode);
    }

    /// ### DEPRECATED: Use `onProgramBracketedPasteModeChanged` instead
    ///
    pub const OnProgramBracketedPasteModeChanged = onProgramBracketedPasteModeChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, bracketedPasteMode: bool) callconv(.c) void `
    ///
    pub fn onProgramBracketedPasteModeChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProgramBracketedPasteModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `outputChanged` instead
    ///
    pub const OutputChanged = outputChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn outputChanged(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_OutputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOutputChanged` instead
    ///
    pub const OnOutputChanged = onOutputChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn onOutputChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_OutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleChanged` instead
    ///
    pub const TitleChanged = titleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` title: i32 `
    ///
    /// ` newTitle: []const u8 `
    ///
    pub fn titleChanged(self: Konsole__Emulation, title: i32, newTitle: []const u8) void {
        const newTitle_str = qtc.libqt_string{
            .len = newTitle.len,
            .data = newTitle.ptr,
        };
        qtc.Konsole__Emulation_TitleChanged(@ptrCast(self.ptr), @bitCast(title), newTitle_str);
    }

    /// ### DEPRECATED: Use `onTitleChanged` instead
    ///
    pub const OnTitleChanged = onTitleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, title: i32, newTitle: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageSizeChanged` instead
    ///
    pub const ImageSizeChanged = imageSizeChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` _lineCount: i32 `
    ///
    /// ` columnCount: i32 `
    ///
    pub fn imageSizeChanged(self: Konsole__Emulation, _lineCount: i32, columnCount: i32) void {
        qtc.Konsole__Emulation_ImageSizeChanged(@ptrCast(self.ptr), @bitCast(_lineCount), @bitCast(columnCount));
    }

    /// ### DEPRECATED: Use `onImageSizeChanged` instead
    ///
    pub const OnImageSizeChanged = onImageSizeChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, lineCount: i32, columnCount: i32) callconv(.c) void `
    ///
    pub fn onImageSizeChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageSizeInitialized` instead
    ///
    pub const ImageSizeInitialized = imageSizeInitialized;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn imageSizeInitialized(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ImageSizeInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImageSizeInitialized` instead
    ///
    pub const OnImageSizeInitialized = onImageSizeInitialized;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn onImageSizeInitialized(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageSizeInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageResizeRequest` instead
    ///
    pub const ImageResizeRequest = imageResizeRequest;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` sizz: QSize `
    ///
    pub fn imageResizeRequest(self: Konsole__Emulation, sizz: anytype) void {
        comptime _ = @TypeOf(sizz)._is_QSize;
        qtc.Konsole__Emulation_ImageResizeRequest(@ptrCast(self.ptr), @ptrCast(sizz.ptr));
    }

    /// ### DEPRECATED: Use `onImageResizeRequest` instead
    ///
    pub const OnImageResizeRequest = onImageResizeRequest;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, sizz: QSize) callconv(.c) void `
    ///
    pub fn onImageResizeRequest(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QSize) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageResizeRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `profileChangeCommandReceived` instead
    ///
    pub const ProfileChangeCommandReceived = profileChangeCommandReceived;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn profileChangeCommandReceived(self: Konsole__Emulation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_ProfileChangeCommandReceived(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onProfileChangeCommandReceived` instead
    ///
    pub const OnProfileChangeCommandReceived = onProfileChangeCommandReceived;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onProfileChangeCommandReceived(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProfileChangeCommandReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flowControlKeyPressed` instead
    ///
    pub const FlowControlKeyPressed = flowControlKeyPressed;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` suspendKeyPressed: bool `
    ///
    pub fn flowControlKeyPressed(self: Konsole__Emulation, suspendKeyPressed: bool) void {
        qtc.Konsole__Emulation_FlowControlKeyPressed(@ptrCast(self.ptr), suspendKeyPressed);
    }

    /// ### DEPRECATED: Use `onFlowControlKeyPressed` instead
    ///
    pub const OnFlowControlKeyPressed = onFlowControlKeyPressed;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, suspendKeyPressed: bool) callconv(.c) void `
    ///
    pub fn onFlowControlKeyPressed(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_FlowControlKeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorChanged` instead
    ///
    pub const CursorChanged = cursorChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` cursorShape: Emulation_enums.KeyboardCursorShape `
    ///
    /// ` blinkingCursorEnabled: bool `
    ///
    pub fn cursorChanged(self: Konsole__Emulation, cursorShape: i32, blinkingCursorEnabled: bool) void {
        qtc.Konsole__Emulation_CursorChanged(@ptrCast(self.ptr), @bitCast(cursorShape), blinkingCursorEnabled);
    }

    /// ### DEPRECATED: Use `onCursorChanged` instead
    ///
    pub const OnCursorChanged = onCursorChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, cursorShape: Emulation_enums.KeyboardCursorShape, blinkingCursorEnabled: bool) callconv(.c) void `
    ///
    pub fn onCursorChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_CursorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `handleCommandFromKeyboard` instead
    ///
    pub const HandleCommandFromKeyboard = handleCommandFromKeyboard;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` command: KeyboardTranslator_enums.Command `
    ///
    pub fn handleCommandFromKeyboard(self: Konsole__Emulation, command: i32) void {
        qtc.Konsole__Emulation_HandleCommandFromKeyboard(@ptrCast(self.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onHandleCommandFromKeyboard` instead
    ///
    pub const OnHandleCommandFromKeyboard = onHandleCommandFromKeyboard;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, command: KeyboardTranslator_enums.Command) callconv(.c) void `
    ///
    pub fn onHandleCommandFromKeyboard(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_HandleCommandFromKeyboard(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `outputFromKeypressEvent` instead
    ///
    pub const OutputFromKeypressEvent = outputFromKeypressEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn outputFromKeypressEvent(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_OutputFromKeypressEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOutputFromKeypressEvent` instead
    ///
    pub const OnOutputFromKeypressEvent = onOutputFromKeypressEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn onOutputFromKeypressEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_OutputFromKeypressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` mode: i32 `
    ///
    pub fn setMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_SetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetMode` instead
    ///
    pub const OnSetMode = onSetMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, mode: i32) callconv(.c) void `
    ///
    pub fn onSetMode(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMode` instead
    ///
    pub const SuperSetMode = superSetMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` mode: i32 `
    ///
    pub fn superSetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_SuperSetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `resetMode` instead
    ///
    pub const ResetMode = resetMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` mode: i32 `
    ///
    pub fn resetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_ResetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onResetMode` instead
    ///
    pub const OnResetMode = onResetMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, mode: i32) callconv(.c) void `
    ///
    pub fn onResetMode(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnResetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetMode` instead
    ///
    pub const SuperResetMode = superResetMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` mode: i32 `
    ///
    pub fn superResetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_SuperResetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` index: i32 `
    ///
    pub fn setScreen(self: Konsole__Emulation, index: i32) void {
        qtc.Konsole__Emulation_SetScreen(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSetScreen` instead
    ///
    pub const OnSetScreen = onSetScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, index: i32) callconv(.c) void `
    ///
    pub fn onSetScreen(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetScreen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetScreen` instead
    ///
    pub const SuperSetScreen = superSetScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` index: i32 `
    ///
    pub fn superSetScreen(self: Konsole__Emulation, index: i32) void {
        qtc.Konsole__Emulation_SuperSetScreen(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setCodec` instead
    ///
    pub const SetCodec = setCodec;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` codec: Emulation_enums.EmulationCodec `
    ///
    pub fn setCodec(self: Konsole__Emulation, codec: i32) void {
        qtc.Konsole__Emulation_SetCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### DEPRECATED: Use `onSetCodec` instead
    ///
    pub const OnSetCodec = onSetCodec;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, codec: Emulation_enums.EmulationCodec) callconv(.c) void `
    ///
    pub fn onSetCodec(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetCodec(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCodec` instead
    ///
    pub const SuperSetCodec = superSetCodec;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` codec: Emulation_enums.EmulationCodec `
    ///
    pub fn superSetCodec(self: Konsole__Emulation, codec: i32) void {
        qtc.Konsole__Emulation_SuperSetCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### DEPRECATED: Use `bufferedUpdate` instead
    ///
    pub const BufferedUpdate = bufferedUpdate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn bufferedUpdate(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_BufferedUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBufferedUpdate` instead
    ///
    pub const OnBufferedUpdate = onBufferedUpdate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBufferedUpdate(self: Konsole__Emulation, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnBufferedUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBufferedUpdate` instead
    ///
    pub const SuperBufferedUpdate = superBufferedUpdate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn superBufferedUpdate(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_SuperBufferedUpdate(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__Emulation.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__Emulation.tr3: Memory allocation failed");
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Konsole__Emulation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__Emulation.objectName: Memory allocation failed");
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Konsole__Emulation, name: []const u8) void {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn isWidgetType(self: Konsole__Emulation) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn isWindowType(self: Konsole__Emulation) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn isQuickItemType(self: Konsole__Emulation) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn signalsBlocked(self: Konsole__Emulation) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Konsole__Emulation, b: bool) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn thread(self: Konsole__Emulation) QThread {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Konsole__Emulation, _thread: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Konsole__Emulation, interval: i32) i32 {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Konsole__Emulation, time: i64) i32 {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Konsole__Emulation, id: i32) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Konsole__Emulation, id: i32) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Konsole__Emulation, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Konsole__Emulation.children: Memory allocation failed");
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Konsole__Emulation, _parent: anytype) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Konsole__Emulation, filterObj: anytype) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Konsole__Emulation, obj: anytype) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Konsole__Emulation, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn disconnect3(self: Konsole__Emulation) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Konsole__Emulation, receiver: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn dumpObjectTree(self: Konsole__Emulation) void {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn dumpObjectInfo(self: Konsole__Emulation) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Konsole__Emulation, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Konsole__Emulation, name: [:0]const u8) QVariant {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Konsole__Emulation, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Konsole__Emulation.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Konsole__Emulation.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn bindingStorage(self: Konsole__Emulation) QBindingStorage {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn bindingStorage2(self: Konsole__Emulation) QBindingStorage {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn destroyed(self: Konsole__Emulation) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn parent(self: Konsole__Emulation) QObject {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Konsole__Emulation, classname: [:0]const u8) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn deleteLater(self: Konsole__Emulation) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Konsole__Emulation, interval: i32, timerType: i32) i32 {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Konsole__Emulation, time: i64, timerType: i32) i32 {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Konsole__Emulation, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Konsole__Emulation, signal: [:0]const u8) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Konsole__Emulation, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Konsole__Emulation, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Konsole__Emulation, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Konsole__Emulation, param1: anytype) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QObject) callconv(.c) void) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Konsole__Emulation, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Konsole__Emulation_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Konsole__Emulation, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Konsole__Emulation_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QEvent) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Konsole__Emulation, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Konsole__Emulation_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Konsole__Emulation, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Konsole__Emulation_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Konsole__Emulation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Konsole__Emulation_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Konsole__Emulation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Konsole__Emulation_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QTimerEvent) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Konsole__Emulation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Konsole__Emulation_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Konsole__Emulation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Konsole__Emulation_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QChildEvent) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Konsole__Emulation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Konsole__Emulation_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Konsole__Emulation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Konsole__Emulation_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QEvent) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn sender(self: Konsole__Emulation) QObject {
        return .{ .ptr = qtc.Konsole__Emulation_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn superSender(self: Konsole__Emulation) QObject {
        return .{ .ptr = qtc.Konsole__Emulation_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Konsole__Emulation, callback: *const fn () callconv(.c) QObject) void {
        qtc.Konsole__Emulation_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn senderSignalIndex(self: Konsole__Emulation) i32 {
        return qtc.Konsole__Emulation_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn superSenderSignalIndex(self: Konsole__Emulation) i32 {
        return qtc.Konsole__Emulation_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Konsole__Emulation, callback: *const fn () callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Konsole__Emulation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Emulation_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Konsole__Emulation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Emulation_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Konsole__Emulation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__Emulation_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Konsole__Emulation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__Emulation_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Emulation`
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QMetaMethod) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn delete(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const enums = struct {
    pub const Konsole = enum {
        pub const NOTIFYNORMAL: i32 = 0;
        pub const NOTIFYBELL: i32 = 1;
        pub const NOTIFYACTIVITY: i32 = 2;
        pub const NOTIFYSILENCE: i32 = 3;
    };

    pub const KeyboardCursorShape = enum {
        pub const BlockCursor: i32 = 0;
        pub const UnderlineCursor: i32 = 1;
        pub const IBeamCursor: i32 = 2;
    };

    pub const EmulationCodec = enum {
        pub const LocaleCodec: i32 = 0;
        pub const Utf8Codec: i32 = 1;
    };
};
