const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes = @import("libqt6").TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
const std = @import("std");
const Map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
pub const TextAutoCorrectionCore__AutoCorrectionSettings = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAutoCorrectionCore__AutoCorrectionSettings,

    pub const _is_TextAutoCorrectionCore__AutoCorrectionSettings = {};

    /// New constructs a new TextAutoCorrectionCore::AutoCorrectionSettings object.
    ///
    pub fn New() TextAutoCorrectionCore__AutoCorrectionSettings {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsEnabledAutoCorrection(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsEnabledAutoCorrection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsUppercaseFirstCharOfSentence(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsUppercaseFirstCharOfSentence(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsFixTwoUppercaseChars(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsFixTwoUppercaseChars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsSingleSpaces(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsSingleSpaces(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsAutoFractions(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFractions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsCapitalizeWeekDays(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsCapitalizeWeekDays(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsReplaceDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsReplaceSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceSingleQuotes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsAdvancedAutocorrect(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAdvancedAutocorrect(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsAutoFormatUrl(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFormatUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsAutoBoldUnderline(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoBoldUnderline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsSuperScript(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsSuperScript(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsAddNonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAddNonBreakingSpace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsReplaceDoubleQuotesByFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotesByFrenchQuotes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn TypographicSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_TypographicSingleQuotes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn TypographicDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_TypographicDoubleQuotes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` singleQuote: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn SetTypographicSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, singleQuote: anytype) void {
        comptime _ = @TypeOf(singleQuote)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicSingleQuotes(@ptrCast(self.ptr), @ptrCast(singleQuote.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` doubleQuote: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn SetTypographicDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, doubleQuote: anytype) void {
        comptime _ = @TypeOf(doubleQuote)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicDoubleQuotes(@ptrCast(self.ptr), @ptrCast(doubleQuote.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetAutoFormatUrl(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFormatUrl(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetAutoBoldUnderline(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoBoldUnderline(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetSuperScript(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScript(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetAddNonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAddNonBreakingSpace(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetCapitalizeWeekDays(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetCapitalizeWeekDays(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetReplaceDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotes(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetReplaceSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceSingleQuotes(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetAdvancedAutocorrect(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAdvancedAutocorrect(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetEnabledAutoCorrection(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetEnabledAutoCorrection(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetReplaceDoubleQuotesByFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotesByFrenchQuotes(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn ReadConfig(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_ReadConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn WriteConfig(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_WriteConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newAutoFractions: bool `
    ///
    pub fn SetAutoFractions(self: TextAutoCorrectionCore__AutoCorrectionSettings, newAutoFractions: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFractions(@ptrCast(self.ptr), newAutoFractions);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newSingleSpaces: bool `
    ///
    pub fn SetSingleSpaces(self: TextAutoCorrectionCore__AutoCorrectionSettings, newSingleSpaces: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetSingleSpaces(@ptrCast(self.ptr), newSingleSpaces);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newFixTwoUppercaseChars: bool `
    ///
    pub fn SetFixTwoUppercaseChars(self: TextAutoCorrectionCore__AutoCorrectionSettings, newFixTwoUppercaseChars: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetFixTwoUppercaseChars(@ptrCast(self.ptr), newFixTwoUppercaseChars);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newUppercaseFirstCharOfSentence: bool `
    ///
    pub fn SetUppercaseFirstCharOfSentence(self: TextAutoCorrectionCore__AutoCorrectionSettings, newUppercaseFirstCharOfSentence: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetUppercaseFirstCharOfSentence(@ptrCast(self.ptr), newUppercaseFirstCharOfSentence);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` exceptions: Set_constu8 `
    ///
    pub fn SetUpperCaseExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, exceptions: Set_constu8) void {
        const exceptions_count = exceptions.count();
        const exceptions_arr = allocator.alloc(qtc.libqt_string, exceptions_count) catch @panic("textautocorrectioncore__autocorrectionsettings.SetUpperCaseExceptions: Memory allocation failed");
        defer allocator.free(exceptions_arr);
        var exceptions_it = exceptions.keyIterator();
        var exceptions_i: usize = 0;
        while (exceptions_it.next()) |exceptions_item| : (exceptions_i += 1) {
            exceptions_arr[exceptions_i] = .{
                .len = exceptions_item.*.len,
                .data = exceptions_item.*.ptr,
            };
        }
        const exceptions_set = qtc.libqt_list{
            .len = exceptions_count,
            .data = exceptions_arr.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetUpperCaseExceptions(@ptrCast(self.ptr), exceptions_set);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` exceptions: Set_constu8 `
    ///
    pub fn SetTwoUpperLetterExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, exceptions: Set_constu8) void {
        const exceptions_count = exceptions.count();
        const exceptions_arr = allocator.alloc(qtc.libqt_string, exceptions_count) catch @panic("textautocorrectioncore__autocorrectionsettings.SetTwoUpperLetterExceptions: Memory allocation failed");
        defer allocator.free(exceptions_arr);
        var exceptions_it = exceptions.keyIterator();
        var exceptions_i: usize = 0;
        while (exceptions_it.next()) |exceptions_item| : (exceptions_i += 1) {
            exceptions_arr[exceptions_i] = .{
                .len = exceptions_item.*.len,
                .data = exceptions_item.*.ptr,
            };
        }
        const exceptions_set = qtc.libqt_list{
            .len = exceptions_count,
            .data = exceptions_arr.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetTwoUpperLetterExceptions(@ptrCast(self.ptr), exceptions_set);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UpperCaseExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_UpperCaseExceptions(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _set.len) catch @panic("textautocorrectioncore__autocorrectionsettings.UpperCaseExceptions: Total capacity allocation failed");
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data[i].data[0.._data[i].len], {});
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TwoUpperLetterExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_TwoUpperLetterExceptions(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _set.len) catch @panic("textautocorrectioncore__autocorrectionsettings.TwoUpperLetterExceptions: Total capacity allocation failed");
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data[i].data[0.._data[i].len], {});
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn SetLanguage(self: TextAutoCorrectionCore__AutoCorrectionSettings, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Language(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_Language(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionsettings.Language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn IsFrenchLanguage(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsFrenchLanguage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` entries: Map_constu8_constu8 `
    ///
    pub fn SetAutocorrectEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, entries: Map_constu8_constu8) void {
        const entries_count = entries.count();
        const entries_keys = allocator.alloc(qtc.libqt_string, entries_count) catch @panic("textautocorrectioncore__autocorrectionsettings.SetAutocorrectEntries: Memory allocation failed");
        defer allocator.free(entries_keys);
        const entries_values = allocator.alloc(qtc.libqt_string, entries_count) catch @panic("textautocorrectioncore__autocorrectionsettings.SetAutocorrectEntries: Memory allocation failed");
        defer allocator.free(entries_values);
        var i: usize = 0;
        var entries_it = entries.iterator();
        while (entries_it.next()) |it_entry| : (i += 1) {
            const entries_key = it_entry.key_ptr.*;
            entries_keys[i] = qtc.libqt_string{
                .len = entries_key.len,
                .data = entries_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            entries_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const entries_map = qtc.libqt_map{
            .len = entries_count,
            .keys = @ptrCast(entries_keys.ptr),
            .values = @ptrCast(entries_values.ptr),
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutocorrectEntries(@ptrCast(self.ptr), entries_map);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AutocorrectEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_AutocorrectEntries(@ptrCast(self.ptr));
        var _ret: Map_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("textautocorrectioncore__autocorrectionsettings.AutocorrectEntries: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("textautocorrectioncore__autocorrectionsettings.AutocorrectEntries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("textautocorrectioncore__autocorrectionsettings.AutocorrectEntries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` currentWord: []const u8 `
    ///
    /// ` replaceWord: []const u8 `
    ///
    pub fn AddAutoCorrect(self: TextAutoCorrectionCore__AutoCorrectionSettings, currentWord: []const u8, replaceWord: []const u8) bool {
        const currentWord_str = qtc.libqt_string{
            .len = currentWord.len,
            .data = currentWord.ptr,
        };
        const replaceWord_str = qtc.libqt_string{
            .len = replaceWord.len,
            .data = replaceWord.ptr,
        };
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_AddAutoCorrect(@ptrCast(self.ptr), currentWord_str, replaceWord_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn NonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings) QChar {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_NonBreakingSpace(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newNonBreakingSpace: QChar `
    ///
    pub fn SetNonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings, newNonBreakingSpace: anytype) void {
        comptime _ = @TypeOf(newNonBreakingSpace)._is_QChar;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetNonBreakingSpace(@ptrCast(self.ptr), @ptrCast(newNonBreakingSpace.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperScriptEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SuperScriptEntries(@ptrCast(self.ptr));
        var _ret: Map_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("textautocorrectioncore__autocorrectionsettings.SuperScriptEntries: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("textautocorrectioncore__autocorrectionsettings.SuperScriptEntries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("textautocorrectioncore__autocorrectionsettings.SuperScriptEntries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newSuperScriptEntries: Map_constu8_constu8 `
    ///
    pub fn SetSuperScriptEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, newSuperScriptEntries: Map_constu8_constu8) void {
        const newSuperScriptEntries_count = newSuperScriptEntries.count();
        const newSuperScriptEntries_keys = allocator.alloc(qtc.libqt_string, newSuperScriptEntries_count) catch @panic("textautocorrectioncore__autocorrectionsettings.SetSuperScriptEntries: Memory allocation failed");
        defer allocator.free(newSuperScriptEntries_keys);
        const newSuperScriptEntries_values = allocator.alloc(qtc.libqt_string, newSuperScriptEntries_count) catch @panic("textautocorrectioncore__autocorrectionsettings.SetSuperScriptEntries: Memory allocation failed");
        defer allocator.free(newSuperScriptEntries_values);
        var i: usize = 0;
        var newSuperScriptEntries_it = newSuperScriptEntries.iterator();
        while (newSuperScriptEntries_it.next()) |it_entry| : (i += 1) {
            const newSuperScriptEntries_key = it_entry.key_ptr.*;
            newSuperScriptEntries_keys[i] = qtc.libqt_string{
                .len = newSuperScriptEntries_key.len,
                .data = newSuperScriptEntries_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            newSuperScriptEntries_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const newSuperScriptEntries_map = qtc.libqt_map{
            .len = newSuperScriptEntries_count,
            .keys = @ptrCast(newSuperScriptEntries_keys.ptr),
            .values = @ptrCast(newSuperScriptEntries_values.ptr),
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScriptEntries(@ptrCast(self.ptr), newSuperScriptEntries_map);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn WriteAutoCorrectionFile(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn MaxFindStringLength(self: TextAutoCorrectionCore__AutoCorrectionSettings) i32 {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_MaxFindStringLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn MinFindStringLength(self: TextAutoCorrectionCore__AutoCorrectionSettings) i32 {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_MinFindStringLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` localFileName: []const u8 `
    ///
    /// ` fname: []const u8 `
    ///
    pub fn LoadLocalFileName(self: TextAutoCorrectionCore__AutoCorrectionSettings, localFileName: []const u8, fname: []const u8) void {
        const localFileName_str = qtc.libqt_string{
            .len = localFileName.len,
            .data = localFileName.ptr,
        };
        const fname_str = qtc.libqt_string{
            .len = fname.len,
            .data = fname.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_LoadLocalFileName(@ptrCast(self.ptr), localFileName_str, fname_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` fname: []const u8 `
    ///
    pub fn LoadGlobalFileName(self: TextAutoCorrectionCore__AutoCorrectionSettings, fname: []const u8) void {
        const fname_str = qtc.libqt_string{
            .len = fname.len,
            .data = fname.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_LoadGlobalFileName(@ptrCast(self.ptr), fname_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn DoubleFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_DoubleFrenchQuotes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newDoubleFrenchQuotes: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn SetDoubleFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, newDoubleFrenchQuotes: anytype) void {
        comptime _ = @TypeOf(newDoubleFrenchQuotes)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetDoubleFrenchQuotes(@ptrCast(self.ptr), @ptrCast(newDoubleFrenchQuotes.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomWritablePath(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_CustomWritablePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionsettings.CustomWritablePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetCustomWritablePath(self: TextAutoCorrectionCore__AutoCorrectionSettings, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomWritablePath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomSystemPath(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_CustomSystemPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionsettings.CustomSystemPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetCustomSystemPath(self: TextAutoCorrectionCore__AutoCorrectionSettings, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomSystemPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` lang: []const u8 `
    ///
    /// ` forceGlobal: bool `
    ///
    pub fn SetLanguage2(self: TextAutoCorrectionCore__AutoCorrectionSettings, lang: []const u8, forceGlobal: bool) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage2(@ptrCast(self.ptr), lang_str, forceGlobal);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn WriteAutoCorrectionFile1(self: TextAutoCorrectionCore__AutoCorrectionSettings, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile1(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn Delete(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_Delete(@ptrCast(self.ptr));
    }
};
