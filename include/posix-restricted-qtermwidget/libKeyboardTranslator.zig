const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KeyboardTranslator_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__keyboardtranslator = struct {
    /// New constructs a new Konsole::KeyboardTranslator object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.Konsole__KeyboardTranslator {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.Konsole__KeyboardTranslator_new(name_str);
    }

    /// New2 constructs a new Konsole::KeyboardTranslator object.
    ///
    /// ``` param1: QtC.Konsole__KeyboardTranslator ```
    pub fn New2(param1: ?*anyopaque) QtC.Konsole__KeyboardTranslator {
        return qtc.Konsole__KeyboardTranslator_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslator_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslator.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Konsole__KeyboardTranslator_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslator_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslator.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Konsole__KeyboardTranslator_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, keyCode: i32, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn FindEntry(self: ?*anyopaque, keyCode: i32, modifiers: i64) QtC.Konsole__KeyboardTranslator__Entry {
        return qtc.Konsole__KeyboardTranslator_FindEntry(@ptrCast(self), @intCast(keyCode), @intCast(modifiers));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, entry: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn AddEntry(self: ?*anyopaque, entry: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslator_AddEntry(@ptrCast(self), @ptrCast(entry));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, existing: QtC.Konsole__KeyboardTranslator__Entry, replacement: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn ReplaceEntry(self: ?*anyopaque, existing: ?*anyopaque, replacement: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslator_ReplaceEntry(@ptrCast(self), @ptrCast(existing), @ptrCast(replacement));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, entry: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn RemoveEntry(self: ?*anyopaque, entry: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslator_RemoveEntry(@ptrCast(self), @ptrCast(entry));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, allocator: std.mem.Allocator ```
    pub fn Entries(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Konsole__KeyboardTranslator__Entry {
        const _arr: qtc.libqt_list = qtc.Konsole__KeyboardTranslator_Entries(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Konsole__KeyboardTranslator__Entry, _arr.len) catch @panic("konsole::keyboardtranslator.Entries: Memory allocation failed");
        const _data: [*]QtC.Konsole__KeyboardTranslator__Entry = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator, keyCode: i32, modifiers: flag of qnamespace_enums.KeyboardModifier, state: flag of KeyboardTranslator_enums.State ```
    pub fn FindEntry3(self: ?*anyopaque, keyCode: i32, modifiers: i64, state: i32) QtC.Konsole__KeyboardTranslator__Entry {
        return qtc.Konsole__KeyboardTranslator_FindEntry3(@ptrCast(self), @intCast(keyCode), @intCast(modifiers), @intCast(state));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslator_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__keyboardtranslatorreader = struct {
    /// New constructs a new Konsole::KeyboardTranslatorReader object.
    ///
    /// ``` source: QtC.QIODevice ```
    pub fn New(source: ?*anyopaque) QtC.Konsole__KeyboardTranslatorReader {
        return qtc.Konsole__KeyboardTranslatorReader_new(@ptrCast(source));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorReader, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslatorReader_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslatorreader.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorReader ```
    pub fn HasNextEntry(self: ?*anyopaque) bool {
        return qtc.Konsole__KeyboardTranslatorReader_HasNextEntry(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorReader ```
    pub fn NextEntry(self: ?*anyopaque) QtC.Konsole__KeyboardTranslator__Entry {
        return qtc.Konsole__KeyboardTranslatorReader_NextEntry(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorReader ```
    pub fn ParseError(self: ?*anyopaque) bool {
        return qtc.Konsole__KeyboardTranslatorReader_ParseError(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` condition: []const u8, result: []const u8 ```
    pub fn CreateEntry(condition: []const u8, result: []const u8) QtC.Konsole__KeyboardTranslator__Entry {
        const condition_str = qtc.libqt_string{
            .len = condition.len,
            .data = condition.ptr,
        };
        const result_str = qtc.libqt_string{
            .len = result.len,
            .data = result.ptr,
        };
        return qtc.Konsole__KeyboardTranslatorReader_CreateEntry(condition_str, result_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorReader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslatorReader_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__keyboardtranslatorwriter = struct {
    /// New constructs a new Konsole::KeyboardTranslatorWriter object.
    ///
    /// ``` destination: QtC.QIODevice ```
    pub fn New(destination: ?*anyopaque) QtC.Konsole__KeyboardTranslatorWriter {
        return qtc.Konsole__KeyboardTranslatorWriter_new(@ptrCast(destination));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorWriter, description: []const u8 ```
    pub fn WriteHeader(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Konsole__KeyboardTranslatorWriter_WriteHeader(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorWriter, entry: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn WriteEntry(self: ?*anyopaque, entry: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslatorWriter_WriteEntry(@ptrCast(self), @ptrCast(entry));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorWriter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslatorWriter_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__keyboardtranslatormanager = struct {
    /// New constructs a new Konsole::KeyboardTranslatorManager object.
    ///
    ///
    pub fn New() QtC.Konsole__KeyboardTranslatorManager {
        return qtc.Konsole__KeyboardTranslatorManager_new();
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorManager, translator: QtC.Konsole__KeyboardTranslator ```
    pub fn AddTranslator(self: ?*anyopaque, translator: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslatorManager_AddTranslator(@ptrCast(self), @ptrCast(translator));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorManager, name: []const u8 ```
    pub fn DeleteTranslator(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.Konsole__KeyboardTranslatorManager_DeleteTranslator(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorManager ```
    pub fn DefaultTranslator(self: ?*anyopaque) QtC.Konsole__KeyboardTranslator {
        return qtc.Konsole__KeyboardTranslatorManager_DefaultTranslator(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorManager, name: []const u8 ```
    pub fn FindTranslator(self: ?*anyopaque, name: []const u8) QtC.Konsole__KeyboardTranslator {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.Konsole__KeyboardTranslatorManager_FindTranslator(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorManager, allocator: std.mem.Allocator ```
    pub fn AllTranslators(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__KeyboardTranslatorManager_AllTranslators(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("konsole::keyboardtranslatormanager.AllTranslators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::keyboardtranslatormanager.AllTranslators: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    ///
    pub fn Instance() QtC.Konsole__KeyboardTranslatorManager {
        return qtc.Konsole__KeyboardTranslatorManager_Instance();
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslatorManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslatorManager_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole = struct {
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` param1: i32 ```
    pub fn OneOrZero(param1: i32) i32 {
        return qtc.Konsole_OneOrZero(@intCast(param1));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__keyboardtranslator__entry = struct {
    /// New constructs a new Konsole::KeyboardTranslator::Entry object.
    ///
    ///
    pub fn New() QtC.Konsole__KeyboardTranslator__Entry {
        return qtc.Konsole__KeyboardTranslator__Entry_new();
    }

    /// New2 constructs a new Konsole::KeyboardTranslator::Entry object.
    ///
    /// ``` param1: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn New2(param1: ?*anyopaque) QtC.Konsole__KeyboardTranslator__Entry {
        return qtc.Konsole__KeyboardTranslator__Entry_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    ///
    /// Returns: ``` KeyboardTranslator_enums.Command ```
    pub fn Command(self: ?*anyopaque) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_Command(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, command: KeyboardTranslator_enums.Command ```
    pub fn SetCommand(self: ?*anyopaque, command: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetCommand(@ptrCast(self), @intCast(command));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole::keyboardtranslator::entry.Text: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, text: []u8 ```
    pub fn SetText(self: ?*anyopaque, text: []u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__KeyboardTranslator__Entry_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator ```
    pub fn EscapedText(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole::keyboardtranslator::entry.EscapedText: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn KeyCode(self: ?*anyopaque) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_KeyCode(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, keyCode: i32 ```
    pub fn SetKeyCode(self: ?*anyopaque, keyCode: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetKeyCode(@ptrCast(self), @intCast(keyCode));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.Konsole__KeyboardTranslator__Entry_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn ModifierMask(self: ?*anyopaque) i64 {
        return qtc.Konsole__KeyboardTranslator__Entry_ModifierMask(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifierMask(self: ?*anyopaque, modifiers: i64) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetModifierMask(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    ///
    /// Returns: ``` flag of KeyboardTranslator_enums.State ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_State(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    ///
    /// Returns: ``` flag of KeyboardTranslator_enums.State ```
    pub fn StateMask(self: ?*anyopaque) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_StateMask(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, state: flag of KeyboardTranslator_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, mask: flag of KeyboardTranslator_enums.State ```
    pub fn SetStateMask(self: ?*anyopaque, mask: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetStateMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator ```
    pub fn ConditionToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslator__Entry_ConditionToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslator::entry.ConditionToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator ```
    pub fn ResultToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslator::entry.ResultToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, keyCode: i32, modifiers: flag of qnamespace_enums.KeyboardModifier, flags: flag of KeyboardTranslator_enums.State ```
    pub fn Matches(self: ?*anyopaque, keyCode: i32, modifiers: i64, flags: i32) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_Matches(@ptrCast(self), @intCast(keyCode), @intCast(modifiers), @intCast(flags));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, rhs: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, expandWildCards: bool, allocator: std.mem.Allocator ```
    pub fn Text1(self: ?*anyopaque, expandWildCards: bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text1(@ptrCast(self), expandWildCards);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole::keyboardtranslator::entry.Text1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, expandWildCards: bool, modifiers: flag of qnamespace_enums.KeyboardModifier, allocator: std.mem.Allocator ```
    pub fn Text2(self: ?*anyopaque, expandWildCards: bool, modifiers: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text2(@ptrCast(self), expandWildCards, @intCast(modifiers));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole::keyboardtranslator::entry.Text2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, expandWildCards: bool, allocator: std.mem.Allocator ```
    pub fn EscapedText1(self: ?*anyopaque, expandWildCards: bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText1(@ptrCast(self), expandWildCards);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole::keyboardtranslator::entry.EscapedText1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, expandWildCards: bool, modifiers: flag of qnamespace_enums.KeyboardModifier, allocator: std.mem.Allocator ```
    pub fn EscapedText2(self: ?*anyopaque, expandWildCards: bool, modifiers: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText2(@ptrCast(self), expandWildCards, @intCast(modifiers));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole::keyboardtranslator::entry.EscapedText2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, expandWildCards: bool, allocator: std.mem.Allocator ```
    pub fn ResultToString1(self: ?*anyopaque, expandWildCards: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString1(@ptrCast(self), expandWildCards);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslator::entry.ResultToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry, expandWildCards: bool, modifiers: flag of qnamespace_enums.KeyboardModifier, allocator: std.mem.Allocator ```
    pub fn ResultToString2(self: ?*anyopaque, expandWildCards: bool, modifiers: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString2(@ptrCast(self), expandWildCards, @intCast(modifiers));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::keyboardtranslator::entry.ResultToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__KeyboardTranslator__Entry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__KeyboardTranslator__Entry_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/keyboardtranslator.html#types
pub const enums = struct {
    pub const State = enum {
        pub const NoState: i32 = 0;
        pub const NewLineState: i32 = 1;
        pub const AnsiState: i32 = 2;
        pub const CursorKeysState: i32 = 4;
        pub const AlternateScreenState: i32 = 8;
        pub const AnyModifierState: i32 = 16;
        pub const ApplicationKeypadState: i32 = 32;
    };

    pub const Command = enum {
        pub const NoCommand: i32 = 0;
        pub const SendCommand: i32 = 1;
        pub const ScrollPageUpCommand: i32 = 2;
        pub const ScrollPageDownCommand: i32 = 4;
        pub const ScrollLineUpCommand: i32 = 8;
        pub const ScrollLineDownCommand: i32 = 16;
        pub const ScrollLockCommand: i32 = 32;
        pub const ScrollUpToTopCommand: i32 = 64;
        pub const ScrollDownToBottomCommand: i32 = 128;
        pub const EraseCommand: i32 = 256;
    };
};
