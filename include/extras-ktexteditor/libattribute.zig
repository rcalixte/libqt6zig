const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QPen = @import("libqt6").QPen;
const QSharedData = @import("libqt6").QSharedData;
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::Attribute object in C++ memory
    ///
    pub fn new() KTextEditor__Attribute {
        return .{ .ptr = qtc.KTextEditor__Attribute_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::Attribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` style: theme_enums.TextStyle `
    ///
    pub fn new2(_name: []const u8, style: i32) KTextEditor__Attribute {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Attribute_new2(name_str, @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTextEditor::Attribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` a: KTextEditor__Attribute `
    ///
    pub fn new3(a: anytype) KTextEditor__Attribute {
        comptime _ = @TypeOf(a)._is_KTextEditor__Attribute;
        return .{ .ptr = qtc.KTextEditor__Attribute_new3(@ptrCast(a.ptr)) };
    }

    /// Upcasts to a QSharedData object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn asQSharedData(self: KTextEditor__Attribute) QSharedData {
        return .{ .ptr = qtc.KTextEditor__Attribute_AsQSharedData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Attribute_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Attribute.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KTextEditor__Attribute, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KTextEditor__Attribute_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `defaultStyle` instead
    ///
    pub const DefaultStyle = defaultStyle;

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
    pub fn defaultStyle(self: KTextEditor__Attribute) i32 {
        return qtc.KTextEditor__Attribute_DefaultStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultStyle` instead
    ///
    pub const SetDefaultStyle = setDefaultStyle;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setDefaultStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` style: theme_enums.TextStyle `
    ///
    pub fn setDefaultStyle(self: KTextEditor__Attribute, style: i32) void {
        qtc.KTextEditor__Attribute_SetDefaultStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `skipSpellChecking` instead
    ///
    pub const SkipSpellChecking = skipSpellChecking;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#skipSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn skipSpellChecking(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_SkipSpellChecking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSkipSpellChecking` instead
    ///
    pub const SetSkipSpellChecking = setSkipSpellChecking;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSkipSpellChecking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` skipspellchecking: bool `
    ///
    pub fn setSkipSpellChecking(self: KTextEditor__Attribute, skipspellchecking: bool) void {
        qtc.KTextEditor__Attribute_SetSkipSpellChecking(@ptrCast(self.ptr), skipspellchecking);
    }

    /// ### DEPRECATED: Use `fontBold` instead
    ///
    pub const FontBold = fontBold;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#fontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontBold(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_FontBold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontBold` instead
    ///
    pub const SetFontBold = setFontBold;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn setFontBold(self: KTextEditor__Attribute) void {
        qtc.KTextEditor__Attribute_SetFontBold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `outline` instead
    ///
    pub const Outline = outline;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#outline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn outline(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.KTextEditor__Attribute_Outline(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOutline` instead
    ///
    pub const SetOutline = setOutline;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setOutline(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.KTextEditor__Attribute_SetOutline(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `selectedForeground` instead
    ///
    pub const SelectedForeground = selectedForeground;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn selectedForeground(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.KTextEditor__Attribute_SelectedForeground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedForeground` instead
    ///
    pub const SetSelectedForeground = setSelectedForeground;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` _foreground: QBrush `
    ///
    pub fn setSelectedForeground(self: KTextEditor__Attribute, _foreground: anytype) void {
        comptime _ = @TypeOf(_foreground)._is_QBrush;
        qtc.KTextEditor__Attribute_SetSelectedForeground(@ptrCast(self.ptr), @ptrCast(_foreground.ptr));
    }

    /// ### DEPRECATED: Use `selectedBackground` instead
    ///
    pub const SelectedBackground = selectedBackground;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn selectedBackground(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.KTextEditor__Attribute_SelectedBackground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedBackground` instead
    ///
    pub const SetSelectedBackground = setSelectedBackground;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setSelectedBackground(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.KTextEditor__Attribute_SetSelectedBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `backgroundFillWhitespace` instead
    ///
    pub const BackgroundFillWhitespace = backgroundFillWhitespace;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#backgroundFillWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn backgroundFillWhitespace(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_BackgroundFillWhitespace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundFillWhitespace` instead
    ///
    pub const SetBackgroundFillWhitespace = setBackgroundFillWhitespace;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setBackgroundFillWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` fillWhitespace: bool `
    ///
    pub fn setBackgroundFillWhitespace(self: KTextEditor__Attribute, fillWhitespace: bool) void {
        qtc.KTextEditor__Attribute_SetBackgroundFillWhitespace(@ptrCast(self.ptr), fillWhitespace);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn clear(self: KTextEditor__Attribute) void {
        qtc.KTextEditor__Attribute_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasAnyProperty` instead
    ///
    pub const HasAnyProperty = hasAnyProperty;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#hasAnyProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn hasAnyProperty(self: KTextEditor__Attribute) bool {
        return qtc.KTextEditor__Attribute_HasAnyProperty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` a: KTextEditor__Attribute `
    ///
    pub fn operatorPlusAssign(self: KTextEditor__Attribute, a: anytype) KTextEditor__Attribute {
        comptime _ = @TypeOf(a)._is_KTextEditor__Attribute;
        return .{ .ptr = qtc.KTextEditor__Attribute_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` a: KTextEditor__Attribute `
    ///
    pub fn operatorAssign(self: KTextEditor__Attribute, a: anytype) void {
        comptime _ = @TypeOf(a)._is_KTextEditor__Attribute;
        qtc.KTextEditor__Attribute_OperatorAssign(@ptrCast(self.ptr), @ptrCast(a.ptr));
    }

    /// ### DEPRECATED: Use `setFontBold1` instead
    ///
    pub const SetFontBold1 = setFontBold1;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` bold: bool `
    ///
    pub fn setFontBold1(self: KTextEditor__Attribute, bold: bool) void {
        qtc.KTextEditor__Attribute_SetFontBold1(@ptrCast(self.ptr), bold);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isValid(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KTextEditor__Attribute, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn font(self: KTextEditor__Attribute) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFamily` instead
    ///
    pub const SetFontFamily = setFontFamily;

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
    pub fn setFontFamily(self: KTextEditor__Attribute, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### DEPRECATED: Use `fontFamily` instead
    ///
    pub const FontFamily = fontFamily;

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
    pub fn fontFamily(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Attribute.fontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFontFamilies` instead
    ///
    pub const SetFontFamilies = setFontFamilies;

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
    pub fn setFontFamilies(self: KTextEditor__Attribute, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("KTextEditor__Attribute.setFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### DEPRECATED: Use `fontFamilies` instead
    ///
    pub const FontFamilies = fontFamilies;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontFamilies(self: KTextEditor__Attribute) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontStyleName` instead
    ///
    pub const SetFontStyleName = setFontStyleName;

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
    pub fn setFontStyleName(self: KTextEditor__Attribute, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### DEPRECATED: Use `fontStyleName` instead
    ///
    pub const FontStyleName = fontStyleName;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontStyleName(self: KTextEditor__Attribute) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontPointSize` instead
    ///
    pub const SetFontPointSize = setFontPointSize;

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
    pub fn setFontPointSize(self: KTextEditor__Attribute, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `fontPointSize` instead
    ///
    pub const FontPointSize = fontPointSize;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontPointSize(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWeight` instead
    ///
    pub const SetFontWeight = setFontWeight;

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
    pub fn setFontWeight(self: KTextEditor__Attribute, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// ### DEPRECATED: Use `fontWeight` instead
    ///
    pub const FontWeight = fontWeight;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontWeight(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontItalic` instead
    ///
    pub const SetFontItalic = setFontItalic;

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
    pub fn setFontItalic(self: KTextEditor__Attribute, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// ### DEPRECATED: Use `fontItalic` instead
    ///
    pub const FontItalic = fontItalic;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontItalic(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontCapitalization` instead
    ///
    pub const SetFontCapitalization = setFontCapitalization;

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
    pub fn setFontCapitalization(self: KTextEditor__Attribute, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// ### DEPRECATED: Use `fontCapitalization` instead
    ///
    pub const FontCapitalization = fontCapitalization;

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
    pub fn fontCapitalization(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacingType` instead
    ///
    pub const SetFontLetterSpacingType = setFontLetterSpacingType;

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
    pub fn setFontLetterSpacingType(self: KTextEditor__Attribute, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// ### DEPRECATED: Use `fontLetterSpacingType` instead
    ///
    pub const FontLetterSpacingType = fontLetterSpacingType;

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
    pub fn fontLetterSpacingType(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacing` instead
    ///
    pub const SetFontLetterSpacing = setFontLetterSpacing;

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
    pub fn setFontLetterSpacing(self: KTextEditor__Attribute, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontLetterSpacing` instead
    ///
    pub const FontLetterSpacing = fontLetterSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontLetterSpacing(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWordSpacing` instead
    ///
    pub const SetFontWordSpacing = setFontWordSpacing;

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
    pub fn setFontWordSpacing(self: KTextEditor__Attribute, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontWordSpacing` instead
    ///
    pub const FontWordSpacing = fontWordSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontWordSpacing(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontUnderline` instead
    ///
    pub const SetFontUnderline = setFontUnderline;

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
    pub fn setFontUnderline(self: KTextEditor__Attribute, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### DEPRECATED: Use `fontUnderline` instead
    ///
    pub const FontUnderline = fontUnderline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontUnderline(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontOverline` instead
    ///
    pub const SetFontOverline = setFontOverline;

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
    pub fn setFontOverline(self: KTextEditor__Attribute, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// ### DEPRECATED: Use `fontOverline` instead
    ///
    pub const FontOverline = fontOverline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontOverline(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStrikeOut` instead
    ///
    pub const SetFontStrikeOut = setFontStrikeOut;

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
    pub fn setFontStrikeOut(self: KTextEditor__Attribute, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### DEPRECATED: Use `fontStrikeOut` instead
    ///
    pub const FontStrikeOut = fontStrikeOut;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontStrikeOut(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineColor` instead
    ///
    pub const SetUnderlineColor = setUnderlineColor;

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
    pub fn setUnderlineColor(self: KTextEditor__Attribute, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `underlineColor` instead
    ///
    pub const UnderlineColor = underlineColor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn underlineColor(self: KTextEditor__Attribute) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFixedPitch` instead
    ///
    pub const SetFontFixedPitch = setFontFixedPitch;

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
    pub fn setFontFixedPitch(self: KTextEditor__Attribute, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// ### DEPRECATED: Use `fontFixedPitch` instead
    ///
    pub const FontFixedPitch = fontFixedPitch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontFixedPitch(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStretch` instead
    ///
    pub const SetFontStretch = setFontStretch;

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
    pub fn setFontStretch(self: KTextEditor__Attribute, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `fontStretch` instead
    ///
    pub const FontStretch = fontStretch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontStretch(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStyleHint` instead
    ///
    pub const SetFontStyleHint = setFontStyleHint;

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
    pub fn setFontStyleHint(self: KTextEditor__Attribute, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setFontStyleStrategy` instead
    ///
    pub const SetFontStyleStrategy = setFontStyleStrategy;

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
    pub fn setFontStyleStrategy(self: KTextEditor__Attribute, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `fontStyleHint` instead
    ///
    pub const FontStyleHint = fontStyleHint;

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
    pub fn fontStyleHint(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontStyleStrategy` instead
    ///
    pub const FontStyleStrategy = fontStyleStrategy;

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
    pub fn fontStyleStrategy(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontHintingPreference` instead
    ///
    pub const SetFontHintingPreference = setFontHintingPreference;

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
    pub fn setFontHintingPreference(self: KTextEditor__Attribute, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// ### DEPRECATED: Use `fontHintingPreference` instead
    ///
    pub const FontHintingPreference = fontHintingPreference;

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
    pub fn fontHintingPreference(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontKerning` instead
    ///
    pub const SetFontKerning = setFontKerning;

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
    pub fn setFontKerning(self: KTextEditor__Attribute, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fontKerning` instead
    ///
    pub const FontKerning = fontKerning;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn fontKerning(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineStyle` instead
    ///
    pub const SetUnderlineStyle = setUnderlineStyle;

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
    pub fn setUnderlineStyle(self: KTextEditor__Attribute, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `underlineStyle` instead
    ///
    pub const UnderlineStyle = underlineStyle;

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
    pub fn underlineStyle(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalAlignment` instead
    ///
    pub const SetVerticalAlignment = setVerticalAlignment;

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
    pub fn setVerticalAlignment(self: KTextEditor__Attribute, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `verticalAlignment` instead
    ///
    pub const VerticalAlignment = verticalAlignment;

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
    pub fn verticalAlignment(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextOutline` instead
    ///
    pub const SetTextOutline = setTextOutline;

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
    pub fn setTextOutline(self: KTextEditor__Attribute, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `textOutline` instead
    ///
    pub const TextOutline = textOutline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn textOutline(self: KTextEditor__Attribute) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

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
    pub fn setToolTip(self: KTextEditor__Attribute, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

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
    pub fn toolTip(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Attribute.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuperScriptBaseline` instead
    ///
    pub const SetSuperScriptBaseline = setSuperScriptBaseline;

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
    pub fn setSuperScriptBaseline(self: KTextEditor__Attribute, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `superScriptBaseline` instead
    ///
    pub const SuperScriptBaseline = superScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn superScriptBaseline(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubScriptBaseline` instead
    ///
    pub const SetSubScriptBaseline = setSubScriptBaseline;

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
    pub fn setSubScriptBaseline(self: KTextEditor__Attribute, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `subScriptBaseline` instead
    ///
    pub const SubScriptBaseline = subScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn subScriptBaseline(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

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
    pub fn setBaselineOffset(self: KTextEditor__Attribute, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn baselineOffset(self: KTextEditor__Attribute) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchor` instead
    ///
    pub const SetAnchor = setAnchor;

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
    pub fn setAnchor(self: KTextEditor__Attribute, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// ### DEPRECATED: Use `isAnchor` instead
    ///
    pub const IsAnchor = isAnchor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isAnchor(self: KTextEditor__Attribute) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchorHref` instead
    ///
    pub const SetAnchorHref = setAnchorHref;

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
    pub fn setAnchorHref(self: KTextEditor__Attribute, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `anchorHref` instead
    ///
    pub const AnchorHref = anchorHref;

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
    pub fn anchorHref(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Attribute.anchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAnchorNames` instead
    ///
    pub const SetAnchorNames = setAnchorNames;

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
    pub fn setAnchorNames(self: KTextEditor__Attribute, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("KTextEditor__Attribute.setAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// ### DEPRECATED: Use `anchorNames` instead
    ///
    pub const AnchorNames = anchorNames;

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
    pub fn anchorNames(self: KTextEditor__Attribute, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Attribute.anchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Attribute.anchorNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setTableCellRowSpan` instead
    ///
    pub const SetTableCellRowSpan = setTableCellRowSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` _tableCellRowSpan: i32 `
    ///
    pub fn setTableCellRowSpan(self: KTextEditor__Attribute, _tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(_tableCellRowSpan));
    }

    /// ### DEPRECATED: Use `tableCellRowSpan` instead
    ///
    pub const TableCellRowSpan = tableCellRowSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn tableCellRowSpan(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTableCellColumnSpan` instead
    ///
    pub const SetTableCellColumnSpan = setTableCellColumnSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` _tableCellColumnSpan: i32 `
    ///
    pub fn setTableCellColumnSpan(self: KTextEditor__Attribute, _tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(_tableCellColumnSpan));
    }

    /// ### DEPRECATED: Use `tableCellColumnSpan` instead
    ///
    pub const TableCellColumnSpan = tableCellColumnSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn tableCellColumnSpan(self: KTextEditor__Attribute) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont2` instead
    ///
    pub const SetFont2 = setFont2;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    /// ` _font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn setFont2(self: KTextEditor__Attribute, _font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(_font.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `setFontStyleHint2` instead
    ///
    pub const SetFontStyleHint2 = setFontStyleHint2;

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
    pub fn setFontStyleHint2(self: KTextEditor__Attribute, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

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
    pub fn swap(self: KTextEditor__Attribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

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
    pub fn merge(self: KTextEditor__Attribute, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isEmpty(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn type0(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn objectIndex(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

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
    pub fn setObjectIndex(self: KTextEditor__Attribute, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: KTextEditor__Attribute, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: KTextEditor__Attribute, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

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
    pub fn clearProperty(self: KTextEditor__Attribute, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

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
    pub fn hasProperty(self: KTextEditor__Attribute, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

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
    pub fn boolProperty(self: KTextEditor__Attribute, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

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
    pub fn intProperty(self: KTextEditor__Attribute, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

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
    pub fn doubleProperty(self: KTextEditor__Attribute, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

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
    pub fn stringProperty(self: KTextEditor__Attribute, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Attribute.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

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
    pub fn colorProperty(self: KTextEditor__Attribute, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

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
    pub fn penProperty(self: KTextEditor__Attribute, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

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
    pub fn brushProperty(self: KTextEditor__Attribute, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

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
    pub fn lengthProperty(self: KTextEditor__Attribute, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

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
    pub fn lengthVectorProperty(self: KTextEditor__Attribute, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("KTextEditor__Attribute.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

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
    pub fn setProperty2(self: KTextEditor__Attribute, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

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
    pub fn properties(self: KTextEditor__Attribute, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KTextEditor__Attribute.properties: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn propertyCount(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

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
    pub fn setObjectType(self: KTextEditor__Attribute, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn objectType(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isCharFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isBlockFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isListFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isFrameFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isImageFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isTableFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn isTableCellFormat(self: KTextEditor__Attribute) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toBlockFormat(self: KTextEditor__Attribute) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toCharFormat(self: KTextEditor__Attribute) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toListFormat(self: KTextEditor__Attribute) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toTableFormat(self: KTextEditor__Attribute) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toFrameFormat(self: KTextEditor__Attribute) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toImageFormat(self: KTextEditor__Attribute) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toTableCellFormat(self: KTextEditor__Attribute) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: KTextEditor__Attribute, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: KTextEditor__Attribute, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn toQVariant(self: KTextEditor__Attribute) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

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
    pub fn setLayoutDirection(self: KTextEditor__Attribute, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: KTextEditor__Attribute) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

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
    pub fn setBackground(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn background(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn clearBackground(self: KTextEditor__Attribute) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

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
    pub fn setForeground(self: KTextEditor__Attribute, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn foreground(self: KTextEditor__Attribute) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn clearForeground(self: KTextEditor__Attribute) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Attribute `
    ///
    pub fn delete(self: KTextEditor__Attribute) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::AttributeBlock object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTextEditor__AttributeBlock `
    ///
    pub fn new(param1: anytype) KTextEditor__AttributeBlock {
        comptime _ = @TypeOf(param1)._is_KTextEditor__AttributeBlock;
        return .{ .ptr = qtc.KTextEditor__AttributeBlock_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    pub fn start(self: KTextEditor__AttributeBlock) i32 {
        return qtc.KTextEditor__AttributeBlock_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: KTextEditor__AttributeBlock, _start: i32) void {
        qtc.KTextEditor__AttributeBlock_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    pub fn length(self: KTextEditor__AttributeBlock) i32 {
        return qtc.KTextEditor__AttributeBlock_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    /// ` _length: i32 `
    ///
    pub fn setLength(self: KTextEditor__AttributeBlock, _length: i32) void {
        qtc.KTextEditor__AttributeBlock_SetLength(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    /// ` param1: KTextEditor__AttributeBlock `
    ///
    pub fn operatorAssign(self: KTextEditor__AttributeBlock, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KTextEditor__AttributeBlock;
        qtc.KTextEditor__AttributeBlock_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__AttributeBlock `
    ///
    pub fn delete(self: KTextEditor__AttributeBlock) void {
        qtc.KTextEditor__AttributeBlock_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attribute.html#public-types)
pub const enums = struct {
    pub const ActivationType = enum {
        pub const ActivateMouseIn: i32 = 0;
        pub const ActivateCaretIn: i32 = 1;
    };
};
