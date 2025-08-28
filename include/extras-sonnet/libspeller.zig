const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const speller_enums = enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api-staging.kde.org/sonnet-speller.html
pub const sonnet__speller = struct {
    /// New constructs a new Sonnet::Speller object.
    ///
    ///
    pub fn New() QtC.Sonnet__Speller {
        return qtc.Sonnet__Speller_new();
    }

    /// New2 constructs a new Sonnet::Speller object.
    ///
    /// ``` speller: QtC.Sonnet__Speller ```
    pub fn New2(speller: ?*anyopaque) QtC.Sonnet__Speller {
        return qtc.Sonnet__Speller_new2(@ptrCast(speller));
    }

    /// New3 constructs a new Sonnet::Speller object.
    ///
    /// ``` lang: []const u8 ```
    pub fn New3(lang: []const u8) QtC.Sonnet__Speller {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };

        return qtc.Sonnet__Speller_new3(lang_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#operator-eq)
    ///
    /// ``` self: QtC.Sonnet__Speller, speller: QtC.Sonnet__Speller ```
    pub fn OperatorAssign(self: ?*anyopaque, speller: ?*anyopaque) void {
        qtc.Sonnet__Speller_OperatorAssign(@ptrCast(self), @ptrCast(speller));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#isValid)
    ///
    /// ``` self: QtC.Sonnet__Speller ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Sonnet__Speller_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#setLanguage)
    ///
    /// ``` self: QtC.Sonnet__Speller, lang: []const u8 ```
    pub fn SetLanguage(self: ?*anyopaque, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Speller_SetLanguage(@ptrCast(self), lang_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#language)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn Language(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Speller_Language(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::speller.Language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#isCorrect)
    ///
    /// ``` self: QtC.Sonnet__Speller, word: []const u8 ```
    pub fn IsCorrect(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_IsCorrect(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#isMisspelled)
    ///
    /// ``` self: QtC.Sonnet__Speller, word: []const u8 ```
    pub fn IsMisspelled(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_IsMisspelled(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#suggest)
    ///
    /// ``` self: QtC.Sonnet__Speller, word: []const u8, allocator: std.mem.Allocator ```
    pub fn Suggest(self: ?*anyopaque, word: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_Suggest(@ptrCast(self), word_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::speller.Suggest: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::speller.Suggest: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#checkAndSuggest)
    ///
    /// ``` self: QtC.Sonnet__Speller, word: []const u8, suggestions: [][]const u8, allocator: std.mem.Allocator ```
    pub fn CheckAndSuggest(self: ?*anyopaque, word: []const u8, suggestions: [][]const u8, allocator: std.mem.Allocator) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        var suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("sonnet::speller.CheckAndSuggest: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (suggestions, 0..suggestions.len) |item, i| {
            suggestions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const suggestions_list = qtc.libqt_list{
            .len = suggestions.len,
            .data = suggestions_arr.ptr,
        };
        return qtc.Sonnet__Speller_CheckAndSuggest(@ptrCast(self), word_str, suggestions_list);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#storeReplacement)
    ///
    /// ``` self: QtC.Sonnet__Speller, bad: []const u8, good: []const u8 ```
    pub fn StoreReplacement(self: ?*anyopaque, bad: []const u8, good: []const u8) bool {
        const bad_str = qtc.libqt_string{
            .len = bad.len,
            .data = bad.ptr,
        };
        const good_str = qtc.libqt_string{
            .len = good.len,
            .data = good.ptr,
        };
        return qtc.Sonnet__Speller_StoreReplacement(@ptrCast(self), bad_str, good_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#addToPersonal)
    ///
    /// ``` self: QtC.Sonnet__Speller, word: []const u8 ```
    pub fn AddToPersonal(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_AddToPersonal(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#addToSession)
    ///
    /// ``` self: QtC.Sonnet__Speller, word: []const u8 ```
    pub fn AddToSession(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Speller_AddToSession(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#save)
    ///
    /// ``` self: QtC.Sonnet__Speller ```
    pub fn Save(self: ?*anyopaque) void {
        qtc.Sonnet__Speller_Save(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#restore)
    ///
    /// ``` self: QtC.Sonnet__Speller ```
    pub fn Restore(self: ?*anyopaque) void {
        qtc.Sonnet__Speller_Restore(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#availableBackends)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn AvailableBackends(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableBackends(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::speller.AvailableBackends: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::speller.AvailableBackends: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#availableLanguages)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn AvailableLanguages(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableLanguages(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::speller.AvailableLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::speller.AvailableLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#availableLanguageNames)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn AvailableLanguageNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Sonnet__Speller_AvailableLanguageNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::speller.AvailableLanguageNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::speller.AvailableLanguageNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#availableDictionaries)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn AvailableDictionaries(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Sonnet__Speller_AvailableDictionaries(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("sonnet::speller.AvailableDictionaries: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#preferredDictionaries)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn PreferredDictionaries(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Sonnet__Speller_PreferredDictionaries(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("sonnet::speller.PreferredDictionaries: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#setDefaultLanguage)
    ///
    /// ``` self: QtC.Sonnet__Speller, lang: []const u8 ```
    pub fn SetDefaultLanguage(self: ?*anyopaque, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.Sonnet__Speller_SetDefaultLanguage(@ptrCast(self), lang_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#defaultLanguage)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn DefaultLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Speller_DefaultLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::speller.DefaultLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#setDefaultClient)
    ///
    /// ``` self: QtC.Sonnet__Speller, client: []const u8 ```
    pub fn SetDefaultClient(self: ?*anyopaque, client: []const u8) void {
        const client_str = qtc.libqt_string{
            .len = client.len,
            .data = client.ptr,
        };
        qtc.Sonnet__Speller_SetDefaultClient(@ptrCast(self), client_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#defaultClient)
    ///
    /// ``` self: QtC.Sonnet__Speller, allocator: std.mem.Allocator ```
    pub fn DefaultClient(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Speller_DefaultClient(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::speller.DefaultClient: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#setAttribute)
    ///
    /// ``` self: QtC.Sonnet__Speller, attr: speller_enums.Attribute ```
    pub fn SetAttribute(self: ?*anyopaque, attr: i32) void {
        qtc.Sonnet__Speller_SetAttribute(@ptrCast(self), @intCast(attr));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#testAttribute)
    ///
    /// ``` self: QtC.Sonnet__Speller, attr: speller_enums.Attribute ```
    pub fn TestAttribute(self: ?*anyopaque, attr: i32) bool {
        return qtc.Sonnet__Speller_TestAttribute(@ptrCast(self), @intCast(attr));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-speller.html#setAttribute)
    ///
    /// ``` self: QtC.Sonnet__Speller, attr: speller_enums.Attribute, b: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, attr: i32, b: bool) void {
        qtc.Sonnet__Speller_SetAttribute2(@ptrCast(self), @intCast(attr), b);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Sonnet__Speller ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Sonnet__Speller_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/sonnet-speller.html#types
pub const enums = struct {
    pub const Attribute = enum {
        pub const CheckUppercase: i32 = 0;
        pub const SkipRunTogether: i32 = 1;
        pub const AutoDetectLanguage: i32 = 2;
    };
};
