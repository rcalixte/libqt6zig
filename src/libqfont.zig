const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPaintDevice = @import("libqt6").QPaintDevice;
const QVariant = @import("libqt6").QVariant;
const qfont_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html)
pub const QFont = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFont,

    pub const _is_QFont = {};

    /// New constructs a new QFont object.
    ///
    pub fn New() QFont {
        return .{ .ptr = qtc.QFont_new() };
    }

    /// New2 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn New2(family: []const u8) QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return .{ .ptr = qtc.QFont_new2(family_str) };
    }

    /// New3 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn New3(allocator: std.mem.Allocator, families: []const []const u8) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New3: Memory allocation failed");
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
        return .{ .ptr = qtc.QFont_new3(families_list) };
    }

    /// New4 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` pd: QPaintDevice `
    ///
    pub fn New4(font: anytype, pd: anytype) QFont {
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        return .{ .ptr = qtc.QFont_new4(@ptrCast(font.ptr), @ptrCast(pd.ptr)) };
    }

    /// New5 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn New5(font: anytype) QFont {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QFont_new5(@ptrCast(font.ptr)) };
    }

    /// New6 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    pub fn New6(family: []const u8, pointSize: i32) QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return .{ .ptr = qtc.QFont_new6(family_str, @bitCast(pointSize)) };
    }

    /// New7 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` weight: i32 `
    ///
    pub fn New7(family: []const u8, pointSize: i32, weight: i32) QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return .{ .ptr = qtc.QFont_new7(family_str, @bitCast(pointSize), @bitCast(weight)) };
    }

    /// New8 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` weight: i32 `
    ///
    /// ` italic: bool `
    ///
    pub fn New8(family: []const u8, pointSize: i32, weight: i32, italic: bool) QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return .{ .ptr = qtc.QFont_new8(family_str, @bitCast(pointSize), @bitCast(weight), italic) };
    }

    /// New9 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    pub fn New9(allocator: std.mem.Allocator, families: []const []const u8, pointSize: i32) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New9: Memory allocation failed");
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
        return .{ .ptr = qtc.QFont_new9(families_list, @bitCast(pointSize)) };
    }

    /// New10 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` weight: i32 `
    ///
    pub fn New10(allocator: std.mem.Allocator, families: []const []const u8, pointSize: i32, weight: i32) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New10: Memory allocation failed");
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
        return .{ .ptr = qtc.QFont_new10(families_list, @bitCast(pointSize), @bitCast(weight)) };
    }

    /// New11 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` weight: i32 `
    ///
    /// ` italic: bool `
    ///
    pub fn New11(allocator: std.mem.Allocator, families: []const []const u8, pointSize: i32, weight: i32, italic: bool) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New11: Memory allocation failed");
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
        return .{ .ptr = qtc.QFont_new11(families_list, @bitCast(pointSize), @bitCast(weight), italic) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` other: QFont `
    ///
    pub fn Swap(self: QFont, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFont;
        qtc.QFont_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#family)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Family(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_Family(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Family: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFamily(self: QFont, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QFont_SetFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#families)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Families(self: QFont, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFont_Families(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfont.Families: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfont.Families: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn SetFamilies(self: QFont, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.SetFamilies: Memory allocation failed");
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
        qtc.QFont_SetFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleName(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_StyleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.StyleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetStyleName(self: QFont, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QFont_SetStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn PointSize(self: QFont) i32 {
        return qtc.QFont_PointSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` pointSize: i32 `
    ///
    pub fn SetPointSize(self: QFont, pointSize: i32) void {
        qtc.QFont_SetPointSize(@ptrCast(self.ptr), @bitCast(pointSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn PointSizeF(self: QFont) f64 {
        return qtc.QFont_PointSizeF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` pointSizeF: f64 `
    ///
    pub fn SetPointSizeF(self: QFont, pointSizeF: f64) void {
        qtc.QFont_SetPointSizeF(@ptrCast(self.ptr), @bitCast(pointSizeF));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn PixelSize(self: QFont) i32 {
        return qtc.QFont_PixelSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` pixelSize: i32 `
    ///
    pub fn SetPixelSize(self: QFont, pixelSize: i32) void {
        qtc.QFont_SetPixelSize(@ptrCast(self.ptr), @bitCast(pixelSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Weight `
    ///
    pub fn Weight(self: QFont) i32 {
        return qtc.QFont_Weight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` weight: qfont_enums.Weight `
    ///
    pub fn SetWeight(self: QFont, weight: i32) void {
        qtc.QFont_SetWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#bold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn Bold(self: QFont) bool {
        return qtc.QFont_Bold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` bold: bool `
    ///
    pub fn SetBold(self: QFont, bold: bool) void {
        qtc.QFont_SetBold(@ptrCast(self.ptr), bold);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` style: qfont_enums.Style `
    ///
    pub fn SetStyle(self: QFont, style: i32) void {
        qtc.QFont_SetStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Style `
    ///
    pub fn Style(self: QFont) i32 {
        return qtc.QFont_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#italic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn Italic(self: QFont) bool {
        return qtc.QFont_Italic(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` b: bool `
    ///
    pub fn SetItalic(self: QFont, b: bool) void {
        qtc.QFont_SetItalic(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn Underline(self: QFont) bool {
        return qtc.QFont_Underline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` underline: bool `
    ///
    pub fn SetUnderline(self: QFont, underline: bool) void {
        qtc.QFont_SetUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn Overline(self: QFont) bool {
        return qtc.QFont_Overline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` overline: bool `
    ///
    pub fn SetOverline(self: QFont, overline: bool) void {
        qtc.QFont_SetOverline(@ptrCast(self.ptr), overline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn StrikeOut(self: QFont) bool {
        return qtc.QFont_StrikeOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetStrikeOut(self: QFont, strikeOut: bool) void {
        qtc.QFont_SetStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn FixedPitch(self: QFont) bool {
        return qtc.QFont_FixedPitch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFixedPitch(self: QFont, fixedPitch: bool) void {
        qtc.QFont_SetFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#kerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn Kerning(self: QFont) bool {
        return qtc.QFont_Kerning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` kerning: bool `
    ///
    pub fn SetKerning(self: QFont, kerning: bool) void {
        qtc.QFont_SetKerning(@ptrCast(self.ptr), kerning);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn StyleHint(self: QFont) i32 {
        return qtc.QFont_StyleHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn StyleStrategy(self: QFont) i32 {
        return qtc.QFont_StyleStrategy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: qfont_enums.StyleHint `
    ///
    pub fn SetStyleHint(self: QFont, param1: i32) void {
        qtc.QFont_SetStyleHint(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` s: qfont_enums.StyleStrategy `
    ///
    pub fn SetStyleStrategy(self: QFont, s: i32) void {
        qtc.QFont_SetStyleStrategy(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn Stretch(self: QFont) i32 {
        return qtc.QFont_Stretch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretch(self: QFont, stretch: i32) void {
        qtc.QFont_SetStretch(@ptrCast(self.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn LetterSpacing(self: QFont) f64 {
        return qtc.QFont_LetterSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#letterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn LetterSpacingType(self: QFont) i32 {
        return qtc.QFont_LetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` typeVal: qfont_enums.SpacingType `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetLetterSpacing(self: QFont, typeVal: i32, spacing: f64) void {
        qtc.QFont_SetLetterSpacing(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn WordSpacing(self: QFont) f64 {
        return qtc.QFont_WordSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetWordSpacing(self: QFont, spacing: f64) void {
        qtc.QFont_SetWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetCapitalization(self: QFont, capitalization: i32) void {
        qtc.QFont_SetCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#capitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn Capitalization(self: QFont) i32 {
        return qtc.QFont_Capitalization(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetHintingPreference(self: QFont, hintingPreference: i32) void {
        qtc.QFont_SetHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#hintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn HintingPreference(self: QFont) i32 {
        return qtc.QFont_HintingPreference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    /// ` value: u32 `
    ///
    pub fn SetFeature(self: QFont, tag: anytype, value: u32) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_SetFeature(@ptrCast(self.ptr), @ptrCast(tag.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#unsetFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn UnsetFeature(self: QFont, tag: anytype) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_UnsetFeature(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#featureValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn FeatureValue(self: QFont, tag: anytype) u32 {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_FeatureValue(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isFeatureSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn IsFeatureSet(self: QFont, tag: anytype) bool {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_IsFeatureSet(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#featureTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FeatureTags(self: QFont, allocator: std.mem.Allocator) []QFont__Tag {
        const _arr: qtc.libqt_list = qtc.QFont_FeatureTags(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFont__Tag, _arr.len) catch @panic("qfont.FeatureTags: Memory allocation failed");
        const _data: [*]QtC.QFont__Tag = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#clearFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn ClearFeatures(self: QFont) void {
        qtc.QFont_ClearFeatures(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setVariableAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    /// ` value: f32 `
    ///
    pub fn SetVariableAxis(self: QFont, tag: anytype, value: f32) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_SetVariableAxis(@ptrCast(self.ptr), @ptrCast(tag.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#unsetVariableAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn UnsetVariableAxis(self: QFont, tag: anytype) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_UnsetVariableAxis(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isVariableAxisSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn IsVariableAxisSet(self: QFont, tag: anytype) bool {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_IsVariableAxisSet(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#variableAxisValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn VariableAxisValue(self: QFont, tag: anytype) f32 {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_VariableAxisValue(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#clearVariableAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn ClearVariableAxes(self: QFont) void {
        qtc.QFont_ClearVariableAxes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#variableAxisTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VariableAxisTags(self: QFont, allocator: std.mem.Allocator) []QFont__Tag {
        const _arr: qtc.libqt_list = qtc.QFont_VariableAxisTags(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFont__Tag, _arr.len) catch @panic("qfont.VariableAxisTags: Memory allocation failed");
        const _data: [*]QtC.QFont__Tag = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn ExactMatch(self: QFont) bool {
        return qtc.QFont_ExactMatch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn OperatorAssign(self: QFont, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFont;
        qtc.QFont_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn OperatorEqual(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn OperatorNotEqual(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn OperatorLesser(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_OperatorLesser(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn ToQVariant(self: QFont) QVariant {
        return .{ .ptr = qtc.QFont_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn IsCopyOf(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_IsCopyOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn FromString(self: QFont, param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFont_FromString(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Substitute(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.QFont_Substitute(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Substitute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Substitutes(allocator: std.mem.Allocator, param1: []const u8) []const []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFont_Substitutes(param1_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfont.Substitutes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfont.Substitutes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Substitutions(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFont_Substitutions();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfont.Substitutions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfont.Substitutions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#insertSubstitution)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn InsertSubstitution(param1: []const u8, param2: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.QFont_InsertSubstitution(param1_str, param2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#insertSubstitutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const []const u8 `
    ///
    pub fn InsertSubstitutions(allocator: std.mem.Allocator, param1: []const u8, param2: []const []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("qfont.InsertSubstitutions: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i|
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        qtc.QFont_InsertSubstitutions(param1_str, param2_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#removeSubstitutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn RemoveSubstitutions(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QFont_RemoveSubstitutions(param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#initialize)
    ///
    pub fn Initialize() void {
        qtc.QFont_Initialize();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#cleanup)
    ///
    pub fn Cleanup() void {
        qtc.QFont_Cleanup();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#cacheStatistics)
    ///
    pub fn CacheStatistics() void {
        qtc.QFont_CacheStatistics();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#defaultFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultFamily(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_DefaultFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.DefaultFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#resolve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn Resolve(self: QFont, param1: anytype) QFont {
        comptime _ = @TypeOf(param1)._is_QFont;
        return .{ .ptr = qtc.QFont_Resolve(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#resolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn ResolveMask(self: QFont) u32 {
        return qtc.QFont_ResolveMask(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` mask: u32 `
    ///
    pub fn SetResolveMask(self: QFont, mask: u32) void {
        qtc.QFont_SetResolveMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` legacyWeight: i32 `
    ///
    pub fn SetLegacyWeight(self: QFont, legacyWeight: i32) void {
        qtc.QFont_SetLegacyWeight(@ptrCast(self.ptr), @bitCast(legacyWeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn LegacyWeight(self: QFont) i32 {
        return qtc.QFont_LegacyWeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: qfont_enums.StyleHint `
    ///
    /// ` param2: qfont_enums.StyleStrategy `
    ///
    pub fn SetStyleHint2(self: QFont, param1: i32, param2: i32) void {
        qtc.QFont_SetStyleHint2(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#dtor.QFont)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFont `
    ///
    pub fn Delete(self: QFont) void {
        qtc.QFont_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html)
pub const QFont__Tag = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFont__Tag,

    pub const _is_QFont__Tag = {};

    /// New constructs a new QFont::Tag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn New(other: anytype) QFont__Tag {
        comptime _ = @TypeOf(other)._is_QFont__Tag;
        return .{ .ptr = qtc.QFont__Tag_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QFont::Tag object and invalidates the source QFont::Tag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn New2(other: anytype) QFont__Tag {
        comptime _ = @TypeOf(other)._is_QFont__Tag;
        return .{ .ptr = qtc.QFont__Tag_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QFont::Tag object.
    ///
    pub fn New3() QFont__Tag {
        return .{ .ptr = qtc.QFont__Tag_new3() };
    }

    /// New4 constructs a new QFont::Tag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont__Tag `
    ///
    pub fn New4(param1: anytype) QFont__Tag {
        comptime _ = @TypeOf(param1)._is_QFont__Tag;
        return .{ .ptr = qtc.QFont__Tag_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QFont__Tag `
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn CopyAssign(self: QFont__Tag, other: QFont__Tag) void {
        qtc.QFont__Tag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QFont__Tag `
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn MoveAssign(self: QFont__Tag, other: QFont__Tag) void {
        qtc.QFont__Tag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont__Tag `
    ///
    pub fn IsValid(self: QFont__Tag) bool {
        return qtc.QFont__Tag_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont__Tag `
    ///
    pub fn Value(self: QFont__Tag) u32 {
        return qtc.QFont__Tag_Value(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont__Tag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QFont__Tag, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QFont__Tag_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfont__tag.ToString: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFont__Tag `
    ///
    pub fn Delete(self: QFont__Tag) void {
        qtc.QFont__Tag_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#public-types)
pub const enums = struct {
    pub const StyleHint = enum(i32) {
        pub const Helvetica: i32 = 0;
        pub const SansSerif: i32 = 0;
        pub const Times: i32 = 1;
        pub const Serif: i32 = 1;
        pub const Courier: i32 = 2;
        pub const TypeWriter: i32 = 2;
        pub const OldEnglish: i32 = 3;
        pub const Decorative: i32 = 3;
        pub const System: i32 = 4;
        pub const AnyStyle: i32 = 5;
        pub const Cursive: i32 = 6;
        pub const Monospace: i32 = 7;
        pub const Fantasy: i32 = 8;
    };

    pub const StyleStrategy = enum(i32) {
        pub const PreferDefault: i32 = 1;
        pub const PreferBitmap: i32 = 2;
        pub const PreferDevice: i32 = 4;
        pub const PreferOutline: i32 = 8;
        pub const ForceOutline: i32 = 16;
        pub const PreferMatch: i32 = 32;
        pub const PreferQuality: i32 = 64;
        pub const PreferAntialias: i32 = 128;
        pub const NoAntialias: i32 = 256;
        pub const NoSubpixelAntialias: i32 = 2048;
        pub const PreferNoShaping: i32 = 4096;
        pub const ContextFontMerging: i32 = 8192;
        pub const PreferTypoLineMetrics: i32 = 16384;
        pub const NoFontMerging: i32 = 32768;
    };

    pub const HintingPreference = enum(i32) {
        pub const PreferDefaultHinting: i32 = 0;
        pub const PreferNoHinting: i32 = 1;
        pub const PreferVerticalHinting: i32 = 2;
        pub const PreferFullHinting: i32 = 3;
    };

    pub const Weight = enum(i32) {
        pub const Thin: i32 = 100;
        pub const ExtraLight: i32 = 200;
        pub const Light: i32 = 300;
        pub const Normal: i32 = 400;
        pub const Medium: i32 = 500;
        pub const DemiBold: i32 = 600;
        pub const Bold: i32 = 700;
        pub const ExtraBold: i32 = 800;
        pub const Black: i32 = 900;
    };

    pub const Style = enum(i32) {
        pub const StyleNormal: i32 = 0;
        pub const StyleItalic: i32 = 1;
        pub const StyleOblique: i32 = 2;
    };

    pub const Stretch = enum(i32) {
        pub const AnyStretch: i32 = 0;
        pub const UltraCondensed: i32 = 50;
        pub const ExtraCondensed: i32 = 62;
        pub const Condensed: i32 = 75;
        pub const SemiCondensed: i32 = 87;
        pub const Unstretched: i32 = 100;
        pub const SemiExpanded: i32 = 112;
        pub const Expanded: i32 = 125;
        pub const ExtraExpanded: i32 = 150;
        pub const UltraExpanded: i32 = 200;
    };

    pub const Capitalization = enum(i32) {
        pub const MixedCase: i32 = 0;
        pub const AllUppercase: i32 = 1;
        pub const AllLowercase: i32 = 2;
        pub const SmallCaps: i32 = 3;
        pub const Capitalize: i32 = 4;
    };

    pub const SpacingType = enum(i32) {
        pub const PercentageSpacing: i32 = 0;
        pub const AbsoluteSpacing: i32 = 1;
    };

    pub const ResolveProperties = enum(i32) {
        pub const NoPropertiesResolved: i32 = 0;
        pub const FamilyResolved: i32 = 1;
        pub const SizeResolved: i32 = 2;
        pub const StyleHintResolved: i32 = 4;
        pub const StyleStrategyResolved: i32 = 8;
        pub const WeightResolved: i32 = 16;
        pub const StyleResolved: i32 = 32;
        pub const UnderlineResolved: i32 = 64;
        pub const OverlineResolved: i32 = 128;
        pub const StrikeOutResolved: i32 = 256;
        pub const FixedPitchResolved: i32 = 512;
        pub const StretchResolved: i32 = 1024;
        pub const KerningResolved: i32 = 2048;
        pub const CapitalizationResolved: i32 = 4096;
        pub const LetterSpacingResolved: i32 = 8192;
        pub const WordSpacingResolved: i32 = 16384;
        pub const HintingPreferenceResolved: i32 = 32768;
        pub const StyleNameResolved: i32 = 65536;
        pub const FamiliesResolved: i32 = 131072;
        pub const FeaturesResolved: i32 = 262144;
        pub const VariableAxesResolved: i32 = 524288;
        pub const AllPropertiesResolved: i32 = 1048575;
    };
};
