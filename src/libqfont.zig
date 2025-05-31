const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfont_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfont.html
pub const qfont = struct {
    /// New constructs a new QFont object.
    ///
    ///
    pub fn New() QtC.QFont {
        return qtc.QFont_new();
    }

    /// New2 constructs a new QFont object.
    ///
    /// ``` family: []const u8 ```
    pub fn New2(family: []const u8) QtC.QFont {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = @constCast(family.ptr),
        };

        return qtc.QFont_new2(family_str);
    }

    /// New3 constructs a new QFont object.
    ///
    /// ``` families: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New3(families: [][]const u8, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qfont.: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, _i| {
            families_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };

        return qtc.QFont_new3(families_list);
    }

    /// New4 constructs a new QFont object.
    ///
    /// ``` font: QtC.QFont, pd: QtC.QPaintDevice ```
    pub fn New4(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFont {
        return qtc.QFont_new4(@ptrCast(font), @ptrCast(pd));
    }

    /// New5 constructs a new QFont object.
    ///
    /// ``` font: QtC.QFont ```
    pub fn New5(font: ?*anyopaque) QtC.QFont {
        return qtc.QFont_new5(@ptrCast(font));
    }

    /// New6 constructs a new QFont object.
    ///
    /// ``` family: []const u8, pointSize: i32 ```
    pub fn New6(family: []const u8, pointSize: i32) QtC.QFont {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = @constCast(family.ptr),
        };

        return qtc.QFont_new6(family_str, @intCast(pointSize));
    }

    /// New7 constructs a new QFont object.
    ///
    /// ``` family: []const u8, pointSize: i32, weight: i32 ```
    pub fn New7(family: []const u8, pointSize: i32, weight: i32) QtC.QFont {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = @constCast(family.ptr),
        };

        return qtc.QFont_new7(family_str, @intCast(pointSize), @intCast(weight));
    }

    /// New8 constructs a new QFont object.
    ///
    /// ``` family: []const u8, pointSize: i32, weight: i32, italic: bool ```
    pub fn New8(family: []const u8, pointSize: i32, weight: i32, italic: bool) QtC.QFont {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = @constCast(family.ptr),
        };

        return qtc.QFont_new8(family_str, @intCast(pointSize), @intCast(weight), italic);
    }

    /// New9 constructs a new QFont object.
    ///
    /// ``` families: [][]const u8, pointSize: i32, allocator: std.mem.Allocator ```
    pub fn New9(families: [][]const u8, pointSize: i32, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qfont.: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, _i| {
            families_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };

        return qtc.QFont_new9(families_list, @intCast(pointSize));
    }

    /// New10 constructs a new QFont object.
    ///
    /// ``` families: [][]const u8, pointSize: i32, weight: i32, allocator: std.mem.Allocator ```
    pub fn New10(families: [][]const u8, pointSize: i32, weight: i32, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qfont.: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, _i| {
            families_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };

        return qtc.QFont_new10(families_list, @intCast(pointSize), @intCast(weight));
    }

    /// New11 constructs a new QFont object.
    ///
    /// ``` families: [][]const u8, pointSize: i32, weight: i32, italic: bool, allocator: std.mem.Allocator ```
    pub fn New11(families: [][]const u8, pointSize: i32, weight: i32, italic: bool, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qfont.: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, _i| {
            families_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };

        return qtc.QFont_new11(families_list, @intCast(pointSize), @intCast(weight), italic);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#swap)
    ///
    /// ``` self: QtC.QFont, other: QtC.QFont ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#family)
    ///
    /// ``` self: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn Family(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_Family(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Family: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamily)
    ///
    /// ``` self: QtC.QFont, family: []const u8 ```
    pub fn SetFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = @constCast(family.ptr),
        };
        qtc.QFont_SetFamily(@ptrCast(self), family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#families)
    ///
    /// ``` self: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn Families(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFont_Families(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfont.Families: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfont.Families: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamilies)
    ///
    /// ``` self: QtC.QFont, families: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetFamilies(self: ?*anyopaque, families: [][]const u8, allocator: std.mem.Allocator) void {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qfont.SetFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, _i| {
            families_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QFont_SetFamilies(@ptrCast(self), families_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleName)
    ///
    /// ``` self: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn StyleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_StyleName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.StyleName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleName)
    ///
    /// ``` self: QtC.QFont, styleName: []const u8 ```
    pub fn SetStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.struct_libqt_string{
            .len = styleName.len,
            .data = @constCast(styleName.ptr),
        };
        qtc.QFont_SetStyleName(@ptrCast(self), styleName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSize)
    ///
    /// ``` self: QtC.QFont ```
    pub fn PointSize(self: ?*anyopaque) i32 {
        return qtc.QFont_PointSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSize)
    ///
    /// ``` self: QtC.QFont, pointSize: i32 ```
    pub fn SetPointSize(self: ?*anyopaque, pointSize: i32) void {
        qtc.QFont_SetPointSize(@ptrCast(self), @intCast(pointSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
    ///
    /// ``` self: QtC.QFont ```
    pub fn PointSizeF(self: ?*anyopaque) f64 {
        return qtc.QFont_PointSizeF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
    ///
    /// ``` self: QtC.QFont, pointSizeF: f64 ```
    pub fn SetPointSizeF(self: ?*anyopaque, pointSizeF: f64) void {
        qtc.QFont_SetPointSizeF(@ptrCast(self), @floatCast(pointSizeF));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pixelSize)
    ///
    /// ``` self: QtC.QFont ```
    pub fn PixelSize(self: ?*anyopaque) i32 {
        return qtc.QFont_PixelSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
    ///
    /// ``` self: QtC.QFont, pixelSize: i32 ```
    pub fn SetPixelSize(self: ?*anyopaque, pixelSize: i32) void {
        qtc.QFont_SetPixelSize(@ptrCast(self), @intCast(pixelSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#weight)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Weight(self: ?*anyopaque) i64 {
        return qtc.QFont_Weight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWeight)
    ///
    /// ``` self: QtC.QFont, weight: qfont_enums.Weight ```
    pub fn SetWeight(self: ?*anyopaque, weight: i64) void {
        qtc.QFont_SetWeight(@ptrCast(self), @intCast(weight));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#bold)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Bold(self: ?*anyopaque) bool {
        return qtc.QFont_Bold(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setBold)
    ///
    /// ``` self: QtC.QFont, bold: bool ```
    pub fn SetBold(self: ?*anyopaque, bold: bool) void {
        qtc.QFont_SetBold(@ptrCast(self), bold);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyle)
    ///
    /// ``` self: QtC.QFont, style: qfont_enums.Style ```
    pub fn SetStyle(self: ?*anyopaque, style: i64) void {
        qtc.QFont_SetStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#style)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Style(self: ?*anyopaque) i64 {
        return qtc.QFont_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#italic)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Italic(self: ?*anyopaque) bool {
        return qtc.QFont_Italic(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setItalic)
    ///
    /// ``` self: QtC.QFont, b: bool ```
    pub fn SetItalic(self: ?*anyopaque, b: bool) void {
        qtc.QFont_SetItalic(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#underline)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Underline(self: ?*anyopaque) bool {
        return qtc.QFont_Underline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setUnderline)
    ///
    /// ``` self: QtC.QFont, underline: bool ```
    pub fn SetUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QFont_SetUnderline(@ptrCast(self), underline);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#overline)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Overline(self: ?*anyopaque) bool {
        return qtc.QFont_Overline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setOverline)
    ///
    /// ``` self: QtC.QFont, overline: bool ```
    pub fn SetOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QFont_SetOverline(@ptrCast(self), overline);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#strikeOut)
    ///
    /// ``` self: QtC.QFont ```
    pub fn StrikeOut(self: ?*anyopaque) bool {
        return qtc.QFont_StrikeOut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
    ///
    /// ``` self: QtC.QFont, strikeOut: bool ```
    pub fn SetStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QFont_SetStrikeOut(@ptrCast(self), strikeOut);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
    ///
    /// ``` self: QtC.QFont ```
    pub fn FixedPitch(self: ?*anyopaque) bool {
        return qtc.QFont_FixedPitch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
    ///
    /// ``` self: QtC.QFont, fixedPitch: bool ```
    pub fn SetFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QFont_SetFixedPitch(@ptrCast(self), fixedPitch);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#kerning)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Kerning(self: ?*anyopaque) bool {
        return qtc.QFont_Kerning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setKerning)
    ///
    /// ``` self: QtC.QFont, kerning: bool ```
    pub fn SetKerning(self: ?*anyopaque, kerning: bool) void {
        qtc.QFont_SetKerning(@ptrCast(self), kerning);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleHint)
    ///
    /// ``` self: QtC.QFont ```
    pub fn StyleHint(self: ?*anyopaque) i64 {
        return qtc.QFont_StyleHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleStrategy)
    ///
    /// ``` self: QtC.QFont ```
    pub fn StyleStrategy(self: ?*anyopaque) i64 {
        return qtc.QFont_StyleStrategy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ``` self: QtC.QFont, param1: qfont_enums.StyleHint ```
    pub fn SetStyleHint(self: ?*anyopaque, param1: i64) void {
        qtc.QFont_SetStyleHint(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
    ///
    /// ``` self: QtC.QFont, s: qfont_enums.StyleStrategy ```
    pub fn SetStyleStrategy(self: ?*anyopaque, s: i64) void {
        qtc.QFont_SetStyleStrategy(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#stretch)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Stretch(self: ?*anyopaque) i32 {
        return qtc.QFont_Stretch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStretch)
    ///
    /// ``` self: QtC.QFont, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, stretch: i32) void {
        qtc.QFont_SetStretch(@ptrCast(self), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
    ///
    /// ``` self: QtC.QFont ```
    pub fn LetterSpacing(self: ?*anyopaque) f64 {
        return qtc.QFont_LetterSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacingType)
    ///
    /// ``` self: QtC.QFont ```
    pub fn LetterSpacingType(self: ?*anyopaque) i64 {
        return qtc.QFont_LetterSpacingType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLetterSpacing)
    ///
    /// ``` self: QtC.QFont, typeVal: qfont_enums.SpacingType, spacing: f64 ```
    pub fn SetLetterSpacing(self: ?*anyopaque, typeVal: i64, spacing: f64) void {
        qtc.QFont_SetLetterSpacing(@ptrCast(self), @intCast(typeVal), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
    ///
    /// ``` self: QtC.QFont ```
    pub fn WordSpacing(self: ?*anyopaque) f64 {
        return qtc.QFont_WordSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
    ///
    /// ``` self: QtC.QFont, spacing: f64 ```
    pub fn SetWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QFont_SetWordSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
    ///
    /// ``` self: QtC.QFont, capitalization: qfont_enums.Capitalization ```
    pub fn SetCapitalization(self: ?*anyopaque, capitalization: i64) void {
        qtc.QFont_SetCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#capitalization)
    ///
    /// ``` self: QtC.QFont ```
    pub fn Capitalization(self: ?*anyopaque) i64 {
        return qtc.QFont_Capitalization(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
    ///
    /// ``` self: QtC.QFont, hintingPreference: qfont_enums.HintingPreference ```
    pub fn SetHintingPreference(self: ?*anyopaque, hintingPreference: i64) void {
        qtc.QFont_SetHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#hintingPreference)
    ///
    /// ``` self: QtC.QFont ```
    pub fn HintingPreference(self: ?*anyopaque) i64 {
        return qtc.QFont_HintingPreference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#exactMatch)
    ///
    /// ``` self: QtC.QFont ```
    pub fn ExactMatch(self: ?*anyopaque) bool {
        return qtc.QFont_ExactMatch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator=)
    ///
    /// ``` self: QtC.QFont, param1: QtC.QFont ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFont_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator==)
    ///
    /// ``` self: QtC.QFont, param1: QtC.QFont ```
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator!=)
    ///
    /// ``` self: QtC.QFont, param1: QtC.QFont ```
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator<)
    ///
    /// ``` self: QtC.QFont, param1: QtC.QFont ```
    pub fn OperatorLesser(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorLesser(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator QVariant)
    ///
    /// ``` self: QtC.QFont ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QFont_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
    ///
    /// ``` self: QtC.QFont, param1: QtC.QFont ```
    pub fn IsCopyOf(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_IsCopyOf(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#key)
    ///
    /// ``` self: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_Key(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Key: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#toString)
    ///
    /// ``` self: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fromString)
    ///
    /// ``` self: QtC.QFont, param1: []const u8 ```
    pub fn FromString(self: ?*anyopaque, param1: []const u8) bool {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        return qtc.QFont_FromString(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitute)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Substitute(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        const _str = qtc.QFont_Substitute(param1_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Substitute: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutes)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Substitutes(param1: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QFont_Substitutes(param1_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfont.Substitutes: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfont.Substitutes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutions)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Substitutions(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFont_Substitutions();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfont.Substitutions: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfont.Substitutions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitution)
    ///
    /// ``` param1: []const u8, param2: []const u8 ```
    pub fn InsertSubstitution(param1: []const u8, param2: []const u8) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        const param2_str = qtc.struct_libqt_string{
            .len = param2.len,
            .data = @constCast(param2.ptr),
        };
        qtc.QFont_InsertSubstitution(param1_str, param2_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitutions)
    ///
    /// ``` param1: []const u8, param2: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertSubstitutions(param1: []const u8, param2: [][]const u8, allocator: std.mem.Allocator) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        var param2_arr = allocator.alloc(qtc.struct_libqt_string, param2.len) catch @panic("qfont.InsertSubstitutions: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, _i| {
            param2_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const param2_list = qtc.struct_libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        qtc.QFont_InsertSubstitutions(param1_str, param2_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#removeSubstitutions)
    ///
    /// ``` param1: []const u8 ```
    pub fn RemoveSubstitutions(param1: []const u8) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        qtc.QFont_RemoveSubstitutions(param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#initialize)
    ///
    ///
    pub fn Initialize() void {
        qtc.QFont_Initialize();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cleanup)
    ///
    ///
    pub fn Cleanup() void {
        qtc.QFont_Cleanup();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cacheStatistics)
    ///
    ///
    pub fn CacheStatistics() void {
        qtc.QFont_CacheStatistics();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#defaultFamily)
    ///
    /// ``` self: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn DefaultFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_DefaultFamily(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.DefaultFamily: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolve)
    ///
    /// ``` self: QtC.QFont, param1: QtC.QFont ```
    pub fn Resolve(self: ?*anyopaque, param1: ?*anyopaque) QtC.QFont {
        return qtc.QFont_Resolve(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolveMask)
    ///
    /// ``` self: QtC.QFont ```
    pub fn ResolveMask(self: ?*anyopaque) u32 {
        return qtc.QFont_ResolveMask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
    ///
    /// ``` self: QtC.QFont, mask: u32 ```
    pub fn SetResolveMask(self: ?*anyopaque, mask: u32) void {
        qtc.QFont_SetResolveMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
    ///
    /// ``` self: QtC.QFont, legacyWeight: i32 ```
    pub fn SetLegacyWeight(self: ?*anyopaque, legacyWeight: i32) void {
        qtc.QFont_SetLegacyWeight(@ptrCast(self), @intCast(legacyWeight));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
    ///
    /// ``` self: QtC.QFont ```
    pub fn LegacyWeight(self: ?*anyopaque) i32 {
        return qtc.QFont_LegacyWeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ``` self: QtC.QFont, param1: qfont_enums.StyleHint, param2: qfont_enums.StyleStrategy ```
    pub fn SetStyleHint2(self: ?*anyopaque, param1: i64, param2: i64) void {
        qtc.QFont_SetStyleHint2(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#dtor.QFont)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFont ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFont_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfont.html#types
pub const enums = struct {
    pub const StyleHint = enum {
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

    pub const StyleStrategy = enum {
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
        pub const NoFontMerging: i32 = 32768;
    };

    pub const HintingPreference = enum {
        pub const PreferDefaultHinting: i32 = 0;
        pub const PreferNoHinting: i32 = 1;
        pub const PreferVerticalHinting: i32 = 2;
        pub const PreferFullHinting: i32 = 3;
    };

    pub const Weight = enum {
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

    pub const Style = enum {
        pub const StyleNormal: i32 = 0;
        pub const StyleItalic: i32 = 1;
        pub const StyleOblique: i32 = 2;
    };

    pub const Stretch = enum {
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

    pub const Capitalization = enum {
        pub const MixedCase: i32 = 0;
        pub const AllUppercase: i32 = 1;
        pub const AllLowercase: i32 = 2;
        pub const SmallCaps: i32 = 3;
        pub const Capitalize: i32 = 4;
    };

    pub const SpacingType = enum {
        pub const PercentageSpacing: i32 = 0;
        pub const AbsoluteSpacing: i32 = 1;
    };

    pub const ResolveProperties = enum {
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
        pub const AllPropertiesResolved: i32 = 262143;
    };
};
