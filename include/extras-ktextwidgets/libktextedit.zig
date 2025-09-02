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

/// https://api-staging.kde.org/ktextedit.html
pub const ktextedit = struct {
    /// New constructs a new KTextEdit object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KTextEdit {
        return qtc.KTextEdit_new(@ptrCast(parent));
    }

    /// New2 constructs a new KTextEdit object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.KTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KTextEdit_new2(text_str);
    }

    /// New3 constructs a new KTextEdit object.
    ///
    ///
    pub fn New3() QtC.KTextEdit {
        return qtc.KTextEdit_new3();
    }

    /// New4 constructs a new KTextEdit object.
    ///
    /// ``` text: []const u8, parent: QtC.QWidget ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.KTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KTextEdit_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEdit_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KTextEdit, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEdit_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEdit_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEdit_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEdit_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KTextEdit_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setReadOnly)
    ///
    /// ``` self: QtC.KTextEdit, readOnly: bool ```
    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KTextEdit_SetReadOnly(@ptrCast(self), readOnly);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, readOnly: bool) callconv(.c) void ```
    pub fn OnSetReadOnly(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_OnSetReadOnly(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, readOnly: bool ```
    pub fn QBaseSetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KTextEdit_QBaseSetReadOnly(@ptrCast(self), readOnly);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// ``` self: QtC.KTextEdit, check: bool ```
    pub fn SetCheckSpellingEnabled(self: ?*anyopaque, check: bool) void {
        qtc.KTextEdit_SetCheckSpellingEnabled(@ptrCast(self), check);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, check: bool) callconv(.c) void ```
    pub fn OnSetCheckSpellingEnabled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_OnSetCheckSpellingEnabled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, check: bool ```
    pub fn QBaseSetCheckSpellingEnabled(self: ?*anyopaque, check: bool) void {
        qtc.KTextEdit_QBaseSetCheckSpellingEnabled(@ptrCast(self), check);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CheckSpellingEnabled(self: ?*anyopaque) bool {
        return qtc.KTextEdit_CheckSpellingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnCheckSpellingEnabled(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnCheckSpellingEnabled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseCheckSpellingEnabled(self: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseCheckSpellingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// ``` self: QtC.KTextEdit, block: []const u8 ```
    pub fn ShouldBlockBeSpellChecked(self: ?*anyopaque, block: []const u8) bool {
        const block_str = qtc.libqt_string{
            .len = block.len,
            .data = block.ptr,
        };
        return qtc.KTextEdit_ShouldBlockBeSpellChecked(@ptrCast(self), block_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, block: [*:0]const u8) callconv(.c) bool ```
    pub fn OnShouldBlockBeSpellChecked(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEdit_OnShouldBlockBeSpellChecked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, block: []const u8 ```
    pub fn QBaseShouldBlockBeSpellChecked(self: ?*anyopaque, block: []const u8) bool {
        const block_str = qtc.libqt_string{
            .len = block.len,
            .data = block.ptr,
        };
        return qtc.KTextEdit_QBaseShouldBlockBeSpellChecked(@ptrCast(self), block_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#highlightWord)
    ///
    /// ``` self: QtC.KTextEdit, length: i32, pos: i32 ```
    pub fn HighlightWord(self: ?*anyopaque, length: i32, pos: i32) void {
        qtc.KTextEdit_HighlightWord(@ptrCast(self), @intCast(length), @intCast(pos));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#createHighlighter)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CreateHighlighter(self: ?*anyopaque) void {
        qtc.KTextEdit_CreateHighlighter(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnCreateHighlighter(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnCreateHighlighter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseCreateHighlighter(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseCreateHighlighter(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#highlighter)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Highlighter(self: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.KTextEdit_Highlighter(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setHighlighter)
    ///
    /// ``` self: QtC.KTextEdit, _highLighter: QtC.Sonnet__Highlighter ```
    pub fn SetHighlighter(self: ?*anyopaque, _highLighter: ?*anyopaque) void {
        qtc.KTextEdit_SetHighlighter(@ptrCast(self), @ptrCast(_highLighter));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MousePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KTextEdit_MousePopupMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QMenu ```
    pub fn OnMousePopupMenu(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMenu) void {
        qtc.KTextEdit_OnMousePopupMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseMousePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KTextEdit_QBaseMousePopupMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#enableFindReplace)
    ///
    /// ``` self: QtC.KTextEdit, enabled: bool ```
    pub fn EnableFindReplace(self: ?*anyopaque, enabled: bool) void {
        qtc.KTextEdit_EnableFindReplace(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingLanguage)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn SpellCheckingLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEdit_SpellCheckingLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.SpellCheckingLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showTabAction)
    ///
    /// ``` self: QtC.KTextEdit, show: bool ```
    pub fn ShowTabAction(self: ?*anyopaque, show: bool) void {
        qtc.KTextEdit_ShowTabAction(@ptrCast(self), show);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showAutoCorrectButton)
    ///
    /// ``` self: QtC.KTextEdit, show: bool ```
    pub fn ShowAutoCorrectButton(self: ?*anyopaque, show: bool) void {
        qtc.KTextEdit_ShowAutoCorrectButton(@ptrCast(self), show);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#forceSpellChecking)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ForceSpellChecking(self: ?*anyopaque) void {
        qtc.KTextEdit_ForceSpellChecking(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingChanged)
    ///
    /// ``` self: QtC.KTextEdit, param1: bool ```
    pub fn CheckSpellingChanged(self: ?*anyopaque, param1: bool) void {
        qtc.KTextEdit_CheckSpellingChanged(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: bool) callconv(.c) void ```
    pub fn OnCheckSpellingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_Connect_CheckSpellingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckStatus)
    ///
    /// ``` self: QtC.KTextEdit, param1: []const u8 ```
    pub fn SpellCheckStatus(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KTextEdit_SpellCheckStatus(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckStatus)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnSpellCheckStatus(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckStatus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#languageChanged)
    ///
    /// ``` self: QtC.KTextEdit, language: []const u8 ```
    pub fn LanguageChanged(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.KTextEdit_LanguageChanged(@ptrCast(self), language_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#languageChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, language: [*:0]const u8) callconv(.c) void ```
    pub fn OnLanguageChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_LanguageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#aboutToShowContextMenu)
    ///
    /// ``` self: QtC.KTextEdit, menu: QtC.QMenu ```
    pub fn AboutToShowContextMenu(self: ?*anyopaque, menu: ?*anyopaque) void {
        qtc.KTextEdit_AboutToShowContextMenu(@ptrCast(self), @ptrCast(menu));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#aboutToShowContextMenu)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, menu: QtC.QMenu) callconv(.c) void ```
    pub fn OnAboutToShowContextMenu(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_AboutToShowContextMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckerAutoCorrect)
    ///
    /// ``` self: QtC.KTextEdit, currentWord: []const u8, autoCorrectWord: []const u8 ```
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

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckerAutoCorrect)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, currentWord: [*:0]const u8, autoCorrectWord: [*:0]const u8) callconv(.c) void ```
    pub fn OnSpellCheckerAutoCorrect(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckerAutoCorrect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingFinished)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SpellCheckingFinished(self: ?*anyopaque) void {
        qtc.KTextEdit_SpellCheckingFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingFinished)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit) callconv(.c) void ```
    pub fn OnSpellCheckingFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckingFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingCanceled)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SpellCheckingCanceled(self: ?*anyopaque) void {
        qtc.KTextEdit_SpellCheckingCanceled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingCanceled)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit) callconv(.c) void ```
    pub fn OnSpellCheckingCanceled(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckingCanceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setSpellCheckingLanguage)
    ///
    /// ``` self: QtC.KTextEdit, language: []const u8 ```
    pub fn SetSpellCheckingLanguage(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.KTextEdit_SetSpellCheckingLanguage(@ptrCast(self), language_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpelling)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CheckSpelling(self: ?*anyopaque) void {
        qtc.KTextEdit_CheckSpelling(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showSpellConfigDialog)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ShowSpellConfigDialog(self: ?*anyopaque) void {
        qtc.KTextEdit_ShowSpellConfigDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#replace)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Replace(self: ?*anyopaque) void {
        qtc.KTextEdit_Replace(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#addTextDecorator)
    ///
    /// ``` self: QtC.KTextEdit, decorator: QtC.Sonnet__SpellCheckDecorator ```
    pub fn AddTextDecorator(self: ?*anyopaque, decorator: ?*anyopaque) void {
        qtc.KTextEdit_AddTextDecorator(@ptrCast(self), @ptrCast(decorator));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#clearDecorator)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ClearDecorator(self: ?*anyopaque) void {
        qtc.KTextEdit_ClearDecorator(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotDoReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotDoReplace(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotDoReplace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotDoReplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotDoReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotDoReplace(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotReplaceNext(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotReplaceNext(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotReplaceNext(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotReplaceNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotReplaceNext(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotReplaceNext(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoFind)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotDoFind(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotDoFind(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotDoFind(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotDoFind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotDoFind(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotDoFind(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFind)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotFind(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotFind(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFind)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotFind(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotFind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFind)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotFind(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotFind(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindNext)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotFindNext(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotFindNext(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotFindNext(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotFindNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotFindNext(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotFindNext(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotFindPrevious(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotFindPrevious(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotFindPrevious(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotFindPrevious(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotFindPrevious(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotFindPrevious(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplace)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotReplace(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotReplace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotReplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplace)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotReplace(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotReplace(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SlotSpeakText(self: ?*anyopaque) void {
        qtc.KTextEdit_SlotSpeakText(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotSpeakText(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnSlotSpeakText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSlotSpeakText(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSlotSpeakText(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#event)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#keyPressEvent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#focusInEvent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DeleteWordBack(self: ?*anyopaque) void {
        qtc.KTextEdit_DeleteWordBack(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDeleteWordBack(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnDeleteWordBack(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseDeleteWordBack(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDeleteWordBack(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DeleteWordForward(self: ?*anyopaque) void {
        qtc.KTextEdit_DeleteWordForward(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDeleteWordForward(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnDeleteWordForward(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseDeleteWordForward(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDeleteWordForward(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEdit_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEdit_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showSpellConfigDialog)
    ///
    /// ``` self: QtC.KTextEdit, windowIcon: []const u8 ```
    pub fn ShowSpellConfigDialog1(self: ?*anyopaque, windowIcon: []const u8) void {
        const windowIcon_str = qtc.libqt_string{
            .len = windowIcon.len,
            .data = windowIcon.ptr,
        };
        qtc.KTextEdit_ShowSpellConfigDialog1(@ptrCast(self), windowIcon_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
    ///
    /// ``` self: QtC.KTextEdit, document: QtC.QTextDocument ```
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QTextEdit_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextEdit_Document(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
    ///
    /// ``` self: QtC.KTextEdit, placeholderText: []const u8 ```
    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QTextEdit_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn PlaceholderText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_PlaceholderText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
    ///
    /// ``` self: QtC.KTextEdit, cursor: QtC.QTextCursor ```
    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextEdit_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TextCursor(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_TextCursor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QTextEdit_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
    ///
    /// ``` self: QtC.KTextEdit, flags: flag of qnamespace_enums.TextInteractionFlag ```
    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextEdit_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.TextInteractionFlag ```
    pub fn TextInteractionFlags(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_TextInteractionFlags(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextEdit_FontPointSize(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_FontWeight(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextEdit_FontUnderline(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextEdit_FontItalic(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TextColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextEdit_TextColor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TextBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextEdit_TextBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CurrentFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextEdit_CurrentFont(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_Alignment(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
    ///
    /// ``` self: QtC.KTextEdit, modifier: QtC.QTextCharFormat ```
    pub fn MergeCurrentCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextEdit_MergeCurrentCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
    ///
    /// ``` self: QtC.KTextEdit, format: QtC.QTextCharFormat ```
    pub fn SetCurrentCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CurrentCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextEdit_CurrentCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` flag of qtextedit_enums.AutoFormattingFlag ```
    pub fn AutoFormatting(self: ?*anyopaque) i64 {
        return qtc.QTextEdit_AutoFormatting(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
    ///
    /// ``` self: QtC.KTextEdit, features: flag of qtextedit_enums.AutoFormattingFlag ```
    pub fn SetAutoFormatting(self: ?*anyopaque, features: i64) void {
        qtc.QTextEdit_SetAutoFormatting(@ptrCast(self), @intCast(features));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TabChangesFocus(self: ?*anyopaque) bool {
        return qtc.QTextEdit_TabChangesFocus(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetTabChangesFocus(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
    ///
    /// ``` self: QtC.KTextEdit, title: []const u8 ```
    pub fn SetDocumentTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QTextEdit_SetDocumentTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn DocumentTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_DocumentTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsUndoRedoEnabled(self: ?*anyopaque) bool {
        return qtc.QTextEdit_IsUndoRedoEnabled(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
    ///
    /// ``` self: QtC.KTextEdit, enable: bool ```
    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextEdit_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qtextedit_enums.LineWrapMode ```
    pub fn LineWrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_LineWrapMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
    ///
    /// ``` self: QtC.KTextEdit, mode: qtextedit_enums.LineWrapMode ```
    pub fn SetLineWrapMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTextEdit_SetLineWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn LineWrapColumnOrWidth(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_LineWrapColumnOrWidth(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
    ///
    /// ``` self: QtC.KTextEdit, w: i32 ```
    pub fn SetLineWrapColumnOrWidth(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetLineWrapColumnOrWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qtextoption_enums.WrapMode ```
    pub fn WordWrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_WordWrapMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
    ///
    /// ``` self: QtC.KTextEdit, policy: qtextoption_enums.WrapMode ```
    pub fn SetWordWrapMode(self: ?*anyopaque, policy: i32) void {
        qtc.QTextEdit_SetWordWrapMode(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ``` self: QtC.KTextEdit, exp: []const u8 ```
    pub fn Find(self: ?*anyopaque, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find(@ptrCast(self), exp_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ``` self: QtC.KTextEdit, exp: QtC.QRegularExpression ```
    pub fn Find2(self: ?*anyopaque, exp: ?*anyopaque) bool {
        return qtc.QTextEdit_Find2(@ptrCast(self), @ptrCast(exp));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn ToHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn ToMarkdown(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToMarkdown(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn EnsureCursorVisible(self: ?*anyopaque) void {
        qtc.QTextEdit_EnsureCursorVisible(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CreateStandardContextMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ``` self: QtC.KTextEdit, position: QtC.QPoint ```
    pub fn CreateStandardContextMenu2(self: ?*anyopaque, position: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu2(@ptrCast(self), @ptrCast(position));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
    ///
    /// ``` self: QtC.KTextEdit, pos: QtC.QPoint ```
    pub fn CursorForPosition(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_CursorForPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ``` self: QtC.KTextEdit, cursor: QtC.QTextCursor ```
    pub fn CursorRect(self: ?*anyopaque, cursor: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CursorRect2(self: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect2(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
    ///
    /// ``` self: QtC.KTextEdit, pos: QtC.QPoint, allocator: std.mem.Allocator ```
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn OverwriteMode(self: ?*anyopaque) bool {
        return qtc.QTextEdit_OverwriteMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
    ///
    /// ``` self: QtC.KTextEdit, overwrite: bool ```
    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QTextEdit_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TabStopDistance(self: ?*anyopaque) f64 {
        return qtc.QTextEdit_TabStopDistance(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
    ///
    /// ``` self: QtC.KTextEdit, distance: f64 ```
    pub fn SetTabStopDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QTextEdit_SetTabStopDistance(@ptrCast(self), @floatCast(distance));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CursorWidth(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_CursorWidth(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
    ///
    /// ``` self: QtC.KTextEdit, width: i32 ```
    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextEdit_SetCursorWidth(@ptrCast(self), @intCast(width));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn AcceptRichText(self: ?*anyopaque) bool {
        return qtc.QTextEdit_AcceptRichText(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
    ///
    /// ``` self: QtC.KTextEdit, accept: bool ```
    pub fn SetAcceptRichText(self: ?*anyopaque, accept: bool) void {
        qtc.QTextEdit_SetAcceptRichText(@ptrCast(self), accept);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
    ///
    /// ``` self: QtC.KTextEdit, selections: []QtC.QTextEdit__ExtraSelection ```
    pub fn SetExtraSelections(self: ?*anyopaque, selections: []QtC.QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextEdit_SetExtraSelections(@ptrCast(self), selections_list);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ``` self: QtC.KTextEdit, operation: qtextcursor_enums.MoveOperation ```
    pub fn MoveCursor(self: ?*anyopaque, operation: i32) void {
        qtc.QTextEdit_MoveCursor(@ptrCast(self), @intCast(operation));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CanPaste(self: ?*anyopaque) bool {
        return qtc.QTextEdit_CanPaste(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
    ///
    /// ``` self: QtC.KTextEdit, printer: QtC.QPagedPaintDevice ```
    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QTextEdit_Print(@ptrCast(self), @ptrCast(printer));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// ``` self: QtC.KTextEdit, query: qnamespace_enums.InputMethodQuery, argument: QtC.QVariant ```
    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QTextEdit_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
    ///
    /// ``` self: QtC.KTextEdit, s: f64 ```
    pub fn SetFontPointSize(self: ?*anyopaque, s: f64) void {
        qtc.QTextEdit_SetFontPointSize(@ptrCast(self), @floatCast(s));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
    ///
    /// ``` self: QtC.KTextEdit, fontFamily: []const u8 ```
    pub fn SetFontFamily(self: ?*anyopaque, fontFamily: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
            .len = fontFamily.len,
            .data = fontFamily.ptr,
        };
        qtc.QTextEdit_SetFontFamily(@ptrCast(self), fontFamily_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
    ///
    /// ``` self: QtC.KTextEdit, w: i32 ```
    pub fn SetFontWeight(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetFontWeight(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn SetFontUnderline(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontUnderline(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn SetFontItalic(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontItalic(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
    ///
    /// ``` self: QtC.KTextEdit, c: QtC.QColor ```
    pub fn SetTextColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
    ///
    /// ``` self: QtC.KTextEdit, c: QtC.QColor ```
    pub fn SetTextBackgroundColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextBackgroundColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
    ///
    /// ``` self: QtC.KTextEdit, f: QtC.QFont ```
    pub fn SetCurrentFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
    ///
    /// ``` self: QtC.KTextEdit, a: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QTextEdit_SetAlignment(@ptrCast(self), @intCast(a));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetPlainText(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn SetHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetHtml(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
    ///
    /// ``` self: QtC.KTextEdit, markdown: []const u8 ```
    pub fn SetMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextEdit_SetMarkdown(@ptrCast(self), markdown_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setText)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetText(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cut)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Cut(self: ?*anyopaque) void {
        qtc.QTextEdit_Cut(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Copy(self: ?*anyopaque) void {
        qtc.QTextEdit_Copy(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Paste(self: ?*anyopaque) void {
        qtc.QTextEdit_Paste(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QTextEdit_Undo(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QTextEdit_Redo(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QTextEdit_Clear(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QTextEdit_SelectAll(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn InsertPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertPlainText(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn InsertHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertHtml(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#append)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn Append(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_Append(@ptrCast(self), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
    ///
    /// ``` self: QtC.KTextEdit, name: []const u8 ```
    pub fn ScrollToAnchor(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextEdit_ScrollToAnchor(@ptrCast(self), name_str);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ZoomIn(self: ?*anyopaque) void {
        qtc.QTextEdit_ZoomIn(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ZoomOut(self: ?*anyopaque) void {
        qtc.QTextEdit_ZoomOut(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TextChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_TextChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_TextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn UndoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_UndoAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, b: bool) callconv(.c) void ```
    pub fn OnUndoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_UndoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn RedoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_RedoAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, b: bool) callconv(.c) void ```
    pub fn OnRedoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_RedoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ``` self: QtC.KTextEdit, format: QtC.QTextCharFormat ```
    pub fn CurrentCharFormatChanged(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_CurrentCharFormatChanged(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, format: QtC.QTextCharFormat) callconv(.c) void ```
    pub fn OnCurrentCharFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CurrentCharFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn CopyAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_CopyAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, b: bool) callconv(.c) void ```
    pub fn OnCopyAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CopyAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_SelectionChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CursorPositionChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_CursorPositionChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ``` self: QtC.KTextEdit, exp: []const u8, options: flag of qtextdocument_enums.FindFlag ```
    pub fn Find22(self: ?*anyopaque, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find22(@ptrCast(self), exp_str, @intCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ``` self: QtC.KTextEdit, exp: QtC.QRegularExpression, options: flag of qtextdocument_enums.FindFlag ```
    pub fn Find23(self: ?*anyopaque, exp: ?*anyopaque, options: i32) bool {
        return qtc.QTextEdit_Find23(@ptrCast(self), @ptrCast(exp), @intCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ``` self: QtC.KTextEdit, features: flag of qtextdocument_enums.MarkdownFeature, allocator: std.mem.Allocator ```
    pub fn ToMarkdown1(self: ?*anyopaque, features: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToMarkdown1(@ptrCast(self), @intCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ``` self: QtC.KTextEdit, operation: qtextcursor_enums.MoveOperation, mode: qtextcursor_enums.MoveMode ```
    pub fn MoveCursor2(self: ?*anyopaque, operation: i32, mode: i32) void {
        qtc.QTextEdit_MoveCursor2(@ptrCast(self), @intCast(operation), @intCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ``` self: QtC.KTextEdit, range: i32 ```
    pub fn ZoomIn1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomIn1(@ptrCast(self), @intCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ``` self: QtC.KTextEdit, range: i32 ```
    pub fn ZoomOut1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomOut1(@ptrCast(self), @intCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.KTextEdit, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.KTextEdit, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.KTextEdit, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.KTextEdit, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.KTextEdit, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.KTextEdit, widget: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.KTextEdit, alignment: flag of qnamespace_enums.AlignmentFlag, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("ktextedit.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.KTextEdit, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.KTextEdit, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.KTextEdit, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.KTextEdit, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qframe_enums.Shadow ```
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.KTextEdit, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.KTextEdit, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.KTextEdit, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.KTextEdit, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.KTextEdit, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.KTextEdit, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.KTextEdit, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.KTextEdit, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.KTextEdit, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KTextEdit, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KTextEdit, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KTextEdit, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KTextEdit, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.KTextEdit, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.KTextEdit, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.KTextEdit, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.KTextEdit, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KTextEdit, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KTextEdit, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KTextEdit, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KTextEdit, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KTextEdit, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KTextEdit, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.KTextEdit, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.KTextEdit, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.KTextEdit, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.KTextEdit, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.KTextEdit, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.KTextEdit, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.KTextEdit, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.KTextEdit, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.KTextEdit, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KTextEdit, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KTextEdit, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.KTextEdit, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KTextEdit, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.KTextEdit, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.KTextEdit, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.KTextEdit, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.KTextEdit, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.KTextEdit, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.KTextEdit, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.KTextEdit, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.KTextEdit, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.KTextEdit, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.KTextEdit, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.KTextEdit, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.KTextEdit, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.KTextEdit, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.KTextEdit, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.KTextEdit, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.KTextEdit, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KTextEdit, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.KTextEdit, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.KTextEdit, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.KTextEdit, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KTextEdit, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.KTextEdit, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KTextEdit, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KTextEdit, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.KTextEdit, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.KTextEdit, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KTextEdit, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KTextEdit, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KTextEdit, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktextedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.KTextEdit, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.KTextEdit, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.KTextEdit, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KTextEdit, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KTextEdit, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KTextEdit, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.KTextEdit, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KTextEdit, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KTextEdit, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KTextEdit, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KTextEdit, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.KTextEdit, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTextEdit, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.KTextEdit, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.KTextEdit, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.KTextEdit, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.KTextEdit, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTextEdit, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTextEdit, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTextEdit, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.KTextEdit, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KTextEdit, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.KTextEdit, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KTextEdit, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KTextEdit, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KTextEdit, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KTextEdit, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.KTextEdit, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.KTextEdit, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.KTextEdit, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.KTextEdit, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.KTextEdit, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KTextEdit, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KTextEdit, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KTextEdit, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.KTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.KTextEdit, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KTextEdit, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KTextEdit, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KTextEdit, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KTextEdit, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KTextEdit, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KTextEdit, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KTextEdit, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktextedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KTextEdit, name: []const u8 ```
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
    /// ``` self: QtC.KTextEdit ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KTextEdit, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEdit, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEdit, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEdit, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEdit, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KTextEdit, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KTextEdit, obj: QtC.QObject ```
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
    /// ``` self: QtC.KTextEdit, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KTextEdit ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KTextEdit, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KTextEdit, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KTextEdit, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KTextEdit, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEdit, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEdit, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KTextEdit, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, typeVal: i32, name: QtC.QUrl ```
    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.KTextEdit_LoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, typeVal: i32, name: QtC.QUrl ```
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.KTextEdit_QBaseLoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, typeVal: i32, name: QtC.QUrl) callconv(.c) QtC.QVariant ```
    pub fn OnLoadResource(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.KTextEdit_OnLoadResource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, property: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.KTextEdit_InputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, property: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.KTextEdit_QBaseInputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.KTextEdit_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KTextEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KTextEdit_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KTextEdit_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, e: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTextEdit_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, e: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn CreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.KTextEdit_CreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseCreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.KTextEdit_QBaseCreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QMimeData ```
    pub fn OnCreateMimeDataFromSelection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMimeData) void {
        qtc.KTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, source: QtC.QMimeData ```
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.KTextEdit_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, source: QtC.QMimeData ```
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, source: QtC.QMimeData) callconv(.c) bool ```
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnCanInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, source: QtC.QMimeData ```
    pub fn InsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KTextEdit_InsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, source: QtC.QMimeData ```
    pub fn QBaseInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KTextEdit_QBaseInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, source: QtC.QMimeData) callconv(.c) void ```
    pub fn OnInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.KTextEdit_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.KTextEdit_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KTextEdit_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, cursor: QtC.QTextCursor ```
    pub fn DoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KTextEdit_DoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, cursor: QtC.QTextCursor ```
    pub fn QBaseDoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, cursor: QtC.QTextCursor) callconv(.c) void ```
    pub fn OnDoSetTextCursor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDoSetTextCursor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KTextEdit_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KTextEdit_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.KTextEdit_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.KTextEdit_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.KTextEdit_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEdit_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KTextEdit_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KTextEdit_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KTextEdit_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KTextEdit_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KTextEdit_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KTextEdit_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KTextEdit_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KTextEdit_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KTextEdit_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KTextEdit_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KTextEdit_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTextEdit_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTextEdit_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KTextEdit_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTextEdit_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KTextEdit_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KTextEdit_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KTextEdit_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KTextEdit_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KTextEdit_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KTextEdit_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KTextEdit_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KTextEdit_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.KTextEdit_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEdit_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, range: f32 ```
    pub fn ZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.KTextEdit_ZoomInF(@ptrCast(self), @floatCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, range: f32 ```
    pub fn QBaseZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.KTextEdit_QBaseZoomInF(@ptrCast(self), @floatCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, range: f32) callconv(.c) void ```
    pub fn OnZoomInF(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.KTextEdit_OnZoomInF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KTextEdit_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KTextEdit_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.KTextEdit_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.KTextEdit_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.KTextEdit_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMargins) void {
        qtc.KTextEdit_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KTextEdit_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.KTextEdit_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KTextEdit_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.KTextEdit_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KTextEdit_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KTextEdit_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEdit_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEdit_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KTextEdit_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEdit_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KTextEdit_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEdit_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEdit_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEdit_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEdit_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEdit_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEdit_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KTextEdit_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KTextEdit_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KTextEdit_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KTextEdit, slot: fn (self: QtC.KTextEdit, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#dtor.KTextEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEdit ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEdit_Delete(@ptrCast(self));
    }
};
