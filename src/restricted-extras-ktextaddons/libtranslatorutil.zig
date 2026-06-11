const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QComboBox = @import("libqt6").QComboBox;
const std = @import("std");
const translatorutil_enums = enums;
const ArrayMap_i32_constu8 = std.array_hash_map.Auto(i32, []const u8);

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
pub const TextTranslator__TranslatorUtil = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorUtil,

    pub const _is_TextTranslator__TranslatorUtil = {};

    /// New constructs a new TextTranslator::TranslatorUtil object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: TextTranslator__TranslatorUtil `
    ///
    pub fn New(other: anytype) TextTranslator__TranslatorUtil {
        comptime _ = @TypeOf(other)._is_TextTranslator__TranslatorUtil;
        return .{ .ptr = qtc.TextTranslator__TranslatorUtil_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new TextTranslator::TranslatorUtil object and invalidates the source TextTranslator::TranslatorUtil object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: TextTranslator__TranslatorUtil `
    ///
    pub fn New2(other: anytype) TextTranslator__TranslatorUtil {
        comptime _ = @TypeOf(other)._is_TextTranslator__TranslatorUtil;
        return .{ .ptr = qtc.TextTranslator__TranslatorUtil_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new TextTranslator::TranslatorUtil object.
    ///
    pub fn New3() TextTranslator__TranslatorUtil {
        return .{ .ptr = qtc.TextTranslator__TranslatorUtil_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorUtil `
    ///
    /// ` other: TextTranslator__TranslatorUtil `
    ///
    pub fn CopyAssign(self: TextTranslator__TranslatorUtil, other: TextTranslator__TranslatorUtil) void {
        qtc.TextTranslator__TranslatorUtil_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorUtil `
    ///
    /// ` other: TextTranslator__TranslatorUtil `
    ///
    pub fn MoveAssign(self: TextTranslator__TranslatorUtil, other: TextTranslator__TranslatorUtil) void {
        qtc.TextTranslator__TranslatorUtil_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil `
    ///
    /// ` combo: QComboBox `
    ///
    /// ` languageCode: []const u8 `
    ///
    /// ` translatedStr: []const u8 `
    ///
    pub fn AddItemToFromComboBox(self: TextTranslator__TranslatorUtil, combo: anytype, languageCode: []const u8, translatedStr: []const u8) void {
        comptime _ = @TypeOf(combo)._is_QComboBox;
        const languageCode_str = qtc.libqt_string{
            .len = languageCode.len,
            .data = languageCode.ptr,
        };
        const translatedStr_str = qtc.libqt_string{
            .len = translatedStr.len,
            .data = translatedStr.ptr,
        };
        qtc.TextTranslator__TranslatorUtil_AddItemToFromComboBox(@ptrCast(self.ptr), @ptrCast(combo.ptr), languageCode_str, translatedStr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constu8 (key: translatorutil_enums.Language) `
    ///
    pub fn TranslatedLanguages(allocator: std.mem.Allocator) ArrayMap_i32_constu8 {
        const _map: qtc.libqt_map = qtc.TextTranslator__TranslatorUtil_TranslatedLanguages();
        var _ret: ArrayMap_i32_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("texttranslator__translatorutil.TranslatedLanguages: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("texttranslator__translatorutil.TranslatedLanguages: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LoadEngine(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorUtil_LoadEngine();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.LoadEngine: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` engineName: []const u8 `
    ///
    pub fn SaveEngineSettings(engineName: []const u8) void {
        const engineName_str = qtc.libqt_string{
            .len = engineName.len,
            .data = engineName.ptr,
        };
        qtc.TextTranslator__TranslatorUtil_SaveEngineSettings(engineName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupTranslateName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorUtil_GroupTranslateName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.GroupTranslateName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EngineTranslateName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorUtil_EngineTranslateName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.EngineTranslateName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultEngineName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextTranslator__TranslatorUtil_DefaultEngineName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.DefaultEngineName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lang: translatorutil_enums.Language `
    ///
    pub fn TranslatedLanguage(allocator: std.mem.Allocator, lang: i32) []const u8 {
        var _str = qtc.TextTranslator__TranslatorUtil_TranslatedLanguage(@bitCast(lang));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.TranslatedLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lang: translatorutil_enums.Language `
    ///
    pub fn LanguageCode(allocator: std.mem.Allocator, lang: i32) []const u8 {
        var _str = qtc.TextTranslator__TranslatorUtil_LanguageCode(@bitCast(lang));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.LanguageCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` langCode: []const u8 `
    ///
    pub fn SearchI18nFromLanguage(allocator: std.mem.Allocator, langCode: []const u8) []const u8 {
        const langCode_str = qtc.libqt_string{
            .len = langCode.len,
            .data = langCode.ptr,
        };
        var _str = qtc.TextTranslator__TranslatorUtil_SearchI18nFromLanguage(langCode_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorutil.SearchI18nFromLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` translatorutil_enums.Language `
    ///
    pub fn StringToLanguage(str: []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.TextTranslator__TranslatorUtil_StringToLanguage(str_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorUtil `
    ///
    pub fn Delete(self: TextTranslator__TranslatorUtil) void {
        qtc.TextTranslator__TranslatorUtil_Delete(@ptrCast(self.ptr));
    }
};

pub const TextTranslator__TranslatorUtil__TranslatorSettings = extern struct {
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorUtil__TranslatorSettings,

    pub const _is_TextTranslator__TranslatorUtil__TranslatorSettings = {};

    /// New constructs a new TextTranslator::TranslatorUtil::TranslatorSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    pub fn New(param1: anytype) TextTranslator__TranslatorUtil__TranslatorSettings {
        comptime _ = @TypeOf(param1)._is_TextTranslator__TranslatorUtil__TranslatorSettings;
        return .{ .ptr = qtc.TextTranslator__TranslatorUtil__TranslatorSettings_new(@ptrCast(param1.ptr)) };
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Engine(self: TextTranslator__TranslatorUtil__TranslatorSettings, allocator: std.mem.Allocator) []const u8 {
        var engine_str = qtc.TextTranslator__TranslatorUtil__TranslatorSettings_Engine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&engine_str);
        const engine_ret = allocator.alloc(u8, engine_str.len) catch @panic("texttranslator__translatorutil__translatorsettings.Engine: Memory allocation failed");
        @memcpy(engine_ret, engine_str.data[0..engine_str.len]);
        return engine_ret;
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` engine: []const u8 `
    ///
    pub fn SetEngine(self: TextTranslator__TranslatorUtil__TranslatorSettings, engine: []const u8) void {
        const engine_str = qtc.libqt_string{
            .len = engine.len,
            .data = engine.ptr,
        };
        qtc.TextTranslator__TranslatorUtil__TranslatorSettings_SetEngine(@ptrCast(self.ptr), engine_str);
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn From(self: TextTranslator__TranslatorUtil__TranslatorSettings, allocator: std.mem.Allocator) []const u8 {
        var from_str = qtc.TextTranslator__TranslatorUtil__TranslatorSettings_From(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&from_str);
        const from_ret = allocator.alloc(u8, from_str.len) catch @panic("texttranslator__translatorutil__translatorsettings.From: Memory allocation failed");
        @memcpy(from_ret, from_str.data[0..from_str.len]);
        return from_ret;
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` from: []const u8 `
    ///
    pub fn SetFrom(self: TextTranslator__TranslatorUtil__TranslatorSettings, from: []const u8) void {
        const from_str = qtc.libqt_string{
            .len = from.len,
            .data = from.ptr,
        };
        qtc.TextTranslator__TranslatorUtil__TranslatorSettings_SetFrom(@ptrCast(self.ptr), from_str);
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn To(self: TextTranslator__TranslatorUtil__TranslatorSettings, allocator: std.mem.Allocator) []const u8 {
        var to_str = qtc.TextTranslator__TranslatorUtil__TranslatorSettings_To(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&to_str);
        const to_ret = allocator.alloc(u8, to_str.len) catch @panic("texttranslator__translatorutil__translatorsettings.To: Memory allocation failed");
        @memcpy(to_ret, to_str.data[0..to_str.len]);
        return to_ret;
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` to: []const u8 `
    ///
    pub fn SetTo(self: TextTranslator__TranslatorUtil__TranslatorSettings, to: []const u8) void {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        qtc.TextTranslator__TranslatorUtil__TranslatorSettings_SetTo(@ptrCast(self.ptr), to_str);
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    /// ` param1: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    pub fn OperatorAssign(self: TextTranslator__TranslatorUtil__TranslatorSettings, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextTranslator__TranslatorUtil__TranslatorSettings;
        qtc.TextTranslator__TranslatorUtil__TranslatorSettings_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorUtil__TranslatorSettings `
    ///
    pub fn Delete(self: TextTranslator__TranslatorUtil__TranslatorSettings) void {
        qtc.TextTranslator__TranslatorUtil__TranslatorSettings_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const Language = enum(i32) {
        pub const Automatic: i32 = 0;
        pub const En: i32 = 1;
        pub const Bs: i32 = 2;
        pub const Hmong: i32 = 3;
        pub const Zh: i32 = 4;
        pub const Zt: i32 = 5;
        pub const Nl: i32 = 6;
        pub const Fr: i32 = 7;
        pub const De: i32 = 8;
        pub const El: i32 = 9;
        pub const It: i32 = 10;
        pub const Ja: i32 = 11;
        pub const Ko: i32 = 12;
        pub const Pt: i32 = 13;
        pub const Ru: i32 = 14;
        pub const Es: i32 = 15;
        pub const Af: i32 = 16;
        pub const Sq: i32 = 17;
        pub const Ar: i32 = 18;
        pub const Hy: i32 = 19;
        pub const Az: i32 = 20;
        pub const Eu: i32 = 21;
        pub const Be: i32 = 22;
        pub const Bg: i32 = 23;
        pub const Ca: i32 = 24;
        pub const Hr: i32 = 25;
        pub const Cs: i32 = 26;
        pub const Da: i32 = 27;
        pub const Et: i32 = 28;
        pub const Tl: i32 = 29;
        pub const Fi: i32 = 30;
        pub const Gl: i32 = 31;
        pub const Ka: i32 = 32;
        pub const Ht: i32 = 33;
        pub const Iw: i32 = 34;
        pub const Hi: i32 = 35;
        pub const Hu: i32 = 36;
        pub const Is: i32 = 37;
        pub const Id: i32 = 38;
        pub const Ga: i32 = 39;
        pub const Lv: i32 = 40;
        pub const Lt: i32 = 41;
        pub const Mk: i32 = 42;
        pub const Ms: i32 = 43;
        pub const Mt: i32 = 44;
        pub const No: i32 = 45;
        pub const Fa: i32 = 46;
        pub const Pl: i32 = 47;
        pub const Ro: i32 = 48;
        pub const Sr: i32 = 49;
        pub const Sk: i32 = 50;
        pub const Sl: i32 = 51;
        pub const Sw: i32 = 52;
        pub const Sv: i32 = 53;
        pub const Th: i32 = 54;
        pub const Tr: i32 = 55;
        pub const Uk: i32 = 56;
        pub const Ur: i32 = 57;
        pub const Vi: i32 = 58;
        pub const Cy: i32 = 59;
        pub const Yi: i32 = 60;
        pub const LastLanguage: i32 = 60;
    };
};
