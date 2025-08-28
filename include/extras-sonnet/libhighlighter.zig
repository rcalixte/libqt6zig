const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/sonnet-highlighter.html
pub const sonnet__highlighter = struct {
    /// New constructs a new Sonnet::Highlighter object.
    ///
    /// ``` textEdit: QtC.QTextEdit ```
    pub fn New(textEdit: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new(@ptrCast(textEdit));
    }

    /// New2 constructs a new Sonnet::Highlighter object.
    ///
    /// ``` textEdit: QtC.QPlainTextEdit ```
    pub fn New2(textEdit: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new2(@ptrCast(textEdit));
    }

    /// New3 constructs a new Sonnet::Highlighter object.
    ///
    /// ``` textEdit: QtC.QTextEdit, col: QtC.QColor ```
    pub fn New3(textEdit: ?*anyopaque, col: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new3(@ptrCast(textEdit), @ptrCast(col));
    }

    /// New4 constructs a new Sonnet::Highlighter object.
    ///
    /// ``` textEdit: QtC.QPlainTextEdit, col: QtC.QColor ```
    pub fn New4(textEdit: ?*anyopaque, col: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new4(@ptrCast(textEdit), @ptrCast(col));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Sonnet__Highlighter_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Sonnet__Highlighter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Sonnet__Highlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Sonnet__Highlighter_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::highlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#spellCheckerFound)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn SpellCheckerFound(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_SpellCheckerFound(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#currentLanguage)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, allocator: std.mem.Allocator ```
    pub fn CurrentLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Sonnet__Highlighter_CurrentLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::highlighter.CurrentLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setActive)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.Sonnet__Highlighter_SetActive(@ptrCast(self), active);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#isActive)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#automatic)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Automatic(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_Automatic(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setAutomatic)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, automatic: bool ```
    pub fn SetAutomatic(self: ?*anyopaque, automatic: bool) void {
        qtc.Sonnet__Highlighter_SetAutomatic(@ptrCast(self), automatic);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn AutoDetectLanguageDisabled(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_AutoDetectLanguageDisabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, autoDetectDisabled: bool ```
    pub fn SetAutoDetectLanguageDisabled(self: ?*anyopaque, autoDetectDisabled: bool) void {
        qtc.Sonnet__Highlighter_SetAutoDetectLanguageDisabled(@ptrCast(self), autoDetectDisabled);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#addWordToDictionary)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8 ```
    pub fn AddWordToDictionary(self: ?*anyopaque, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_AddWordToDictionary(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#ignoreWord)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8 ```
    pub fn IgnoreWord(self: ?*anyopaque, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_IgnoreWord(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8, allocator: std.mem.Allocator ```
    pub fn SuggestionsForWord(self: ?*anyopaque, word: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord(@ptrCast(self), word_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::highlighter.SuggestionsForWord: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::highlighter.SuggestionsForWord: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8, cursor: QtC.QTextCursor, allocator: std.mem.Allocator ```
    pub fn SuggestionsForWord2(self: ?*anyopaque, word: []const u8, cursor: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord2(@ptrCast(self), word_str, @ptrCast(cursor));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::highlighter.SuggestionsForWord2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::highlighter.SuggestionsForWord2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#isWordMisspelled)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8 ```
    pub fn IsWordMisspelled(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Highlighter_IsWordMisspelled(@ptrCast(self), word_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setMisspelledColor)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, color: QtC.QColor ```
    pub fn SetMisspelledColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetMisspelledColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn CheckerEnabledByDefault(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_CheckerEnabledByDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setDocument)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, document: QtC.QTextDocument ```
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, description: []const u8 ```
    pub fn ActiveChanged(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Sonnet__Highlighter_ActiveChanged(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, description: [*:0]const u8) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, text: []const u8 ```
    pub fn HighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_HighlightBlock(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnHighlightBlock(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnHighlightBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter, text: []const u8 ```
    pub fn QBaseHighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_QBaseHighlightBlock(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, start: i32, count: i32 ```
    pub fn SetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SetMisspelled(@ptrCast(self), @intCast(start), @intCast(count));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, start: i32, count: i32) callconv(.c) void ```
    pub fn OnSetMisspelled(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetMisspelled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter, start: i32, count: i32 ```
    pub fn QBaseSetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_QBaseSetMisspelled(@ptrCast(self), @intCast(start), @intCast(count));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, start: i32, count: i32 ```
    pub fn UnsetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_UnsetMisspelled(@ptrCast(self), @intCast(start), @intCast(count));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, start: i32, count: i32) callconv(.c) void ```
    pub fn OnUnsetMisspelled(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnUnsetMisspelled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter, start: i32, count: i32 ```
    pub fn QBaseUnsetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_QBaseUnsetMisspelled(@ptrCast(self), @intCast(start), @intCast(count));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, o: QtC.QObject, e: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_EventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, o: QtC.QObject, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter, o: QtC.QObject, e: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_QBaseEventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn IntraWordEditing(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_IntraWordEditing(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) bool ```
    pub fn OnIntraWordEditing(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIntraWordEditing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBaseIntraWordEditing(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_QBaseIntraWordEditing(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, editing: bool ```
    pub fn SetIntraWordEditing(self: ?*anyopaque, editing: bool) void {
        qtc.Sonnet__Highlighter_SetIntraWordEditing(@ptrCast(self), editing);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, editing: bool) callconv(.c) void ```
    pub fn OnSetIntraWordEditing(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetIntraWordEditing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Sonnet__Highlighter, editing: bool ```
    pub fn QBaseSetIntraWordEditing(self: ?*anyopaque, editing: bool) void {
        qtc.Sonnet__Highlighter_QBaseSetIntraWordEditing(@ptrCast(self), editing);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#setCurrentLanguage)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, language: []const u8 ```
    pub fn SetCurrentLanguage(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.Sonnet__Highlighter_SetCurrentLanguage(@ptrCast(self), language_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#slotAutoDetection)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn SlotAutoDetection(self: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SlotAutoDetection(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#slotRehighlight)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn SlotRehighlight(self: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SlotRehighlight(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Sonnet__Highlighter_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::highlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Sonnet__Highlighter_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::highlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8, max: i32, allocator: std.mem.Allocator ```
    pub fn SuggestionsForWord22(self: ?*anyopaque, word: []const u8, max: i32, allocator: std.mem.Allocator) [][]const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord22(@ptrCast(self), word_str, @intCast(max));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::highlighter.SuggestionsForWord22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::highlighter.SuggestionsForWord22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, word: []const u8, cursor: QtC.QTextCursor, max: i32, allocator: std.mem.Allocator ```
    pub fn SuggestionsForWord3(self: ?*anyopaque, word: []const u8, cursor: ?*anyopaque, max: i32, allocator: std.mem.Allocator) [][]const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord3(@ptrCast(self), word_str, @ptrCast(cursor), @intCast(max));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet::highlighter.SuggestionsForWord3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::highlighter.SuggestionsForWord3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QSyntaxHighlighter_Document(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Rehighlight(self: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, block: QtC.QTextBlock ```
    pub fn RehighlightBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self), @ptrCast(block));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::highlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("sonnet::highlighter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("sonnet::highlighter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet::highlighter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, start: i32, count: i32, format: QtC.QTextCharFormat ```
    pub fn SetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetFormat(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(format));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, start: i32, count: i32, format: QtC.QTextCharFormat ```
    pub fn QBaseSetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseSetFormat(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(format));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, start: i32, count: i32, format: QtC.QTextCharFormat) callconv(.c) void ```
    pub fn OnSetFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, pos: i32 ```
    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.Sonnet__Highlighter_Format(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, pos: i32 ```
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.Sonnet__Highlighter_QBaseFormat(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, pos: i32) callconv(.c) QtC.QTextCharFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.Sonnet__Highlighter_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn PreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_PreviousBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBasePreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_QBasePreviousBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) i32 ```
    pub fn OnPreviousBlockState(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnPreviousBlockState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn CurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_CurrentBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBaseCurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_QBaseCurrentBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) i32 ```
    pub fn OnCurrentBlockState(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, newState: i32 ```
    pub fn SetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.Sonnet__Highlighter_SetCurrentBlockState(@ptrCast(self), @intCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, newState: i32 ```
    pub fn QBaseSetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.Sonnet__Highlighter_QBaseSetCurrentBlockState(@ptrCast(self), @intCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, newState: i32) callconv(.c) void ```
    pub fn OnSetCurrentBlockState(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, data: QtC.QTextBlockUserData ```
    pub fn SetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, data: QtC.QTextBlockUserData ```
    pub fn QBaseSetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_QBaseSetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, data: QtC.QTextBlockUserData) callconv(.c) void ```
    pub fn OnSetCurrentBlockUserData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockUserData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn CurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.Sonnet__Highlighter_CurrentBlockUserData(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBaseCurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.Sonnet__Highlighter_QBaseCurrentBlockUserData(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) QtC.QTextBlockUserData ```
    pub fn OnCurrentBlockUserData(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTextBlockUserData) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockUserData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn CurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.Sonnet__Highlighter_CurrentBlock(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBaseCurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.Sonnet__Highlighter_QBaseCurrentBlock(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) QtC.QTextBlock ```
    pub fn OnCurrentBlock(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTextBlock) void {
        qtc.Sonnet__Highlighter_OnCurrentBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__Highlighter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__Highlighter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Sonnet__Highlighter_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Sonnet__Highlighter, slot: fn (self: QtC.Sonnet__Highlighter, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Sonnet__Highlighter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_Delete(@ptrCast(self));
    }
};
