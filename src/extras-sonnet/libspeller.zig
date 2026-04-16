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

    /// New constructs a new Sonnet::Speller object.
    ///
    pub fn New() Sonnet__Speller {
        return .{ .ptr = qtc.Sonnet__Speller_new() };
    }

    /// New2 constructs a new Sonnet::Speller object.
    ///
    /// ## Parameter(s):
    ///
    /// ` speller: Sonnet__Speller `
    ///
    pub fn New2(speller: anytype) Sonnet__Speller {
        comptime _ = @TypeOf(speller)._is_Sonnet__Speller;
        return .{ .ptr = qtc.Sonnet__Speller_new2(@ptrCast(speller.ptr)) };
    }

    /// New3 constructs a new Sonnet::Speller object.
    ///
    /// ## Parameter(s):
    ///
    /// ` lang: []const u8 `
    ///
    pub fn New3(lang: []const u8) Sonnet__Speller {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        return .{ .ptr = qtc.Sonnet__Speller_new3(lang_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` speller: Sonnet__Speller `
    ///
    pub fn OperatorAssign(self: Sonnet__Speller, speller: anytype) void {
        comptime _ = @TypeOf(speller)._is_Sonnet__Speller;
        qtc.Sonnet__Speller_OperatorAssign(@ptrCast(self.ptr), @ptrCast(speller.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn IsValid(self: Sonnet__Speller) bool {
        return qtc.Sonnet__Speller_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn SetLanguage(self: Sonnet__Speller, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Speller_SetLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#language)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Language(self: Sonnet__Speller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Speller_Language(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__speller.Language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#isCorrect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IsCorrect(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_IsCorrect(@ptrCast(self.ptr), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#isMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IsMisspelled(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_IsMisspelled(@ptrCast(self.ptr), word_str);
    }

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
    pub fn Suggest(self: Sonnet__Speller, allocator: std.mem.Allocator, word: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__speller.Suggest: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__speller.Suggest: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn CheckAndSuggest(self: Sonnet__Speller, allocator: std.mem.Allocator, word: []const u8, suggestions: []const []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("sonnet__speller.CheckAndSuggest: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (suggestions, 0..suggestions.len) |item, i|
            suggestions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = suggestions.len,
            .data = suggestions_arr.ptr,
        };
        return qtc.Sonnet__Speller_CheckAndSuggest(@ptrCast(self.ptr), word_str, suggestions_list);
    }

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
    pub fn StoreReplacement(self: Sonnet__Speller, bad: []const u8, good: []const u8) bool {
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

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#addToPersonal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn AddToPersonal(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_AddToPersonal(@ptrCast(self.ptr), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#addToSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` word: []const u8 `
    ///
    pub fn AddToSession(self: Sonnet__Speller, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_AddToSession(@ptrCast(self.ptr), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn Save(self: Sonnet__Speller) void {
        qtc.Sonnet__Speller_Save(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn Restore(self: Sonnet__Speller) void {
        qtc.Sonnet__Speller_Restore(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableBackends)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableBackends(self: Sonnet__Speller, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableBackends(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__speller.AvailableBackends: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__speller.AvailableBackends: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableLanguages(self: Sonnet__Speller, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__speller.AvailableLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__speller.AvailableLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableLanguageNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableLanguageNames(self: Sonnet__Speller, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableLanguageNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__speller.AvailableLanguageNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__speller.AvailableLanguageNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#availableDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableDictionaries(self: Sonnet__Speller, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Sonnet__Speller_AvailableDictionaries(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("sonnet__speller.AvailableDictionaries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("sonnet__speller.AvailableDictionaries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("sonnet__speller.AvailableDictionaries: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#preferredDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreferredDictionaries(self: Sonnet__Speller, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Sonnet__Speller_PreferredDictionaries(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("sonnet__speller.PreferredDictionaries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("sonnet__speller.PreferredDictionaries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("sonnet__speller.PreferredDictionaries: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setDefaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn SetDefaultLanguage(self: Sonnet__Speller, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Speller_SetDefaultLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#defaultLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultLanguage(self: Sonnet__Speller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Speller_DefaultLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__speller.DefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setDefaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` client: []const u8 `
    ///
    pub fn SetDefaultClient(self: Sonnet__Speller, client: []const u8) void {
        const client_str = qtc.libqt_string{
            .len = client.len,
            .data = client.ptr,
        };
        qtc.Sonnet__Speller_SetDefaultClient(@ptrCast(self.ptr), client_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#defaultClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultClient(self: Sonnet__Speller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Speller_DefaultClient(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__speller.DefaultClient: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` attr: speller_enums.Attribute `
    ///
    pub fn SetAttribute(self: Sonnet__Speller, attr: i32) void {
        qtc.Sonnet__Speller_SetAttribute(@ptrCast(self.ptr), @bitCast(attr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-speller.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Speller `
    ///
    /// ` attr: speller_enums.Attribute `
    ///
    pub fn TestAttribute(self: Sonnet__Speller, attr: i32) bool {
        return qtc.Sonnet__Speller_TestAttribute(@ptrCast(self.ptr), @bitCast(attr));
    }

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
    pub fn SetAttribute2(self: Sonnet__Speller, attr: i32, b: bool) void {
        qtc.Sonnet__Speller_SetAttribute2(@ptrCast(self.ptr), @bitCast(attr), b);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__Speller `
    ///
    pub fn Delete(self: Sonnet__Speller) void {
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
