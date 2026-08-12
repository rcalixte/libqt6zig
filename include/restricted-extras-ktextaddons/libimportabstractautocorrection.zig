const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes = @import("libqt6").TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
const importabstractautocorrection_enums = enums;
const std = @import("std");
const Map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
pub const TextAutoCorrectionCore__ImportAbstractAutocorrection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAutoCorrectionCore__ImportAbstractAutocorrection,

    pub const _is_TextAutoCorrectionCore__ImportAbstractAutocorrection = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextAutoCorrectionCore::ImportAbstractAutocorrection object in C++ memory
    ///
    pub fn new() TextAutoCorrectionCore__ImportAbstractAutocorrection {
        return .{ .ptr = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextAutoCorrectionCore::ImportAbstractAutocorrection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn new2(param1: anytype) TextAutoCorrectionCore__ImportAbstractAutocorrection {
        comptime _ = @TypeOf(param1)._is_TextAutoCorrectionCore__ImportAbstractAutocorrection;
        return .{ .ptr = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `import` instead
    ///
    pub const Import = import;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` errorMessage: []const u8 `
    ///
    /// ` loadAttribute: importabstractautocorrection_enums.LoadAttribute `
    ///
    pub fn import(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, fileName: []const u8, errorMessage: []const u8, loadAttribute: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        return qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_Import(@ptrCast(self.ptr), fileName_str, errorMessage_str, @bitCast(loadAttribute));
    }

    /// ### DEPRECATED: Use `onImport` instead
    ///
    pub const OnImport = onImport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionCore__ImportAbstractAutocorrection, fileName: [*:0]const u8, errorMessage: [*:0]const u8, loadAttribute: importabstractautocorrection_enums.LoadAttribute) callconv(.c) bool `
    ///
    pub fn onImport(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, callback: *const fn (TextAutoCorrectionCore__ImportAbstractAutocorrection, [*:0]const u8, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_OnImport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superImport` instead
    ///
    pub const SuperImport = superImport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` errorMessage: []const u8 `
    ///
    /// ` loadAttribute: importabstractautocorrection_enums.LoadAttribute `
    ///
    pub fn superImport(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, fileName: []const u8, errorMessage: []const u8, loadAttribute: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        return qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperImport(@ptrCast(self.ptr), fileName_str, errorMessage_str, @bitCast(loadAttribute));
    }

    /// ### DEPRECATED: Use `upperCaseExceptions` instead
    ///
    pub const UpperCaseExceptions = upperCaseExceptions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn upperCaseExceptions(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_UpperCaseExceptions(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.upperCaseExceptions: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `twoUpperLetterExceptions` instead
    ///
    pub const TwoUpperLetterExceptions = twoUpperLetterExceptions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn twoUpperLetterExceptions(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_TwoUpperLetterExceptions(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.twoUpperLetterExceptions: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `autocorrectEntries` instead
    ///
    pub const AutocorrectEntries = autocorrectEntries;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autocorrectEntries(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, allocator: std.mem.Allocator) Map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_AutocorrectEntries(@ptrCast(self.ptr));
        var _ret: Map_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.autocorrectEntries: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.autocorrectEntries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.autocorrectEntries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superScriptEntries` instead
    ///
    pub const SuperScriptEntries = superScriptEntries;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superScriptEntries(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, allocator: std.mem.Allocator) Map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperScriptEntries(@ptrCast(self.ptr));
        var _ret: Map_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.superScriptEntries: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.superScriptEntries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextAutoCorrectionCore__ImportAbstractAutocorrection.superScriptEntries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `typographicSingleQuotes` instead
    ///
    pub const TypographicSingleQuotes = typographicSingleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn typographicSingleQuotes(self: TextAutoCorrectionCore__ImportAbstractAutocorrection) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_TypographicSingleQuotes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `typographicDoubleQuotes` instead
    ///
    pub const TypographicDoubleQuotes = typographicDoubleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn typographicDoubleQuotes(self: TextAutoCorrectionCore__ImportAbstractAutocorrection) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_TypographicDoubleQuotes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maxFindStringLenght` instead
    ///
    pub const MaxFindStringLenght = maxFindStringLenght;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn maxFindStringLenght(self: TextAutoCorrectionCore__ImportAbstractAutocorrection) i32 {
        return qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_MaxFindStringLenght(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minFindStringLenght` instead
    ///
    pub const MinFindStringLenght = minFindStringLenght;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn minFindStringLenght(self: TextAutoCorrectionCore__ImportAbstractAutocorrection) i32 {
        return qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_MinFindStringLenght(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` param1: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn operatorAssign(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextAutoCorrectionCore__ImportAbstractAutocorrection;
        qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorAssign` instead
    ///
    pub const OnOperatorAssign = onOperatorAssign;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionCore__ImportAbstractAutocorrection, param1: TextAutoCorrectionCore__ImportAbstractAutocorrection) callconv(.c) void `
    ///
    pub fn onOperatorAssign(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, callback: *const fn (TextAutoCorrectionCore__ImportAbstractAutocorrection, TextAutoCorrectionCore__ImportAbstractAutocorrection) callconv(.c) void) void {
        qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_OnOperatorAssign(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorAssign` instead
    ///
    pub const SuperOperatorAssign = superOperatorAssign;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    /// ` param1: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn superOperatorAssign(self: TextAutoCorrectionCore__ImportAbstractAutocorrection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextAutoCorrectionCore__ImportAbstractAutocorrection;
        qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperOperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__ImportAbstractAutocorrection `
    ///
    pub fn delete(self: TextAutoCorrectionCore__ImportAbstractAutocorrection) void {
        qtc.TextAutoCorrectionCore__ImportAbstractAutocorrection_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const LoadAttribute = enum(i32) {
        pub const All: i32 = 0;
        pub const SuperScript: i32 = 1;
    };
};
