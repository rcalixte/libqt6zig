const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtextcursor_enums = @import("../libqtextcursor.zig").enums;
const qtextdocument_enums = @import("../libqtextdocument.zig").enums;
const qtextedit_enums = @import("../libqtextedit.zig").enums;
const qtextoption_enums = @import("../libqtextoption.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktextedit.html)
pub const ktextedit = struct {
    /// New constructs a new KTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn New(parent: ?*anyopaque) QtC.KTextEdit {
        return qtc.KTextEdit_new(@ptrCast(parent));
    }

    /// New2 constructs a new KTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QtC.KTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KTextEdit_new2(text_str);
    }

    /// New3 constructs a new KTextEdit object.
    ///
    pub fn New3() QtC.KTextEdit {
        return qtc.KTextEdit_new3();
    }

    /// New4 constructs a new KTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.KTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KTextEdit_new4(text_str, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEdit_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KTextEdit_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEdit_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEdit_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEdit_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEdit_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEdit_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEdit_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEdit_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KTextEdit_SetReadOnly(@ptrCast(self), readOnly);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, readOnly: bool) callconv(.c) void `
    ///
    pub fn OnSetReadOnly(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_OnSetReadOnly(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReadOnly` instead
    ///
    pub const QBaseSetReadOnly = SuperSetReadOnly;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SuperSetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KTextEdit_SuperSetReadOnly(@ptrCast(self), readOnly);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` check: bool `
    ///
    pub fn SetCheckSpellingEnabled(self: ?*anyopaque, check: bool) void {
        qtc.KTextEdit_SetCheckSpellingEnabled(@ptrCast(self), check);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, check: bool) callconv(.c) void `
    ///
    pub fn OnSetCheckSpellingEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_OnSetCheckSpellingEnabled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCheckSpellingEnabled` instead
    ///
    pub const QBaseSetCheckSpellingEnabled = SuperSetCheckSpellingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` check: bool `
    ///
    pub fn SuperSetCheckSpellingEnabled(self: ?*anyopaque, check: bool) void {
        qtc.KTextEdit_SuperSetCheckSpellingEnabled(@ptrCast(self), check);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CheckSpellingEnabled(self: ?*anyopaque) bool {
        return qtc.KTextEdit_CheckSpellingEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCheckSpellingEnabled(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnCheckSpellingEnabled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCheckSpellingEnabled` instead
    ///
    pub const QBaseCheckSpellingEnabled = SuperCheckSpellingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperCheckSpellingEnabled(self: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperCheckSpellingEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` block: []const u8 `
    ///
    pub fn ShouldBlockBeSpellChecked(self: ?*anyopaque, block: []const u8) bool {
        const block_str = qtc.libqt_string{
            .len = block.len,
            .data = block.ptr,
        };
        return qtc.KTextEdit_ShouldBlockBeSpellChecked(@ptrCast(self), block_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, block: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnShouldBlockBeSpellChecked(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEdit_OnShouldBlockBeSpellChecked(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldBlockBeSpellChecked` instead
    ///
    pub const QBaseShouldBlockBeSpellChecked = SuperShouldBlockBeSpellChecked;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` block: []const u8 `
    ///
    pub fn SuperShouldBlockBeSpellChecked(self: ?*anyopaque, block: []const u8) bool {
        const block_str = qtc.libqt_string{
            .len = block.len,
            .data = block.ptr,
        };
        return qtc.KTextEdit_SuperShouldBlockBeSpellChecked(@ptrCast(self), block_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#highlightWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` length: i32 `
    ///
    /// ` pos: i32 `
    ///
    pub fn HighlightWord(self: ?*anyopaque, length: i32, pos: i32) void {
        qtc.KTextEdit_HighlightWord(@ptrCast(self), @bitCast(length), @bitCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#createHighlighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CreateHighlighter(self: ?*anyopaque) void {
        qtc.KTextEdit_CreateHighlighter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreateHighlighter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnCreateHighlighter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateHighlighter` instead
    ///
    pub const QBaseCreateHighlighter = SuperCreateHighlighter;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperCreateHighlighter(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperCreateHighlighter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#highlighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Highlighter(self: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.KTextEdit_Highlighter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setHighlighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` _highLighter: QtC.Sonnet__Highlighter `
    ///
    pub fn SetHighlighter(self: ?*anyopaque, _highLighter: ?*anyopaque) void {
        qtc.KTextEdit_SetHighlighter(@ptrCast(self), @ptrCast(_highLighter));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MousePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KTextEdit_MousePopupMenu(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMenu `
    ///
    pub fn OnMousePopupMenu(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMenu) void {
        qtc.KTextEdit_OnMousePopupMenu(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePopupMenu` instead
    ///
    pub const QBaseMousePopupMenu = SuperMousePopupMenu;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperMousePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KTextEdit_SuperMousePopupMenu(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#enableFindReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnableFindReplace(self: ?*anyopaque, enabled: bool) void {
        qtc.KTextEdit_EnableFindReplace(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpellCheckingLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEdit_SpellCheckingLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.SpellCheckingLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#showTabAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` show: bool `
    ///
    pub fn ShowTabAction(self: ?*anyopaque, show: bool) void {
        qtc.KTextEdit_ShowTabAction(@ptrCast(self), show);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#showAutoCorrectButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` show: bool `
    ///
    pub fn ShowAutoCorrectButton(self: ?*anyopaque, show: bool) void {
        qtc.KTextEdit_ShowAutoCorrectButton(@ptrCast(self), show);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#forceSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ForceSpellChecking(self: ?*anyopaque) void {
        qtc.KTextEdit_ForceSpellChecking(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: bool `
    ///
    pub fn CheckSpellingChanged(self: ?*anyopaque, param1: bool) void {
        qtc.KTextEdit_CheckSpellingChanged(@ptrCast(self), param1);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: bool) callconv(.c) void `
    ///
    pub fn OnCheckSpellingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_Connect_CheckSpellingChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SpellCheckStatus(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KTextEdit_SpellCheckStatus(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckStatus)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSpellCheckStatus(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckStatus(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#languageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` language: []const u8 `
    ///
    pub fn LanguageChanged(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.KTextEdit_LanguageChanged(@ptrCast(self), language_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#languageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, language: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLanguageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_LanguageChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` menu: QtC.QMenu `
    ///
    pub fn AboutToShowContextMenu(self: ?*anyopaque, menu: ?*anyopaque) void {
        qtc.KTextEdit_AboutToShowContextMenu(@ptrCast(self), @ptrCast(menu));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, menu: QtC.QMenu) callconv(.c) void `
    ///
    pub fn OnAboutToShowContextMenu(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_AboutToShowContextMenu(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` currentWord: []const u8 `
    ///
    /// ` autoCorrectWord: []const u8 `
    ///
    pub fn SpellCheckerAutoCorrect(self: ?*anyopaque, currentWord: []const u8, autoCorrectWord: []const u8) void {
        const currentWord_str = qtc.libqt_string{
            .len = currentWord.len,
            .data = currentWord.ptr,
        };
        const autoCorrectWord_str = qtc.libqt_string{
            .len = autoCorrectWord.len,
            .data = autoCorrectWord.ptr,
        };
        qtc.KTextEdit_SpellCheckerAutoCorrect(@ptrCast(self), currentWord_str, autoCorrectWord_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, currentWord: [*:0]const u8, autoCorrectWord: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSpellCheckerAutoCorrect(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckerAutoCorrect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SpellCheckingFinished(self: ?*anyopaque) void {
        qtc.KTextEdit_SpellCheckingFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit) callconv(.c) void `
    ///
    pub fn OnSpellCheckingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckingFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SpellCheckingCanceled(self: ?*anyopaque) void {
        qtc.KTextEdit_SpellCheckingCanceled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit) callconv(.c) void `
    ///
    pub fn OnSpellCheckingCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckingCanceled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#setSpellCheckingLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` language: []const u8 `
    ///
    pub fn SetSpellCheckingLanguage(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.KTextEdit_SetSpellCheckingLanguage(@ptrCast(self), language_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#checkSpelling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CheckSpelling(self: ?*anyopaque) void {
        qtc.KTextEdit_CheckSpelling(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ShowSpellConfigDialog(self: ?*anyopaque) void {
        qtc.KTextEdit_ShowSpellConfigDialog(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Replace(self: ?*anyopaque) void {
        qtc.KTextEdit_Replace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#addTextDecorator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` decorator: QtC.Sonnet__SpellCheckDecorator `
    ///
    pub fn AddTextDecorator(self: ?*anyopaque, decorator: ?*anyopaque) void {
        qtc.KTextEdit_AddTextDecorator(@ptrCast(self), @ptrCast(decorator));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#clearDecorator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ClearDecorator(self: ?*anyopaque) void {
        qtc.KTextEdit_ClearDecorator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotDoReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotDoReplace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotDoReplace(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotDoReplace(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotDoReplace` instead
    ///
    pub const QBaseSlotDoReplace = SuperSlotDoReplace;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotDoReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotDoReplace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotReplaceNext(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotReplaceNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotReplaceNext(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotReplaceNext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotReplaceNext` instead
    ///
    pub const QBaseSlotReplaceNext = SuperSlotReplaceNext;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotReplaceNext(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotReplaceNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotDoFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotDoFind(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotDoFind(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotDoFind(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotDoFind(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotDoFind` instead
    ///
    pub const QBaseSlotDoFind = SuperSlotDoFind;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotDoFind(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotDoFind(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotFind(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotFind(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFind)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotFind(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotFind(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotFind` instead
    ///
    pub const QBaseSlotFind = SuperSlotFind;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFind)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotFind(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotFind(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFindNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotFindNext(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotFindNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotFindNext(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotFindNext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotFindNext` instead
    ///
    pub const QBaseSlotFindNext = SuperSlotFindNext;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotFindNext(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotFindNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotFindPrevious(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotFindPrevious(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotFindPrevious(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotFindPrevious(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotFindPrevious` instead
    ///
    pub const QBaseSlotFindPrevious = SuperSlotFindPrevious;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotFindPrevious(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotFindPrevious(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotReplace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotReplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotReplace(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotReplace(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotReplace` instead
    ///
    pub const QBaseSlotReplace = SuperSlotReplace;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotReplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotReplace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SlotSpeakText(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotSpeakText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotSpeakText(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotSpeakText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotSpeakText` instead
    ///
    pub const QBaseSlotSpeakText = SuperSlotSpeakText;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSlotSpeakText(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperSlotSpeakText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QKeyEvent `
    ///
    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnKeyPressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_SuperKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QFocusEvent `
    ///
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnFocusInEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_SuperFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn DeleteWordBack(self: ?*anyopaque) void {
        qtc.KTextEdit_DeleteWordBack(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDeleteWordBack(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnDeleteWordBack(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteWordBack` instead
    ///
    pub const QBaseDeleteWordBack = SuperDeleteWordBack;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperDeleteWordBack(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperDeleteWordBack(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn DeleteWordForward(self: ?*anyopaque) void {
        qtc.KTextEdit_DeleteWordForward(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDeleteWordForward(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnDeleteWordForward(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteWordForward` instead
    ///
    pub const QBaseDeleteWordForward = SuperDeleteWordForward;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperDeleteWordForward(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperDeleteWordForward(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnContextMenuEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_SuperContextMenuEvent(@ptrCast(self), @ptrCast(param1));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` windowIcon: []const u8 `
    ///
    pub fn ShowSpellConfigDialog1(self: ?*anyopaque, windowIcon: []const u8) void {
        const windowIcon_str = qtc.libqt_string{
            .len = windowIcon.len,
            .data = windowIcon.ptr,
        };
        qtc.KTextEdit_ShowSpellConfigDialog1(@ptrCast(self), windowIcon_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` document: QtC.QTextDocument `
    ///
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QTextEdit_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextEdit_Document(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QTextEdit_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_PlaceholderText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextEdit_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TextCursor(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_TextCursor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QTextEdit_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextEdit_SetTextInteractionFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn TextInteractionFlags(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_TextInteractionFlags(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextEdit_FontPointSize(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_FontWeight(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextEdit_FontUnderline(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextEdit_FontItalic(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TextColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextEdit_TextColor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TextBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextEdit_TextBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CurrentFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextEdit_CurrentFont(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_Alignment(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` modifier: QtC.QTextCharFormat `
    ///
    pub fn MergeCurrentCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextEdit_MergeCurrentCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn SetCurrentCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CurrentCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextEdit_CurrentCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextedit_enums.AutoFormattingFlag `
    ///
    pub fn AutoFormatting(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_AutoFormatting(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` features: flag of qtextedit_enums.AutoFormattingFlag `
    ///
    pub fn SetAutoFormatting(self: ?*anyopaque, features: i32) void {
        qtc.QTextEdit_SetAutoFormatting(@ptrCast(self), @bitCast(features));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TabChangesFocus(self: ?*anyopaque) bool {
        return qtc.QTextEdit_TabChangesFocus(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetTabChangesFocus(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetDocumentTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QTextEdit_SetDocumentTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_DocumentTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsUndoRedoEnabled(self: ?*anyopaque) bool {
        return qtc.QTextEdit_IsUndoRedoEnabled(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextEdit_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qtextedit_enums.LineWrapMode `
    ///
    pub fn LineWrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_LineWrapMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` mode: qtextedit_enums.LineWrapMode `
    ///
    pub fn SetLineWrapMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTextEdit_SetLineWrapMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn LineWrapColumnOrWidth(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_LineWrapColumnOrWidth(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetLineWrapColumnOrWidth(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetLineWrapColumnOrWidth(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn WordWrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_WordWrapMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn SetWordWrapMode(self: ?*anyopaque, policy: i32) void {
        qtc.QTextEdit_SetWordWrapMode(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn Find(self: ?*anyopaque, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find(@ptrCast(self), exp_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` exp: QtC.QRegularExpression `
    ///
    pub fn Find2(self: ?*anyopaque, exp: ?*anyopaque) bool {
        return qtc.QTextEdit_Find2(@ptrCast(self), @ptrCast(exp));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMarkdown(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToMarkdown(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn EnsureCursorVisible(self: ?*anyopaque) void {
        qtc.QTextEdit_EnsureCursorVisible(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CreateStandardContextMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` position: QtC.QPoint `
    ///
    pub fn CreateStandardContextMenu2(self: ?*anyopaque, position: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu2(@ptrCast(self), @ptrCast(position));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn CursorForPosition(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_CursorForPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    pub fn CursorRect(self: ?*anyopaque, cursor: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CursorRect2(self: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect2(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn OverwriteMode(self: ?*anyopaque) bool {
        return qtc.QTextEdit_OverwriteMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QTextEdit_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TabStopDistance(self: ?*anyopaque) f64 {
        return qtc.QTextEdit_TabStopDistance(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetTabStopDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QTextEdit_SetTabStopDistance(@ptrCast(self), @bitCast(distance));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CursorWidth(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_CursorWidth(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextEdit_SetCursorWidth(@ptrCast(self), @bitCast(width));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn AcceptRichText(self: ?*anyopaque) bool {
        return qtc.QTextEdit_AcceptRichText(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` accept: bool `
    ///
    pub fn SetAcceptRichText(self: ?*anyopaque, accept: bool) void {
        qtc.QTextEdit_SetAcceptRichText(@ptrCast(self), accept);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` selections: []QtC.QTextEdit__ExtraSelection `
    ///
    pub fn SetExtraSelections(self: ?*anyopaque, selections: []QtC.QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextEdit_SetExtraSelections(@ptrCast(self), selections_list);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtraSelections(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QTextEdit_ExtraSelections(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextEdit__ExtraSelection, _arr.len) catch @panic("ktextedit.ExtraSelections: Memory allocation failed");
        const _data: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn MoveCursor(self: ?*anyopaque, operation: i32) void {
        qtc.QTextEdit_MoveCursor(@ptrCast(self), @bitCast(operation));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CanPaste(self: ?*anyopaque) bool {
        return qtc.QTextEdit_CanPaste(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` printer: QtC.QPagedPaintDevice `
    ///
    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QTextEdit_Print(@ptrCast(self), @ptrCast(printer));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QtC.QVariant `
    ///
    pub fn InputMethodQuery2(self: ?*anyopaque, query: i32, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QTextEdit_InputMethodQuery2(@ptrCast(self), @bitCast(query), @ptrCast(argument));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` s: f64 `
    ///
    pub fn SetFontPointSize(self: ?*anyopaque, s: f64) void {
        qtc.QTextEdit_SetFontPointSize(@ptrCast(self), @bitCast(s));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` fontFamily: []const u8 `
    ///
    pub fn SetFontFamily(self: ?*anyopaque, fontFamily: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
            .len = fontFamily.len,
            .data = fontFamily.ptr,
        };
        qtc.QTextEdit_SetFontFamily(@ptrCast(self), fontFamily_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFontWeight(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetFontWeight(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn SetFontUnderline(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontUnderline(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn SetFontItalic(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontItalic(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` c: QtC.QColor `
    ///
    pub fn SetTextColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` c: QtC.QColor `
    ///
    pub fn SetTextBackgroundColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextBackgroundColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` f: QtC.QFont `
    ///
    pub fn SetCurrentFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QTextEdit_SetAlignment(@ptrCast(self), @bitCast(a));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetPlainText(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetHtml(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn SetMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextEdit_SetMarkdown(@ptrCast(self), markdown_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetText(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Cut(self: ?*anyopaque) void {
        qtc.QTextEdit_Cut(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Copy(self: ?*anyopaque) void {
        qtc.QTextEdit_Copy(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Paste(self: ?*anyopaque) void {
        qtc.QTextEdit_Paste(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QTextEdit_Undo(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QTextEdit_Redo(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QTextEdit_Clear(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QTextEdit_SelectAll(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertPlainText(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertHtml(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_Append(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ScrollToAnchor(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextEdit_ScrollToAnchor(@ptrCast(self), name_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ZoomIn(self: ?*anyopaque) void {
        qtc.QTextEdit_ZoomIn(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ZoomOut(self: ?*anyopaque) void {
        qtc.QTextEdit_ZoomOut(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TextChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_TextChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_TextChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn UndoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_UndoAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_UndoAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn RedoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_RedoAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnRedoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_RedoAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` format: QtC.QTextCharFormat `
    ///
    pub fn CurrentCharFormatChanged(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_CurrentCharFormatChanged(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, format: QtC.QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnCurrentCharFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CurrentCharFormatChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn CopyAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_CopyAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnCopyAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CopyAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_SelectionChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_SelectionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CursorPositionChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_CursorPositionChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CursorPositionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find22(self: ?*anyopaque, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find22(@ptrCast(self), exp_str, @bitCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` exp: QtC.QRegularExpression `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find23(self: ?*anyopaque, exp: ?*anyopaque, options: i32) bool {
        return qtc.QTextEdit_Find23(@ptrCast(self), @ptrCast(exp), @bitCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMarkdown1(self: ?*anyopaque, features: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToMarkdown1(@ptrCast(self), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn MoveCursor2(self: ?*anyopaque, operation: i32, mode: i32) void {
        qtc.QTextEdit_MoveCursor2(@ptrCast(self), @bitCast(operation), @bitCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomIn1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomIn1(@ptrCast(self), @bitCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomOut1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomOut1(@ptrCast(self), @bitCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` scrollbar: QtC.QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` scrollbar: QtC.QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("ktextedit.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` frameRect: QtC.QRect `
    ///
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` style: QtC.QStyle `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` minimumSize: QtC.QSize `
    ///
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` maximumSize: QtC.QSize `
    ///
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` sizeIncrement: QtC.QSize `
    ///
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` baseSize: QtC.QSize `
    ///
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` fixedSize: QtC.QSize `
    ///
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPointF `
    ///
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPoint `
    ///
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPointF `
    ///
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QPoint `
    ///
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` cursor: QtC.QCursor `
    ///
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` mask: QtC.QBitmap `
    ///
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` mask: QtC.QRegion `
    ///
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` effect: QtC.QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWidget `
    ///
    /// ` param2: QtC.QWidget `
    ///
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` focusProxy: QtC.QWidget `
    ///
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QCursor `
    ///
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` key: QtC.QKeySequence `
    ///
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QRegion `
    ///
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QRegion `
    ///
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktextedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` sizePolicy: QtC.QSizePolicy `
    ///
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` layout: QtC.QLayout `
    ///
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i32) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QtC.QRect `
    ///
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @bitCast(dx), @bitCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` before: QtC.QAction `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` before: QtC.QAction `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("ktextedit.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` icon: QtC.QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QtC.QKeySequence `
    ///
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` icon: QtC.QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QtC.QKeySequence `
    ///
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` child: QtC.QWidget `
    ///
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, icon: QtC.QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, pos: QtC.QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: ?*anyopaque) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` target: QtC.QPaintDevice `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` targetOffset: QtC.QPoint `
    ///
    /// ` sourceRegion: QtC.QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` rectangle: QtC.QRect `
    ///
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` key: QtC.QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i32) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktextedit.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktextedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktextedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit) callconv(.c) void `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QtC.QUrl `
    ///
    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.KTextEdit_LoadResource(@ptrCast(self), @bitCast(typeVal), @ptrCast(name));
    }

    /// ### DEPRECATED: Use `SuperLoadResource` instead
    ///
    pub const QBaseLoadResource = SuperLoadResource;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QtC.QUrl `
    ///
    pub fn SuperLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.KTextEdit_SuperLoadResource(@ptrCast(self), @bitCast(typeVal), @ptrCast(name));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, typeVal: i32, name: QtC.QUrl) callconv(.c) QtC.QVariant `
    ///
    pub fn OnLoadResource(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.KTextEdit_OnLoadResource(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: ?*anyopaque, property: i32) QtC.QVariant {
        return qtc.KTextEdit_InputMethodQuery(@ptrCast(self), @bitCast(property));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: ?*anyopaque, property: i32) QtC.QVariant {
        return qtc.KTextEdit_SuperInputMethodQuery(@ptrCast(self), @bitCast(property));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant `
    ///
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.KTextEdit_OnInputMethodQuery(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnKeyReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QResizeEvent `
    ///
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnResizeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QPaintEvent `
    ///
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperPaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnPaintEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMousePressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMouseMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMouseReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMouseDoubleClickEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KTextEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KTextEdit_SuperFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KTextEdit_OnFocusNextPrevChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDragEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDragLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDragMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDropEvent `
    ///
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QDropEvent `
    ///
    pub fn SuperDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDropEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QFocusEvent `
    ///
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnFocusOutEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QShowEvent `
    ///
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QShowEvent `
    ///
    pub fn SuperShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_SuperShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnShowEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnChangeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QWheelEvent `
    ///
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` e: QtC.QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_SuperWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, e: QtC.QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnWheelEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn CreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.KTextEdit_CreateMimeDataFromSelection(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCreateMimeDataFromSelection` instead
    ///
    pub const QBaseCreateMimeDataFromSelection = SuperCreateMimeDataFromSelection;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperCreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.KTextEdit_SuperCreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMimeData `
    ///
    pub fn OnCreateMimeDataFromSelection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMimeData) void {
        qtc.KTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` source: QtC.QMimeData `
    ///
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.KTextEdit_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `SuperCanInsertFromMimeData` instead
    ///
    pub const QBaseCanInsertFromMimeData = SuperCanInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` source: QtC.QMimeData `
    ///
    pub fn SuperCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, source: QtC.QMimeData) callconv(.c) bool `
    ///
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnCanInsertFromMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` source: QtC.QMimeData `
    ///
    pub fn InsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KTextEdit_InsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `SuperInsertFromMimeData` instead
    ///
    pub const QBaseInsertFromMimeData = SuperInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` source: QtC.QMimeData `
    ///
    pub fn SuperInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KTextEdit_SuperInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, source: QtC.QMimeData) callconv(.c) void `
    ///
    pub fn OnInsertFromMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInsertFromMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_SuperInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInputMethodEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.KTextEdit_ScrollContentsBy(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.KTextEdit_SuperScrollContentsBy(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KTextEdit_OnScrollContentsBy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    pub fn DoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KTextEdit_DoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// ### DEPRECATED: Use `SuperDoSetTextCursor` instead
    ///
    pub const QBaseDoSetTextCursor = SuperDoSetTextCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` cursor: QtC.QTextCursor `
    ///
    pub fn SuperDoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KTextEdit_SuperDoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, cursor: QtC.QTextCursor) callconv(.c) void `
    ///
    pub fn OnDoSetTextCursor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDoSetTextCursor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_MinimumSizeHint(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_SuperMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KTextEdit_OnMinimumSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_SizeHint(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_SuperSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KTextEdit_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` viewport: QtC.QWidget `
    ///
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.KTextEdit_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// ### DEPRECATED: Use `SuperSetupViewport` instead
    ///
    pub const QBaseSetupViewport = SuperSetupViewport;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` viewport: QtC.QWidget `
    ///
    pub fn SuperSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.KTextEdit_SuperSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, viewport: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnSetupViewport(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.KTextEdit_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnViewportEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_ViewportSizeHint(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_SuperViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KTextEdit_OnViewportSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` option: QtC.QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KTextEdit_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` option: QtC.QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KTextEdit_SuperInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, option: QtC.QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInitStyleOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_DevType(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_SuperDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEdit_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KTextEdit_SetVisible(@ptrCast(self), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KTextEdit_SuperSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_OnSetVisible(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_HeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_SuperHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KTextEdit_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KTextEdit_HasHeightForWidth(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KTextEdit_PaintEngine(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KTextEdit_SuperPaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KTextEdit_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QEnterEvent `
    ///
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QMoveEvent `
    ///
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QCloseEvent `
    ///
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnCloseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QTabletEvent `
    ///
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnTabletEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QActionEvent `
    ///
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QActionEvent `
    ///
    pub fn SuperActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnActionEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QHideEvent `
    ///
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QHideEvent `
    ///
    pub fn SuperHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnHideEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTextEdit_NativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTextEdit_SuperNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KTextEdit_OnNativeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_Metric(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_SuperMetric(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KTextEdit_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KTextEdit_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KTextEdit_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KTextEdit_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KTextEdit_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KTextEdit_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KTextEdit_SharedPainter(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KTextEdit_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.KTextEdit_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn ZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.KTextEdit_ZoomInF(@ptrCast(self), @bitCast(range));
    }

    /// ### DEPRECATED: Use `SuperZoomInF` instead
    ///
    pub const QBaseZoomInF = SuperZoomInF;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn SuperZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.KTextEdit_SuperZoomInF(@ptrCast(self), @bitCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, range: f32) callconv(.c) void `
    ///
    pub fn OnZoomInF(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.KTextEdit_OnZoomInF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KTextEdit_SetViewportMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperSetViewportMargins` instead
    ///
    pub const QBaseSetViewportMargins = SuperSetViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KTextEdit_SuperSetViewportMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.KTextEdit_OnSetViewportMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.KTextEdit_ViewportMargins(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperViewportMargins` instead
    ///
    pub const QBaseViewportMargins = SuperViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.KTextEdit_SuperViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMargins `
    ///
    pub fn OnViewportMargins(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMargins) void {
        qtc.KTextEdit_OnViewportMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPainter `
    ///
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperDrawFrame` instead
    ///
    pub const QBaseDrawFrame = SuperDrawFrame;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` param1: QtC.QPainter `
    ///
    pub fn SuperDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_SuperDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, param1: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDrawFrame(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KTextEdit_UpdateMicroFocus(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnUpdateMicroFocus(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Create(self: ?*anyopaque) void {
        qtc.KTextEdit_Create(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperCreate(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnCreate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KTextEdit_Destroy(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDestroy` instead
    ///
    pub const QBaseDestroy = SuperDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperDestroy(self: ?*anyopaque) void {
        qtc.KTextEdit_SuperDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTextEdit_OnDestroy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_FocusNextChild(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFocusNextChild` instead
    ///
    pub const QBaseFocusNextChild = SuperFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnFocusNextChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_FocusPreviousChild(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFocusPreviousChild` instead
    ///
    pub const QBaseFocusPreviousChild = SuperFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnFocusPreviousChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEdit_Sender(@ptrCast(self));
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
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEdit_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KTextEdit_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.KTextEdit `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEdit_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEdit_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEdit_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEdit_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEdit_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KTextEdit `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEdit_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KTextEdit_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KTextEdit_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit`
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KTextEdit_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    /// ` callback: *const fn (self: QtC.KTextEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ktextedit.html#dtor.KTextEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEdit `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KTextEdit_Delete(@ptrCast(self));
    }
};
