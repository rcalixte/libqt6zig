const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Emulation_enums = enums;
const KeyboardTranslator_enums = @import("libKeyboardTranslator.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__emulation = struct {
    /// New constructs a new Konsole::Emulation object.
    ///
    ///
    pub fn New() QtC.Konsole__Emulation {
        return qtc.Konsole__Emulation_new();
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Konsole__Emulation_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Konsole__Emulation, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Emulation_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Konsole__Emulation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__Emulation_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__Emulation_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Konsole__Emulation_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::emulation.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ImageSize(self: ?*anyopaque) QtC.QSize {
        return qtc.Konsole__Emulation_ImageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn LineCount(self: ?*anyopaque) i32 {
        return qtc.Konsole__Emulation_LineCount(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ClearHistory(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_ClearHistory(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn EraseChar(self: ?*anyopaque) i8 {
        return qtc.Konsole__Emulation_EraseChar(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn () callconv(.c) i8 ```
    pub fn OnEraseChar(self: ?*anyopaque, slot: fn () callconv(.c) i8) void {
        qtc.Konsole__Emulation_OnEraseChar(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QBaseEraseChar(self: ?*anyopaque) i8 {
        return qtc.Konsole__Emulation_QBaseEraseChar(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, name: []const u8 ```
    pub fn SetKeyBindings(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Konsole__Emulation_SetKeyBindings(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, allocator: std.mem.Allocator ```
    pub fn KeyBindings(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__Emulation_KeyBindings(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::emulation.KeyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ClearEntireScreen(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_ClearEntireScreen(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn () callconv(.c) void ```
    pub fn OnClearEntireScreen(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnClearEntireScreen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QBaseClearEntireScreen(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseClearEntireScreen(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseReset(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ProgramUsesMouse(self: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_ProgramUsesMouse(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ProgramBracketedPasteMode(self: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_ProgramBracketedPasteMode(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, lines: i32, columns: i32 ```
    pub fn SetImageSize(self: ?*anyopaque, lines: i32, columns: i32) void {
        qtc.Konsole__Emulation_SetImageSize(@ptrCast(self), @intCast(lines), @intCast(columns));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, lines: i32, columns: i32) callconv(.c) void ```
    pub fn OnSetImageSize(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetImageSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, lines: i32, columns: i32 ```
    pub fn QBaseSetImageSize(self: ?*anyopaque, lines: i32, columns: i32) void {
        qtc.Konsole__Emulation_QBaseSetImageSize(@ptrCast(self), @intCast(lines), @intCast(columns));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, text: []const u8 ```
    pub fn SendText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_SendText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnSendText(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, text: []const u8 ```
    pub fn QBaseSendText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_QBaseSendText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, param1: QtC.QKeyEvent, fromPaste: bool ```
    pub fn SendKeyEvent(self: ?*anyopaque, param1: ?*anyopaque, fromPaste: bool) void {
        qtc.Konsole__Emulation_SendKeyEvent(@ptrCast(self), @ptrCast(param1), fromPaste);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, param1: QtC.QKeyEvent, fromPaste: bool) callconv(.c) void ```
    pub fn OnSendKeyEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendKeyEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, param1: QtC.QKeyEvent, fromPaste: bool ```
    pub fn QBaseSendKeyEvent(self: ?*anyopaque, param1: ?*anyopaque, fromPaste: bool) void {
        qtc.Konsole__Emulation_QBaseSendKeyEvent(@ptrCast(self), @ptrCast(param1), fromPaste);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32 ```
    pub fn SendMouseEvent(self: ?*anyopaque, buttons: i32, column: i32, line: i32, eventType: i32) void {
        qtc.Konsole__Emulation_SendMouseEvent(@ptrCast(self), @intCast(buttons), @intCast(column), @intCast(line), @intCast(eventType));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32) callconv(.c) void ```
    pub fn OnSendMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, buttons: i32, column: i32, line: i32, eventType: i32 ```
    pub fn QBaseSendMouseEvent(self: ?*anyopaque, buttons: i32, column: i32, line: i32, eventType: i32) void {
        qtc.Konsole__Emulation_QBaseSendMouseEvent(@ptrCast(self), @intCast(buttons), @intCast(column), @intCast(line), @intCast(eventType));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, stringVal: []const u8, length: i32 ```
    pub fn SendString(self: ?*anyopaque, stringVal: []const u8, length: i32) void {
        const stringVal_Cstring = stringVal.ptr;
        qtc.Konsole__Emulation_SendString(@ptrCast(self), stringVal_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, stringVal: [*:0]const u8, length: i32) callconv(.c) void ```
    pub fn OnSendString(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSendString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, stringVal: []const u8, length: i32 ```
    pub fn QBaseSendString(self: ?*anyopaque, stringVal: []const u8, length: i32) void {
        const stringVal_Cstring = stringVal.ptr;
        qtc.Konsole__Emulation_QBaseSendString(@ptrCast(self), stringVal_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, buffer: []const u8, lenVal: i32 ```
    pub fn ReceiveData(self: ?*anyopaque, buffer: []const u8, lenVal: i32) void {
        const buffer_Cstring = buffer.ptr;
        qtc.Konsole__Emulation_ReceiveData(@ptrCast(self), buffer_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, data: []const u8, lenVal: i32 ```
    pub fn SendData(self: ?*anyopaque, data: []const u8, lenVal: i32) void {
        const data_Cstring = data.ptr;
        qtc.Konsole__Emulation_SendData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, data: [*:0]const u8, lenVal: i32) callconv(.c) void ```
    pub fn OnSendData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_SendData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, suspendVal: bool ```
    pub fn LockPtyRequest(self: ?*anyopaque, suspendVal: bool) void {
        qtc.Konsole__Emulation_LockPtyRequest(@ptrCast(self), suspendVal);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, suspendVal: bool) callconv(.c) void ```
    pub fn OnLockPtyRequest(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_LockPtyRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, param1: bool ```
    pub fn UseUtf8Request(self: ?*anyopaque, param1: bool) void {
        qtc.Konsole__Emulation_UseUtf8Request(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, param1: bool) callconv(.c) void ```
    pub fn OnUseUtf8Request(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_UseUtf8Request(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, state: i32 ```
    pub fn StateSet(self: ?*anyopaque, state: i32) void {
        qtc.Konsole__Emulation_StateSet(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, state: i32) callconv(.c) void ```
    pub fn OnStateSet(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_StateSet(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ZmodemDetected(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_ZmodemDetected(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation) callconv(.c) void ```
    pub fn OnZmodemDetected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ZmodemDetected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, color: i32 ```
    pub fn ChangeTabTextColorRequest(self: ?*anyopaque, color: i32) void {
        qtc.Konsole__Emulation_ChangeTabTextColorRequest(@ptrCast(self), @intCast(color));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, color: i32) callconv(.c) void ```
    pub fn OnChangeTabTextColorRequest(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ChangeTabTextColorRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, usesMouse: bool ```
    pub fn ProgramUsesMouseChanged(self: ?*anyopaque, usesMouse: bool) void {
        qtc.Konsole__Emulation_ProgramUsesMouseChanged(@ptrCast(self), usesMouse);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, usesMouse: bool) callconv(.c) void ```
    pub fn OnProgramUsesMouseChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProgramUsesMouseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, bracketedPasteMode: bool ```
    pub fn ProgramBracketedPasteModeChanged(self: ?*anyopaque, bracketedPasteMode: bool) void {
        qtc.Konsole__Emulation_ProgramBracketedPasteModeChanged(@ptrCast(self), bracketedPasteMode);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, bracketedPasteMode: bool) callconv(.c) void ```
    pub fn OnProgramBracketedPasteModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProgramBracketedPasteModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn OutputChanged(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_OutputChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation) callconv(.c) void ```
    pub fn OnOutputChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_OutputChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, title: i32, newTitle: []const u8 ```
    pub fn TitleChanged(self: ?*anyopaque, title: i32, newTitle: []const u8) void {
        const newTitle_str = qtc.libqt_string{
            .len = newTitle.len,
            .data = newTitle.ptr,
        };
        qtc.Konsole__Emulation_TitleChanged(@ptrCast(self), @intCast(title), newTitle_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, title: i32, newTitle: [*:0]const u8) callconv(.c) void ```
    pub fn OnTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_TitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, lineCount: i32, columnCount: i32 ```
    pub fn ImageSizeChanged(self: ?*anyopaque, lineCount: i32, columnCount: i32) void {
        qtc.Konsole__Emulation_ImageSizeChanged(@ptrCast(self), @intCast(lineCount), @intCast(columnCount));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, lineCount: i32, columnCount: i32) callconv(.c) void ```
    pub fn OnImageSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn ImageSizeInitialized(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_ImageSizeInitialized(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation) callconv(.c) void ```
    pub fn OnImageSizeInitialized(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageSizeInitialized(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, sizz: QtC.QSize ```
    pub fn ImageResizeRequest(self: ?*anyopaque, sizz: ?*anyopaque) void {
        qtc.Konsole__Emulation_ImageResizeRequest(@ptrCast(self), @ptrCast(sizz));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, sizz: QtC.QSize) callconv(.c) void ```
    pub fn OnImageResizeRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ImageResizeRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, text: []const u8 ```
    pub fn ProfileChangeCommandReceived(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__Emulation_ProfileChangeCommandReceived(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnProfileChangeCommandReceived(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_ProfileChangeCommandReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, suspendKeyPressed: bool ```
    pub fn FlowControlKeyPressed(self: ?*anyopaque, suspendKeyPressed: bool) void {
        qtc.Konsole__Emulation_FlowControlKeyPressed(@ptrCast(self), suspendKeyPressed);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, suspendKeyPressed: bool) callconv(.c) void ```
    pub fn OnFlowControlKeyPressed(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_FlowControlKeyPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, cursorShape: Emulation_enums.KeyboardCursorShape, blinkingCursorEnabled: bool ```
    pub fn CursorChanged(self: ?*anyopaque, cursorShape: i32, blinkingCursorEnabled: bool) void {
        qtc.Konsole__Emulation_CursorChanged(@ptrCast(self), @intCast(cursorShape), blinkingCursorEnabled);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, cursorShape: Emulation_enums.KeyboardCursorShape, blinkingCursorEnabled: bool) callconv(.c) void ```
    pub fn OnCursorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_CursorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, command: KeyboardTranslator_enums.Command ```
    pub fn HandleCommandFromKeyboard(self: ?*anyopaque, command: i32) void {
        qtc.Konsole__Emulation_HandleCommandFromKeyboard(@ptrCast(self), @intCast(command));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, command: KeyboardTranslator_enums.Command) callconv(.c) void ```
    pub fn OnHandleCommandFromKeyboard(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_HandleCommandFromKeyboard(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn OutputFromKeypressEvent(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_OutputFromKeypressEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation) callconv(.c) void ```
    pub fn OnOutputFromKeypressEvent(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_Connect_OutputFromKeypressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, mode: i32 ```
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.Konsole__Emulation_SetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, mode: i32) callconv(.c) void ```
    pub fn OnSetMode(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, mode: i32 ```
    pub fn QBaseSetMode(self: ?*anyopaque, mode: i32) void {
        qtc.Konsole__Emulation_QBaseSetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, mode: i32 ```
    pub fn ResetMode(self: ?*anyopaque, mode: i32) void {
        qtc.Konsole__Emulation_ResetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, mode: i32) callconv(.c) void ```
    pub fn OnResetMode(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnResetMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, mode: i32 ```
    pub fn QBaseResetMode(self: ?*anyopaque, mode: i32) void {
        qtc.Konsole__Emulation_QBaseResetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, index: i32 ```
    pub fn SetScreen(self: ?*anyopaque, index: i32) void {
        qtc.Konsole__Emulation_SetScreen(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, index: i32) callconv(.c) void ```
    pub fn OnSetScreen(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetScreen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, index: i32 ```
    pub fn QBaseSetScreen(self: ?*anyopaque, index: i32) void {
        qtc.Konsole__Emulation_QBaseSetScreen(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation, codec: Emulation_enums.EmulationCodec ```
    pub fn SetCodec(self: ?*anyopaque, codec: i32) void {
        qtc.Konsole__Emulation_SetCodec(@ptrCast(self), @intCast(codec));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, codec: Emulation_enums.EmulationCodec) callconv(.c) void ```
    pub fn OnSetCodec(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnSetCodec(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation, codec: Emulation_enums.EmulationCodec ```
    pub fn QBaseSetCodec(self: ?*anyopaque, codec: i32) void {
        qtc.Konsole__Emulation_QBaseSetCodec(@ptrCast(self), @intCast(codec));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn BufferedUpdate(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_BufferedUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn () callconv(.c) void ```
    pub fn OnBufferedUpdate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Konsole__Emulation_OnBufferedUpdate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QBaseBufferedUpdate(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseBufferedUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Konsole__Emulation_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::emulation.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Konsole__Emulation_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::emulation.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Konsole__Emulation, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::emulation.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Konsole__Emulation, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Konsole__Emulation, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__Emulation, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__Emulation, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__Emulation, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__Emulation, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Konsole__Emulation, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("konsole::emulation.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Konsole__Emulation, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Konsole__Emulation, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Konsole__Emulation, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Konsole__Emulation, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Konsole__Emulation, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Konsole__Emulation, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Konsole__Emulation, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole::emulation.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::emulation.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Konsole__Emulation, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__Emulation, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__Emulation, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Konsole__Emulation, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Emulation, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Emulation_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Emulation_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Emulation_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Emulation_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Emulation_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Emulation_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Emulation_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__Emulation_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__Emulation_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Konsole__Emulation_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__Emulation_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__Emulation_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Emulation_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Emulation_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__Emulation_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__Emulation_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__Emulation_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Konsole__Emulation, slot: fn (self: QtC.Konsole__Emulation, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__Emulation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__Emulation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/emulation.html#types
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
