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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Konsole::KeyboardTranslator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new(_name: []const u8) Konsole__KeyboardTranslator {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_new(name_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Konsole::KeyboardTranslator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__KeyboardTranslator `
    ///
    pub fn new2(param1: anytype) Konsole__KeyboardTranslator {
        comptime _ = @TypeOf(param1)._is_Konsole__KeyboardTranslator;
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Konsole__KeyboardTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslator.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Konsole__KeyboardTranslator, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Konsole__KeyboardTranslator_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Konsole__KeyboardTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslator.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: Konsole__KeyboardTranslator, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Konsole__KeyboardTranslator_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `findEntry` instead
    ///
    pub const FindEntry = findEntry;

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
    pub fn findEntry(self: Konsole__KeyboardTranslator, keyCode: i32, modifiers: i32) Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_FindEntry(@ptrCast(self.ptr), @bitCast(keyCode), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `addEntry` instead
    ///
    pub const AddEntry = addEntry;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` entry: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn addEntry(self: Konsole__KeyboardTranslator, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslator_AddEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `replaceEntry` instead
    ///
    pub const ReplaceEntry = replaceEntry;

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
    pub fn replaceEntry(self: Konsole__KeyboardTranslator, existing: anytype, replacement: anytype) void {
        comptime _ = @TypeOf(existing)._is_Konsole__KeyboardTranslator__Entry;
        comptime _ = @TypeOf(replacement)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslator_ReplaceEntry(@ptrCast(self.ptr), @ptrCast(existing.ptr), @ptrCast(replacement.ptr));
    }

    /// ### DEPRECATED: Use `removeEntry` instead
    ///
    pub const RemoveEntry = removeEntry;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` entry: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn removeEntry(self: Konsole__KeyboardTranslator, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslator_RemoveEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `entries` instead
    ///
    pub const Entries = entries;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entries(self: Konsole__KeyboardTranslator, allocator: std.mem.Allocator) []Konsole__KeyboardTranslator__Entry {
        const _arr: qtc.libqt_list = qtc.Konsole__KeyboardTranslator_Entries(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Konsole__KeyboardTranslator__Entry, _arr.len) catch @panic("Konsole__KeyboardTranslator.entries: Memory allocation failed");
        const _data_val: [*]QtC.Konsole__KeyboardTranslator__Entry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findEntry3` instead
    ///
    pub const FindEntry3 = findEntry3;

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
    pub fn findEntry3(self: Konsole__KeyboardTranslator, keyCode: i32, modifiers: i32, state: i32) Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslator_FindEntry3(@ptrCast(self.ptr), @bitCast(keyCode), @bitCast(modifiers), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslator `
    ///
    pub fn delete(self: Konsole__KeyboardTranslator) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Konsole::KeyboardTranslatorReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` source: QIODevice `
    ///
    pub fn new(source: anytype) Konsole__KeyboardTranslatorReader {
        comptime _ = @TypeOf(source)._is_QIODevice;
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorReader_new(@ptrCast(source.ptr)) };
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Konsole__KeyboardTranslatorReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslatorReader_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslatorReader.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasNextEntry` instead
    ///
    pub const HasNextEntry = hasNextEntry;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn hasNextEntry(self: Konsole__KeyboardTranslatorReader) bool {
        return qtc.Konsole__KeyboardTranslatorReader_HasNextEntry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextEntry` instead
    ///
    pub const NextEntry = nextEntry;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn nextEntry(self: Konsole__KeyboardTranslatorReader) Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorReader_NextEntry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parseError` instead
    ///
    pub const ParseError = parseError;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn parseError(self: Konsole__KeyboardTranslatorReader) bool {
        return qtc.Konsole__KeyboardTranslatorReader_ParseError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createEntry` instead
    ///
    pub const CreateEntry = createEntry;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` condition: []const u8 `
    ///
    /// ` result: []const u8 `
    ///
    pub fn createEntry(condition: []const u8, result: []const u8) Konsole__KeyboardTranslator__Entry {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslatorReader `
    ///
    pub fn delete(self: Konsole__KeyboardTranslatorReader) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Konsole::KeyboardTranslatorWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` destination: QIODevice `
    ///
    pub fn new(destination: anytype) Konsole__KeyboardTranslatorWriter {
        comptime _ = @TypeOf(destination)._is_QIODevice;
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorWriter_new(@ptrCast(destination.ptr)) };
    }

    /// ### DEPRECATED: Use `writeHeader` instead
    ///
    pub const WriteHeader = writeHeader;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorWriter `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn writeHeader(self: Konsole__KeyboardTranslatorWriter, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Konsole__KeyboardTranslatorWriter_WriteHeader(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `writeEntry` instead
    ///
    pub const WriteEntry = writeEntry;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorWriter `
    ///
    /// ` entry: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn writeEntry(self: Konsole__KeyboardTranslatorWriter, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_Konsole__KeyboardTranslator__Entry;
        qtc.Konsole__KeyboardTranslatorWriter_WriteEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslatorWriter `
    ///
    pub fn delete(self: Konsole__KeyboardTranslatorWriter) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Konsole::KeyboardTranslatorManager object in C++ memory
    ///
    pub fn new() Konsole__KeyboardTranslatorManager {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_new() };
    }

    /// ### DEPRECATED: Use `addTranslator` instead
    ///
    pub const AddTranslator = addTranslator;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` translator: Konsole__KeyboardTranslator `
    ///
    pub fn addTranslator(self: Konsole__KeyboardTranslatorManager, translator: anytype) void {
        comptime _ = @TypeOf(translator)._is_Konsole__KeyboardTranslator;
        qtc.Konsole__KeyboardTranslatorManager_AddTranslator(@ptrCast(self.ptr), @ptrCast(translator.ptr));
    }

    /// ### DEPRECATED: Use `deleteTranslator` instead
    ///
    pub const DeleteTranslator = deleteTranslator;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn deleteTranslator(self: Konsole__KeyboardTranslatorManager, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.Konsole__KeyboardTranslatorManager_DeleteTranslator(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `defaultTranslator` instead
    ///
    pub const DefaultTranslator = defaultTranslator;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    pub fn defaultTranslator(self: Konsole__KeyboardTranslatorManager) Konsole__KeyboardTranslator {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_DefaultTranslator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `findTranslator` instead
    ///
    pub const FindTranslator = findTranslator;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn findTranslator(self: Konsole__KeyboardTranslatorManager, _name: []const u8) Konsole__KeyboardTranslator {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_FindTranslator(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `allTranslators` instead
    ///
    pub const AllTranslators = allTranslators;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allTranslators(self: Konsole__KeyboardTranslatorManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__KeyboardTranslatorManager_AllTranslators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Konsole__KeyboardTranslatorManager.allTranslators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Konsole__KeyboardTranslatorManager.allTranslators: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    pub fn instance() Konsole__KeyboardTranslatorManager {
        return .{ .ptr = qtc.Konsole__KeyboardTranslatorManager_Instance() };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslatorManager `
    ///
    pub fn delete(self: Konsole__KeyboardTranslatorManager) void {
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

    /// ### DEPRECATED: Use `oneOrZero` instead
    ///
    pub const OneOrZero = oneOrZero;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i32 `
    ///
    pub fn oneOrZero(value: i32) i32 {
        return qtc.Konsole_OneOrZero(@bitCast(value));
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Konsole::KeyboardTranslator::Entry object in C++ memory
    ///
    pub fn new() Konsole__KeyboardTranslator__Entry {
        return .{ .ptr = qtc.Konsole__KeyboardTranslator__Entry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Konsole::KeyboardTranslator::Entry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn new2(param1: anytype) Konsole__KeyboardTranslator__Entry {
        comptime _ = @TypeOf(param1)._is_Konsole__KeyboardTranslator__Entry;
        return .{ .ptr = qtc.Konsole__KeyboardTranslator__Entry_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn isNull(self: Konsole__KeyboardTranslator__Entry) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `command` instead
    ///
    pub const Command = command;

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
    pub fn command(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_Command(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCommand` instead
    ///
    pub const SetCommand = setCommand;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _command: KeyboardTranslator_enums.Command `
    ///
    pub fn setCommand(self: Konsole__KeyboardTranslator__Entry, _command: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetCommand(@ptrCast(self.ptr), @bitCast(_command));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Konsole__KeyboardTranslator__Entry.text: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _text: []u8 `
    ///
    pub fn setText(self: Konsole__KeyboardTranslator__Entry, _text: []u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Konsole__KeyboardTranslator__Entry_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `escapedText` instead
    ///
    pub const EscapedText = escapedText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn escapedText(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Konsole__KeyboardTranslator__Entry.escapedText: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keyCode` instead
    ///
    pub const KeyCode = keyCode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn keyCode(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_KeyCode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyCode` instead
    ///
    pub const SetKeyCode = setKeyCode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _keyCode: i32 `
    ///
    pub fn setKeyCode(self: Konsole__KeyboardTranslator__Entry, _keyCode: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetKeyCode(@ptrCast(self.ptr), @bitCast(_keyCode));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

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
    pub fn modifiers(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modifierMask` instead
    ///
    pub const ModifierMask = modifierMask;

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
    pub fn modifierMask(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_ModifierMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: Konsole__KeyboardTranslator__Entry, _modifiers: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `setModifierMask` instead
    ///
    pub const SetModifierMask = setModifierMask;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifierMask(self: Konsole__KeyboardTranslator__Entry, _modifiers: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetModifierMask(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stateMask` instead
    ///
    pub const StateMask = stateMask;

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
    pub fn stateMask(self: Konsole__KeyboardTranslator__Entry) i32 {
        return qtc.Konsole__KeyboardTranslator__Entry_StateMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _state: flag of KeyboardTranslator_enums.State `
    ///
    pub fn setState(self: Konsole__KeyboardTranslator__Entry, _state: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `setStateMask` instead
    ///
    pub const SetStateMask = setStateMask;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` mask: flag of KeyboardTranslator_enums.State `
    ///
    pub fn setStateMask(self: Konsole__KeyboardTranslator__Entry, mask: i32) void {
        qtc.Konsole__KeyboardTranslator__Entry_SetStateMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `conditionToString` instead
    ///
    pub const ConditionToString = conditionToString;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn conditionToString(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ConditionToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslator__Entry.conditionToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resultToString` instead
    ///
    pub const ResultToString = resultToString;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resultToString(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslator__Entry.resultToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `matches` instead
    ///
    pub const Matches = matches;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` _keyCode: i32 `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    /// ` flags: flag of KeyboardTranslator_enums.State `
    ///
    pub fn matches(self: Konsole__KeyboardTranslator__Entry, _keyCode: i32, _modifiers: i32, flags: i32) bool {
        return qtc.Konsole__KeyboardTranslator__Entry_Matches(@ptrCast(self.ptr), @bitCast(_keyCode), @bitCast(_modifiers), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    /// ` rhs: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn operatorEqual(self: Konsole__KeyboardTranslator__Entry, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_Konsole__KeyboardTranslator__Entry;
        return qtc.Konsole__KeyboardTranslator__Entry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `text1` instead
    ///
    pub const Text1 = text1;

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
    pub fn text1(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text1(@ptrCast(self.ptr), expandWildCards);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Konsole__KeyboardTranslator__Entry.text1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text2` instead
    ///
    pub const Text2 = text2;

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
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn text2(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool, _modifiers: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_Text2(@ptrCast(self.ptr), expandWildCards, @bitCast(_modifiers));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Konsole__KeyboardTranslator__Entry.text2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `escapedText1` instead
    ///
    pub const EscapedText1 = escapedText1;

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
    pub fn escapedText1(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText1(@ptrCast(self.ptr), expandWildCards);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Konsole__KeyboardTranslator__Entry.escapedText1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `escapedText2` instead
    ///
    pub const EscapedText2 = escapedText2;

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
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn escapedText2(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool, _modifiers: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Konsole__KeyboardTranslator__Entry_EscapedText2(@ptrCast(self.ptr), expandWildCards, @bitCast(_modifiers));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Konsole__KeyboardTranslator__Entry.escapedText2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resultToString1` instead
    ///
    pub const ResultToString1 = resultToString1;

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
    pub fn resultToString1(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString1(@ptrCast(self.ptr), expandWildCards);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslator__Entry.resultToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resultToString2` instead
    ///
    pub const ResultToString2 = resultToString2;

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
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn resultToString2(self: Konsole__KeyboardTranslator__Entry, allocator: std.mem.Allocator, expandWildCards: bool, _modifiers: i32) []const u8 {
        var _str = qtc.Konsole__KeyboardTranslator__Entry_ResultToString2(@ptrCast(self.ptr), expandWildCards, @bitCast(_modifiers));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Konsole__KeyboardTranslator__Entry.resultToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__KeyboardTranslator__Entry `
    ///
    pub fn delete(self: Konsole__KeyboardTranslator__Entry) void {
        qtc.Konsole__KeyboardTranslator__Entry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
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
