const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfont_enums = @import("../libqfont.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qtextformat_enums = @import("../libqtextformat.zig").enums;
const std = @import("std");
const theme_enums = @import("../extras-ksyntaxhighlighting/libtheme.zig").enums;
const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);

/// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html)
pub const ktexteditor__attribute = struct {
    /// New constructs a new KTextEditor::Attribute object.
    ///
    pub fn New() QtC.KTextEditor__Attribute {
        return qtc.KTextEditor__Attribute_new();
    }

    /// New2 constructs a new KTextEditor::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` style: theme_enums.TextStyle `
    ///
    pub fn New2(name: []const u8, style: i32) QtC.KTextEditor__Attribute {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KTextEditor__Attribute_new2(name_str, @intCast(style));
    }

    /// New3 constructs a new KTextEditor::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QtC.KTextEditor__Attribute `
    ///
    pub fn New3(a: ?*anyopaque) QtC.KTextEditor__Attribute {
        return qtc.KTextEditor__Attribute_new3(@ptrCast(a));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Attribute_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__attribute.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KTextEditor__Attribute_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#defaultStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` theme_enums.TextStyle `
    ///
    pub fn DefaultStyle(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Attribute_DefaultStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setDefaultStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` style: theme_enums.TextStyle `
    ///
    pub fn SetDefaultStyle(self: ?*anyopaque, style: i32) void {
        qtc.KTextEditor__Attribute_SetDefaultStyle(@ptrCast(self), @intCast(style));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#skipSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn SkipSpellChecking(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Attribute_SkipSpellChecking(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSkipSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` skipspellchecking: bool `
    ///
    pub fn SetSkipSpellChecking(self: ?*anyopaque, skipspellchecking: bool) void {
        qtc.KTextEditor__Attribute_SetSkipSpellChecking(@ptrCast(self), skipspellchecking);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#fontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontBold(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Attribute_FontBold(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn SetFontBold(self: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_SetFontBold(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#outline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn Outline(self: ?*anyopaque) QtC.QBrush {
        return qtc.KTextEditor__Attribute_Outline(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetOutline(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_SetOutline(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn SelectedForeground(self: ?*anyopaque) QtC.QBrush {
        return qtc.KTextEditor__Attribute_SelectedForeground(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` foreground: QtC.QBrush `
    ///
    pub fn SetSelectedForeground(self: ?*anyopaque, foreground: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_SetSelectedForeground(@ptrCast(self), @ptrCast(foreground));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn SelectedBackground(self: ?*anyopaque) QtC.QBrush {
        return qtc.KTextEditor__Attribute_SelectedBackground(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetSelectedBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_SetSelectedBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#backgroundFillWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn BackgroundFillWhitespace(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Attribute_BackgroundFillWhitespace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setBackgroundFillWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` fillWhitespace: bool `
    ///
    pub fn SetBackgroundFillWhitespace(self: ?*anyopaque, fillWhitespace: bool) void {
        qtc.KTextEditor__Attribute_SetBackgroundFillWhitespace(@ptrCast(self), fillWhitespace);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#hasAnyProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn HasAnyProperty(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Attribute_HasAnyProperty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` a: QtC.KTextEditor__Attribute `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, a: ?*anyopaque) QtC.KTextEditor__Attribute {
        return qtc.KTextEditor__Attribute_OperatorPlusAssign(@ptrCast(self), @ptrCast(a));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` a: QtC.KTextEditor__Attribute `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, a: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_OperatorAssign(@ptrCast(self), @ptrCast(a));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` bold: bool `
    ///
    pub fn SetFontBold1(self: ?*anyopaque, bold: bool) void {
        qtc.KTextEditor__Attribute_SetFontBold1(@ptrCast(self), bold);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextCharFormat_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextCharFormat_Font(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFontFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self), family_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__attribute.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` families: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetFontFamilies(self: ?*anyopaque, families: []const []const u8, allocator: std.mem.Allocator) void {
        var families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("ktexteditor__attribute.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i| {
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self), families_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontFamilies(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontFamilies(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetFontStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self), styleName_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontStyleName(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontStyleName(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` size: f64 `
    ///
    pub fn SetFontPointSize(self: ?*anyopaque, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self), @floatCast(size));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` weight: i32 `
    ///
    pub fn SetFontWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self), @intCast(weight));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` italic: bool `
    ///
    pub fn SetFontItalic(self: ?*anyopaque, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self), italic);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetFontCapitalization(self: ?*anyopaque, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn FontCapitalization(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn SetFontLetterSpacingType(self: ?*anyopaque, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self), @intCast(letterSpacingType));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn FontLetterSpacingType(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontLetterSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontLetterSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontWordSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` underline: bool `
    ///
    pub fn SetFontUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self), underline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` overline: bool `
    ///
    pub fn SetFontOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self), overline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontOverline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetFontStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self), strikeOut);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontStrikeOut(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetUnderlineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn UnderlineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextCharFormat_UnderlineColor(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFontFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self), fixedPitch);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontFixedPitch(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` factor: i32 `
    ///
    pub fn SetFontStretch(self: ?*anyopaque, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self), @intCast(factor));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontStretch(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn SetFontStyleHint(self: ?*anyopaque, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self), @intCast(hint));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleStrategy(self: ?*anyopaque, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn FontStyleHint(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn FontStyleStrategy(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetFontHintingPreference(self: ?*anyopaque, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn FontHintingPreference(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontKerning(self: ?*anyopaque, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self), enable);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn FontKerning(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn SetUnderlineStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn UnderlineStyle(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn SetVerticalAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn VerticalAlignment(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetTextOutline(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn TextOutline(self: ?*anyopaque) QtC.QPen {
        return qtc.QTextCharFormat_TextOutline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self), tip_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__attribute.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn SuperScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn SubScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn BaselineOffset(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` anchor: bool `
    ///
    pub fn SetAnchor(self: ?*anyopaque, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self), anchor);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsAnchor(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAnchorHref(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self), value_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorHref(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__attribute.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` names: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetAnchorNames(self: ?*anyopaque, names: []const []const u8, allocator: std.mem.Allocator) void {
        var names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("ktexteditor__attribute.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self), names_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorNames(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__attribute.AnchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__attribute.AnchorNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` tableCellRowSpan: i32 `
    ///
    pub fn SetTableCellRowSpan(self: ?*anyopaque, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self), @intCast(tableCellRowSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn TableCellRowSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` tableCellColumnSpan: i32 `
    ///
    pub fn SetTableCellColumnSpan(self: ?*anyopaque, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self), @intCast(tableCellColumnSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn TableCellColumnSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` font: QtC.QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn SetFont2(self: ?*anyopaque, font: ?*anyopaque, behavior: i32) void {
        qtc.QTextCharFormat_SetFont2(@ptrCast(self), @ptrCast(font), @intCast(behavior));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleHint2(self: ?*anyopaque, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self), @intCast(hint), @intCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` other: QtC.QTextFormat `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` other: QtC.QTextFormat `
    ///
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__attribute.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("ktexteditor__attribute.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QtC.QTextLength `
    ///
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
        var _ret: map_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("ktexteditor__attribute.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` rhs: QtC.QTextFormat `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` rhs: QtC.QTextFormat `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__Attribute `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__Attribute_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html)
pub const ktexteditor__attributeblock = struct {
    /// New constructs a new KTextEditor::AttributeBlock object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KTextEditor__AttributeBlock `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KTextEditor__AttributeBlock {
        return qtc.KTextEditor__AttributeBlock_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__AttributeBlock `
    ///
    pub fn Start(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__AttributeBlock_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__AttributeBlock `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.KTextEditor__AttributeBlock_SetStart(@ptrCast(self), @intCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__AttributeBlock `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__AttributeBlock_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__AttributeBlock `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: ?*anyopaque, length: i32) void {
        qtc.KTextEditor__AttributeBlock_SetLength(@ptrCast(self), @intCast(length));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__AttributeBlock `
    ///
    /// ` param1: QtC.KTextEditor__AttributeBlock `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEditor__AttributeBlock_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__AttributeBlock `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__AttributeBlock_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/attribute.html#public-types)
pub const enums = struct {
    pub const ActivationType = enum(i32) {
        pub const ActivateMouseIn: i32 = 0;
        pub const ActivateCaretIn: i32 = 1;
    };
};
