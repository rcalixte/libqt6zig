const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html)
pub const sonnet__highlighter = struct {
    /// New constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QtC.QTextEdit `
    ///
    pub fn New(textEdit: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new(@ptrCast(textEdit));
    }

    /// New2 constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QtC.QPlainTextEdit `
    ///
    pub fn New2(textEdit: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new2(@ptrCast(textEdit));
    }

    /// New3 constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QtC.QTextEdit `
    ///
    /// ` col: QtC.QColor `
    ///
    pub fn New3(textEdit: ?*anyopaque, col: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new3(@ptrCast(textEdit), @ptrCast(col));
    }

    /// New4 constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QtC.QPlainTextEdit `
    ///
    /// ` col: QtC.QColor `
    ///
    pub fn New4(textEdit: ?*anyopaque, col: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.Sonnet__Highlighter_new4(@ptrCast(textEdit), @ptrCast(col));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Sonnet__Highlighter_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.Sonnet__Highlighter_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Sonnet__Highlighter_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__Highlighter_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#spellCheckerFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SpellCheckerFound(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_SpellCheckerFound(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#currentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Highlighter_CurrentLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.CurrentLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.Sonnet__Highlighter_SetActive(@ptrCast(self), active);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_IsActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#automatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Automatic(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_Automatic(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutomatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` automatic: bool `
    ///
    pub fn SetAutomatic(self: ?*anyopaque, automatic: bool) void {
        qtc.Sonnet__Highlighter_SetAutomatic(@ptrCast(self), automatic);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn AutoDetectLanguageDisabled(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_AutoDetectLanguageDisabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` autoDetectDisabled: bool `
    ///
    pub fn SetAutoDetectLanguageDisabled(self: ?*anyopaque, autoDetectDisabled: bool) void {
        qtc.Sonnet__Highlighter_SetAutoDetectLanguageDisabled(@ptrCast(self), autoDetectDisabled);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#addWordToDictionary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn AddWordToDictionary(self: ?*anyopaque, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_AddWordToDictionary(@ptrCast(self), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#ignoreWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IgnoreWord(self: ?*anyopaque, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_IgnoreWord(@ptrCast(self), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuggestionsForWord(self: ?*anyopaque, word: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord(@ptrCast(self), word_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__highlighter.SuggestionsForWord: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__highlighter.SuggestionsForWord: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuggestionsForWord2(self: ?*anyopaque, word: []const u8, cursor: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord2(@ptrCast(self), word_str, @ptrCast(cursor));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__highlighter.SuggestionsForWord2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__highlighter.SuggestionsForWord2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isWordMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IsWordMisspelled(self: ?*anyopaque, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Highlighter_IsWordMisspelled(@ptrCast(self), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelledColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetMisspelledColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetMisspelledColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn CheckerEnabledByDefault(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_CheckerEnabledByDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` document: QtC.QTextDocument `
    ///
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` description: []const u8 `
    ///
    pub fn ActiveChanged(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Sonnet__Highlighter_ActiveChanged(@ptrCast(self), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_Connect_ActiveChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn HighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_HighlightBlock(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnHighlightBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnHighlightBlock(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHighlightBlock` instead
    ///
    pub const QBaseHighlightBlock = SuperHighlightBlock;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperHighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_SuperHighlightBlock(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SetMisspelled(@ptrCast(self), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, start: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnSetMisspelled(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetMisspelled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMisspelled` instead
    ///
    pub const QBaseSetMisspelled = SuperSetMisspelled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SuperSetMisspelled(@ptrCast(self), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn UnsetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_UnsetMisspelled(@ptrCast(self), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, start: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnUnsetMisspelled(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnUnsetMisspelled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnsetMisspelled` instead
    ///
    pub const QBaseUnsetMisspelled = SuperUnsetMisspelled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperUnsetMisspelled(self: ?*anyopaque, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SuperUnsetMisspelled(@ptrCast(self), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_EventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, o: QtC.QObject, e: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_SuperEventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn IntraWordEditing(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_IntraWordEditing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIntraWordEditing(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIntraWordEditing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIntraWordEditing` instead
    ///
    pub const QBaseIntraWordEditing = SuperIntraWordEditing;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperIntraWordEditing(self: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_SuperIntraWordEditing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn SetIntraWordEditing(self: ?*anyopaque, editing: bool) void {
        qtc.Sonnet__Highlighter_SetIntraWordEditing(@ptrCast(self), editing);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, editing: bool) callconv(.c) void `
    ///
    pub fn OnSetIntraWordEditing(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetIntraWordEditing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIntraWordEditing` instead
    ///
    pub const QBaseSetIntraWordEditing = SuperSetIntraWordEditing;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn SuperSetIntraWordEditing(self: ?*anyopaque, editing: bool) void {
        qtc.Sonnet__Highlighter_SuperSetIntraWordEditing(@ptrCast(self), editing);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setCurrentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` language: []const u8 `
    ///
    pub fn SetCurrentLanguage(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.Sonnet__Highlighter_SetCurrentLanguage(@ptrCast(self), language_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotAutoDetection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SlotAutoDetection(self: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SlotAutoDetection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotRehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SlotRehighlight(self: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SlotRehighlight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    /// ` max: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuggestionsForWord22(self: ?*anyopaque, word: []const u8, max: i32, allocator: std.mem.Allocator) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord22(@ptrCast(self), word_str, @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__highlighter.SuggestionsForWord22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__highlighter.SuggestionsForWord22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    /// ` max: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuggestionsForWord3(self: ?*anyopaque, word: []const u8, cursor: ?*anyopaque, max: i32, allocator: std.mem.Allocator) []const []const u8 {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Sonnet__Highlighter_SuggestionsForWord3(@ptrCast(self), word_str, @ptrCast(cursor), @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("sonnet__highlighter.SuggestionsForWord3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__highlighter.SuggestionsForWord3: Memory allocation failed");
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QSyntaxHighlighter_Document(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Rehighlight(self: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` block: QtC.QTextBlock `
    ///
    pub fn RehighlightBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self), @ptrCast(block));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("sonnet__highlighter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("sonnet__highlighter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__highlighter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn SetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetFormat(@ptrCast(self), @bitCast(start), @bitCast(count), @ptrCast(format));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn SuperSetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperSetFormat(@ptrCast(self), @bitCast(start), @bitCast(count), @ptrCast(format));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, start: i32, count: i32, format: QtC.QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnSetFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetFormat(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.Sonnet__Highlighter_Format(@ptrCast(self), @bitCast(pos));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.Sonnet__Highlighter_SuperFormat(@ptrCast(self), @bitCast(pos));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, pos: i32) callconv(.c) QtC.QTextCharFormat `
    ///
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.Sonnet__Highlighter_OnFormat(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn PreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_PreviousBlockState(@ptrCast(self));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperPreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SuperPreviousBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPreviousBlockState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnPreviousBlockState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn CurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_CurrentBlockState(@ptrCast(self));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperCurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SuperCurrentBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentBlockState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.Sonnet__Highlighter_SetCurrentBlockState(@ptrCast(self), @bitCast(newState));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SuperSetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.Sonnet__Highlighter_SuperSetCurrentBlockState(@ptrCast(self), @bitCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, newState: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` data: QtC.QTextBlockUserData `
    ///
    pub fn SetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` data: QtC.QTextBlockUserData `
    ///
    pub fn SuperSetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_SuperSetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, data: QtC.QTextBlockUserData) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockUserData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockUserData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn CurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.Sonnet__Highlighter_CurrentBlockUserData(@ptrCast(self));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperCurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.Sonnet__Highlighter_SuperCurrentBlockUserData(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QTextBlockUserData `
    ///
    pub fn OnCurrentBlockUserData(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QTextBlockUserData) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockUserData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn CurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.Sonnet__Highlighter_CurrentBlock(@ptrCast(self));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperCurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.Sonnet__Highlighter_SuperCurrentBlock(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QTextBlock `
    ///
    pub fn OnCurrentBlock(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QTextBlock) void {
        qtc.Sonnet__Highlighter_OnCurrentBlock(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__Highlighter_Sender(@ptrCast(self));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Sonnet__Highlighter_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.Sonnet__Highlighter_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Sonnet__Highlighter_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: QtC.Sonnet__Highlighter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Sonnet__Highlighter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Sonnet__Highlighter_Delete(@ptrCast(self));
    }
};
