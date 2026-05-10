const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Definition = @import("libqt6").KSyntaxHighlighting__Definition;
const KSyntaxHighlighting__FoldingRegion = @import("libqt6").KSyntaxHighlighting__FoldingRegion;
const KSyntaxHighlighting__Format = @import("libqt6").KSyntaxHighlighting__Format;
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextBlockUserData = @import("libqt6").QTextBlockUserData;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const TextCustomEditor__PlainTextEditor = @import("libqt6").TextCustomEditor__PlainTextEditor;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
pub const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter,

    pub const _is_TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter = {};
    pub const _is_Sonnet__Highlighter = {};
    pub const _is_QSyntaxHighlighter = {};
    pub const _is_QObject = {};
    pub const _is_KSyntaxHighlighting__AbstractHighlighter = {};

    /// New constructs a new TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` plainText: TextCustomEditor__PlainTextEditor `
    ///
    pub fn New(plainText: anytype) TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter {
        comptime _ = @TypeOf(plainText)._is_TextCustomEditor__PlainTextEditor;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_new(@ptrCast(plainText.ptr)) };
    }

    /// New2 constructs a new TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` plainText: TextCustomEditor__PlainTextEditor `
    ///
    /// ` misspelledColor: QColor `
    ///
    pub fn New2(plainText: anytype, misspelledColor: anytype) TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter {
        comptime _ = @TypeOf(plainText)._is_TextCustomEditor__PlainTextEditor;
        comptime _ = @TypeOf(misspelledColor)._is_QColor;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_new2(@ptrCast(plainText.ptr), @ptrCast(misspelledColor.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` on: bool `
    ///
    pub fn ToggleSpellHighlighting(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, on: bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ToggleSpellHighlighting(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` def: KSyntaxHighlighting__Definition `
    ///
    pub fn SetDefinition(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, def: KSyntaxHighlighting__Definition) callconv(.c) void `
    ///
    pub fn OnSetDefinition(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, KSyntaxHighlighting__Definition) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetDefinition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDefinition` instead
    ///
    pub const QBaseSetDefinition = SuperSetDefinition;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` def: KSyntaxHighlighting__Definition `
    ///
    pub fn SuperSetDefinition(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn HighlightBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnHighlightBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHighlightBlock` instead
    ///
    pub const QBaseHighlightBlock = SuperHighlightBlock;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperHighlightBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn UnsetMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnUnsetMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnUnsetMisspelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnsetMisspelled` instead
    ///
    pub const QBaseUnsetMisspelled = SuperUnsetMisspelled;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperUnsetMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperUnsetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnSetMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetMisspelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMisspelled` instead
    ///
    pub const QBaseSetMisspelled = SuperSetMisspelled;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` format: KSyntaxHighlighting__Format `
    ///
    pub fn ApplyFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, offset: i32, length: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_KSyntaxHighlighting__Format;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, offset: i32, length: i32, format: KSyntaxHighlighting__Format) callconv(.c) void `
    ///
    pub fn OnApplyFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32, i32, KSyntaxHighlighting__Format) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApplyFormat` instead
    ///
    pub const QBaseApplyFormat = SuperApplyFormat;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` format: KSyntaxHighlighting__Format `
    ///
    pub fn SuperApplyFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, offset: i32, length: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_KSyntaxHighlighting__Format;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFormat(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(format.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#spellCheckerFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SpellCheckerFound(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.Sonnet__Highlighter_SpellCheckerFound(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#currentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentLanguage(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Highlighter_CurrentLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.CurrentLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, active: bool) void {
        qtc.Sonnet__Highlighter_SetActive(@ptrCast(self.ptr), active);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn IsActive(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.Sonnet__Highlighter_IsActive(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#automatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Automatic(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.Sonnet__Highlighter_Automatic(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutomatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` automatic: bool `
    ///
    pub fn SetAutomatic(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, automatic: bool) void {
        qtc.Sonnet__Highlighter_SetAutomatic(@ptrCast(self.ptr), automatic);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn AutoDetectLanguageDisabled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.Sonnet__Highlighter_AutoDetectLanguageDisabled(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` autoDetectDisabled: bool `
    ///
    pub fn SetAutoDetectLanguageDisabled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, autoDetectDisabled: bool) void {
        qtc.Sonnet__Highlighter_SetAutoDetectLanguageDisabled(@ptrCast(self.ptr), autoDetectDisabled);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#addWordToDictionary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn AddWordToDictionary(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_AddWordToDictionary(@ptrCast(self.ptr), word_str);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#ignoreWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IgnoreWord(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_IgnoreWord(@ptrCast(self.ptr), word_str);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    pub fn SuggestionsForWord(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator, word: []const u8) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord(@ptrCast(self.ptr), word_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SuggestionsForWord2(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator, word: []const u8, cursor: anytype) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord2(@ptrCast(self.ptr), word_str, @ptrCast(cursor.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isWordMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IsWordMisspelled(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Highlighter_IsWordMisspelled(@ptrCast(self.ptr), word_str);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelledColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` color: QColor `
    ///
    pub fn SetMisspelledColor(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Sonnet__Highlighter_SetMisspelledColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn CheckerEnabledByDefault(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.Sonnet__Highlighter_CheckerEnabledByDefault(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn SetDocument(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, document: anytype) void {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.Sonnet__Highlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` description: []const u8 `
    ///
    pub fn ActiveChanged(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Sonnet__Highlighter_ActiveChanged(@ptrCast(self.ptr), description_str);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setCurrentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` language: []const u8 `
    ///
    pub fn SetCurrentLanguage(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.Sonnet__Highlighter_SetCurrentLanguage(@ptrCast(self.ptr), language_str);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotAutoDetection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SlotAutoDetection(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.Sonnet__Highlighter_SlotAutoDetection(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotRehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SlotRehighlight(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.Sonnet__Highlighter_SlotRehighlight(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` max: i32 `
    ///
    pub fn SuggestionsForWord22(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator, word: []const u8, max: i32) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord22(@ptrCast(self.ptr), word_str, @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` cursor: QTextCursor `
    ///
    /// ` max: i32 `
    ///
    pub fn SuggestionsForWord3(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator, word: []const u8, cursor: anytype, max: i32) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord3(@ptrCast(self.ptr), word_str, @ptrCast(cursor.ptr), @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.SuggestionsForWord3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Document(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Rehighlight(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn RehighlightBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn IsWidgetType(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn IsWindowType(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn IsQuickItemType(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SignalsBlocked(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Thread(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Disconnect3(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn DumpObjectTree(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn DumpObjectInfo(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__plaintextsyntaxspellcheckinghighlighter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn BindingStorage(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn BindingStorage2(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Destroyed(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Parent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn DeleteLater(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Definition(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) KSyntaxHighlighting__Definition {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Theme(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self.ptr)) };
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn MetaObject(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperMetaObject(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` o: QObject `
    ///
    /// ` e: QEvent `
    ///
    pub fn EventFilter(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` o: QObject `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEventFilter(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, o: QObject, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QTimerEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QChildEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn SetTheme(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetTheme` instead
    ///
    pub const QBaseSetTheme = SuperSetTheme;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn SuperSetTheme(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, theme: KSyntaxHighlighting__Theme) callconv(.c) void `
    ///
    pub fn OnSetTheme(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, KSyntaxHighlighting__Theme) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetTheme(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#applyFolding)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` region: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn ApplyFolding(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, offset: i32, length: i32, region: anytype) void {
        comptime _ = @TypeOf(region)._is_KSyntaxHighlighting__FoldingRegion;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `SuperApplyFolding` instead
    ///
    pub const QBaseApplyFolding = SuperApplyFolding;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#applyFolding)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` region: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn SuperApplyFolding(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, offset: i32, length: i32, region: anytype) void {
        comptime _ = @TypeOf(region)._is_KSyntaxHighlighting__FoldingRegion;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFolding(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(region.ptr));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#applyFolding)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, offset: i32, length: i32, region: KSyntaxHighlighting__FoldingRegion) callconv(.c) void `
    ///
    pub fn OnApplyFolding(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32, i32, KSyntaxHighlighting__FoldingRegion) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFolding(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn IntraWordEditing(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIntraWordEditing` instead
    ///
    pub const QBaseIntraWordEditing = SuperIntraWordEditing;

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperIntraWordEditing(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) bool {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIntraWordEditing(@ptrCast(self.ptr));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIntraWordEditing(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnIntraWordEditing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn SetIntraWordEditing(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, editing: bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing(@ptrCast(self.ptr), editing);
    }

    /// ### DEPRECATED: Use `SuperSetIntraWordEditing` instead
    ///
    pub const QBaseSetIntraWordEditing = SuperSetIntraWordEditing;

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn SuperSetIntraWordEditing(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, editing: bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetIntraWordEditing(@ptrCast(self.ptr), editing);
    }

    /// Inherited from Sonnet::Highlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, editing: bool) callconv(.c) void `
    ///
    pub fn OnSetIntraWordEditing(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetIntraWordEditing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetFormat` instead
    ///
    pub const QBaseSetFormat = SuperSetFormat;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SuperSetFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, start: i32, count: i32, format: QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnSetFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, pos: i32) callconv(.c) QTextCharFormat `
    ///
    pub fn OnFormat(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn PreviousBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPreviousBlockState` instead
    ///
    pub const QBasePreviousBlockState = SuperPreviousBlockState;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperPreviousBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPreviousBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn CurrentBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCurrentBlockState` instead
    ///
    pub const QBaseCurrentBlockState = SuperCurrentBlockState;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperCurrentBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SetCurrentBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, newState: i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentBlockState` instead
    ///
    pub const QBaseSetCurrentBlockState = SuperSetCurrentBlockState;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SuperSetCurrentBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, newState: i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, newState: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockState(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SetCurrentBlockUserData(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentBlockUserData` instead
    ///
    pub const QBaseSetCurrentBlockUserData = SuperSetCurrentBlockUserData;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SuperSetCurrentBlockUserData(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, data: QTextBlockUserData) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockUserData(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn CurrentBlockUserData(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCurrentBlockUserData` instead
    ///
    pub const QBaseCurrentBlockUserData = SuperCurrentBlockUserData;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperCurrentBlockUserData(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlockUserData `
    ///
    pub fn OnCurrentBlockUserData(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn CurrentBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QTextBlock {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCurrentBlock` instead
    ///
    pub const QBaseCurrentBlock = SuperCurrentBlock;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperCurrentBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QTextBlock {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    pub fn OnCurrentBlock(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Sender(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperSender(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) QObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SenderSignalIndex(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn SuperSenderSignalIndex(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) i32 {
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, callback: *const fn (TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter `
    ///
    pub fn Delete(self: TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter) void {
        qtc.TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Delete(@ptrCast(self.ptr));
    }
};
