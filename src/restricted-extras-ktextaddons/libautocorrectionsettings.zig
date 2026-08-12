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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextAutoCorrectionCore::AutoCorrectionSettings object in C++ memory
    ///
    pub fn new() TextAutoCorrectionCore__AutoCorrectionSettings {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_new() };
    }

    /// ### DEPRECATED: Use `isEnabledAutoCorrection` instead
    ///
    pub const IsEnabledAutoCorrection = isEnabledAutoCorrection;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isEnabledAutoCorrection(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsEnabledAutoCorrection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUppercaseFirstCharOfSentence` instead
    ///
    pub const IsUppercaseFirstCharOfSentence = isUppercaseFirstCharOfSentence;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isUppercaseFirstCharOfSentence(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsUppercaseFirstCharOfSentence(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFixTwoUppercaseChars` instead
    ///
    pub const IsFixTwoUppercaseChars = isFixTwoUppercaseChars;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isFixTwoUppercaseChars(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsFixTwoUppercaseChars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSingleSpaces` instead
    ///
    pub const IsSingleSpaces = isSingleSpaces;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isSingleSpaces(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsSingleSpaces(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAutoFractions` instead
    ///
    pub const IsAutoFractions = isAutoFractions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isAutoFractions(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFractions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCapitalizeWeekDays` instead
    ///
    pub const IsCapitalizeWeekDays = isCapitalizeWeekDays;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isCapitalizeWeekDays(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsCapitalizeWeekDays(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReplaceDoubleQuotes` instead
    ///
    pub const IsReplaceDoubleQuotes = isReplaceDoubleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isReplaceDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReplaceSingleQuotes` instead
    ///
    pub const IsReplaceSingleQuotes = isReplaceSingleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isReplaceSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceSingleQuotes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAdvancedAutocorrect` instead
    ///
    pub const IsAdvancedAutocorrect = isAdvancedAutocorrect;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isAdvancedAutocorrect(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAdvancedAutocorrect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAutoFormatUrl` instead
    ///
    pub const IsAutoFormatUrl = isAutoFormatUrl;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isAutoFormatUrl(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFormatUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAutoBoldUnderline` instead
    ///
    pub const IsAutoBoldUnderline = isAutoBoldUnderline;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isAutoBoldUnderline(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoBoldUnderline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuperScript` instead
    ///
    pub const IsSuperScript = isSuperScript;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isSuperScript(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsSuperScript(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAddNonBreakingSpace` instead
    ///
    pub const IsAddNonBreakingSpace = isAddNonBreakingSpace;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isAddNonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsAddNonBreakingSpace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReplaceDoubleQuotesByFrenchQuotes` instead
    ///
    pub const IsReplaceDoubleQuotesByFrenchQuotes = isReplaceDoubleQuotesByFrenchQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isReplaceDoubleQuotesByFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotesByFrenchQuotes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typographicSingleQuotes` instead
    ///
    pub const TypographicSingleQuotes = typographicSingleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn typographicSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_TypographicSingleQuotes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `typographicDoubleQuotes` instead
    ///
    pub const TypographicDoubleQuotes = typographicDoubleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn typographicDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_TypographicDoubleQuotes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTypographicSingleQuotes` instead
    ///
    pub const SetTypographicSingleQuotes = setTypographicSingleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` singleQuote: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn setTypographicSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, singleQuote: anytype) void {
        comptime _ = @TypeOf(singleQuote)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicSingleQuotes(@ptrCast(self.ptr), @ptrCast(singleQuote.ptr));
    }

    /// ### DEPRECATED: Use `setTypographicDoubleQuotes` instead
    ///
    pub const SetTypographicDoubleQuotes = setTypographicDoubleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` doubleQuote: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn setTypographicDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, doubleQuote: anytype) void {
        comptime _ = @TypeOf(doubleQuote)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicDoubleQuotes(@ptrCast(self.ptr), @ptrCast(doubleQuote.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFormatUrl` instead
    ///
    pub const SetAutoFormatUrl = setAutoFormatUrl;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setAutoFormatUrl(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFormatUrl(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setAutoBoldUnderline` instead
    ///
    pub const SetAutoBoldUnderline = setAutoBoldUnderline;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setAutoBoldUnderline(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoBoldUnderline(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setSuperScript` instead
    ///
    pub const SetSuperScript = setSuperScript;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setSuperScript(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScript(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setAddNonBreakingSpace` instead
    ///
    pub const SetAddNonBreakingSpace = setAddNonBreakingSpace;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setAddNonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAddNonBreakingSpace(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setCapitalizeWeekDays` instead
    ///
    pub const SetCapitalizeWeekDays = setCapitalizeWeekDays;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setCapitalizeWeekDays(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetCapitalizeWeekDays(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setReplaceDoubleQuotes` instead
    ///
    pub const SetReplaceDoubleQuotes = setReplaceDoubleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setReplaceDoubleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotes(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setReplaceSingleQuotes` instead
    ///
    pub const SetReplaceSingleQuotes = setReplaceSingleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setReplaceSingleQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceSingleQuotes(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setAdvancedAutocorrect` instead
    ///
    pub const SetAdvancedAutocorrect = setAdvancedAutocorrect;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setAdvancedAutocorrect(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAdvancedAutocorrect(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setEnabledAutoCorrection` instead
    ///
    pub const SetEnabledAutoCorrection = setEnabledAutoCorrection;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setEnabledAutoCorrection(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetEnabledAutoCorrection(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setReplaceDoubleQuotesByFrenchQuotes` instead
    ///
    pub const SetReplaceDoubleQuotesByFrenchQuotes = setReplaceDoubleQuotesByFrenchQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setReplaceDoubleQuotesByFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, b: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotesByFrenchQuotes(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn readConfig(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_ReadConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn writeConfig(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_WriteConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFractions` instead
    ///
    pub const SetAutoFractions = setAutoFractions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newAutoFractions: bool `
    ///
    pub fn setAutoFractions(self: TextAutoCorrectionCore__AutoCorrectionSettings, newAutoFractions: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFractions(@ptrCast(self.ptr), newAutoFractions);
    }

    /// ### DEPRECATED: Use `setSingleSpaces` instead
    ///
    pub const SetSingleSpaces = setSingleSpaces;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newSingleSpaces: bool `
    ///
    pub fn setSingleSpaces(self: TextAutoCorrectionCore__AutoCorrectionSettings, newSingleSpaces: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetSingleSpaces(@ptrCast(self.ptr), newSingleSpaces);
    }

    /// ### DEPRECATED: Use `setFixTwoUppercaseChars` instead
    ///
    pub const SetFixTwoUppercaseChars = setFixTwoUppercaseChars;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newFixTwoUppercaseChars: bool `
    ///
    pub fn setFixTwoUppercaseChars(self: TextAutoCorrectionCore__AutoCorrectionSettings, newFixTwoUppercaseChars: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetFixTwoUppercaseChars(@ptrCast(self.ptr), newFixTwoUppercaseChars);
    }

    /// ### DEPRECATED: Use `setUppercaseFirstCharOfSentence` instead
    ///
    pub const SetUppercaseFirstCharOfSentence = setUppercaseFirstCharOfSentence;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newUppercaseFirstCharOfSentence: bool `
    ///
    pub fn setUppercaseFirstCharOfSentence(self: TextAutoCorrectionCore__AutoCorrectionSettings, newUppercaseFirstCharOfSentence: bool) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetUppercaseFirstCharOfSentence(@ptrCast(self.ptr), newUppercaseFirstCharOfSentence);
    }

    /// ### DEPRECATED: Use `setUpperCaseExceptions` instead
    ///
    pub const SetUpperCaseExceptions = setUpperCaseExceptions;

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
    pub fn setUpperCaseExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, exceptions: Set_constu8) void {
        const exceptions_count = exceptions.count();
        const exceptions_arr = allocator.alloc(qtc.libqt_string, exceptions_count) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.setUpperCaseExceptions: Memory allocation failed");
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

    /// ### DEPRECATED: Use `setTwoUpperLetterExceptions` instead
    ///
    pub const SetTwoUpperLetterExceptions = setTwoUpperLetterExceptions;

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
    pub fn setTwoUpperLetterExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, exceptions: Set_constu8) void {
        const exceptions_count = exceptions.count();
        const exceptions_arr = allocator.alloc(qtc.libqt_string, exceptions_count) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.setTwoUpperLetterExceptions: Memory allocation failed");
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

    /// ### DEPRECATED: Use `upperCaseExceptions` instead
    ///
    pub const UpperCaseExceptions = upperCaseExceptions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn upperCaseExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_UpperCaseExceptions(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.upperCaseExceptions: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `twoUpperLetterExceptions` instead
    ///
    pub const TwoUpperLetterExceptions = twoUpperLetterExceptions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn twoUpperLetterExceptions(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_TwoUpperLetterExceptions(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.twoUpperLetterExceptions: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `setLanguage` instead
    ///
    pub const SetLanguage = setLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn setLanguage(self: TextAutoCorrectionCore__AutoCorrectionSettings, lang: []const u8) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage(@ptrCast(self.ptr), lang_str);
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn language(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_Language(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFrenchLanguage` instead
    ///
    pub const IsFrenchLanguage = isFrenchLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn isFrenchLanguage(self: TextAutoCorrectionCore__AutoCorrectionSettings) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_IsFrenchLanguage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutocorrectEntries` instead
    ///
    pub const SetAutocorrectEntries = setAutocorrectEntries;

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
    pub fn setAutocorrectEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, entries: Map_constu8_constu8) void {
        const entries_count = entries.count();
        const entries_keys = allocator.alloc(qtc.libqt_string, entries_count) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.setAutocorrectEntries: Memory allocation failed");
        defer allocator.free(entries_keys);
        const entries_values = allocator.alloc(qtc.libqt_string, entries_count) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.setAutocorrectEntries: Memory allocation failed");
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

    /// ### DEPRECATED: Use `autocorrectEntries` instead
    ///
    pub const AutocorrectEntries = autocorrectEntries;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autocorrectEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_AutocorrectEntries(@ptrCast(self.ptr));
        var _ret: Map_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.autocorrectEntries: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.autocorrectEntries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.autocorrectEntries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `addAutoCorrect` instead
    ///
    pub const AddAutoCorrect = addAutoCorrect;

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
    pub fn addAutoCorrect(self: TextAutoCorrectionCore__AutoCorrectionSettings, currentWord: []const u8, replaceWord: []const u8) bool {
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

    /// ### DEPRECATED: Use `nonBreakingSpace` instead
    ///
    pub const NonBreakingSpace = nonBreakingSpace;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn nonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings) QChar {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_NonBreakingSpace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setNonBreakingSpace` instead
    ///
    pub const SetNonBreakingSpace = setNonBreakingSpace;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newNonBreakingSpace: QChar `
    ///
    pub fn setNonBreakingSpace(self: TextAutoCorrectionCore__AutoCorrectionSettings, newNonBreakingSpace: anytype) void {
        comptime _ = @TypeOf(newNonBreakingSpace)._is_QChar;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetNonBreakingSpace(@ptrCast(self.ptr), @ptrCast(newNonBreakingSpace.ptr));
    }

    /// ### DEPRECATED: Use `superScriptEntries` instead
    ///
    pub const SuperScriptEntries = superScriptEntries;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superScriptEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) Map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SuperScriptEntries(@ptrCast(self.ptr));
        var _ret: Map_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.superScriptEntries: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.superScriptEntries: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.superScriptEntries: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuperScriptEntries` instead
    ///
    pub const SetSuperScriptEntries = setSuperScriptEntries;

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
    pub fn setSuperScriptEntries(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator, newSuperScriptEntries: Map_constu8_constu8) void {
        const newSuperScriptEntries_count = newSuperScriptEntries.count();
        const newSuperScriptEntries_keys = allocator.alloc(qtc.libqt_string, newSuperScriptEntries_count) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.setSuperScriptEntries: Memory allocation failed");
        defer allocator.free(newSuperScriptEntries_keys);
        const newSuperScriptEntries_values = allocator.alloc(qtc.libqt_string, newSuperScriptEntries_count) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.setSuperScriptEntries: Memory allocation failed");
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

    /// ### DEPRECATED: Use `writeAutoCorrectionFile` instead
    ///
    pub const WriteAutoCorrectionFile = writeAutoCorrectionFile;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn writeAutoCorrectionFile(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxFindStringLength` instead
    ///
    pub const MaxFindStringLength = maxFindStringLength;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn maxFindStringLength(self: TextAutoCorrectionCore__AutoCorrectionSettings) i32 {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_MaxFindStringLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minFindStringLength` instead
    ///
    pub const MinFindStringLength = minFindStringLength;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn minFindStringLength(self: TextAutoCorrectionCore__AutoCorrectionSettings) i32 {
        return qtc.TextAutoCorrectionCore__AutoCorrectionSettings_MinFindStringLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadLocalFileName` instead
    ///
    pub const LoadLocalFileName = loadLocalFileName;

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
    pub fn loadLocalFileName(self: TextAutoCorrectionCore__AutoCorrectionSettings, localFileName: []const u8, fname: []const u8) void {
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

    /// ### DEPRECATED: Use `loadGlobalFileName` instead
    ///
    pub const LoadGlobalFileName = loadGlobalFileName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` fname: []const u8 `
    ///
    pub fn loadGlobalFileName(self: TextAutoCorrectionCore__AutoCorrectionSettings, fname: []const u8) void {
        const fname_str = qtc.libqt_string{
            .len = fname.len,
            .data = fname.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_LoadGlobalFileName(@ptrCast(self.ptr), fname_str);
    }

    /// ### DEPRECATED: Use `doubleFrenchQuotes` instead
    ///
    pub const DoubleFrenchQuotes = doubleFrenchQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn doubleFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_DoubleFrenchQuotes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDoubleFrenchQuotes` instead
    ///
    pub const SetDoubleFrenchQuotes = setDoubleFrenchQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` newDoubleFrenchQuotes: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn setDoubleFrenchQuotes(self: TextAutoCorrectionCore__AutoCorrectionSettings, newDoubleFrenchQuotes: anytype) void {
        comptime _ = @TypeOf(newDoubleFrenchQuotes)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetDoubleFrenchQuotes(@ptrCast(self.ptr), @ptrCast(newDoubleFrenchQuotes.ptr));
    }

    /// ### DEPRECATED: Use `customWritablePath` instead
    ///
    pub const CustomWritablePath = customWritablePath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customWritablePath(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_CustomWritablePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.customWritablePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCustomWritablePath` instead
    ///
    pub const SetCustomWritablePath = setCustomWritablePath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setCustomWritablePath(self: TextAutoCorrectionCore__AutoCorrectionSettings, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomWritablePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `customSystemPath` instead
    ///
    pub const CustomSystemPath = customSystemPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customSystemPath(self: TextAutoCorrectionCore__AutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionSettings_CustomSystemPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionSettings.customSystemPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCustomSystemPath` instead
    ///
    pub const SetCustomSystemPath = setCustomSystemPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setCustomSystemPath(self: TextAutoCorrectionCore__AutoCorrectionSettings, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomSystemPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `setLanguage2` instead
    ///
    pub const SetLanguage2 = setLanguage2;

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
    pub fn setLanguage2(self: TextAutoCorrectionCore__AutoCorrectionSettings, lang: []const u8, forceGlobal: bool) void {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage2(@ptrCast(self.ptr), lang_str, forceGlobal);
    }

    /// ### DEPRECATED: Use `writeAutoCorrectionFile1` instead
    ///
    pub const WriteAutoCorrectionFile1 = writeAutoCorrectionFile1;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn writeAutoCorrectionFile1(self: TextAutoCorrectionCore__AutoCorrectionSettings, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile1(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn delete(self: TextAutoCorrectionCore__AutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionSettings_Delete(@ptrCast(self.ptr));
    }
};
