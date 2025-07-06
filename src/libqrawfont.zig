const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfont_enums = @import("libqfont.zig").enums;
const qfontdatabase_enums = @import("libqfontdatabase.zig").enums;
const qrawfont_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qrawfont.html
pub const qrawfont = struct {
    /// New constructs a new QRawFont object.
    ///
    ///
    pub fn New() QtC.QRawFont {
        return qtc.QRawFont_new();
    }

    /// New2 constructs a new QRawFont object.
    ///
    /// ``` fileName: []const u8, pixelSize: f64 ```
    pub fn New2(fileName: []const u8, pixelSize: f64) QtC.QRawFont {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QRawFont_new2(fileName_str, @floatCast(pixelSize));
    }

    /// New3 constructs a new QRawFont object.
    ///
    /// ``` fontData: []u8, pixelSize: f64 ```
    pub fn New3(fontData: []u8, pixelSize: f64) QtC.QRawFont {
        const fontData_str = qtc.struct_libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };

        return qtc.QRawFont_new3(fontData_str, @floatCast(pixelSize));
    }

    /// New4 constructs a new QRawFont object.
    ///
    /// ``` other: QtC.QRawFont ```
    pub fn New4(other: ?*anyopaque) QtC.QRawFont {
        return qtc.QRawFont_new4(@ptrCast(other));
    }

    /// New5 constructs a new QRawFont object.
    ///
    /// ``` fileName: []const u8, pixelSize: f64, hintingPreference: qfont_enums.HintingPreference ```
    pub fn New5(fileName: []const u8, pixelSize: f64, hintingPreference: i64) QtC.QRawFont {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QRawFont_new5(fileName_str, @floatCast(pixelSize), @intCast(hintingPreference));
    }

    /// New6 constructs a new QRawFont object.
    ///
    /// ``` fontData: []u8, pixelSize: f64, hintingPreference: qfont_enums.HintingPreference ```
    pub fn New6(fontData: []u8, pixelSize: f64, hintingPreference: i64) QtC.QRawFont {
        const fontData_str = qtc.struct_libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };

        return qtc.QRawFont_new6(fontData_str, @floatCast(pixelSize), @intCast(hintingPreference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator=)
    ///
    /// ``` self: QtC.QRawFont, other: QtC.QRawFont ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRawFont_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#swap)
    ///
    /// ``` self: QtC.QRawFont, other: QtC.QRawFont ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRawFont_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#isValid)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRawFont_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator==)
    ///
    /// ``` self: QtC.QRawFont, other: QtC.QRawFont ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QRawFont_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator!=)
    ///
    /// ``` self: QtC.QRawFont, other: QtC.QRawFont ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QRawFont_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#familyName)
    ///
    /// ``` self: QtC.QRawFont, allocator: std.mem.Allocator ```
    pub fn FamilyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRawFont_FamilyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrawfont.FamilyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#styleName)
    ///
    /// ``` self: QtC.QRawFont, allocator: std.mem.Allocator ```
    pub fn StyleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRawFont_StyleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrawfont.StyleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#style)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn Style(self: ?*anyopaque) i64 {
        return qtc.QRawFont_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#weight)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn Weight(self: ?*anyopaque) i32 {
        return qtc.QRawFont_Weight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForString)
    ///
    /// ``` self: QtC.QRawFont, text: []const u8, allocator: std.mem.Allocator ```
    pub fn GlyphIndexesForString(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []u32 {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QRawFont_GlyphIndexesForString(@ptrCast(self), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qrawfont.GlyphIndexesForString: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ``` self: QtC.QRawFont, glyphIndexes: []u32, allocator: std.mem.Allocator ```
    pub fn AdvancesForGlyphIndexes(self: ?*anyopaque, glyphIndexes: []u32, allocator: std.mem.Allocator) []QtC.QPointF {
        const glyphIndexes_list = qtc.struct_libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QRawFont_AdvancesForGlyphIndexes(@ptrCast(self), glyphIndexes_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qrawfont.AdvancesForGlyphIndexes: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ``` self: QtC.QRawFont, glyphIndexes: []u32, layoutFlags: i32, allocator: std.mem.Allocator ```
    pub fn AdvancesForGlyphIndexes2(self: ?*anyopaque, glyphIndexes: []u32, layoutFlags: i64, allocator: std.mem.Allocator) []QtC.QPointF {
        const glyphIndexes_list = qtc.struct_libqt_list{
            .len = glyphIndexes.len,
            .data = glyphIndexes.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QRawFont_AdvancesForGlyphIndexes2(@ptrCast(self), glyphIndexes_list, @intCast(layoutFlags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qrawfont.AdvancesForGlyphIndexes2: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForChars)
    ///
    /// ``` self: QtC.QRawFont, chars: QtC.QChar, numChars: i32, glyphIndexes: ?*u32, numGlyphs: ?*i32 ```
    pub fn GlyphIndexesForChars(self: ?*anyopaque, chars: ?*anyopaque, numChars: i32, glyphIndexes: ?*anyopaque, numGlyphs: ?*anyopaque) bool {
        return qtc.QRawFont_GlyphIndexesForChars(@ptrCast(self), @ptrCast(chars), @intCast(numChars), @intCast(glyphIndexes), @intCast(numGlyphs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ``` self: QtC.QRawFont, glyphIndexes: ?*u32, advances: QtC.QPointF, numGlyphs: i32 ```
    pub fn AdvancesForGlyphIndexes3(self: ?*anyopaque, glyphIndexes: ?*anyopaque, advances: ?*anyopaque, numGlyphs: i32) bool {
        return qtc.QRawFont_AdvancesForGlyphIndexes3(@ptrCast(self), @intCast(glyphIndexes), @ptrCast(advances), @intCast(numGlyphs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
    ///
    /// ``` self: QtC.QRawFont, glyphIndexes: ?*u32, advances: QtC.QPointF, numGlyphs: i32, layoutFlags: i32 ```
    pub fn AdvancesForGlyphIndexes4(self: ?*anyopaque, glyphIndexes: ?*anyopaque, advances: ?*anyopaque, numGlyphs: i32, layoutFlags: i64) bool {
        return qtc.QRawFont_AdvancesForGlyphIndexes4(@ptrCast(self), @intCast(glyphIndexes), @ptrCast(advances), @intCast(numGlyphs), @intCast(layoutFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ``` self: QtC.QRawFont, glyphIndex: u32 ```
    pub fn AlphaMapForGlyph(self: ?*anyopaque, glyphIndex: u32) QtC.QImage {
        return qtc.QRawFont_AlphaMapForGlyph(@ptrCast(self), @intCast(glyphIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#pathForGlyph)
    ///
    /// ``` self: QtC.QRawFont, glyphIndex: u32 ```
    pub fn PathForGlyph(self: ?*anyopaque, glyphIndex: u32) QtC.QPainterPath {
        return qtc.QRawFont_PathForGlyph(@ptrCast(self), @intCast(glyphIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#boundingRect)
    ///
    /// ``` self: QtC.QRawFont, glyphIndex: u32 ```
    pub fn BoundingRect(self: ?*anyopaque, glyphIndex: u32) QtC.QRectF {
        return qtc.QRawFont_BoundingRect(@ptrCast(self), @intCast(glyphIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#setPixelSize)
    ///
    /// ``` self: QtC.QRawFont, pixelSize: f64 ```
    pub fn SetPixelSize(self: ?*anyopaque, pixelSize: f64) void {
        qtc.QRawFont_SetPixelSize(@ptrCast(self), @floatCast(pixelSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#pixelSize)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn PixelSize(self: ?*anyopaque) f64 {
        return qtc.QRawFont_PixelSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#hintingPreference)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn HintingPreference(self: ?*anyopaque) i64 {
        return qtc.QRawFont_HintingPreference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#ascent)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn Ascent(self: ?*anyopaque) f64 {
        return qtc.QRawFont_Ascent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#capHeight)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn CapHeight(self: ?*anyopaque) f64 {
        return qtc.QRawFont_CapHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#descent)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn Descent(self: ?*anyopaque) f64 {
        return qtc.QRawFont_Descent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#leading)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn Leading(self: ?*anyopaque) f64 {
        return qtc.QRawFont_Leading(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#xHeight)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn XHeight(self: ?*anyopaque) f64 {
        return qtc.QRawFont_XHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#averageCharWidth)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn AverageCharWidth(self: ?*anyopaque) f64 {
        return qtc.QRawFont_AverageCharWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#maxCharWidth)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn MaxCharWidth(self: ?*anyopaque) f64 {
        return qtc.QRawFont_MaxCharWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#lineThickness)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn LineThickness(self: ?*anyopaque) f64 {
        return qtc.QRawFont_LineThickness(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#underlinePosition)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn UnderlinePosition(self: ?*anyopaque) f64 {
        return qtc.QRawFont_UnderlinePosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#unitsPerEm)
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn UnitsPerEm(self: ?*anyopaque) f64 {
        return qtc.QRawFont_UnitsPerEm(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#loadFromFile)
    ///
    /// ``` self: QtC.QRawFont, fileName: []const u8, pixelSize: f64, hintingPreference: qfont_enums.HintingPreference ```
    pub fn LoadFromFile(self: ?*anyopaque, fileName: []const u8, pixelSize: f64, hintingPreference: i64) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QRawFont_LoadFromFile(@ptrCast(self), fileName_str, @floatCast(pixelSize), @intCast(hintingPreference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#loadFromData)
    ///
    /// ``` self: QtC.QRawFont, fontData: []u8, pixelSize: f64, hintingPreference: qfont_enums.HintingPreference ```
    pub fn LoadFromData(self: ?*anyopaque, fontData: []u8, pixelSize: f64, hintingPreference: i64) void {
        const fontData_str = qtc.struct_libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        qtc.QRawFont_LoadFromData(@ptrCast(self), fontData_str, @floatCast(pixelSize), @intCast(hintingPreference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
    ///
    /// ``` self: QtC.QRawFont, ucs4: u32 ```
    pub fn SupportsCharacter(self: ?*anyopaque, ucs4: u32) bool {
        return qtc.QRawFont_SupportsCharacter(@ptrCast(self), @intCast(ucs4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
    ///
    /// ``` self: QtC.QRawFont, character: QtC.QChar ```
    pub fn SupportsCharacterWithCharacter(self: ?*anyopaque, character: QtC.QChar) bool {
        return qtc.QRawFont_SupportsCharacterWithCharacter(@ptrCast(self), @ptrCast(character));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportedWritingSystems)
    ///
    /// ``` self: QtC.QRawFont, allocator: std.mem.Allocator ```
    pub fn SupportedWritingSystems(self: ?*anyopaque, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QRawFont_SupportedWritingSystems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qfontdatabase_enums.WritingSystem, _arr.len) catch @panic("qrawfont.SupportedWritingSystems: Memory allocation failed");
        const _data: [*]qfontdatabase_enums.WritingSystem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
    ///
    /// ``` self: QtC.QRawFont, tagName: []const u8, allocator: std.mem.Allocator ```
    pub fn FontTable(self: ?*anyopaque, tagName: []const u8, allocator: std.mem.Allocator) []u8 {
        const tagName_Cstring = tagName.ptr;
        const _bytearray: qtc.struct_libqt_string = qtc.QRawFont_FontTable(@ptrCast(self), tagName_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrawfont.FontTable: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
    ///
    /// ``` self: QtC.QRawFont, tag: QtC.QFont__Tag, allocator: std.mem.Allocator ```
    pub fn FontTableWithTag(self: ?*anyopaque, tag: QtC.QFont__Tag, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QRawFont_FontTableWithTag(@ptrCast(self), @ptrCast(tag));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrawfont.FontTableWithTag: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
    ///
    /// ``` font: QtC.QFont ```
    pub fn FromFont(font: ?*anyopaque) QtC.QRawFont {
        return qtc.QRawFont_FromFont(@ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ``` self: QtC.QRawFont, glyphIndex: u32, antialiasingType: qrawfont_enums.AntialiasingType ```
    pub fn AlphaMapForGlyph2(self: ?*anyopaque, glyphIndex: u32, antialiasingType: i64) QtC.QImage {
        return qtc.QRawFont_AlphaMapForGlyph2(@ptrCast(self), @intCast(glyphIndex), @intCast(antialiasingType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
    ///
    /// ``` self: QtC.QRawFont, glyphIndex: u32, antialiasingType: qrawfont_enums.AntialiasingType, transform: QtC.QTransform ```
    pub fn AlphaMapForGlyph3(self: ?*anyopaque, glyphIndex: u32, antialiasingType: i64, transform: ?*anyopaque) QtC.QImage {
        return qtc.QRawFont_AlphaMapForGlyph3(@ptrCast(self), @intCast(glyphIndex), @intCast(antialiasingType), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
    ///
    /// ``` font: QtC.QFont, writingSystem: qfontdatabase_enums.WritingSystem ```
    pub fn FromFont2(font: ?*anyopaque, writingSystem: i64) QtC.QRawFont {
        return qtc.QRawFont_FromFont2(@ptrCast(font), @intCast(writingSystem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#dtor.QRawFont)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRawFont ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRawFont_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrawfont.html#types
pub const enums = struct {
    pub const AntialiasingType = enum {
        pub const PixelAntialiasing: i32 = 0;
        pub const SubPixelAntialiasing: i32 = 1;
    };

    pub const LayoutFlag = enum {
        pub const SeparateAdvances: i32 = 0;
        pub const KernedAdvances: i32 = 1;
        pub const UseDesignMetrics: i32 = 2;
    };
};
