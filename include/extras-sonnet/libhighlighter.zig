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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Sonnet::Highlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QTextEdit `
    ///
    pub fn new(textEdit: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QTextEdit;
        return .{ .ptr = qtc.Sonnet__Highlighter_new(@ptrCast(textEdit.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Sonnet::Highlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QPlainTextEdit `
    ///
    pub fn new2(textEdit: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QPlainTextEdit;
        return .{ .ptr = qtc.Sonnet__Highlighter_new2(@ptrCast(textEdit.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Sonnet::Highlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QTextEdit `
    ///
    /// ` col: QColor `
    ///
    pub fn new3(textEdit: anytype, col: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QTextEdit;
        comptime _ = @TypeOf(col)._is_QColor;
        return .{ .ptr = qtc.Sonnet__Highlighter_new3(@ptrCast(textEdit.ptr), @ptrCast(col.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new Sonnet::Highlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QPlainTextEdit `
    ///
    /// ` col: QColor `
    ///
    pub fn new4(textEdit: anytype, col: anytype) Sonnet__Highlighter {
        comptime _ = @TypeOf(textEdit)._is_QPlainTextEdit;
        comptime _ = @TypeOf(col)._is_QColor;
        return .{ .ptr = qtc.Sonnet__Highlighter_new4(@ptrCast(textEdit.ptr), @ptrCast(col.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn metaObject(self: Sonnet__Highlighter) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Sonnet__Highlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn superMetaObject(self: Sonnet__Highlighter) QMetaObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Sonnet__Highlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__Highlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Sonnet__Highlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__Highlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: Sonnet__Highlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: Sonnet__Highlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__Highlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Highlighter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `spellCheckerFound` instead
    ///
    pub const SpellCheckerFound = spellCheckerFound;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#spellCheckerFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn spellCheckerFound(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_SpellCheckerFound(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentLanguage` instead
    ///
    pub const CurrentLanguage = currentLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#currentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentLanguage(self: Sonnet__Highlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Sonnet__Highlighter_CurrentLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Highlighter.currentLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` active: bool `
    ///
    pub fn setActive(self: Sonnet__Highlighter, active: bool) void {
        qtc.Sonnet__Highlighter_SetActive(@ptrCast(self.ptr), active);
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn isActive(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `automatic` instead
    ///
    pub const Automatic = automatic;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#automatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn automatic(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_Automatic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutomatic` instead
    ///
    pub const SetAutomatic = setAutomatic;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutomatic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` _automatic: bool `
    ///
    pub fn setAutomatic(self: Sonnet__Highlighter, _automatic: bool) void {
        qtc.Sonnet__Highlighter_SetAutomatic(@ptrCast(self.ptr), _automatic);
    }

    /// ### DEPRECATED: Use `autoDetectLanguageDisabled` instead
    ///
    pub const AutoDetectLanguageDisabled = autoDetectLanguageDisabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn autoDetectLanguageDisabled(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_AutoDetectLanguageDisabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDetectLanguageDisabled` instead
    ///
    pub const SetAutoDetectLanguageDisabled = setAutoDetectLanguageDisabled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` autoDetectDisabled: bool `
    ///
    pub fn setAutoDetectLanguageDisabled(self: Sonnet__Highlighter, autoDetectDisabled: bool) void {
        qtc.Sonnet__Highlighter_SetAutoDetectLanguageDisabled(@ptrCast(self.ptr), autoDetectDisabled);
    }

    /// ### DEPRECATED: Use `addWordToDictionary` instead
    ///
    pub const AddWordToDictionary = addWordToDictionary;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#addWordToDictionary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn addWordToDictionary(self: Sonnet__Highlighter, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_AddWordToDictionary(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `ignoreWord` instead
    ///
    pub const IgnoreWord = ignoreWord;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#ignoreWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn ignoreWord(self: Sonnet__Highlighter, word: []const u8) void {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        qtc.Sonnet__Highlighter_IgnoreWord(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `suggestionsForWord` instead
    ///
    pub const SuggestionsForWord = suggestionsForWord;

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
    pub fn suggestionsForWord(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Highlighter.suggestionsForWord: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Highlighter.suggestionsForWord: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `suggestionsForWord2` instead
    ///
    pub const SuggestionsForWord2 = suggestionsForWord2;

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
    pub fn suggestionsForWord2(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8, cursor: anytype) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Highlighter.suggestionsForWord2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Highlighter.suggestionsForWord2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isWordMisspelled` instead
    ///
    pub const IsWordMisspelled = isWordMisspelled;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isWordMisspelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` word: []const u8 `
    ///
    pub fn isWordMisspelled(self: Sonnet__Highlighter, word: []const u8) bool {
        const word_str = qtc.libqt_string{
            .len = word.len,
            .data = word.ptr,
        };
        return qtc.Sonnet__Highlighter_IsWordMisspelled(@ptrCast(self.ptr), word_str);
    }

    /// ### DEPRECATED: Use `setMisspelledColor` instead
    ///
    pub const SetMisspelledColor = setMisspelledColor;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelledColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` color: QColor `
    ///
    pub fn setMisspelledColor(self: Sonnet__Highlighter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Sonnet__Highlighter_SetMisspelledColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `checkerEnabledByDefault` instead
    ///
    pub const CheckerEnabledByDefault = checkerEnabledByDefault;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn checkerEnabledByDefault(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_CheckerEnabledByDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn setDocument(self: Sonnet__Highlighter, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        qtc.Sonnet__Highlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` description: []const u8 `
    ///
    pub fn activeChanged(self: Sonnet__Highlighter, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Sonnet__Highlighter_ActiveChanged(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` callback: *const fn (self: Sonnet__Highlighter, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onActiveChanged(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highlightBlock` instead
    ///
    pub const HighlightBlock = highlightBlock;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn highlightBlock(self: Sonnet__Highlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onHighlightBlock` instead
    ///
    pub const OnHighlightBlock = onHighlightBlock;

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
    pub fn onHighlightBlock(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHighlightBlock` instead
    ///
    pub const SuperHighlightBlock = superHighlightBlock;

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
    pub fn superHighlightBlock(self: Sonnet__Highlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Sonnet__Highlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setMisspelled` instead
    ///
    pub const SetMisspelled = setMisspelled;

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
    pub fn setMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onSetMisspelled` instead
    ///
    pub const OnSetMisspelled = onSetMisspelled;

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
    pub fn onSetMisspelled(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetMisspelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMisspelled` instead
    ///
    pub const SuperSetMisspelled = superSetMisspelled;

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
    pub fn superSetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SuperSetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### DEPRECATED: Use `unsetMisspelled` instead
    ///
    pub const UnsetMisspelled = unsetMisspelled;

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
    pub fn unsetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_UnsetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onUnsetMisspelled` instead
    ///
    pub const OnUnsetMisspelled = onUnsetMisspelled;

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
    pub fn onUnsetMisspelled(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnUnsetMisspelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnsetMisspelled` instead
    ///
    pub const SuperUnsetMisspelled = superUnsetMisspelled;

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
    pub fn superUnsetMisspelled(self: Sonnet__Highlighter, start: i32, count: i32) void {
        qtc.Sonnet__Highlighter_SuperUnsetMisspelled(@ptrCast(self.ptr), @bitCast(start), @bitCast(count));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    pub fn eventFilter(self: Sonnet__Highlighter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.Sonnet__Highlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    pub fn superEventFilter(self: Sonnet__Highlighter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.Sonnet__Highlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `intraWordEditing` instead
    ///
    pub const IntraWordEditing = intraWordEditing;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn intraWordEditing(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_IntraWordEditing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIntraWordEditing` instead
    ///
    pub const OnIntraWordEditing = onIntraWordEditing;

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
    pub fn onIntraWordEditing(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIntraWordEditing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIntraWordEditing` instead
    ///
    pub const SuperIntraWordEditing = superIntraWordEditing;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn superIntraWordEditing(self: Sonnet__Highlighter) bool {
        return qtc.Sonnet__Highlighter_SuperIntraWordEditing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIntraWordEditing` instead
    ///
    pub const SetIntraWordEditing = setIntraWordEditing;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` editing: bool `
    ///
    pub fn setIntraWordEditing(self: Sonnet__Highlighter, editing: bool) void {
        qtc.Sonnet__Highlighter_SetIntraWordEditing(@ptrCast(self.ptr), editing);
    }

    /// ### DEPRECATED: Use `onSetIntraWordEditing` instead
    ///
    pub const OnSetIntraWordEditing = onSetIntraWordEditing;

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
    pub fn onSetIntraWordEditing(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, bool) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetIntraWordEditing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIntraWordEditing` instead
    ///
    pub const SuperSetIntraWordEditing = superSetIntraWordEditing;

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
    pub fn superSetIntraWordEditing(self: Sonnet__Highlighter, editing: bool) void {
        qtc.Sonnet__Highlighter_SuperSetIntraWordEditing(@ptrCast(self.ptr), editing);
    }

    /// ### DEPRECATED: Use `setCurrentLanguage` instead
    ///
    pub const SetCurrentLanguage = setCurrentLanguage;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setCurrentLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` language: []const u8 `
    ///
    pub fn setCurrentLanguage(self: Sonnet__Highlighter, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.Sonnet__Highlighter_SetCurrentLanguage(@ptrCast(self.ptr), language_str);
    }

    /// ### DEPRECATED: Use `slotAutoDetection` instead
    ///
    pub const SlotAutoDetection = slotAutoDetection;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotAutoDetection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn slotAutoDetection(self: Sonnet__Highlighter) void {
        qtc.Sonnet__Highlighter_SlotAutoDetection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotRehighlight` instead
    ///
    pub const SlotRehighlight = slotRehighlight;

    /// ### [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotRehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn slotRehighlight(self: Sonnet__Highlighter) void {
        qtc.Sonnet__Highlighter_SlotRehighlight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Highlighter.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Highlighter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `suggestionsForWord22` instead
    ///
    pub const SuggestionsForWord22 = suggestionsForWord22;

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
    pub fn suggestionsForWord22(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8, max: i32) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Highlighter.suggestionsForWord22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Highlighter.suggestionsForWord22: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `suggestionsForWord3` instead
    ///
    pub const SuggestionsForWord3 = suggestionsForWord3;

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
    pub fn suggestionsForWord3(self: Sonnet__Highlighter, allocator: std.mem.Allocator, word: []const u8, cursor: anytype, max: i32) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Sonnet__Highlighter.suggestionsForWord3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Highlighter.suggestionsForWord3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn document(self: Sonnet__Highlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rehighlight` instead
    ///
    pub const Rehighlight = rehighlight;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn rehighlight(self: Sonnet__Highlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rehighlightBlock` instead
    ///
    pub const RehighlightBlock = rehighlightBlock;

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
    pub fn rehighlightBlock(self: Sonnet__Highlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: Sonnet__Highlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Sonnet__Highlighter.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: Sonnet__Highlighter, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn isWidgetType(self: Sonnet__Highlighter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn isWindowType(self: Sonnet__Highlighter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn isQuickItemType(self: Sonnet__Highlighter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn signalsBlocked(self: Sonnet__Highlighter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: Sonnet__Highlighter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn thread(self: Sonnet__Highlighter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Sonnet__Highlighter, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: Sonnet__Highlighter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: Sonnet__Highlighter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: Sonnet__Highlighter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: Sonnet__Highlighter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: Sonnet__Highlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Sonnet__Highlighter.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Sonnet__Highlighter, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: Sonnet__Highlighter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: Sonnet__Highlighter, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Sonnet__Highlighter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn disconnect3(self: Sonnet__Highlighter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: Sonnet__Highlighter, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn dumpObjectTree(self: Sonnet__Highlighter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn dumpObjectInfo(self: Sonnet__Highlighter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: Sonnet__Highlighter, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: Sonnet__Highlighter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: Sonnet__Highlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Sonnet__Highlighter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Sonnet__Highlighter.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn bindingStorage(self: Sonnet__Highlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn bindingStorage2(self: Sonnet__Highlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn destroyed(self: Sonnet__Highlighter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn parent(self: Sonnet__Highlighter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: Sonnet__Highlighter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn deleteLater(self: Sonnet__Highlighter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: Sonnet__Highlighter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: Sonnet__Highlighter, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Sonnet__Highlighter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: Sonnet__Highlighter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: Sonnet__Highlighter, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: Sonnet__Highlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: Sonnet__Highlighter, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: Sonnet__Highlighter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: Sonnet__Highlighter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__Highlighter_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Sonnet__Highlighter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Sonnet__Highlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Sonnet__Highlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Sonnet__Highlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Sonnet__Highlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Sonnet__Highlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QTimerEvent) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Sonnet__Highlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Sonnet__Highlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Sonnet__Highlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Sonnet__Highlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QChildEvent) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Sonnet__Highlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Sonnet__Highlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Sonnet__Highlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Sonnet__Highlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QEvent) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: Sonnet__Highlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__Highlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

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
    /// ` _format: QTextCharFormat `
    ///
    pub fn setFormat(self: Sonnet__Highlighter, start: i32, count: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.Sonnet__Highlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `superSetFormat` instead
    ///
    pub const SuperSetFormat = superSetFormat;

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
    /// ` _format: QTextCharFormat `
    ///
    pub fn superSetFormat(self: Sonnet__Highlighter, start: i32, count: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.Sonnet__Highlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormat` instead
    ///
    pub const OnSetFormat = onSetFormat;

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
    pub fn onSetFormat(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

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
    pub fn format(self: Sonnet__Highlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.Sonnet__Highlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

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
    pub fn superFormat(self: Sonnet__Highlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.Sonnet__Highlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `previousBlockState` instead
    ///
    pub const PreviousBlockState = previousBlockState;

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
    pub fn previousBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_PreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPreviousBlockState` instead
    ///
    pub const SuperPreviousBlockState = superPreviousBlockState;

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
    pub fn superPreviousBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreviousBlockState` instead
    ///
    pub const OnPreviousBlockState = onPreviousBlockState;

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
    pub fn onPreviousBlockState(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentBlockState` instead
    ///
    pub const CurrentBlockState = currentBlockState;

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
    pub fn currentBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_CurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCurrentBlockState` instead
    ///
    pub const SuperCurrentBlockState = superCurrentBlockState;

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
    pub fn superCurrentBlockState(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentBlockState` instead
    ///
    pub const OnCurrentBlockState = onCurrentBlockState;

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
    pub fn onCurrentBlockState(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCurrentBlockState` instead
    ///
    pub const SetCurrentBlockState = setCurrentBlockState;

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
    pub fn setCurrentBlockState(self: Sonnet__Highlighter, newState: i32) void {
        qtc.Sonnet__Highlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `superSetCurrentBlockState` instead
    ///
    pub const SuperSetCurrentBlockState = superSetCurrentBlockState;

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
    pub fn superSetCurrentBlockState(self: Sonnet__Highlighter, newState: i32) void {
        qtc.Sonnet__Highlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `onSetCurrentBlockState` instead
    ///
    pub const OnSetCurrentBlockState = onSetCurrentBlockState;

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
    pub fn onSetCurrentBlockState(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, i32) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCurrentBlockUserData` instead
    ///
    pub const SetCurrentBlockUserData = setCurrentBlockUserData;

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
    pub fn setCurrentBlockUserData(self: Sonnet__Highlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.Sonnet__Highlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `superSetCurrentBlockUserData` instead
    ///
    pub const SuperSetCurrentBlockUserData = superSetCurrentBlockUserData;

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
    pub fn superSetCurrentBlockUserData(self: Sonnet__Highlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.Sonnet__Highlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onSetCurrentBlockUserData` instead
    ///
    pub const OnSetCurrentBlockUserData = onSetCurrentBlockUserData;

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
    pub fn onSetCurrentBlockUserData(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.Sonnet__Highlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentBlockUserData` instead
    ///
    pub const CurrentBlockUserData = currentBlockUserData;

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
    pub fn currentBlockUserData(self: Sonnet__Highlighter) QTextBlockUserData {
        return .{ .ptr = qtc.Sonnet__Highlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCurrentBlockUserData` instead
    ///
    pub const SuperCurrentBlockUserData = superCurrentBlockUserData;

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
    pub fn superCurrentBlockUserData(self: Sonnet__Highlighter) QTextBlockUserData {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentBlockUserData` instead
    ///
    pub const OnCurrentBlockUserData = onCurrentBlockUserData;

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
    pub fn onCurrentBlockUserData(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.Sonnet__Highlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentBlock` instead
    ///
    pub const CurrentBlock = currentBlock;

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
    pub fn currentBlock(self: Sonnet__Highlighter) QTextBlock {
        return .{ .ptr = qtc.Sonnet__Highlighter_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCurrentBlock` instead
    ///
    pub const SuperCurrentBlock = superCurrentBlock;

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
    pub fn superCurrentBlock(self: Sonnet__Highlighter) QTextBlock {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentBlock` instead
    ///
    pub const OnCurrentBlock = onCurrentBlock;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCurrentBlock(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.Sonnet__Highlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: Sonnet__Highlighter) QObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: Sonnet__Highlighter) QObject {
        return .{ .ptr = qtc.Sonnet__Highlighter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.Sonnet__Highlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: Sonnet__Highlighter) i32 {
        return qtc.Sonnet__Highlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: Sonnet__Highlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: Sonnet__Highlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: Sonnet__Highlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__Highlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__Highlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: Sonnet__Highlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Highlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: Sonnet__Highlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__Highlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.Sonnet__Highlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: Sonnet__Highlighter, callback: *const fn (Sonnet__Highlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__Highlighter `
    ///
    pub fn delete(self: Sonnet__Highlighter) void {
        qtc.Sonnet__Highlighter_Delete(@ptrCast(self.ptr));
    }
};
