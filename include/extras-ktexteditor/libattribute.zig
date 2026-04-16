const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QPen = @import("libqt6").QPen;
const QTextBlockFormat = @import("libqt6").QTextBlockFormat;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextFormat = @import("libqt6").QTextFormat;
const QTextFrameFormat = @import("libqt6").QTextFrameFormat;
const QTextImageFormat = @import("libqt6").QTextImageFormat;
const QTextLength = @import("libqt6").QTextLength;
const QTextListFormat = @import("libqt6").QTextListFormat;
const QTextTableCellFormat = @import("libqt6").QTextTableCellFormat;
const QTextTableFormat = @import("libqt6").QTextTableFormat;
const QVariant = @import("libqt6").QVariant;
const qfont_enums = @import("../libqfont.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qtextformat_enums = @import("../libqtextformat.zig").enums;
const std = @import("std");
const theme_enums = @import("../extras-ksyntaxhighlighting/libtheme.zig").enums;
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);

/// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html)
pub const KTextEditor__Attribute = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Attribute,

    pub const _is_KTextEditor__Attribute = {};
    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};
    pub const _is_QSharedData = {};

    /// New constructs a new KTextEditor::Attribute object.
    ///
    pub fn New() KTextEditor__Attribute {
        return .{ .ptr = qtc.KTextEditor__Attribute_new() };
    }

    /// New2 constructs a new KTextEditor::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` style: theme_enums.TextStyle `
    ///
    pub fn New2(name: []const u8, style: i32) KTextEditor__Attribute {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Attribute_new2(name_str, @bitCast(style)) };
    }

    /// New3 constructs a new KTextEditor::Attribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: KTextEditor__Attribute `
    ///
    pub fn New3(a: anytype) KTextEditor__Attribute {
        comptime _ = @TypeOf(a)._is_KTextEditor__Attribute;
        return .{ .ptr = qtc.KTextEditor__Attribute_new3(@ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Attribute_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__attribute.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KTextEditor__Attribute, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KTextEditor__Attribute_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#defaultStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` theme_enums.TextStyle `
    ///
    pub fn DefaultStyle(self: KTextEditor__Attribute) i32 {
        return qtc.KTextEditor__Attribute_DefaultStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setDefaultStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` style: theme_enums.TextStyle `
    ///
    pub fn SetDefaultStyle(self: KTextEditor__Attribute, style: i32) void {
        qtc.KTextEditor__Attribute_SetDefaultStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#skipSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn SkipSpellChecking(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_SkipSpellChecking(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSkipSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` skipspellchecking: bool `
    ///
    pub fn SetSkipSpellChecking(self: KTextEditor__Attribute, skipspellchecking: bool) void {
        qtc.KTextEditor__Attribute_SetSkipSpellChecking(@ptrCast(self.ptr), skipspellchecking);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#fontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontBold(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_FontBold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn SetFontBold(self: KTextEditor__Attribute) void {
        qtc.KTextEditor__Attribute_SetFontBold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#outline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Outline(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.KTextEditor__Attribute_Outline(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetOutline(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.KTextEditor__Attribute_SetOutline(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn SelectedForeground(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.KTextEditor__Attribute_SelectedForeground(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` foreground: QBrush `
    ///
    pub fn SetSelectedForeground(self: KTextEditor__Attribute, foreground: anytype) void {
        comptime _ = @TypeOf(foreground)._is_QBrush;
        qtc.KTextEditor__Attribute_SetSelectedForeground(@ptrCast(self.ptr), @ptrCast(foreground.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn SelectedBackground(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.KTextEditor__Attribute_SelectedBackground(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetSelectedBackground(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.KTextEditor__Attribute_SetSelectedBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#backgroundFillWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn BackgroundFillWhitespace(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_BackgroundFillWhitespace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setBackgroundFillWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` fillWhitespace: bool `
    ///
    pub fn SetBackgroundFillWhitespace(self: KTextEditor__Attribute, fillWhitespace: bool) void {
        qtc.KTextEditor__Attribute_SetBackgroundFillWhitespace(@ptrCast(self.ptr), fillWhitespace);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Clear(self: KTextEditor__Attribute) void {
        qtc.KTextEditor__Attribute_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#hasAnyProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn HasAnyProperty(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_HasAnyProperty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` a: KTextEditor__Attribute `
    ///
    pub fn OperatorPlusAssign(self: KTextEditor__Attribute, a: anytype) KTextEditor__Attribute {
        comptime _ = @TypeOf(a)._is_KTextEditor__Attribute;
        return .{ .ptr = qtc.KTextEditor__Attribute_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` a: KTextEditor__Attribute `
    ///
    pub fn OperatorAssign(self: KTextEditor__Attribute, a: anytype) void {
        comptime _ = @TypeOf(a)._is_KTextEditor__Attribute;
        qtc.KTextEditor__Attribute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(a.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` bold: bool `
    ///
    pub fn SetFontBold1(self: KTextEditor__Attribute, bold: bool) void {
        qtc.KTextEditor__Attribute_SetFontBold1(@ptrCast(self.ptr), bold);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsValid(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KTextEditor__Attribute, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Font(self: KTextEditor__Attribute) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFontFamily(self: KTextEditor__Attribute, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn SetFontFamilies(self: KTextEditor__Attribute, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("ktexteditor__attribute.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i|
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontFamilies(self: KTextEditor__Attribute) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetFontStyleName(self: KTextEditor__Attribute, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontStyleName(self: KTextEditor__Attribute) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` size: f64 `
    ///
    pub fn SetFontPointSize(self: KTextEditor__Attribute, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontPointSize(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` weight: i32 `
    ///
    pub fn SetFontWeight(self: KTextEditor__Attribute, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontWeight(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` italic: bool `
    ///
    pub fn SetFontItalic(self: KTextEditor__Attribute, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontItalic(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetFontCapitalization(self: KTextEditor__Attribute, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn FontCapitalization(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn SetFontLetterSpacingType(self: KTextEditor__Attribute, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn FontLetterSpacingType(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontLetterSpacing(self: KTextEditor__Attribute, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontLetterSpacing(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontWordSpacing(self: KTextEditor__Attribute, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontWordSpacing(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` underline: bool `
    ///
    pub fn SetFontUnderline(self: KTextEditor__Attribute, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontUnderline(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` overline: bool `
    ///
    pub fn SetFontOverline(self: KTextEditor__Attribute, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontOverline(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetFontStrikeOut(self: KTextEditor__Attribute, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontStrikeOut(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` color: QColor `
    ///
    pub fn SetUnderlineColor(self: KTextEditor__Attribute, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn UnderlineColor(self: KTextEditor__Attribute) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFontFixedPitch(self: KTextEditor__Attribute, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontFixedPitch(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` factor: i32 `
    ///
    pub fn SetFontStretch(self: KTextEditor__Attribute, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontStretch(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn SetFontStyleHint(self: KTextEditor__Attribute, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleStrategy(self: KTextEditor__Attribute, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn FontStyleHint(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn FontStyleStrategy(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetFontHintingPreference(self: KTextEditor__Attribute, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn FontHintingPreference(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontKerning(self: KTextEditor__Attribute, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn FontKerning(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn SetUnderlineStyle(self: KTextEditor__Attribute, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn UnderlineStyle(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn SetVerticalAlignment(self: KTextEditor__Attribute, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn VerticalAlignment(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetTextOutline(self: KTextEditor__Attribute, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn TextOutline(self: KTextEditor__Attribute) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: KTextEditor__Attribute, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSuperScriptBaseline(self: KTextEditor__Attribute, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn SuperScriptBaseline(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSubScriptBaseline(self: KTextEditor__Attribute, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn SubScriptBaseline(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetBaselineOffset(self: KTextEditor__Attribute, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn BaselineOffset(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` anchor: bool `
    ///
    pub fn SetAnchor(self: KTextEditor__Attribute, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsAnchor(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAnchorHref(self: KTextEditor__Attribute, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorHref(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn SetAnchorNames(self: KTextEditor__Attribute, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("ktexteditor__attribute.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorNames(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` tableCellRowSpan: i32 `
    ///
    pub fn SetTableCellRowSpan(self: KTextEditor__Attribute, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(tableCellRowSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn TableCellRowSpan(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` tableCellColumnSpan: i32 `
    ///
    pub fn SetTableCellColumnSpan(self: KTextEditor__Attribute, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(tableCellColumnSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn TableCellColumnSpan(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn SetFont2(self: KTextEditor__Attribute, font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(font.ptr), @bitCast(behavior));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleHint2(self: KTextEditor__Attribute, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: KTextEditor__Attribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: KTextEditor__Attribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsEmpty(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Type(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ObjectIndex(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: KTextEditor__Attribute, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: KTextEditor__Attribute, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__Attribute, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: KTextEditor__Attribute, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: KTextEditor__Attribute, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: KTextEditor__Attribute, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: KTextEditor__Attribute, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: KTextEditor__Attribute, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: KTextEditor__Attribute, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
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
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: KTextEditor__Attribute, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: KTextEditor__Attribute, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: KTextEditor__Attribute, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: KTextEditor__Attribute, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: KTextEditor__Attribute, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("ktexteditor__attribute.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: KTextEditor__Attribute, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: KTextEditor__Attribute, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("ktexteditor__attribute.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn PropertyCount(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: KTextEditor__Attribute, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ObjectType(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsCharFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsBlockFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsListFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsFrameFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsImageFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsTableFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn IsTableCellFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToBlockFormat(self: KTextEditor__Attribute) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToCharFormat(self: KTextEditor__Attribute) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToListFormat(self: KTextEditor__Attribute) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToTableFormat(self: KTextEditor__Attribute) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToFrameFormat(self: KTextEditor__Attribute) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToImageFormat(self: KTextEditor__Attribute) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToTableCellFormat(self: KTextEditor__Attribute) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: KTextEditor__Attribute, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: KTextEditor__Attribute, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ToQVariant(self: KTextEditor__Attribute) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KTextEditor__Attribute, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Background(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ClearBackground(self: KTextEditor__Attribute) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Foreground(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn ClearForeground(self: KTextEditor__Attribute) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn Delete(self: KTextEditor__Attribute) void {
        qtc.KTextEditor__Attribute_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html)
pub const KTextEditor__AttributeBlock = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__AttributeBlock,

    pub const _is_KTextEditor__AttributeBlock = {};

    /// New constructs a new KTextEditor::AttributeBlock object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__AttributeBlock `
    ///
    pub fn New(param1: anytype) KTextEditor__AttributeBlock {
        comptime _ = @TypeOf(param1)._is_KTextEditor__AttributeBlock;
        return .{ .ptr = qtc.KTextEditor__AttributeBlock_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    pub fn Start(self: KTextEditor__AttributeBlock) i32 {
        return qtc.KTextEditor__AttributeBlock_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: KTextEditor__AttributeBlock, start: i32) void {
        qtc.KTextEditor__AttributeBlock_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    pub fn Length(self: KTextEditor__AttributeBlock) i32 {
        return qtc.KTextEditor__AttributeBlock_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: KTextEditor__AttributeBlock, length: i32) void {
        qtc.KTextEditor__AttributeBlock_SetLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    /// ` param1: KTextEditor__AttributeBlock `
    ///
    pub fn OperatorAssign(self: KTextEditor__AttributeBlock, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KTextEditor__AttributeBlock;
        qtc.KTextEditor__AttributeBlock_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    pub fn Delete(self: KTextEditor__AttributeBlock) void {
        qtc.KTextEditor__AttributeBlock_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attribute.html#public-types)
pub const enums = struct {
    pub const ActivationType = enum(i32) {
        pub const ActivateMouseIn: i32 = 0;
        pub const ActivateCaretIn: i32 = 1;
    };
};
