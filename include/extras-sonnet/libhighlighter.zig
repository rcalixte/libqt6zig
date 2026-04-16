const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPlainTextEdit = @import("libqt6").QPlainTextEdit;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextBlockUserData = @import("libqt6").QTextBlockUserData;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextEdit = @import("libqt6").QTextEdit;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html)
pub const Sonnet__Highlighter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Sonnet__Highlighter,

    pub const _is_Sonnet__Highlighter = {};
    pub const _is_QSyntaxHighlighter = {};
    pub const _is_QObject = {};

    /// New constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QTextEdit `
    ///
    pub fn New(textEdit: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QTextEdit;
        return .{ .ptr = qtc.Sonnet__Highlighter_new(@ptrCast(textEdit.ptr)) };
    }

    /// New2 constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QPlainTextEdit `
    ///
    pub fn New2(textEdit: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QPlainTextEdit;
        return .{ .ptr = qtc.Sonnet__Highlighter_new2(@ptrCast(textEdit.ptr)) };
    }

    /// New3 constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QTextEdit `
    ///
    /// ` col: QColor `
    ///
    pub fn New3(textEdit: anytype, col: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QTextEdit;
        comptime _ = @TypeOf(col)._is_QColor;
        return .{ .ptr = qtc.Sonnet__Highlighter_new3(@ptrCast(textEdit.ptr), @ptrCast(col.ptr)) };
    }

    /// New4 constructs a new Sonnet::Highlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QPlainTextEdit `
    ///
    /// ` col: QColor `
    ///
    pub fn New4(textEdit: anytype, col: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QPlainTextEdit;
        comptime _ = @TypeOf(col)._is_QColor;
        return .{ .ptr = qtc.Sonnet__Highlighter_new4(@ptrCast(textEdit.ptr), @ptrCast(col.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn MetaObject(self: Sonnet__Highlighter) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Sonnet__Highlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperMetaObject(self: Sonnet__Highlighter) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Sonnet__Highlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__Highlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Sonnet__Highlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Sonnet__Highlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Sonnet__Highlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#spellCheckerFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SpellCheckerFound(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_SpellCheckerFound(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#currentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentLanguage(self: Sonnet__Highlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Highlighter_CurrentLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.CurrentLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: Sonnet__Highlighter, active: bool) void {
        qtc.Sonnet__Highlighter_SetActive(@ptrCast(self.ptr), active);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn IsActive(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#automatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Automatic(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_Automatic(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutomatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` automatic: bool `
    ///
    pub fn SetAutomatic(self: Sonnet__Highlighter, automatic: bool) void {
        qtc.Sonnet__Highlighter_SetAutomatic(@ptrCast(self.ptr), automatic);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn AutoDetectLanguageDisabled(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_AutoDetectLanguageDisabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` autoDetectDisabled: bool `
    ///
    pub fn SetAutoDetectLanguageDisabled(self: Sonnet__Highlighter, autoDetectDisabled: bool) void {
        qtc.Sonnet__Highlighter_SetAutoDetectLanguageDisabled(@ptrCast(self.ptr), autoDetectDisabled);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#addWordToDictionary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn AddWordToDictionary(self: Sonnet__Highlighter, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_AddWordToDictionary(@ptrCast(self.ptr), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#ignoreWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IgnoreWord(self: Sonnet__Highlighter, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_IgnoreWord(@ptrCast(self.ptr), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    pub fn SuggestionsForWord(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8) []const []const u8 {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SuggestionsForWord2(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8, cursor: anytype) []const []const u8 {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn IsWordMisspelled(self: Sonnet__Highlighter, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Highlighter_IsWordMisspelled(@ptrCast(self.ptr), word_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelledColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` color: QColor `
    ///
    pub fn SetMisspelledColor(self: Sonnet__Highlighter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Sonnet__Highlighter_SetMisspelledColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn CheckerEnabledByDefault(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_CheckerEnabledByDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn SetDocument(self: Sonnet__Highlighter, document: anytype) void {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.Sonnet__Highlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` description: []const u8 `
    ///
    pub fn ActiveChanged(self: Sonnet__Highlighter, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Sonnet__Highlighter_ActiveChanged(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn HighlightBlock(self: Sonnet__Highlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnHighlightBlock(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperHighlightBlock(self: Sonnet__Highlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, start: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnSetMisspelled(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetMisspelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperSetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SuperSetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn UnsetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_UnsetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, start: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnUnsetMisspelled(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnUnsetMisspelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SuperUnsetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SuperUnsetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` o: QObject `
    ///
    /// ` e: QEvent `
    ///
    pub fn EventFilter(self: Sonnet__Highlighter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.Sonnet__Highlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, o: QObject, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` o: QObject `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEventFilter(self: Sonnet__Highlighter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.Sonnet__Highlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn IntraWordEditing(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_IntraWordEditing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIntraWordEditing(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIntraWordEditing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperIntraWordEditing(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_SuperIntraWordEditing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn SetIntraWordEditing(self: Sonnet__Highlighter, editing: bool) void {
        qtc.Sonnet__Highlighter_SetIntraWordEditing(@ptrCast(self.ptr), editing);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, editing: bool) callconv(.c) void `
    ///
    pub fn OnSetIntraWordEditing(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, bool) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetIntraWordEditing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn SuperSetIntraWordEditing(self: Sonnet__Highlighter, editing: bool) void {
        qtc.Sonnet__Highlighter_SuperSetIntraWordEditing(@ptrCast(self.ptr), editing);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setCurrentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` language: []const u8 `
    ///
    pub fn SetCurrentLanguage(self: Sonnet__Highlighter, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.Sonnet__Highlighter_SetCurrentLanguage(@ptrCast(self.ptr), language_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotAutoDetection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SlotAutoDetection(self: Sonnet__Highlighter) void {
        qtc.Sonnet__Highlighter_SlotAutoDetection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotRehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SlotRehighlight(self: Sonnet__Highlighter) void {
        qtc.Sonnet__Highlighter_SlotRehighlight(@ptrCast(self.ptr));
    }

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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__highlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` max: i32 `
    ///
    pub fn SuggestionsForWord22(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8, max: i32) []const []const u8 {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` word: []const u8 `
    ///
    /// ` cursor: QTextCursor `
    ///
    /// ` max: i32 `
    ///
    pub fn SuggestionsForWord3(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8, cursor: anytype, max: i32) []const []const u8 {
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Document(self: Sonnet__Highlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Rehighlight(self: Sonnet__Highlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn RehighlightBlock(self: Sonnet__Highlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Sonnet__Highlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Sonnet__Highlighter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn IsWidgetType(self: Sonnet__Highlighter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn IsWindowType(self: Sonnet__Highlighter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn IsQuickItemType(self: Sonnet__Highlighter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SignalsBlocked(self: Sonnet__Highlighter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Sonnet__Highlighter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Thread(self: Sonnet__Highlighter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Sonnet__Highlighter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Sonnet__Highlighter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Sonnet__Highlighter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Sonnet__Highlighter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Sonnet__Highlighter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Sonnet__Highlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("sonnet__highlighter.Children: Memory allocation failed");
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Sonnet__Highlighter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Sonnet__Highlighter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Sonnet__Highlighter, obj: anytype) void {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Sonnet__Highlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Disconnect3(self: Sonnet__Highlighter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Sonnet__Highlighter, receiver: anytype) bool {
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn DumpObjectTree(self: Sonnet__Highlighter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn DumpObjectInfo(self: Sonnet__Highlighter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Sonnet__Highlighter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Sonnet__Highlighter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Sonnet__Highlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn BindingStorage(self: Sonnet__Highlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn BindingStorage2(self: Sonnet__Highlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Destroyed(self: Sonnet__Highlighter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Parent(self: Sonnet__Highlighter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Sonnet__Highlighter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn DeleteLater(self: Sonnet__Highlighter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Sonnet__Highlighter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Sonnet__Highlighter, time: i64, timerType: i32) i32 {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Sonnet__Highlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Sonnet__Highlighter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Sonnet__Highlighter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Sonnet__Highlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Sonnet__Highlighter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Sonnet__Highlighter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Sonnet__Highlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__Highlighter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Sonnet__Highlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__Highlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Sonnet__Highlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Sonnet__Highlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Sonnet__Highlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Sonnet__Highlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QTimerEvent) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Sonnet__Highlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Sonnet__Highlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Sonnet__Highlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Sonnet__Highlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QChildEvent) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Sonnet__Highlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Sonnet__Highlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Sonnet__Highlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Sonnet__Highlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QEvent) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: Sonnet__Highlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.Sonnet__Highlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SuperSetFormat(self: Sonnet__Highlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.Sonnet__Highlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, start: i32, count: i32, format: QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnSetFormat(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: Sonnet__Highlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.Sonnet__Highlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: Sonnet__Highlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, pos: i32) callconv(.c) QTextCharFormat `
    ///
    pub fn OnFormat(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.Sonnet__Highlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn PreviousBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_PreviousBlockState(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperPreviousBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPreviousBlockState(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn CurrentBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_CurrentBlockState(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperCurrentBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentBlockState(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SetCurrentBlockState(self: Sonnet__Highlighter, newState: i32) void {
        qtc.Sonnet__Highlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SuperSetCurrentBlockState(self: Sonnet__Highlighter, newState: i32) void {
        qtc.Sonnet__Highlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, newState: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockState(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SetCurrentBlockUserData(self: Sonnet__Highlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.Sonnet__Highlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SuperSetCurrentBlockUserData(self: Sonnet__Highlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.Sonnet__Highlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, data: QTextBlockUserData) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockUserData(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn CurrentBlockUserData(self: Sonnet__Highlighter) QTextBlockUserData {
        return .{ .ptr = qtc.Sonnet__Highlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperCurrentBlockUserData(self: Sonnet__Highlighter) QTextBlockUserData {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlockUserData `
    ///
    pub fn OnCurrentBlockUserData(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn CurrentBlock(self: Sonnet__Highlighter) QTextBlock {
        return .{ .ptr = qtc.Sonnet__Highlighter_CurrentBlock(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperCurrentBlock(self: Sonnet__Highlighter) QTextBlock {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    pub fn OnCurrentBlock(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.Sonnet__Highlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Sender(self: Sonnet__Highlighter) QObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperSender(self: Sonnet__Highlighter) QObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.Sonnet__Highlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SenderSignalIndex(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn SuperSenderSignalIndex(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Sonnet__Highlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Sonnet__Highlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Sonnet__Highlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Highlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Sonnet__Highlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Highlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter`
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn Delete(self: Sonnet__Highlighter) void {
        qtc.Sonnet__Highlighter_Delete(@ptrCast(self.ptr));
    }
};
