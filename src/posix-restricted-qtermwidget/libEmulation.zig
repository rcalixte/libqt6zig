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

    /// New constructs a new Konsole::Emulation object.
    ///
    pub fn New() Konsole__Emulation {
        return .{ .ptr = qtc.Konsole__Emulation_new() };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn MetaObject(self: Konsole__Emulation) QMetaObject {
        return .{ .ptr = qtc.Konsole__Emulation_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: Konsole__Emulation, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Konsole__Emulation_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn SuperMetaObject(self: Konsole__Emulation) QMetaObject {
        return .{ .ptr = qtc.Konsole__Emulation_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Konsole__Emulation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Emulation_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Konsole__Emulation_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Konsole__Emulation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Emulation_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: Konsole__Emulation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__Emulation_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: Konsole__Emulation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__Emulation_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__emulation.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ImageSize(self: Konsole__Emulation) QSize {
        return .{ .ptr = qtc.Konsole__Emulation_ImageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn LineCount(self: Konsole__Emulation) i32 {
        return qtc.Konsole__Emulation_LineCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ClearHistory(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ClearHistory(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn EraseChar(self: Konsole__Emulation) u8 {
        return qtc.Konsole__Emulation_EraseChar(@ptrCast(self.ptr));
    }

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
    pub fn OnEraseChar(self: Konsole__Emulation, callback: *const fn () callconv(.c) u8) void {
        qtc.Konsole__Emulation_OnEraseChar(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEraseChar` instead
    ///
    pub const QBaseEraseChar = SuperEraseChar;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn SuperEraseChar(self: Konsole__Emulation) u8 {
        return qtc.Konsole__Emulation_SuperEraseChar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetKeyBindings(self: Konsole__Emulation, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Konsole__Emulation_SetKeyBindings(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyBindings(self: Konsole__Emulation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__Emulation_KeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__emulation.KeyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ClearEntireScreen(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ClearEntireScreen(@ptrCast(self.ptr));
    }

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
    pub fn OnClearEntireScreen(self: Konsole__Emulation, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnClearEntireScreen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClearEntireScreen` instead
    ///
    pub const QBaseClearEntireScreen = SuperClearEntireScreen;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn SuperClearEntireScreen(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_SuperClearEntireScreen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn Reset(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_Reset(@ptrCast(self.ptr));
    }

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
    pub fn OnReset(self: Konsole__Emulation, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn SuperReset(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_SuperReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ProgramUsesMouse(self: Konsole__Emulation) bool {
        return qtc.Konsole__Emulation_ProgramUsesMouse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ProgramBracketedPasteMode(self: Konsole__Emulation) bool {
        return qtc.Konsole__Emulation_ProgramBracketedPasteMode(@ptrCast(self.ptr));
    }

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
    pub fn SetImageSize(self: Konsole__Emulation, lines: i32, columns: i32) void {
        qtc.Konsole__Emulation_SetImageSize(@ptrCast(self.ptr), @bitCast(lines), @bitCast(columns));
    }

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
    pub fn OnSetImageSize(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetImageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetImageSize` instead
    ///
    pub const QBaseSetImageSize = SuperSetImageSize;

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
    pub fn SuperSetImageSize(self: Konsole__Emulation, lines: i32, columns: i32) void {
        qtc.Konsole__Emulation_SuperSetImageSize(@ptrCast(self.ptr), @bitCast(lines), @bitCast(columns));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SendText(self: Konsole__Emulation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_SendText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn OnSendText(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendText` instead
    ///
    pub const QBaseSendText = SuperSendText;

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
    pub fn SuperSendText(self: Konsole__Emulation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_SuperSendText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn SendKeyEvent(self: Konsole__Emulation, param1: anytype, fromPaste: bool) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Konsole__Emulation_SendKeyEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr), fromPaste);
    }

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
    pub fn OnSendKeyEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QKeyEvent, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendKeyEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendKeyEvent` instead
    ///
    pub const QBaseSendKeyEvent = SuperSendKeyEvent;

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
    pub fn SuperSendKeyEvent(self: Konsole__Emulation, param1: anytype, fromPaste: bool) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.Konsole__Emulation_SuperSendKeyEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr), fromPaste);
    }

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
    pub fn SendMouseEvent(self: Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32) void {
        qtc.Konsole__Emulation_SendMouseEvent(@ptrCast(self.ptr), @bitCast(buttons), @bitCast(column), @bitCast(line), @bitCast(eventType));
    }

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
    pub fn OnSendMouseEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendMouseEvent` instead
    ///
    pub const QBaseSendMouseEvent = SuperSendMouseEvent;

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
    pub fn SuperSendMouseEvent(self: Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32) void {
        qtc.Konsole__Emulation_SuperSendMouseEvent(@ptrCast(self.ptr), @bitCast(buttons), @bitCast(column), @bitCast(line), @bitCast(eventType));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` stringVal: [:0]const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn SendString(self: Konsole__Emulation, stringVal: [:0]const u8, length: i32) void {
        const stringVal_Cstring = stringVal.ptr;
        qtc.Konsole__Emulation_SendString(@ptrCast(self.ptr), stringVal_Cstring, @bitCast(length));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, stringVal: [*:0]const u8, length: i32) callconv(.c) void `
    ///
    pub fn OnSendString(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendString` instead
    ///
    pub const QBaseSendString = SuperSendString;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` stringVal: [:0]const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn SuperSendString(self: Konsole__Emulation, stringVal: [:0]const u8, length: i32) void {
        const stringVal_Cstring = stringVal.ptr;
        qtc.Konsole__Emulation_SuperSendString(@ptrCast(self.ptr), stringVal_Cstring, @bitCast(length));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` buffer: [:0]const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    pub fn ReceiveData(self: Konsole__Emulation, buffer: [:0]const u8, lenVal: i32) void {
        const buffer_Cstring = buffer.ptr;
        qtc.Konsole__Emulation_ReceiveData(@ptrCast(self.ptr), buffer_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    pub fn SendData(self: Konsole__Emulation, data: [:0]const u8, lenVal: i32) void {
        const data_Cstring = data.ptr;
        qtc.Konsole__Emulation_SendData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, data: [*:0]const u8, lenVal: i32) callconv(.c) void `
    ///
    pub fn OnSendData(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_SendData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn LockPtyRequest(self: Konsole__Emulation, suspendVal: bool) void {
        qtc.Konsole__Emulation_LockPtyRequest(@ptrCast(self.ptr), suspendVal);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, suspendVal: bool) callconv(.c) void `
    ///
    pub fn OnLockPtyRequest(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_LockPtyRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: bool `
    ///
    pub fn UseUtf8Request(self: Konsole__Emulation, param1: bool) void {
        qtc.Konsole__Emulation_UseUtf8Request(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, param1: bool) callconv(.c) void `
    ///
    pub fn OnUseUtf8Request(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_UseUtf8Request(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` state: i32 `
    ///
    pub fn StateSet(self: Konsole__Emulation, state: i32) void {
        qtc.Konsole__Emulation_StateSet(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, state: i32) callconv(.c) void `
    ///
    pub fn OnStateSet(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_StateSet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ZmodemDetected(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ZmodemDetected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn OnZmodemDetected(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ZmodemDetected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` color: i32 `
    ///
    pub fn ChangeTabTextColorRequest(self: Konsole__Emulation, color: i32) void {
        qtc.Konsole__Emulation_ChangeTabTextColorRequest(@ptrCast(self.ptr), @bitCast(color));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, color: i32) callconv(.c) void `
    ///
    pub fn OnChangeTabTextColorRequest(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ChangeTabTextColorRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` usesMouse: bool `
    ///
    pub fn ProgramUsesMouseChanged(self: Konsole__Emulation, usesMouse: bool) void {
        qtc.Konsole__Emulation_ProgramUsesMouseChanged(@ptrCast(self.ptr), usesMouse);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, usesMouse: bool) callconv(.c) void `
    ///
    pub fn OnProgramUsesMouseChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProgramUsesMouseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` bracketedPasteMode: bool `
    ///
    pub fn ProgramBracketedPasteModeChanged(self: Konsole__Emulation, bracketedPasteMode: bool) void {
        qtc.Konsole__Emulation_ProgramBracketedPasteModeChanged(@ptrCast(self.ptr), bracketedPasteMode);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, bracketedPasteMode: bool) callconv(.c) void `
    ///
    pub fn OnProgramBracketedPasteModeChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProgramBracketedPasteModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn OutputChanged(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_OutputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn OnOutputChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_OutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TitleChanged(self: Konsole__Emulation, title: i32, newTitle: []const u8) void {
        const newTitle_str = qtc.libqt_string{
            .len = newTitle.len,
            .data = newTitle.ptr,
        };
        qtc.Konsole__Emulation_TitleChanged(@ptrCast(self.ptr), @bitCast(title), newTitle_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, title: i32, newTitle: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTitleChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` lineCount: i32 `
    ///
    /// ` columnCount: i32 `
    ///
    pub fn ImageSizeChanged(self: Konsole__Emulation, lineCount: i32, columnCount: i32) void {
        qtc.Konsole__Emulation_ImageSizeChanged(@ptrCast(self.ptr), @bitCast(lineCount), @bitCast(columnCount));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, lineCount: i32, columnCount: i32) callconv(.c) void `
    ///
    pub fn OnImageSizeChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn ImageSizeInitialized(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_ImageSizeInitialized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn OnImageSizeInitialized(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageSizeInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` sizz: QSize `
    ///
    pub fn ImageResizeRequest(self: Konsole__Emulation, sizz: anytype) void {
        comptime _ = @TypeOf(sizz)._is_QSize;
        qtc.Konsole__Emulation_ImageResizeRequest(@ptrCast(self.ptr), @ptrCast(sizz.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, sizz: QSize) callconv(.c) void `
    ///
    pub fn OnImageResizeRequest(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QSize) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageResizeRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ProfileChangeCommandReceived(self: Konsole__Emulation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_ProfileChangeCommandReceived(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnProfileChangeCommandReceived(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProfileChangeCommandReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` suspendKeyPressed: bool `
    ///
    pub fn FlowControlKeyPressed(self: Konsole__Emulation, suspendKeyPressed: bool) void {
        qtc.Konsole__Emulation_FlowControlKeyPressed(@ptrCast(self.ptr), suspendKeyPressed);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, suspendKeyPressed: bool) callconv(.c) void `
    ///
    pub fn OnFlowControlKeyPressed(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_FlowControlKeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CursorChanged(self: Konsole__Emulation, cursorShape: i32, blinkingCursorEnabled: bool) void {
        qtc.Konsole__Emulation_CursorChanged(@ptrCast(self.ptr), @bitCast(cursorShape), blinkingCursorEnabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, cursorShape: Emulation_enums.KeyboardCursorShape, blinkingCursorEnabled: bool) callconv(.c) void `
    ///
    pub fn OnCursorChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_CursorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` command: KeyboardTranslator_enums.Command `
    ///
    pub fn HandleCommandFromKeyboard(self: Konsole__Emulation, command: i32) void {
        qtc.Konsole__Emulation_HandleCommandFromKeyboard(@ptrCast(self.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation, command: KeyboardTranslator_enums.Command) callconv(.c) void `
    ///
    pub fn OnHandleCommandFromKeyboard(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_HandleCommandFromKeyboard(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn OutputFromKeypressEvent(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_OutputFromKeypressEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` callback: *const fn (self: Konsole__Emulation) callconv(.c) void `
    ///
    pub fn OnOutputFromKeypressEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_OutputFromKeypressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` mode: i32 `
    ///
    pub fn SetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_SetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnSetMode(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMode` instead
    ///
    pub const QBaseSetMode = SuperSetMode;

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
    pub fn SuperSetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_SuperSetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` mode: i32 `
    ///
    pub fn ResetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_ResetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnResetMode(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnResetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetMode` instead
    ///
    pub const QBaseResetMode = SuperResetMode;

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
    pub fn SuperResetMode(self: Konsole__Emulation, mode: i32) void {
        qtc.Konsole__Emulation_SuperResetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` index: i32 `
    ///
    pub fn SetScreen(self: Konsole__Emulation, index: i32) void {
        qtc.Konsole__Emulation_SetScreen(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnSetScreen(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetScreen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetScreen` instead
    ///
    pub const QBaseSetScreen = SuperSetScreen;

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
    pub fn SuperSetScreen(self: Konsole__Emulation, index: i32) void {
        qtc.Konsole__Emulation_SuperSetScreen(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` codec: Emulation_enums.EmulationCodec `
    ///
    pub fn SetCodec(self: Konsole__Emulation, codec: i32) void {
        qtc.Konsole__Emulation_SetCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

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
    pub fn OnSetCodec(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetCodec(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCodec` instead
    ///
    pub const QBaseSetCodec = SuperSetCodec;

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
    pub fn SuperSetCodec(self: Konsole__Emulation, codec: i32) void {
        qtc.Konsole__Emulation_SuperSetCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn BufferedUpdate(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_BufferedUpdate(@ptrCast(self.ptr));
    }

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
    pub fn OnBufferedUpdate(self: Konsole__Emulation, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnBufferedUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBufferedUpdate` instead
    ///
    pub const QBaseBufferedUpdate = SuperBufferedUpdate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn SuperBufferedUpdate(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_SuperBufferedUpdate(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__emulation.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__emulation.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: Konsole__Emulation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__emulation.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: Konsole__Emulation, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn IsWidgetType(self: Konsole__Emulation) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn IsWindowType(self: Konsole__Emulation) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn IsQuickItemType(self: Konsole__Emulation) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn SignalsBlocked(self: Konsole__Emulation) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: Konsole__Emulation, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn Thread(self: Konsole__Emulation) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Konsole__Emulation, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: Konsole__Emulation, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: Konsole__Emulation, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: Konsole__Emulation, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: Konsole__Emulation, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: Konsole__Emulation, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("konsole__emulation.Children: Memory allocation failed");
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Konsole__Emulation, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: Konsole__Emulation, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: Konsole__Emulation, obj: anytype) void {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Konsole__Emulation, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn Disconnect3(self: Konsole__Emulation) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: Konsole__Emulation, receiver: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn DumpObjectTree(self: Konsole__Emulation) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn DumpObjectInfo(self: Konsole__Emulation) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: Konsole__Emulation, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Konsole__Emulation, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: Konsole__Emulation, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole__emulation.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__emulation.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Konsole__Emulation `
    ///
    pub fn BindingStorage(self: Konsole__Emulation) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn BindingStorage2(self: Konsole__Emulation) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn Destroyed(self: Konsole__Emulation) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn Parent(self: Konsole__Emulation) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: Konsole__Emulation, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn DeleteLater(self: Konsole__Emulation) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: Konsole__Emulation, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: Konsole__Emulation, time: i64, timerType: i32) i32 {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Konsole__Emulation, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Konsole__Emulation, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: Konsole__Emulation, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Konsole__Emulation, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Konsole__Emulation, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__Emulation `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Konsole__Emulation, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: Konsole__Emulation, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Emulation_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Konsole__Emulation, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Emulation_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QEvent) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Konsole__Emulation, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Emulation_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Konsole__Emulation, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Emulation_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Konsole__Emulation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__Emulation_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Konsole__Emulation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__Emulation_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QTimerEvent) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Konsole__Emulation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__Emulation_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Konsole__Emulation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__Emulation_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QChildEvent) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Konsole__Emulation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__Emulation_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Konsole__Emulation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__Emulation_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QEvent) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: Konsole__Emulation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Emulation_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: Konsole__Emulation) QObject {
        return .{ .ptr = qtc.Konsole__Emulation_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: Konsole__Emulation) QObject {
        return .{ .ptr = qtc.Konsole__Emulation_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: Konsole__Emulation, callback: *const fn () callconv(.c) QObject) void {
        qtc.Konsole__Emulation_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: Konsole__Emulation) i32 {
        return qtc.Konsole__Emulation_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: Konsole__Emulation) i32 {
        return qtc.Konsole__Emulation_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: Konsole__Emulation, callback: *const fn () callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: Konsole__Emulation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Emulation_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: Konsole__Emulation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Emulation_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: Konsole__Emulation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__Emulation_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: Konsole__Emulation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__Emulation_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, QMetaMethod) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: Konsole__Emulation, callback: *const fn (Konsole__Emulation, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__Emulation `
    ///
    pub fn Delete(self: Konsole__Emulation) void {
        qtc.Konsole__Emulation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const enums = struct {
    pub const Konsole = enum(i32) {
        pub const NOTIFYNORMAL: i32 = 0;
        pub const NOTIFYBELL: i32 = 1;
        pub const NOTIFYACTIVITY: i32 = 2;
        pub const NOTIFYSILENCE: i32 = 3;
    };

    pub const KeyboardCursorShape = enum(i32) {
        pub const BlockCursor: i32 = 0;
        pub const UnderlineCursor: i32 = 1;
        pub const IBeamCursor: i32 = 2;
    };

    pub const EmulationCodec = enum(i32) {
        pub const LocaleCodec: i32 = 0;
        pub const Utf8Codec: i32 = 1;
    };
};
