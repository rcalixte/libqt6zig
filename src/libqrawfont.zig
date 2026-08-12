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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRawFont object in C++ memory
    ///
    pub fn new() QRawFont {
        return .{ .ptr = qtc.QRawFont_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRawFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _pixelSize: f64 `
    ///
    pub fn new2(fileName: []const u8, _pixelSize: f64) QRawFont {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new2(fileName_str, @bitCast(_pixelSize)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRawFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fontData: []u8 `
    ///
    /// ` _pixelSize: f64 `
    ///
    pub fn new3(fontData: []u8, _pixelSize: f64) QRawFont {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new3(fontData_str, @bitCast(_pixelSize)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRawFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRawFont `
    ///
    pub fn new4(other: anytype) QRawFont {
        comptime _ = @TypeOf(other)._is_QRawFont;
        return .{ .ptr = qtc.QRawFont_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRawFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _pixelSize: f64 `
    ///
    /// ` _hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn new5(fileName: []const u8, _pixelSize: f64, _hintingPreference: i32) QRawFont {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new5(fileName_str, @bitCast(_pixelSize), @bitCast(_hintingPreference)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QRawFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fontData: []u8 `
    ///
    /// ` _pixelSize: f64 `
    ///
    /// ` _hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn new6(fontData: []u8, _pixelSize: f64, _hintingPreference: i32) QRawFont {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        return .{ .ptr = qtc.QRawFont_new6(fontData_str, @bitCast(_pixelSize), @bitCast(_hintingPreference)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn operatorAssign(self: QRawFont, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRawFont;
        qtc.QRawFont_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn swap(self: QRawFont, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRawFont;
        qtc.QRawFont_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn isValid(self: QRawFont) bool {
        return qtc.QRawFont_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn operatorEqual(self: QRawFont, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QRawFont;
        return qtc.QRawFont_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` other: QRawFont `
    ///
    pub fn operatorNotEqual(self: QRawFont, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QRawFont;
        return qtc.QRawFont_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `familyName` instead
    ///
    pub const FamilyName = familyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#familyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn familyName(self: QRawFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRawFont_FamilyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRawFont.familyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `styleName` instead
    ///
    pub const StyleName = styleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleName(self: QRawFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRawFont_StyleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRawFont.styleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

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
    pub fn style(self: QRawFont) i32 {
        return qtc.QRawFont_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `weight` instead
    ///
    pub const Weight = weight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn weight(self: QRawFont) i32 {
        return qtc.QRawFont_Weight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glyphIndexesForString` instead
    ///
    pub const GlyphIndexesForString = glyphIndexesForString;

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
    pub fn glyphIndexesForString(self: QRawFont, allocator: std.mem.Allocator, text: []const u8) []u32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QRawFont_GlyphIndexesForString(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("QRawFont.glyphIndexesForString: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `advancesForGlyphIndexes` instead
    ///
    pub const AdvancesForGlyphIndexes = advancesForGlyphIndexes;

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
    pub fn advancesForGlyphIndexes(self: QRawFont, allocator: std.mem.Allocator, glyphIndexes: []u32) []QPointF {
        const glyphIndexes_list = qtc.libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QRawFont_AdvancesForGlyphIndexes(@ptrCast(self.ptr), glyphIndexes_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QRawFont.advancesForGlyphIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `advancesForGlyphIndexes2` instead
    ///
    pub const AdvancesForGlyphIndexes2 = advancesForGlyphIndexes2;

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
    pub fn advancesForGlyphIndexes2(self: QRawFont, allocator: std.mem.Allocator, glyphIndexes: []u32, layoutFlags: i32) []QPointF {
        const glyphIndexes_list = qtc.libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QRawFont_AdvancesForGlyphIndexes2(@ptrCast(self.ptr), glyphIndexes_list, @bitCast(layoutFlags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QRawFont.advancesForGlyphIndexes2: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphIndexesForChars` instead
    ///
    pub const GlyphIndexesForChars = glyphIndexesForChars;

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
    pub fn glyphIndexesForChars(self: QRawFont, chars: anytype, numChars: i32, glyphIndexes: *u32, numGlyphs: *i32) bool {
        comptime _ = @TypeOf(chars)._is_QChar;
        return qtc.QRawFont_GlyphIndexesForChars(@ptrCast(self.ptr), @ptrCast(chars.ptr), @bitCast(numChars), @ptrCast(glyphIndexes), @ptrCast(numGlyphs));
    }

    /// ### DEPRECATED: Use `advancesForGlyphIndexes3` instead
    ///
    pub const AdvancesForGlyphIndexes3 = advancesForGlyphIndexes3;

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
    pub fn advancesForGlyphIndexes3(self: QRawFont, glyphIndexes: *const u32, advances: anytype, numGlyphs: i32) bool {
        comptime _ = @TypeOf(advances)._is_QPointF;
        return qtc.QRawFont_AdvancesForGlyphIndexes3(@ptrCast(self.ptr), @ptrCast(glyphIndexes), @ptrCast(advances.ptr), @bitCast(numGlyphs));
    }

    /// ### DEPRECATED: Use `advancesForGlyphIndexes4` instead
    ///
    pub const AdvancesForGlyphIndexes4 = advancesForGlyphIndexes4;

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
    pub fn advancesForGlyphIndexes4(self: QRawFont, glyphIndexes: *const u32, advances: anytype, numGlyphs: i32, layoutFlags: i32) bool {
        comptime _ = @TypeOf(advances)._is_QPointF;
        return qtc.QRawFont_AdvancesForGlyphIndexes4(@ptrCast(self.ptr), @ptrCast(glyphIndexes), @ptrCast(advances.ptr), @bitCast(numGlyphs), @bitCast(layoutFlags));
    }

    /// ### DEPRECATED: Use `alphaMapForGlyph` instead
    ///
    pub const AlphaMapForGlyph = alphaMapForGlyph;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    pub fn alphaMapForGlyph(self: QRawFont, glyphIndex: u32) QImage {
        return .{ .ptr = qtc.QRawFont_AlphaMapForGlyph(@ptrCast(self.ptr), @bitCast(glyphIndex)) };
    }

    /// ### DEPRECATED: Use `pathForGlyph` instead
    ///
    pub const PathForGlyph = pathForGlyph;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#pathForGlyph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    pub fn pathForGlyph(self: QRawFont, glyphIndex: u32) QPainterPath {
        return .{ .ptr = qtc.QRawFont_PathForGlyph(@ptrCast(self.ptr), @bitCast(glyphIndex)) };
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` glyphIndex: u32 `
    ///
    pub fn boundingRect(self: QRawFont, glyphIndex: u32) QRectF {
        return .{ .ptr = qtc.QRawFont_BoundingRect(@ptrCast(self.ptr), @bitCast(glyphIndex)) };
    }

    /// ### DEPRECATED: Use `setPixelSize` instead
    ///
    pub const SetPixelSize = setPixelSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#setPixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` _pixelSize: f64 `
    ///
    pub fn setPixelSize(self: QRawFont, _pixelSize: f64) void {
        qtc.QRawFont_SetPixelSize(@ptrCast(self.ptr), @bitCast(_pixelSize));
    }

    /// ### DEPRECATED: Use `pixelSize` instead
    ///
    pub const PixelSize = pixelSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn pixelSize(self: QRawFont) f64 {
        return qtc.QRawFont_PixelSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hintingPreference` instead
    ///
    pub const HintingPreference = hintingPreference;

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
    pub fn hintingPreference(self: QRawFont) i32 {
        return qtc.QRawFont_HintingPreference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ascent` instead
    ///
    pub const Ascent = ascent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn ascent(self: QRawFont) f64 {
        return qtc.QRawFont_Ascent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capHeight` instead
    ///
    pub const CapHeight = capHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn capHeight(self: QRawFont) f64 {
        return qtc.QRawFont_CapHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `descent` instead
    ///
    pub const Descent = descent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn descent(self: QRawFont) f64 {
        return qtc.QRawFont_Descent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `leading` instead
    ///
    pub const Leading = leading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn leading(self: QRawFont) f64 {
        return qtc.QRawFont_Leading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `xHeight` instead
    ///
    pub const XHeight = xHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn xHeight(self: QRawFont) f64 {
        return qtc.QRawFont_XHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `averageCharWidth` instead
    ///
    pub const AverageCharWidth = averageCharWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn averageCharWidth(self: QRawFont) f64 {
        return qtc.QRawFont_AverageCharWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxCharWidth` instead
    ///
    pub const MaxCharWidth = maxCharWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#maxCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn maxCharWidth(self: QRawFont) f64 {
        return qtc.QRawFont_MaxCharWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineThickness` instead
    ///
    pub const LineThickness = lineThickness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#lineThickness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn lineThickness(self: QRawFont) f64 {
        return qtc.QRawFont_LineThickness(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underlinePosition` instead
    ///
    pub const UnderlinePosition = underlinePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#underlinePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn underlinePosition(self: QRawFont) f64 {
        return qtc.QRawFont_UnderlinePosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unitsPerEm` instead
    ///
    pub const UnitsPerEm = unitsPerEm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#unitsPerEm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    pub fn unitsPerEm(self: QRawFont) f64 {
        return qtc.QRawFont_UnitsPerEm(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadFromFile` instead
    ///
    pub const LoadFromFile = loadFromFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#loadFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _pixelSize: f64 `
    ///
    /// ` _hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn loadFromFile(self: QRawFont, fileName: []const u8, _pixelSize: f64, _hintingPreference: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QRawFont_LoadFromFile(@ptrCast(self.ptr), fileName_str, @bitCast(_pixelSize), @bitCast(_hintingPreference));
    }

    /// ### DEPRECATED: Use `loadFromData` instead
    ///
    pub const LoadFromData = loadFromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` fontData: []u8 `
    ///
    /// ` _pixelSize: f64 `
    ///
    /// ` _hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn loadFromData(self: QRawFont, fontData: []u8, _pixelSize: f64, _hintingPreference: i32) void {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        qtc.QRawFont_LoadFromData(@ptrCast(self.ptr), fontData_str, @bitCast(_pixelSize), @bitCast(_hintingPreference));
    }

    /// ### DEPRECATED: Use `supportsCharacter` instead
    ///
    pub const SupportsCharacter = supportsCharacter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn supportsCharacter(self: QRawFont, ucs4: u32) bool {
        return qtc.QRawFont_SupportsCharacter(@ptrCast(self.ptr), @bitCast(ucs4));
    }

    /// ### DEPRECATED: Use `supportsCharacter2` instead
    ///
    pub const SupportsCharacter2 = supportsCharacter2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRawFont `
    ///
    /// ` character: QChar `
    ///
    pub fn supportsCharacter2(self: QRawFont, character: anytype) bool {
        comptime _ = @TypeOf(character)._is_QChar;
        return qtc.QRawFont_SupportsCharacter2(@ptrCast(self.ptr), @ptrCast(character.ptr));
    }

    /// ### DEPRECATED: Use `supportedWritingSystems` instead
    ///
    pub const SupportedWritingSystems = supportedWritingSystems;

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
    pub fn supportedWritingSystems(self: QRawFont, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QRawFont_SupportedWritingSystems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QRawFont.supportedWritingSystems: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fontTable` instead
    ///
    pub const FontTable = fontTable;

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
    pub fn fontTable(self: QRawFont, allocator: std.mem.Allocator, tagName: [:0]const u8) []u8 {
        const tagName_Cstring = tagName.ptr;
        var _bytearray: qtc.libqt_string = qtc.QRawFont_FontTable(@ptrCast(self.ptr), tagName_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QRawFont.fontTable: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fontTable2` instead
    ///
    pub const FontTable2 = fontTable2;

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
    pub fn fontTable2(self: QRawFont, allocator: std.mem.Allocator, tag: anytype) []u8 {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        var _bytearray: qtc.libqt_string = qtc.QRawFont_FontTable2(@ptrCast(self.ptr), @ptrCast(tag.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QRawFont.fontTable2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromFont` instead
    ///
    pub const FromFont = fromFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn fromFont(font: anytype) QRawFont {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QRawFont_FromFont(@ptrCast(font.ptr)) };
    }

    /// ### DEPRECATED: Use `alphaMapForGlyph2` instead
    ///
    pub const AlphaMapForGlyph2 = alphaMapForGlyph2;

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
    pub fn alphaMapForGlyph2(self: QRawFont, glyphIndex: u32, antialiasingType: i32) QImage {
        return .{ .ptr = qtc.QRawFont_AlphaMapForGlyph2(@ptrCast(self.ptr), @bitCast(glyphIndex), @bitCast(antialiasingType)) };
    }

    /// ### DEPRECATED: Use `alphaMapForGlyph3` instead
    ///
    pub const AlphaMapForGlyph3 = alphaMapForGlyph3;

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
    pub fn alphaMapForGlyph3(self: QRawFont, glyphIndex: u32, antialiasingType: i32, transform: anytype) QImage {
        comptime _ = @TypeOf(transform)._is_QTransform;
        return .{ .ptr = qtc.QRawFont_AlphaMapForGlyph3(@ptrCast(self.ptr), @bitCast(glyphIndex), @bitCast(antialiasingType), @ptrCast(transform.ptr)) };
    }

    /// ### DEPRECATED: Use `fromFont2` instead
    ///
    pub const FromFont2 = fromFont2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` writingSystem: qfontdatabase_enums.WritingSystem `
    ///
    pub fn fromFont2(font: anytype, writingSystem: i32) QRawFont {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QRawFont_FromFont2(@ptrCast(font.ptr), @bitCast(writingSystem)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#dtor.QRawFont)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRawFont `
    ///
    pub fn delete(self: QRawFont) void {
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
