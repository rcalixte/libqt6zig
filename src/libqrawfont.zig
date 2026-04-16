const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QFont = @import("libqt6").QFont;
const QFont__Tag = @import("libqt6").QFont__Tag;
const QImage = @import("libqt6").QImage;
const QPainterPath = @import("libqt6").QPainterPath;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QTransform = @import("libqt6").QTransform;
const qfont_enums = @import("libqfont.zig").enums;
const qfontdatabase_enums = @import("libqfontdatabase.zig").enums;
const qrawfont_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)
pub const QRawFont = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRawFont,

    pub const _is_QRawFont = {};

    /// New constructs a new QRawFont object.
    ///
    pub fn New() QRawFont {
        return .{ .ptr = qtc.QRawFont_new() };
    }

    /// New2 constructs a new QRawFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` pixelSize: f64 `
    ///
    pub fn New2(fileName: []const u8, pixelSize: f64) QRawFont {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new2(fileName_str, @bitCast(pixelSize)) };
    }

    /// New3 constructs a new QRawFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fontData: []u8 `
    ///
    /// ` pixelSize: f64 `
    ///
    pub fn New3(fontData: []u8, pixelSize: f64) QRawFont {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new3(fontData_str, @bitCast(pixelSize)) };
    }

    /// New4 constructs a new QRawFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRawFont `
    ///
    pub fn New4(other: anytype) QRawFont {
        comptime _ = @TypeOf(other)._is_QRawFont;
        return .{ .ptr = qtc.QRawFont_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QRawFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` pixelSize: f64 `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn New5(fileName: []const u8, pixelSize: f64, hintingPreference: i32) QRawFont {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new5(fileName_str, @bitCast(pixelSize), @bitCast(hintingPreference)) };
    }

    /// New6 constructs a new QRawFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fontData: []u8 `
    ///
    /// ` pixelSize: f64 `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn New6(fontData: []u8, pixelSize: f64, hintingPreference: i32) QRawFont {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new6(fontData_str, @bitCast(pixelSize), @bitCast(hintingPreference)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn OperatorAssign(self: QRawFont, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRawFont;
        qtc.QRawFont_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn Swap(self: QRawFont, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRawFont;
        qtc.QRawFont_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn IsValid(self: QRawFont) bool {
        return qtc.QRawFont_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn OperatorEqual(self: QRawFont, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QRawFont;
        return qtc.QRawFont_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn OperatorNotEqual(self: QRawFont, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QRawFont;
        return qtc.QRawFont_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#familyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FamilyName(self: QRawFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRawFont_FamilyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrawfont.FamilyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleName(self: QRawFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRawFont_StyleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrawfont.StyleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Style `
    ///
    pub fn Style(self: QRawFont) i32 {
        return qtc.QRawFont_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn Weight(self: QRawFont) i32 {
        return qtc.QRawFont_Weight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn GlyphIndexesForString(self: QRawFont, allocator: std.mem.Allocator, text: []const u8) []u32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QRawFont_GlyphIndexesForString(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qrawfont.GlyphIndexesForString: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` glyphIndexes: []u32 `
    ///
    pub fn AdvancesForGlyphIndexes(self: QRawFont, allocator: std.mem.Allocator, glyphIndexes: []u32) []QPointF {
        const glyphIndexes_list = qtc.libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QRawFont_AdvancesForGlyphIndexes(@ptrCast(self.ptr), glyphIndexes_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qrawfont.AdvancesForGlyphIndexes: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` glyphIndexes: []u32 `
    ///
    /// ` layoutFlags: flag of qrawfont_enums.LayoutFlag `
    ///
    pub fn AdvancesForGlyphIndexes2(self: QRawFont, allocator: std.mem.Allocator, glyphIndexes: []u32, layoutFlags: i32) []QPointF {
        const glyphIndexes_list = qtc.libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QRawFont_AdvancesForGlyphIndexes2(@ptrCast(self.ptr), glyphIndexes_list, @bitCast(layoutFlags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qrawfont.AdvancesForGlyphIndexes2: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForChars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` chars: QChar `
    ///
    /// ` numChars: i32 `
    ///
    /// ` glyphIndexes: *u32 `
    ///
    /// ` numGlyphs: *i32 `
    ///
    pub fn GlyphIndexesForChars(self: QRawFont, chars: anytype, numChars: i32, glyphIndexes: *u32, numGlyphs: *i32) bool {
        comptime _ = @TypeOf(chars)._is_QChar;
        return qtc.QRawFont_GlyphIndexesForChars(@ptrCast(self.ptr), @ptrCast(chars.ptr), @bitCast(numChars), @ptrCast(glyphIndexes), @ptrCast(numGlyphs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndexes: *const u32 `
    ///
    /// ` advances: QPointF `
    ///
    /// ` numGlyphs: i32 `
    ///
    pub fn AdvancesForGlyphIndexes3(self: QRawFont, glyphIndexes: *const u32, advances: anytype, numGlyphs: i32) bool {
        comptime _ = @TypeOf(advances)._is_QPointF;
        return qtc.QRawFont_AdvancesForGlyphIndexes3(@ptrCast(self.ptr), @ptrCast(glyphIndexes), @ptrCast(advances.ptr), @bitCast(numGlyphs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndexes: *const u32 `
    ///
    /// ` advances: QPointF `
    ///
    /// ` numGlyphs: i32 `
    ///
    /// ` layoutFlags: flag of qrawfont_enums.LayoutFlag `
    ///
    pub fn AdvancesForGlyphIndexes4(self: QRawFont, glyphIndexes: *const u32, advances: anytype, numGlyphs: i32, layoutFlags: i32) bool {
        comptime _ = @TypeOf(advances)._is_QPointF;
        return qtc.QRawFont_AdvancesForGlyphIndexes4(@ptrCast(self.ptr), @ptrCast(glyphIndexes), @ptrCast(advances.ptr), @bitCast(numGlyphs), @bitCast(layoutFlags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    pub fn AlphaMapForGlyph(self: QRawFont, glyphIndex: u32) QImage {
        return .{ .ptr = qtc.QRawFont_AlphaMapForGlyph(@ptrCast(self.ptr), @bitCast(glyphIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#pathForGlyph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    pub fn PathForGlyph(self: QRawFont, glyphIndex: u32) QPainterPath {
        return .{ .ptr = qtc.QRawFont_PathForGlyph(@ptrCast(self.ptr), @bitCast(glyphIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    pub fn BoundingRect(self: QRawFont, glyphIndex: u32) QRectF {
        return .{ .ptr = qtc.QRawFont_BoundingRect(@ptrCast(self.ptr), @bitCast(glyphIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#setPixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` pixelSize: f64 `
    ///
    pub fn SetPixelSize(self: QRawFont, pixelSize: f64) void {
        qtc.QRawFont_SetPixelSize(@ptrCast(self.ptr), @bitCast(pixelSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn PixelSize(self: QRawFont) f64 {
        return qtc.QRawFont_PixelSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#hintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn HintingPreference(self: QRawFont) i32 {
        return qtc.QRawFont_HintingPreference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn Ascent(self: QRawFont) f64 {
        return qtc.QRawFont_Ascent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn CapHeight(self: QRawFont) f64 {
        return qtc.QRawFont_CapHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn Descent(self: QRawFont) f64 {
        return qtc.QRawFont_Descent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn Leading(self: QRawFont) f64 {
        return qtc.QRawFont_Leading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn XHeight(self: QRawFont) f64 {
        return qtc.QRawFont_XHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn AverageCharWidth(self: QRawFont) f64 {
        return qtc.QRawFont_AverageCharWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#maxCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn MaxCharWidth(self: QRawFont) f64 {
        return qtc.QRawFont_MaxCharWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#lineThickness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn LineThickness(self: QRawFont) f64 {
        return qtc.QRawFont_LineThickness(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#underlinePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn UnderlinePosition(self: QRawFont) f64 {
        return qtc.QRawFont_UnderlinePosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#unitsPerEm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn UnitsPerEm(self: QRawFont) f64 {
        return qtc.QRawFont_UnitsPerEm(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#loadFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` pixelSize: f64 `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn LoadFromFile(self: QRawFont, fileName: []const u8, pixelSize: f64, hintingPreference: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QRawFont_LoadFromFile(@ptrCast(self.ptr), fileName_str, @bitCast(pixelSize), @bitCast(hintingPreference));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` fontData: []u8 `
    ///
    /// ` pixelSize: f64 `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn LoadFromData(self: QRawFont, fontData: []u8, pixelSize: f64, hintingPreference: i32) void {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        qtc.QRawFont_LoadFromData(@ptrCast(self.ptr), fontData_str, @bitCast(pixelSize), @bitCast(hintingPreference));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn SupportsCharacter(self: QRawFont, ucs4: u32) bool {
        return qtc.QRawFont_SupportsCharacter(@ptrCast(self.ptr), @bitCast(ucs4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` character: QChar `
    ///
    pub fn SupportsCharacter2(self: QRawFont, character: anytype) bool {
        comptime _ = @TypeOf(character)._is_QChar;
        return qtc.QRawFont_SupportsCharacter2(@ptrCast(self.ptr), @ptrCast(character.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportedWritingSystems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qfontdatabase_enums.WritingSystem `
    ///
    pub fn SupportedWritingSystems(self: QRawFont, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QRawFont_SupportedWritingSystems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qrawfont.SupportedWritingSystems: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tagName: [:0]const u8 `
    ///
    pub fn FontTable(self: QRawFont, allocator: std.mem.Allocator, tagName: [:0]const u8) []u8 {
        const tagName_Cstring = tagName.ptr;
        var _bytearray: qtc.libqt_string = qtc.QRawFont_FontTable(@ptrCast(self.ptr), tagName_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrawfont.FontTable: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn FontTable2(self: QRawFont, allocator: std.mem.Allocator, tag: anytype) []u8 {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        var _bytearray: qtc.libqt_string = qtc.QRawFont_FontTable2(@ptrCast(self.ptr), @ptrCast(tag.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrawfont.FontTable2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn FromFont(font: anytype) QRawFont {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QRawFont_FromFont(@ptrCast(font.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    /// ` antialiasingType: qrawfont_enums.AntialiasingType `
    ///
    pub fn AlphaMapForGlyph2(self: QRawFont, glyphIndex: u32, antialiasingType: i32) QImage {
        return .{ .ptr = qtc.QRawFont_AlphaMapForGlyph2(@ptrCast(self.ptr), @bitCast(glyphIndex), @bitCast(antialiasingType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    /// ` antialiasingType: qrawfont_enums.AntialiasingType `
    ///
    /// ` transform: QTransform `
    ///
    pub fn AlphaMapForGlyph3(self: QRawFont, glyphIndex: u32, antialiasingType: i32, transform: anytype) QImage {
        comptime _ = @TypeOf(transform)._is_QTransform;
        return .{ .ptr = qtc.QRawFont_AlphaMapForGlyph3(@ptrCast(self.ptr), @bitCast(glyphIndex), @bitCast(antialiasingType), @ptrCast(transform.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` writingSystem: qfontdatabase_enums.WritingSystem `
    ///
    pub fn FromFont2(font: anytype, writingSystem: i32) QRawFont {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QRawFont_FromFont2(@ptrCast(font.ptr), @bitCast(writingSystem)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#dtor.QRawFont)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRawFont `
    ///
    pub fn Delete(self: QRawFont) void {
        qtc.QRawFont_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#public-types)
pub const enums = struct {
    pub const AntialiasingType = enum(i32) {
        pub const PixelAntialiasing: i32 = 0;
        pub const SubPixelAntialiasing: i32 = 1;
    };

    pub const LayoutFlag = enum(i32) {
        pub const SeparateAdvances: i32 = 0;
        pub const KernedAdvances: i32 = 1;
        pub const UseDesignMetrics: i32 = 2;
    };
};
