const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const speller_enums = enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/sonnet-speller.html)
pub const Sonnet__Speller = extern struct {
    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Sonnet__Speller,

    pub const _is_Sonnet__Speller = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Sonnet::Speller object in C++ memory
    ///
    pub fn new() Sonnet__Speller {
        return .{ .ptr = qtc.Sonnet__Speller_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Sonnet::Speller object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` speller: Sonnet__Speller `
    ///
    pub fn new2(speller: anytype) Sonnet__Speller {
        comptime _ = @TypeOf(speller)._is_Sonnet__Speller;
        return .{ .ptr = qtc.Sonnet__Speller_new2(@ptrCast(speller.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Sonnet::Speller object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` lang: []const u8 `
    ///
    pub fn new3(lang: []const u8) Sonnet__Speller {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        return .{ .ptr = qtc.Sonnet__Speller_new3(lang_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` speller: Sonnet__Speller `
    ///
    pub fn operatorAssign(self: Sonnet__Speller, speller: anytype) void {
        comptime _ = @TypeOf(speller)._is_Sonnet__Speller;
        qtc.Sonnet__Speller_OperatorAssign(@ptrCast(self.ptr), @ptrCast(speller.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn isValid(self: Sonnet__Speller) bool {
        return qtc.Sonnet__Speller_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLanguage` instead
    ///
    pub const SetLanguage = setLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn setLanguage(self: Sonnet__Speller, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Speller_SetLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#language)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn language(self: Sonnet__Speller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Speller_Language(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Speller.language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isCorrect` instead
    ///
    pub const IsCorrect = isCorrect;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#isCorrect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn isCorrect(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_IsCorrect(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `isMisspelled` instead
    ///
    pub const IsMisspelled = isMisspelled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#isMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn isMisspelled(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_IsMisspelled(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `suggest` instead
    ///
    pub const Suggest = suggest;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#suggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    pub fn suggest(self: Sonnet__Speller, allocator: std.mem.Allocator, word: []const u8) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_Suggest(@ptrCast(self.ptr), word_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Speller.suggest: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Speller.suggest: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `checkAndSuggest` instead
    ///
    pub const CheckAndSuggest = checkAndSuggest;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#checkAndSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` suggestions: []const []const u8 `
    ///
    pub fn checkAndSuggest(self: Sonnet__Speller, allocator: std.mem.Allocator, word: []const u8, suggestions: []const []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("Sonnet__Speller.checkAndSuggest: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (suggestions, 0..suggestions.len) |str_item, i|
            suggestions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = suggestions.len,
            .data = suggestions_arr.ptr,
        };
        return qtc.Sonnet__Speller_CheckAndSuggest(@ptrCast(self.ptr), word_str, suggestions_list);
    }

    /// ### DEPRECATED: Use `storeReplacement` instead
    ///
    pub const StoreReplacement = storeReplacement;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#storeReplacement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` bad: []const u8 `
    ///
    /// ` good: []const u8 `
    ///
    pub fn storeReplacement(self: Sonnet__Speller, bad: []const u8, good: []const u8) bool {
        const bad_str = qtc.libqt_string{
            .len = bad.len,
            .data = bad.ptr,
        };
        const good_str = qtc.libqt_string{
            .len = good.len,
            .data = good.ptr,
        };
        return qtc.Sonnet__Speller_StoreReplacement(@ptrCast(self.ptr), bad_str, good_str);
    }

    /// ### DEPRECATED: Use `addToPersonal` instead
    ///
    pub const AddToPersonal = addToPersonal;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#addToPersonal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn addToPersonal(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_AddToPersonal(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `addToSession` instead
    ///
    pub const AddToSession = addToSession;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#addToSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn addToSession(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_AddToSession(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn save(self: Sonnet__Speller) void {
        qtc.Sonnet__Speller_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `restore` instead
    ///
    pub const Restore = restore;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn restore(self: Sonnet__Speller) void {
        qtc.Sonnet__Speller_Restore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableBackends` instead
    ///
    pub const AvailableBackends = availableBackends;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableBackends)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableBackends(self: Sonnet__Speller, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableBackends(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Speller.availableBackends: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Speller.availableBackends: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableLanguages` instead
    ///
    pub const AvailableLanguages = availableLanguages;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableLanguages(self: Sonnet__Speller, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Speller.availableLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Speller.availableLanguages: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableLanguageNames` instead
    ///
    pub const AvailableLanguageNames = availableLanguageNames;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableLanguageNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableLanguageNames(self: Sonnet__Speller, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableLanguageNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Speller.availableLanguageNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Speller.availableLanguageNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableDictionaries` instead
    ///
    pub const AvailableDictionaries = availableDictionaries;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableDictionaries(self: Sonnet__Speller, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Sonnet__Speller_AvailableDictionaries(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Sonnet__Speller.availableDictionaries: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Sonnet__Speller.availableDictionaries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Sonnet__Speller.availableDictionaries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `preferredDictionaries` instead
    ///
    pub const PreferredDictionaries = preferredDictionaries;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#preferredDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preferredDictionaries(self: Sonnet__Speller, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Sonnet__Speller_PreferredDictionaries(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Sonnet__Speller.preferredDictionaries: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Sonnet__Speller.preferredDictionaries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Sonnet__Speller.preferredDictionaries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultLanguage` instead
    ///
    pub const SetDefaultLanguage = setDefaultLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setDefaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn setDefaultLanguage(self: Sonnet__Speller, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Speller_SetDefaultLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### DEPRECATED: Use `defaultLanguage` instead
    ///
    pub const DefaultLanguage = defaultLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#defaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultLanguage(self: Sonnet__Speller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Speller_DefaultLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Speller.defaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultClient` instead
    ///
    pub const SetDefaultClient = setDefaultClient;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setDefaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` client: []const u8 `
    ///
    pub fn setDefaultClient(self: Sonnet__Speller, client: []const u8) void {
        const client_str = qtc.libqt_string{
            .len = client.len,
            .data = client.ptr,
        };
        qtc.Sonnet__Speller_SetDefaultClient(@ptrCast(self.ptr), client_str);
    }

    /// ### DEPRECATED: Use `defaultClient` instead
    ///
    pub const DefaultClient = defaultClient;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#defaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultClient(self: Sonnet__Speller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Speller_DefaultClient(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Speller.defaultClient: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` attr: speller_enums.Attribute `
    ///
    pub fn setAttribute(self: Sonnet__Speller, attr: i32) void {
        qtc.Sonnet__Speller_SetAttribute(@ptrCast(self.ptr), @bitCast(attr));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` attr: speller_enums.Attribute `
    ///
    pub fn testAttribute(self: Sonnet__Speller, attr: i32) bool {
        return qtc.Sonnet__Speller_TestAttribute(@ptrCast(self.ptr), @bitCast(attr));
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` attr: speller_enums.Attribute `
    ///
    /// ` b: bool `
    ///
    pub fn setAttribute2(self: Sonnet__Speller, attr: i32, b: bool) void {
        qtc.Sonnet__Speller_SetAttribute2(@ptrCast(self.ptr), @bitCast(attr), b);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn delete(self: Sonnet__Speller) void {
        qtc.Sonnet__Speller_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#public-types)
pub const enums = struct {
    pub const Attribute = enum(i32) {
        pub const CheckUppercase: i32 = 0;
        pub const SkipRunTogether: i32 = 1;
        pub const AutoDetectLanguage: i32 = 2;
    };
};
