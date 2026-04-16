const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KeyboardTranslator_enums = enums;
const QIODevice = @import("libqt6").QIODevice;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__KeyboardTranslator = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__KeyboardTranslator,

    pub const _is_Konsole__KeyboardTranslator = {};

    /// New constructs a new Konsole::KeyboardTranslator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) Konsole__KeyboardTranslator {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_new(name_str) };
    }

    /// New2 constructs a new Konsole::KeyboardTranslator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__KeyboardTranslator `
    ///
    pub fn New2(param1: anytype) Konsole__KeyboardTranslator {
        comptime _ = @TypeOf(param1)._is_Konsole__KeyboardTranslator;
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Konsole__KeyboardTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslator.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Konsole__KeyboardTranslator, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Konsole__KeyboardTranslator_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Konsole__KeyboardTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslator.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: Konsole__KeyboardTranslator, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Konsole__KeyboardTranslator_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` keyCode: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn FindEntry(self: Konsole__KeyboardTranslator, keyCode: i32, modifiers: i32) Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_FindEntry(@ptrCast(self.ptr), @bitCast(keyCode), @bitCast(modifiers)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` entry: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn AddEntry(self: Konsole__KeyboardTranslator, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslator_AddEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` existing: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` replacement: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn ReplaceEntry(self: Konsole__KeyboardTranslator, existing: anytype, replacement: anytype) void {
        comptime _ = @TypeOf(existing)._is_Konsole__KeyboardTranslator__Entry;
        comptime _ = @TypeOf(replacement)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslator_ReplaceEntry(@ptrCast(self.ptr), @ptrCast(existing.ptr), @ptrCast(replacement.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` entry: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn RemoveEntry(self: Konsole__KeyboardTranslator, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslator_RemoveEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Entries(self: Konsole__KeyboardTranslator, allocator: std.mem.Allocator) []Konsole__KeyboardTranslator__Entry {
        const _arr: qtc.libqt_list = qtc.Konsole__KeyboardTranslator_Entries(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Konsole__KeyboardTranslator__Entry, _arr.len) catch @panic("konsole__keyboardtranslator.Entries: Memory allocation failed");
        const _data: [*]QtC.Konsole__KeyboardTranslator__Entry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` keyCode: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` state: flag of KeyboardTranslator_enums.State `
    ///
    pub fn FindEntry3(self: Konsole__KeyboardTranslator, keyCode: i32, modifiers: i32, state: i32) Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_FindEntry3(@ptrCast(self.ptr), @bitCast(keyCode), @bitCast(modifiers), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    pub fn Delete(self: Konsole__KeyboardTranslator) void {
        qtc.Konsole__KeyboardTranslator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__KeyboardTranslatorReader = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__KeyboardTranslatorReader,

    pub const _is_Konsole__KeyboardTranslatorReader = {};

    /// New constructs a new Konsole::KeyboardTranslatorReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` source: QIODevice `
    ///
    pub fn New(source: anytype) Konsole__KeyboardTranslatorReader {
        comptime _ = @TypeOf(source)._is_QIODevice;
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorReader_new(@ptrCast(source.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Konsole__KeyboardTranslatorReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslatorReader_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslatorreader.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn HasNextEntry(self: Konsole__KeyboardTranslatorReader) bool {
        return qtc.Konsole__KeyboardTranslatorReader_HasNextEntry(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn NextEntry(self: Konsole__KeyboardTranslatorReader) Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorReader_NextEntry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn ParseError(self: Konsole__KeyboardTranslatorReader) bool {
        return qtc.Konsole__KeyboardTranslatorReader_ParseError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` condition: []const u8 `
    ///
    /// ` result: []const u8 `
    ///
    pub fn CreateEntry(condition: []const u8, result: []const u8) Konsole__KeyboardTranslator__Entry {
        const condition_str = qtc.libqt_string{
            .len = condition.len,
            .data = condition.ptr,
        };
        const result_str = qtc.libqt_string{
            .len = result.len,
            .data = result.ptr,
        };
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorReader_CreateEntry(condition_str, result_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn Delete(self: Konsole__KeyboardTranslatorReader) void {
        qtc.Konsole__KeyboardTranslatorReader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__KeyboardTranslatorWriter = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__KeyboardTranslatorWriter,

    pub const _is_Konsole__KeyboardTranslatorWriter = {};

    /// New constructs a new Konsole::KeyboardTranslatorWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` destination: QIODevice `
    ///
    pub fn New(destination: anytype) Konsole__KeyboardTranslatorWriter {
        comptime _ = @TypeOf(destination)._is_QIODevice;
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorWriter_new(@ptrCast(destination.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorWriter `
    ///
    /// ` description: []const u8 `
    ///
    pub fn WriteHeader(self: Konsole__KeyboardTranslatorWriter, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Konsole__KeyboardTranslatorWriter_WriteHeader(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorWriter `
    ///
    /// ` entry: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn WriteEntry(self: Konsole__KeyboardTranslatorWriter, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslatorWriter_WriteEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslatorWriter `
    ///
    pub fn Delete(self: Konsole__KeyboardTranslatorWriter) void {
        qtc.Konsole__KeyboardTranslatorWriter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__KeyboardTranslatorManager = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__KeyboardTranslatorManager,

    pub const _is_Konsole__KeyboardTranslatorManager = {};

    /// New constructs a new Konsole::KeyboardTranslatorManager object.
    ///
    pub fn New() Konsole__KeyboardTranslatorManager {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_new() };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` translator: Konsole__KeyboardTranslator `
    ///
    pub fn AddTranslator(self: Konsole__KeyboardTranslatorManager, translator: anytype) void {
        comptime _ = @TypeOf(translator)._is_Konsole__KeyboardTranslator;
        qtc.Konsole__KeyboardTranslatorManager_AddTranslator(@ptrCast(self.ptr), @ptrCast(translator.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn DeleteTranslator(self: Konsole__KeyboardTranslatorManager, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.Konsole__KeyboardTranslatorManager_DeleteTranslator(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    pub fn DefaultTranslator(self: Konsole__KeyboardTranslatorManager) Konsole__KeyboardTranslator {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_DefaultTranslator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn FindTranslator(self: Konsole__KeyboardTranslatorManager, name: []const u8) Konsole__KeyboardTranslator {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_FindTranslator(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllTranslators(self: Konsole__KeyboardTranslatorManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__KeyboardTranslatorManager_AllTranslators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("konsole__keyboardtranslatormanager.AllTranslators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__keyboardtranslatormanager.AllTranslators: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    pub fn Instance() Konsole__KeyboardTranslatorManager {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_Instance() };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    pub fn Delete(self: Konsole__KeyboardTranslatorManager) void {
        qtc.Konsole__KeyboardTranslatorManager_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole,

    pub const _is_Konsole = {};

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: i32 `
    ///
    pub fn OneOrZero(param1: i32) i32 {
        return qtc.Konsole_OneOrZero(@bitCast(param1));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__KeyboardTranslator__Entry = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__KeyboardTranslator__Entry,

    pub const _is_Konsole__KeyboardTranslator__Entry = {};

    /// New constructs a new Konsole::KeyboardTranslator::Entry object.
    ///
    pub fn New() Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslator__Entry_new() };
    }

    /// New2 constructs a new Konsole::KeyboardTranslator::Entry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn New2(param1: anytype) Konsole__KeyboardTranslator__Entry {
        comptime _ = @TypeOf(param1)._is_Konsole__KeyboardTranslator__Entry;
        return .{ .ptr = qtc.Konsole__KeyboardTranslator__Entry_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn IsNull(self: Konsole__KeyboardTranslator__Entry) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ## Returns:
    ///
    /// ` KeyboardTranslator_enums.Command `
    ///
    pub fn Command(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_Command(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` command: KeyboardTranslator_enums.Command `
    ///
    pub fn SetCommand(self: Konsole__KeyboardTranslator__Entry, command: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetCommand(@ptrCast(self.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole__keyboardtranslator__entry.Text: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` text: []u8 `
    ///
    pub fn SetText(self: Konsole__KeyboardTranslator__Entry, text: []u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Konsole__KeyboardTranslator__Entry_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EscapedText(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole__keyboardtranslator__entry.EscapedText: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn KeyCode(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_KeyCode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` keyCode: i32 `
    ///
    pub fn SetKeyCode(self: Konsole__KeyboardTranslator__Entry, keyCode: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetKeyCode(@ptrCast(self.ptr), @bitCast(keyCode));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn ModifierMask(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_ModifierMask(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: Konsole__KeyboardTranslator__Entry, modifiers: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifierMask(self: Konsole__KeyboardTranslator__Entry, modifiers: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetModifierMask(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ## Returns:
    ///
    /// ` flag of KeyboardTranslator_enums.State `
    ///
    pub fn State(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ## Returns:
    ///
    /// ` flag of KeyboardTranslator_enums.State `
    ///
    pub fn StateMask(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_StateMask(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` state: flag of KeyboardTranslator_enums.State `
    ///
    pub fn SetState(self: Konsole__KeyboardTranslator__Entry, state: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` mask: flag of KeyboardTranslator_enums.State `
    ///
    pub fn SetStateMask(self: Konsole__KeyboardTranslator__Entry, mask: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetStateMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConditionToString(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ConditionToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslator__entry.ConditionToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResultToString(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslator__entry.ResultToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` keyCode: i32 `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` flags: flag of KeyboardTranslator_enums.State `
    ///
    pub fn Matches(self: Konsole__KeyboardTranslator__Entry, keyCode: i32, modifiers: i32, flags: i32) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_Matches(@ptrCast(self.ptr), @bitCast(keyCode), @bitCast(modifiers), @bitCast(flags));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` rhs: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn OperatorEqual(self: Konsole__KeyboardTranslator__Entry, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_Konsole__KeyboardTranslator__Entry;
        return qtc.Konsole__KeyboardTranslator__Entry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expandWildCards: bool `
    ///
    pub fn Text1(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text1(@ptrCast(self.ptr), expandWildCards);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole__keyboardtranslator__entry.Text1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expandWildCards: bool `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Text2(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool, modifiers: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text2(@ptrCast(self.ptr), expandWildCards, @bitCast(modifiers));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole__keyboardtranslator__entry.Text2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expandWildCards: bool `
    ///
    pub fn EscapedText1(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText1(@ptrCast(self.ptr), expandWildCards);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole__keyboardtranslator__entry.EscapedText1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expandWildCards: bool `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn EscapedText2(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool, modifiers: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText2(@ptrCast(self.ptr), expandWildCards, @bitCast(modifiers));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("konsole__keyboardtranslator__entry.EscapedText2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expandWildCards: bool `
    ///
    pub fn ResultToString1(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString1(@ptrCast(self.ptr), expandWildCards);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslator__entry.ResultToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expandWildCards: bool `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn ResultToString2(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool, modifiers: i32) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString2(@ptrCast(self.ptr), expandWildCards, @bitCast(modifiers));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__keyboardtranslator__entry.ResultToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn Delete(self: Konsole__KeyboardTranslator__Entry) void {
        qtc.Konsole__KeyboardTranslator__Entry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const enums = struct {
    pub const State = enum(i32) {
        pub const NoState: i32 = 0;
        pub const NewLineState: i32 = 1;
        pub const AnsiState: i32 = 2;
        pub const CursorKeysState: i32 = 4;
        pub const AlternateScreenState: i32 = 8;
        pub const AnyModifierState: i32 = 16;
        pub const ApplicationKeypadState: i32 = 32;
    };

    pub const Command = enum(i32) {
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
