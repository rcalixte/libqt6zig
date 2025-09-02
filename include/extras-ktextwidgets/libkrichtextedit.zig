const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const krichtextedit_enums = enums;
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

/// https://api-staging.kde.org/krichtextedit.html
pub const krichtextedit = struct {
    /// New constructs a new KRichTextEdit object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KRichTextEdit {
        return qtc.KRichTextEdit_new(@ptrCast(parent));
    }

    /// New2 constructs a new KRichTextEdit object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.KRichTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KRichTextEdit_new2(text_str);
    }

    /// New3 constructs a new KRichTextEdit object.
    ///
    ///
    pub fn New3() QtC.KRichTextEdit {
        return qtc.KRichTextEdit_new3();
    }

    /// New4 constructs a new KRichTextEdit object.
    ///
    /// ``` text: []const u8, parent: QtC.QWidget ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.KRichTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KRichTextEdit_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KRichTextEdit_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KRichTextEdit, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRichTextEdit_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KRichTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KRichTextEdit_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KRichTextEdit_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#enableRichTextMode)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn EnableRichTextMode(self: ?*anyopaque) void {
        qtc.KRichTextEdit_EnableRichTextMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#textMode)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` krichtextedit_enums.Mode ```
    pub fn TextMode(self: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_TextMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#textOrHtml)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn TextOrHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KRichTextEdit_TextOrHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.TextOrHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextOrHtml)
    ///
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
    pub fn SetTextOrHtml(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KRichTextEdit_SetTextOrHtml(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#currentLinkText)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn CurrentLinkText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KRichTextEdit_CurrentLinkText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.CurrentLinkText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#currentLinkUrl)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn CurrentLinkUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KRichTextEdit_CurrentLinkUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.CurrentLinkUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#selectLinkText)
    ///
    /// ``` self: QtC.KRichTextEdit, cursor: QtC.QTextCursor ```
    pub fn SelectLinkText(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KRichTextEdit_SelectLinkText(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#selectLinkText)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SelectLinkText2(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SelectLinkText2(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#updateLink)
    ///
    /// ``` self: QtC.KRichTextEdit, linkUrl: []const u8, linkText: []const u8 ```
    pub fn UpdateLink(self: ?*anyopaque, linkUrl: []const u8, linkText: []const u8) void {
        const linkUrl_str = qtc.libqt_string{
            .len = linkUrl.len,
            .data = linkUrl.ptr,
        };
        const linkText_str = qtc.libqt_string{
            .len = linkText.len,
            .data = linkText.ptr,
        };
        qtc.KRichTextEdit_UpdateLink(@ptrCast(self), linkUrl_str, linkText_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#canIndentList)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CanIndentList(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_CanIndentList(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#canDedentList)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CanDedentList(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_CanDedentList(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#alignLeft)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AlignLeft(self: ?*anyopaque) void {
        qtc.KRichTextEdit_AlignLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#alignCenter)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AlignCenter(self: ?*anyopaque) void {
        qtc.KRichTextEdit_AlignCenter(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#alignRight)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AlignRight(self: ?*anyopaque) void {
        qtc.KRichTextEdit_AlignRight(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#alignJustify)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AlignJustify(self: ?*anyopaque) void {
        qtc.KRichTextEdit_AlignJustify(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#makeRightToLeft)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MakeRightToLeft(self: ?*anyopaque) void {
        qtc.KRichTextEdit_MakeRightToLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#makeLeftToRight)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MakeLeftToRight(self: ?*anyopaque) void {
        qtc.KRichTextEdit_MakeLeftToRight(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setListStyle)
    ///
    /// ``` self: QtC.KRichTextEdit, _styleIndex: i32 ```
    pub fn SetListStyle(self: ?*anyopaque, _styleIndex: i32) void {
        qtc.KRichTextEdit_SetListStyle(@ptrCast(self), @intCast(_styleIndex));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#indentListMore)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IndentListMore(self: ?*anyopaque) void {
        qtc.KRichTextEdit_IndentListMore(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#indentListLess)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IndentListLess(self: ?*anyopaque) void {
        qtc.KRichTextEdit_IndentListLess(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setFontFamily)
    ///
    /// ``` self: QtC.KRichTextEdit, fontFamily: []const u8 ```
    pub fn SetFontFamily(self: ?*anyopaque, fontFamily: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
            .len = fontFamily.len,
            .data = fontFamily.ptr,
        };
        qtc.KRichTextEdit_SetFontFamily(@ptrCast(self), fontFamily_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setFontSize)
    ///
    /// ``` self: QtC.KRichTextEdit, size: i32 ```
    pub fn SetFontSize(self: ?*anyopaque, size: i32) void {
        qtc.KRichTextEdit_SetFontSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setFont)
    ///
    /// ``` self: QtC.KRichTextEdit, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.KRichTextEdit_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextBold)
    ///
    /// ``` self: QtC.KRichTextEdit, bold: bool ```
    pub fn SetTextBold(self: ?*anyopaque, bold: bool) void {
        qtc.KRichTextEdit_SetTextBold(@ptrCast(self), bold);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextItalic)
    ///
    /// ``` self: QtC.KRichTextEdit, italic: bool ```
    pub fn SetTextItalic(self: ?*anyopaque, italic: bool) void {
        qtc.KRichTextEdit_SetTextItalic(@ptrCast(self), italic);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextUnderline)
    ///
    /// ``` self: QtC.KRichTextEdit, underline: bool ```
    pub fn SetTextUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.KRichTextEdit_SetTextUnderline(@ptrCast(self), underline);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextStrikeOut)
    ///
    /// ``` self: QtC.KRichTextEdit, strikeOut: bool ```
    pub fn SetTextStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.KRichTextEdit_SetTextStrikeOut(@ptrCast(self), strikeOut);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextForegroundColor)
    ///
    /// ``` self: QtC.KRichTextEdit, color: QtC.QColor ```
    pub fn SetTextForegroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KRichTextEdit_SetTextForegroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextBackgroundColor)
    ///
    /// ``` self: QtC.KRichTextEdit, color: QtC.QColor ```
    pub fn SetTextBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KRichTextEdit_SetTextBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#insertHorizontalRule)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn InsertHorizontalRule(self: ?*anyopaque) void {
        qtc.KRichTextEdit_InsertHorizontalRule(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#switchToPlainText)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SwitchToPlainText(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SwitchToPlainText(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#toCleanHtml)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ToCleanHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KRichTextEdit_ToCleanHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ToCleanHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextSuperScript)
    ///
    /// ``` self: QtC.KRichTextEdit, superscript: bool ```
    pub fn SetTextSuperScript(self: ?*anyopaque, superscript: bool) void {
        qtc.KRichTextEdit_SetTextSuperScript(@ptrCast(self), superscript);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setTextSubScript)
    ///
    /// ``` self: QtC.KRichTextEdit, subscript: bool ```
    pub fn SetTextSubScript(self: ?*anyopaque, subscript: bool) void {
        qtc.KRichTextEdit_SetTextSubScript(@ptrCast(self), subscript);
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#setHeadingLevel)
    ///
    /// ``` self: QtC.KRichTextEdit, level: i32 ```
    pub fn SetHeadingLevel(self: ?*anyopaque, level: i32) void {
        qtc.KRichTextEdit_SetHeadingLevel(@ptrCast(self), @intCast(level));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#insertPlainTextImplementation)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn InsertPlainTextImplementation(self: ?*anyopaque) void {
        qtc.KRichTextEdit_InsertPlainTextImplementation(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#textModeChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, mode: krichtextedit_enums.Mode ```
    pub fn TextModeChanged(self: ?*anyopaque, mode: i32) void {
        qtc.KRichTextEdit_TextModeChanged(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#textModeChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, mode: krichtextedit_enums.Mode) callconv(.c) void ```
    pub fn OnTextModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KRichTextEdit_Connect_TextModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#keyPressEvent)
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KRichTextEdit_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KRichTextEdit_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#highlightWord)
    ///
    /// ``` self: QtC.KRichTextEdit, length: i32, pos: i32 ```
    pub fn HighlightWord(self: ?*anyopaque, length: i32, pos: i32) void {
        qtc.KTextEdit_HighlightWord(@ptrCast(self), @intCast(length), @intCast(pos));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#highlighter)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Highlighter(self: ?*anyopaque) QtC.Sonnet__Highlighter {
        return qtc.KTextEdit_Highlighter(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setHighlighter)
    ///
    /// ``` self: QtC.KRichTextEdit, _highLighter: QtC.Sonnet__Highlighter ```
    pub fn SetHighlighter(self: ?*anyopaque, _highLighter: ?*anyopaque) void {
        qtc.KTextEdit_SetHighlighter(@ptrCast(self), @ptrCast(_highLighter));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#enableFindReplace)
    ///
    /// ``` self: QtC.KRichTextEdit, enabled: bool ```
    pub fn EnableFindReplace(self: ?*anyopaque, enabled: bool) void {
        qtc.KTextEdit_EnableFindReplace(@ptrCast(self), enabled);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingLanguage)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn SpellCheckingLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEdit_SpellCheckingLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.SpellCheckingLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showTabAction)
    ///
    /// ``` self: QtC.KRichTextEdit, show: bool ```
    pub fn ShowTabAction(self: ?*anyopaque, show: bool) void {
        qtc.KTextEdit_ShowTabAction(@ptrCast(self), show);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showAutoCorrectButton)
    ///
    /// ``` self: QtC.KRichTextEdit, show: bool ```
    pub fn ShowAutoCorrectButton(self: ?*anyopaque, show: bool) void {
        qtc.KTextEdit_ShowAutoCorrectButton(@ptrCast(self), show);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#forceSpellChecking)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ForceSpellChecking(self: ?*anyopaque) void {
        qtc.KTextEdit_ForceSpellChecking(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: bool ```
    pub fn CheckSpellingChanged(self: ?*anyopaque, param1: bool) void {
        qtc.KTextEdit_CheckSpellingChanged(@ptrCast(self), param1);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: bool) callconv(.c) void ```
    pub fn OnCheckSpellingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEdit_Connect_CheckSpellingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckStatus)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: []const u8 ```
    pub fn SpellCheckStatus(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KTextEdit_SpellCheckStatus(@ptrCast(self), param1_str);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckStatus)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnSpellCheckStatus(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckStatus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#languageChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, language: []const u8 ```
    pub fn LanguageChanged(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.KTextEdit_LanguageChanged(@ptrCast(self), language_str);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#languageChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, language: [*:0]const u8) callconv(.c) void ```
    pub fn OnLanguageChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_LanguageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#aboutToShowContextMenu)
    ///
    /// ``` self: QtC.KRichTextEdit, menu: QtC.QMenu ```
    pub fn AboutToShowContextMenu(self: ?*anyopaque, menu: ?*anyopaque) void {
        qtc.KTextEdit_AboutToShowContextMenu(@ptrCast(self), @ptrCast(menu));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#aboutToShowContextMenu)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, menu: QtC.QMenu) callconv(.c) void ```
    pub fn OnAboutToShowContextMenu(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_AboutToShowContextMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckerAutoCorrect)
    ///
    /// ``` self: QtC.KRichTextEdit, currentWord: []const u8, autoCorrectWord: []const u8 ```
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

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckerAutoCorrect)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, currentWord: [*:0]const u8, autoCorrectWord: [*:0]const u8) callconv(.c) void ```
    pub fn OnSpellCheckerAutoCorrect(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckerAutoCorrect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingFinished)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SpellCheckingFinished(self: ?*anyopaque) void {
        qtc.KTextEdit_SpellCheckingFinished(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingFinished)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit) callconv(.c) void ```
    pub fn OnSpellCheckingFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckingFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingCanceled)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SpellCheckingCanceled(self: ?*anyopaque) void {
        qtc.KTextEdit_SpellCheckingCanceled(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#spellCheckingCanceled)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit) callconv(.c) void ```
    pub fn OnSpellCheckingCanceled(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEdit_Connect_SpellCheckingCanceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setSpellCheckingLanguage)
    ///
    /// ``` self: QtC.KRichTextEdit, language: []const u8 ```
    pub fn SetSpellCheckingLanguage(self: ?*anyopaque, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.KTextEdit_SetSpellCheckingLanguage(@ptrCast(self), language_str);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpelling)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CheckSpelling(self: ?*anyopaque) void {
        qtc.KTextEdit_CheckSpelling(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showSpellConfigDialog)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ShowSpellConfigDialog(self: ?*anyopaque) void {
        qtc.KTextEdit_ShowSpellConfigDialog(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#replace)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Replace(self: ?*anyopaque) void {
        qtc.KTextEdit_Replace(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#addTextDecorator)
    ///
    /// ``` self: QtC.KRichTextEdit, decorator: QtC.Sonnet__SpellCheckDecorator ```
    pub fn AddTextDecorator(self: ?*anyopaque, decorator: ?*anyopaque) void {
        qtc.KTextEdit_AddTextDecorator(@ptrCast(self), @ptrCast(decorator));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#clearDecorator)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ClearDecorator(self: ?*anyopaque) void {
        qtc.KTextEdit_ClearDecorator(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#showSpellConfigDialog)
    ///
    /// ``` self: QtC.KRichTextEdit, windowIcon: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, document: QtC.QTextDocument ```
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QTextEdit_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextEdit_Document(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
    ///
    /// ``` self: QtC.KRichTextEdit, placeholderText: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn PlaceholderText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_PlaceholderText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
    ///
    /// ``` self: QtC.KRichTextEdit, cursor: QtC.QTextCursor ```
    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextEdit_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TextCursor(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_TextCursor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QTextEdit_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
    ///
    /// ``` self: QtC.KRichTextEdit, flags: flag of qnamespace_enums.TextInteractionFlag ```
    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextEdit_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.TextInteractionFlag ```
    pub fn TextInteractionFlags(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_TextInteractionFlags(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextEdit_FontPointSize(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_FontWeight(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextEdit_FontUnderline(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextEdit_FontItalic(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TextColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextEdit_TextColor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TextBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextEdit_TextBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CurrentFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextEdit_CurrentFont(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_Alignment(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
    ///
    /// ``` self: QtC.KRichTextEdit, modifier: QtC.QTextCharFormat ```
    pub fn MergeCurrentCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextEdit_MergeCurrentCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
    ///
    /// ``` self: QtC.KRichTextEdit, format: QtC.QTextCharFormat ```
    pub fn SetCurrentCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CurrentCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextEdit_CurrentCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` flag of qtextedit_enums.AutoFormattingFlag ```
    pub fn AutoFormatting(self: ?*anyopaque) i64 {
        return qtc.QTextEdit_AutoFormatting(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
    ///
    /// ``` self: QtC.KRichTextEdit, features: flag of qtextedit_enums.AutoFormattingFlag ```
    pub fn SetAutoFormatting(self: ?*anyopaque, features: i64) void {
        qtc.QTextEdit_SetAutoFormatting(@ptrCast(self), @intCast(features));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TabChangesFocus(self: ?*anyopaque) bool {
        return qtc.QTextEdit_TabChangesFocus(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetTabChangesFocus(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
    ///
    /// ``` self: QtC.KRichTextEdit, title: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn DocumentTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_DocumentTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsUndoRedoEnabled(self: ?*anyopaque) bool {
        return qtc.QTextEdit_IsUndoRedoEnabled(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit, enable: bool ```
    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextEdit_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qtextedit_enums.LineWrapMode ```
    pub fn LineWrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_LineWrapMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
    ///
    /// ``` self: QtC.KRichTextEdit, mode: qtextedit_enums.LineWrapMode ```
    pub fn SetLineWrapMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTextEdit_SetLineWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn LineWrapColumnOrWidth(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_LineWrapColumnOrWidth(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, w: i32 ```
    pub fn SetLineWrapColumnOrWidth(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetLineWrapColumnOrWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qtextoption_enums.WrapMode ```
    pub fn WordWrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_WordWrapMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
    ///
    /// ``` self: QtC.KRichTextEdit, policy: qtextoption_enums.WrapMode ```
    pub fn SetWordWrapMode(self: ?*anyopaque, policy: i32) void {
        qtc.QTextEdit_SetWordWrapMode(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ``` self: QtC.KRichTextEdit, exp: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, exp: QtC.QRegularExpression ```
    pub fn Find2(self: ?*anyopaque, exp: ?*anyopaque) bool {
        return qtc.QTextEdit_Find2(@ptrCast(self), @ptrCast(exp));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ToHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ToMarkdown(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToMarkdown(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn EnsureCursorVisible(self: ?*anyopaque) void {
        qtc.QTextEdit_EnsureCursorVisible(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CreateStandardContextMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ``` self: QtC.KRichTextEdit, position: QtC.QPoint ```
    pub fn CreateStandardContextMenu2(self: ?*anyopaque, position: ?*anyopaque) QtC.QMenu {
        return qtc.QTextEdit_CreateStandardContextMenu2(@ptrCast(self), @ptrCast(position));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
    ///
    /// ``` self: QtC.KRichTextEdit, pos: QtC.QPoint ```
    pub fn CursorForPosition(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextEdit_CursorForPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ``` self: QtC.KRichTextEdit, cursor: QtC.QTextCursor ```
    pub fn CursorRect(self: ?*anyopaque, cursor: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CursorRect2(self: ?*anyopaque) QtC.QRect {
        return qtc.QTextEdit_CursorRect2(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
    ///
    /// ``` self: QtC.KRichTextEdit, pos: QtC.QPoint, allocator: std.mem.Allocator ```
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn OverwriteMode(self: ?*anyopaque) bool {
        return qtc.QTextEdit_OverwriteMode(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
    ///
    /// ``` self: QtC.KRichTextEdit, overwrite: bool ```
    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QTextEdit_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TabStopDistance(self: ?*anyopaque) f64 {
        return qtc.QTextEdit_TabStopDistance(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
    ///
    /// ``` self: QtC.KRichTextEdit, distance: f64 ```
    pub fn SetTabStopDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QTextEdit_SetTabStopDistance(@ptrCast(self), @floatCast(distance));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CursorWidth(self: ?*anyopaque) i32 {
        return qtc.QTextEdit_CursorWidth(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, width: i32 ```
    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextEdit_SetCursorWidth(@ptrCast(self), @intCast(width));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AcceptRichText(self: ?*anyopaque) bool {
        return qtc.QTextEdit_AcceptRichText(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
    ///
    /// ``` self: QtC.KRichTextEdit, accept: bool ```
    pub fn SetAcceptRichText(self: ?*anyopaque, accept: bool) void {
        qtc.QTextEdit_SetAcceptRichText(@ptrCast(self), accept);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
    ///
    /// ``` self: QtC.KRichTextEdit, selections: []QtC.QTextEdit__ExtraSelection ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ExtraSelections(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QTextEdit_ExtraSelections(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextEdit__ExtraSelection, _arr.len) catch @panic("krichtextedit.ExtraSelections: Memory allocation failed");
        const _data: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ``` self: QtC.KRichTextEdit, operation: qtextcursor_enums.MoveOperation ```
    pub fn MoveCursor(self: ?*anyopaque, operation: i32) void {
        qtc.QTextEdit_MoveCursor(@ptrCast(self), @intCast(operation));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CanPaste(self: ?*anyopaque) bool {
        return qtc.QTextEdit_CanPaste(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
    ///
    /// ``` self: QtC.KRichTextEdit, printer: QtC.QPagedPaintDevice ```
    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QTextEdit_Print(@ptrCast(self), @ptrCast(printer));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// ``` self: QtC.KRichTextEdit, query: qnamespace_enums.InputMethodQuery, argument: QtC.QVariant ```
    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QTextEdit_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
    ///
    /// ``` self: QtC.KRichTextEdit, s: f64 ```
    pub fn SetFontPointSize(self: ?*anyopaque, s: f64) void {
        qtc.QTextEdit_SetFontPointSize(@ptrCast(self), @floatCast(s));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
    ///
    /// ``` self: QtC.KRichTextEdit, w: i32 ```
    pub fn SetFontWeight(self: ?*anyopaque, w: i32) void {
        qtc.QTextEdit_SetFontWeight(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn SetFontUnderline(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontUnderline(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn SetFontItalic(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_SetFontItalic(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
    ///
    /// ``` self: QtC.KRichTextEdit, c: QtC.QColor ```
    pub fn SetTextColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QTextEdit_SetTextColor(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
    ///
    /// ``` self: QtC.KRichTextEdit, f: QtC.QFont ```
    pub fn SetCurrentFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QTextEdit_SetCurrentFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
    ///
    /// ``` self: QtC.KRichTextEdit, a: flag of qnamespace_enums.AlignmentFlag ```
    pub fn SetAlignment(self: ?*anyopaque, a: i32) void {
        qtc.QTextEdit_SetAlignment(@ptrCast(self), @intCast(a));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
    ///
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, markdown: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Cut(self: ?*anyopaque) void {
        qtc.QTextEdit_Cut(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Copy(self: ?*anyopaque) void {
        qtc.QTextEdit_Copy(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Paste(self: ?*anyopaque) void {
        qtc.QTextEdit_Paste(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QTextEdit_Undo(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QTextEdit_Redo(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QTextEdit_Clear(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QTextEdit_SelectAll(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
    ///
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, name: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ZoomIn(self: ?*anyopaque) void {
        qtc.QTextEdit_ZoomIn(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ZoomOut(self: ?*anyopaque) void {
        qtc.QTextEdit_ZoomOut(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TextChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_TextChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_TextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn UndoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_UndoAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, b: bool) callconv(.c) void ```
    pub fn OnUndoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_UndoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn RedoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_RedoAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, b: bool) callconv(.c) void ```
    pub fn OnRedoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_RedoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, format: QtC.QTextCharFormat ```
    pub fn CurrentCharFormatChanged(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextEdit_CurrentCharFormatChanged(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, format: QtC.QTextCharFormat) callconv(.c) void ```
    pub fn OnCurrentCharFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CurrentCharFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn CopyAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QTextEdit_CopyAvailable(@ptrCast(self), b);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, b: bool) callconv(.c) void ```
    pub fn OnCopyAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CopyAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_SelectionChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CursorPositionChanged(self: ?*anyopaque) void {
        qtc.QTextEdit_CursorPositionChanged(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ``` self: QtC.KRichTextEdit, exp: []const u8, options: flag of qtextdocument_enums.FindFlag ```
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
    /// ``` self: QtC.KRichTextEdit, exp: QtC.QRegularExpression, options: flag of qtextdocument_enums.FindFlag ```
    pub fn Find23(self: ?*anyopaque, exp: ?*anyopaque, options: i32) bool {
        return qtc.QTextEdit_Find23(@ptrCast(self), @ptrCast(exp), @intCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ``` self: QtC.KRichTextEdit, features: flag of qtextdocument_enums.MarkdownFeature, allocator: std.mem.Allocator ```
    pub fn ToMarkdown1(self: ?*anyopaque, features: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextEdit_ToMarkdown1(@ptrCast(self), @intCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ``` self: QtC.KRichTextEdit, operation: qtextcursor_enums.MoveOperation, mode: qtextcursor_enums.MoveMode ```
    pub fn MoveCursor2(self: ?*anyopaque, operation: i32, mode: i32) void {
        qtc.QTextEdit_MoveCursor2(@ptrCast(self), @intCast(operation), @intCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ``` self: QtC.KRichTextEdit, range: i32 ```
    pub fn ZoomIn1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomIn1(@ptrCast(self), @intCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ``` self: QtC.KRichTextEdit, range: i32 ```
    pub fn ZoomOut1(self: ?*anyopaque, range: i32) void {
        qtc.QTextEdit_ZoomOut1(@ptrCast(self), @intCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.KRichTextEdit, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollBarPolicy ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.KRichTextEdit, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.KRichTextEdit, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.KRichTextEdit, widget: QtC.QWidget, alignment: flag of qnamespace_enums.AlignmentFlag ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i32) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.KRichTextEdit, alignment: flag of qnamespace_enums.AlignmentFlag, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i32, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("krichtextedit.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.KRichTextEdit, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.KRichTextEdit, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.KRichTextEdit, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qframe_enums.Shadow ```
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.KRichTextEdit, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.KRichTextEdit, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.KRichTextEdit, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.KRichTextEdit, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.KRichTextEdit, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.KRichTextEdit, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KRichTextEdit, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KRichTextEdit, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KRichTextEdit, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KRichTextEdit, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.KRichTextEdit, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.KRichTextEdit, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KRichTextEdit, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KRichTextEdit, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KRichTextEdit, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KRichTextEdit, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KRichTextEdit, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KRichTextEdit, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.KRichTextEdit, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.KRichTextEdit, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.KRichTextEdit, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.KRichTextEdit, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.KRichTextEdit, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.KRichTextEdit, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.KRichTextEdit, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.KRichTextEdit, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KRichTextEdit, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KRichTextEdit, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.KRichTextEdit, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.KRichTextEdit, windowTitle: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, styleSheet: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.KRichTextEdit, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.KRichTextEdit, windowIconText: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.KRichTextEdit, windowRole: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.KRichTextEdit, filePath: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.KRichTextEdit, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.KRichTextEdit, toolTip: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.KRichTextEdit, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.KRichTextEdit, statusTip: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.KRichTextEdit, whatsThis: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.KRichTextEdit, name: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.KRichTextEdit, description: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.KRichTextEdit, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KRichTextEdit, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.KRichTextEdit ```
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
    /// ``` self: QtC.KRichTextEdit, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KRichTextEdit, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.KRichTextEdit, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KRichTextEdit, id: i32 ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KRichTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KRichTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.KRichTextEdit, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KRichTextEdit, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KRichTextEdit, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("krichtextedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit, geometry: []u8 ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.KRichTextEdit, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.KRichTextEdit, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KRichTextEdit, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KRichTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KRichTextEdit, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.KRichTextEdit, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KRichTextEdit, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KRichTextEdit, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KRichTextEdit, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KRichTextEdit, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.KRichTextEdit, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KRichTextEdit, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.KRichTextEdit, actions: []QtC.QAction ```
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
    /// ``` self: QtC.KRichTextEdit, before: QtC.QAction, actions: []QtC.QAction ```
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
    /// ``` self: QtC.KRichTextEdit, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.KRichTextEdit, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("krichtextedit.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KRichTextEdit, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, icon: QtC.QIcon, text: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.KRichTextEdit, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KRichTextEdit, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KRichTextEdit, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KRichTextEdit, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.KRichTextEdit, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.KRichTextEdit, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.KRichTextEdit, screen: QtC.QScreen ```
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
    /// ``` self: QtC.KRichTextEdit, title: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KRichTextEdit, iconText: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KRichTextEdit, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.KRichTextEdit, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KRichTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KRichTextEdit, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KRichTextEdit, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KRichTextEdit, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KRichTextEdit, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qnamespace_enums.WidgetAttribute, on: bool ```
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
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krichtextedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KRichTextEdit, name: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KRichTextEdit, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KRichTextEdit, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KRichTextEdit, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KRichTextEdit, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KRichTextEdit, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("krichtextedit.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KRichTextEdit, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KRichTextEdit, obj: QtC.QObject ```
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
    /// ``` self: QtC.KRichTextEdit, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KRichTextEdit, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KRichTextEdit, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KRichTextEdit, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("krichtextedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krichtextedit.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KRichTextEdit, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KRichTextEdit, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KRichTextEdit, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KRichTextEdit, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.KRichTextEdit ```
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

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, readOnly: bool ```
    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KRichTextEdit_SetReadOnly(@ptrCast(self), readOnly);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, readOnly: bool ```
    pub fn QBaseSetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KRichTextEdit_QBaseSetReadOnly(@ptrCast(self), readOnly);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setReadOnly)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, readOnly: bool) callconv(.c) void ```
    pub fn OnSetReadOnly(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KRichTextEdit_OnSetReadOnly(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, check: bool ```
    pub fn SetCheckSpellingEnabled(self: ?*anyopaque, check: bool) void {
        qtc.KRichTextEdit_SetCheckSpellingEnabled(@ptrCast(self), check);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, check: bool ```
    pub fn QBaseSetCheckSpellingEnabled(self: ?*anyopaque, check: bool) void {
        qtc.KRichTextEdit_QBaseSetCheckSpellingEnabled(@ptrCast(self), check);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#setCheckSpellingEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, check: bool) callconv(.c) void ```
    pub fn OnSetCheckSpellingEnabled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KRichTextEdit_OnSetCheckSpellingEnabled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CheckSpellingEnabled(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_CheckSpellingEnabled(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseCheckSpellingEnabled(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseCheckSpellingEnabled(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#checkSpellingEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnCheckSpellingEnabled(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KRichTextEdit_OnCheckSpellingEnabled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, block: []const u8 ```
    pub fn ShouldBlockBeSpellChecked(self: ?*anyopaque, block: []const u8) bool {
        const block_str = qtc.libqt_string{
            .len = block.len,
            .data = block.ptr,
        };
        return qtc.KRichTextEdit_ShouldBlockBeSpellChecked(@ptrCast(self), block_str);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, block: []const u8 ```
    pub fn QBaseShouldBlockBeSpellChecked(self: ?*anyopaque, block: []const u8) bool {
        const block_str = qtc.libqt_string{
            .len = block.len,
            .data = block.ptr,
        };
        return qtc.KRichTextEdit_QBaseShouldBlockBeSpellChecked(@ptrCast(self), block_str);
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, block: [*:0]const u8) callconv(.c) bool ```
    pub fn OnShouldBlockBeSpellChecked(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnShouldBlockBeSpellChecked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CreateHighlighter(self: ?*anyopaque) void {
        qtc.KRichTextEdit_CreateHighlighter(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseCreateHighlighter(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseCreateHighlighter(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#createHighlighter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnCreateHighlighter(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnCreateHighlighter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MousePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KRichTextEdit_MousePopupMenu(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseMousePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KRichTextEdit_QBaseMousePopupMenu(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#mousePopupMenu)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QMenu ```
    pub fn OnMousePopupMenu(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMenu) void {
        qtc.KRichTextEdit_OnMousePopupMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KRichTextEdit_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DeleteWordBack(self: ?*anyopaque) void {
        qtc.KRichTextEdit_DeleteWordBack(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseDeleteWordBack(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDeleteWordBack(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordBack)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDeleteWordBack(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnDeleteWordBack(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DeleteWordForward(self: ?*anyopaque) void {
        qtc.KRichTextEdit_DeleteWordForward(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseDeleteWordForward(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDeleteWordForward(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#deleteWordForward)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDeleteWordForward(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnDeleteWordForward(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: i32, name: QtC.QUrl ```
    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.KRichTextEdit_LoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, typeVal: i32, name: QtC.QUrl ```
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.KRichTextEdit_QBaseLoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, typeVal: i32, name: QtC.QUrl) callconv(.c) QtC.QVariant ```
    pub fn OnLoadResource(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.KRichTextEdit_OnLoadResource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, property: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.KRichTextEdit_InputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, property: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.KRichTextEdit_QBaseInputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.KRichTextEdit_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KRichTextEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KRichTextEdit_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, e: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, e: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn CreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.KRichTextEdit_CreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseCreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.KRichTextEdit_QBaseCreateMimeDataFromSelection(@ptrCast(self));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QMimeData ```
    pub fn OnCreateMimeDataFromSelection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMimeData) void {
        qtc.KRichTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, source: QtC.QMimeData ```
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.KRichTextEdit_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, source: QtC.QMimeData ```
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, source: QtC.QMimeData) callconv(.c) bool ```
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnCanInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, source: QtC.QMimeData ```
    pub fn InsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KRichTextEdit_InsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, source: QtC.QMimeData ```
    pub fn QBaseInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, source: QtC.QMimeData) callconv(.c) void ```
    pub fn OnInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.KRichTextEdit_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.KRichTextEdit_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KRichTextEdit_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, cursor: QtC.QTextCursor ```
    pub fn DoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KRichTextEdit_DoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, cursor: QtC.QTextCursor ```
    pub fn QBaseDoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, cursor: QtC.QTextCursor) callconv(.c) void ```
    pub fn OnDoSetTextCursor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDoSetTextCursor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KRichTextEdit_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KRichTextEdit_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KRichTextEdit_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KRichTextEdit_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KRichTextEdit_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KRichTextEdit_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.KRichTextEdit_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.KRichTextEdit_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KRichTextEdit_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KRichTextEdit_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KRichTextEdit_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KRichTextEdit_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KRichTextEdit_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KRichTextEdit_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KRichTextEdit_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KRichTextEdit_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KRichTextEdit_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KRichTextEdit_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KRichTextEdit_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KRichTextEdit_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KRichTextEdit_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KRichTextEdit_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KRichTextEdit_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KRichTextEdit_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KRichTextEdit_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KRichTextEdit_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KRichTextEdit_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KRichTextEdit_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KRichTextEdit_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KRichTextEdit_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KRichTextEdit_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KRichTextEdit_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KRichTextEdit_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KRichTextEdit_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KRichTextEdit_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.KRichTextEdit_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRichTextEdit_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRichTextEdit_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotDoReplace(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotDoReplace(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotDoReplace(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotDoReplace(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoReplace)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotDoReplace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotDoReplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotReplaceNext(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotReplaceNext(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotReplaceNext(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotReplaceNext(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplaceNext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotReplaceNext(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotReplaceNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotDoFind(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotDoFind(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotDoFind(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotDoFind(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotDoFind)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotDoFind(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotDoFind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotFind(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotFind(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFind)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotFind(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotFind(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFind)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotFind(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotFind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotFindNext(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotFindNext(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotFindNext(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotFindNext(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindNext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotFindNext(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotFindNext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotFindPrevious(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotFindPrevious(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotFindPrevious(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotFindPrevious(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotFindPrevious)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotFindPrevious(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotFindPrevious(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplace)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotReplace(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotReplace(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplace)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotReplace(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotReplace(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotReplace)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotReplace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotReplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SlotSpeakText(self: ?*anyopaque) void {
        qtc.KRichTextEdit_SlotSpeakText(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSlotSpeakText(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseSlotSpeakText(@ptrCast(self));
    }

    /// Inherited from KTextEdit
    ///
    /// [Qt documentation](https://api-staging.kde.org/ktextedit.html#slotSpeakText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnSlotSpeakText(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnSlotSpeakText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, range: f32 ```
    pub fn ZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.KRichTextEdit_ZoomInF(@ptrCast(self), @floatCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, range: f32 ```
    pub fn QBaseZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.KRichTextEdit_QBaseZoomInF(@ptrCast(self), @floatCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, range: f32) callconv(.c) void ```
    pub fn OnZoomInF(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.KRichTextEdit_OnZoomInF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KRichTextEdit_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.KRichTextEdit_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.KRichTextEdit_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.KRichTextEdit_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.KRichTextEdit_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMargins) void {
        qtc.KRichTextEdit_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRichTextEdit_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KRichTextEdit_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.KRichTextEdit_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KRichTextEdit_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.KRichTextEdit_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KRichTextEdit_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KRichTextEdit_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KRichTextEdit_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KRichTextEdit_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KRichTextEdit_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KRichTextEdit_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KRichTextEdit_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KRichTextEdit_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRichTextEdit_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRichTextEdit_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KRichTextEdit_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KRichTextEdit_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KRichTextEdit_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRichTextEdit_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KRichTextEdit_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KRichTextEdit_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KRichTextEdit_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRichTextEdit, slot: fn (self: QtC.KRichTextEdit, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/krichtextedit.html#dtor.KRichTextEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KRichTextEdit ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRichTextEdit_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/krichtextedit.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Plain: i32 = 0;
        pub const Rich: i32 = 1;
    };
};
