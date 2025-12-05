const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfont_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html)
pub const qfont = struct {
    /// New constructs a new QFont object.
    ///
    pub fn New() QtC.QFont {
        return qtc.QFont_new();
    }

    /// New2 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn New2(family: []const u8) QtC.QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };

        return qtc.QFont_new2(family_str);
    }

    /// New3 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` families: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New3(families: [][]const u8, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New3: Memory allocation failed");
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

        return qtc.QFont_new3(families_list);
    }

    /// New4 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QtC.QFont `
    ///
    /// ` pd: QtC.QPaintDevice `
    ///
    pub fn New4(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFont {
        return qtc.QFont_new4(@ptrCast(font), @ptrCast(pd));
    }

    /// New5 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn New5(font: ?*anyopaque) QtC.QFont {
        return qtc.QFont_new5(@ptrCast(font));
    }

    /// New6 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    pub fn New6(family: []const u8, pointSize: i32) QtC.QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };

        return qtc.QFont_new6(family_str, @intCast(pointSize));
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
    pub fn New7(family: []const u8, pointSize: i32, weight: i32) QtC.QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };

        return qtc.QFont_new7(family_str, @intCast(pointSize), @intCast(weight));
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
    pub fn New8(family: []const u8, pointSize: i32, weight: i32, italic: bool) QtC.QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };

        return qtc.QFont_new8(family_str, @intCast(pointSize), @intCast(weight), italic);
    }

    /// New9 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` families: [][]const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New9(families: [][]const u8, pointSize: i32, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New9: Memory allocation failed");
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

        return qtc.QFont_new9(families_list, @intCast(pointSize));
    }

    /// New10 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` families: [][]const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` weight: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New10(families: [][]const u8, pointSize: i32, weight: i32, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New10: Memory allocation failed");
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

        return qtc.QFont_new10(families_list, @intCast(pointSize), @intCast(weight));
    }

    /// New11 constructs a new QFont object.
    ///
    /// ## Parameter(s):
    ///
    /// ` families: [][]const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    /// ` weight: i32 `
    ///
    /// ` italic: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New11(families: [][]const u8, pointSize: i32, weight: i32, italic: bool, allocator: std.mem.Allocator) QtC.QFont {
        var families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.New11: Memory allocation failed");
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

        return qtc.QFont_new11(families_list, @intCast(pointSize), @intCast(weight), italic);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` other: QtC.QFont `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#family)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Family(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_Family(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Family: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QFont_SetFamily(@ptrCast(self), family_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#families)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Families(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QFont_Families(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QFont `
    ///
    /// ` families: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetFamilies(self: ?*anyopaque, families: [][]const u8, allocator: std.mem.Allocator) void {
        var families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qfont.SetFamilies: Memory allocation failed");
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
        qtc.QFont_SetFamilies(@ptrCast(self), families_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_StyleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.StyleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QFont_SetStyleName(@ptrCast(self), styleName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn PointSize(self: ?*anyopaque) i32 {
        return qtc.QFont_PointSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` pointSize: i32 `
    ///
    pub fn SetPointSize(self: ?*anyopaque, pointSize: i32) void {
        qtc.QFont_SetPointSize(@ptrCast(self), @intCast(pointSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn PointSizeF(self: ?*anyopaque) f64 {
        return qtc.QFont_PointSizeF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` pointSizeF: f64 `
    ///
    pub fn SetPointSizeF(self: ?*anyopaque, pointSizeF: f64) void {
        qtc.QFont_SetPointSizeF(@ptrCast(self), @floatCast(pointSizeF));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn PixelSize(self: ?*anyopaque) i32 {
        return qtc.QFont_PixelSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` pixelSize: i32 `
    ///
    pub fn SetPixelSize(self: ?*anyopaque, pixelSize: i32) void {
        qtc.QFont_SetPixelSize(@ptrCast(self), @intCast(pixelSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Weight `
    ///
    pub fn Weight(self: ?*anyopaque) i32 {
        return qtc.QFont_Weight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` weight: qfont_enums.Weight `
    ///
    pub fn SetWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QFont_SetWeight(@ptrCast(self), @intCast(weight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#bold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn Bold(self: ?*anyopaque) bool {
        return qtc.QFont_Bold(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` bold: bool `
    ///
    pub fn SetBold(self: ?*anyopaque, bold: bool) void {
        qtc.QFont_SetBold(@ptrCast(self), bold);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` style: qfont_enums.Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QFont_SetStyle(@ptrCast(self), @intCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Style `
    ///
    pub fn Style(self: ?*anyopaque) i32 {
        return qtc.QFont_Style(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#italic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn Italic(self: ?*anyopaque) bool {
        return qtc.QFont_Italic(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` b: bool `
    ///
    pub fn SetItalic(self: ?*anyopaque, b: bool) void {
        qtc.QFont_SetItalic(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn Underline(self: ?*anyopaque) bool {
        return qtc.QFont_Underline(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` underline: bool `
    ///
    pub fn SetUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QFont_SetUnderline(@ptrCast(self), underline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn Overline(self: ?*anyopaque) bool {
        return qtc.QFont_Overline(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` overline: bool `
    ///
    pub fn SetOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QFont_SetOverline(@ptrCast(self), overline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn StrikeOut(self: ?*anyopaque) bool {
        return qtc.QFont_StrikeOut(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QFont_SetStrikeOut(@ptrCast(self), strikeOut);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn FixedPitch(self: ?*anyopaque) bool {
        return qtc.QFont_FixedPitch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QFont_SetFixedPitch(@ptrCast(self), fixedPitch);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#kerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn Kerning(self: ?*anyopaque) bool {
        return qtc.QFont_Kerning(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` kerning: bool `
    ///
    pub fn SetKerning(self: ?*anyopaque, kerning: bool) void {
        qtc.QFont_SetKerning(@ptrCast(self), kerning);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn StyleHint(self: ?*anyopaque) i32 {
        return qtc.QFont_StyleHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn StyleStrategy(self: ?*anyopaque) i32 {
        return qtc.QFont_StyleStrategy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: qfont_enums.StyleHint `
    ///
    pub fn SetStyleHint(self: ?*anyopaque, param1: i32) void {
        qtc.QFont_SetStyleHint(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` s: qfont_enums.StyleStrategy `
    ///
    pub fn SetStyleStrategy(self: ?*anyopaque, s: i32) void {
        qtc.QFont_SetStyleStrategy(@ptrCast(self), @intCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn Stretch(self: ?*anyopaque) i32 {
        return qtc.QFont_Stretch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretch(self: ?*anyopaque, stretch: i32) void {
        qtc.QFont_SetStretch(@ptrCast(self), @intCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn LetterSpacing(self: ?*anyopaque) f64 {
        return qtc.QFont_LetterSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#letterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn LetterSpacingType(self: ?*anyopaque) i32 {
        return qtc.QFont_LetterSpacingType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` typeVal: qfont_enums.SpacingType `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetLetterSpacing(self: ?*anyopaque, typeVal: i32, spacing: f64) void {
        qtc.QFont_SetLetterSpacing(@ptrCast(self), @intCast(typeVal), @floatCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn WordSpacing(self: ?*anyopaque) f64 {
        return qtc.QFont_WordSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QFont_SetWordSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetCapitalization(self: ?*anyopaque, capitalization: i32) void {
        qtc.QFont_SetCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#capitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn Capitalization(self: ?*anyopaque) i32 {
        return qtc.QFont_Capitalization(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetHintingPreference(self: ?*anyopaque, hintingPreference: i32) void {
        qtc.QFont_SetHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#hintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn HintingPreference(self: ?*anyopaque) i32 {
        return qtc.QFont_HintingPreference(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    /// ` value: u32 `
    ///
    pub fn SetFeature(self: ?*anyopaque, tag: QtC.QFont__Tag, value: u32) void {
        qtc.QFont_SetFeature(@ptrCast(self), @ptrCast(tag), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#unsetFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    pub fn UnsetFeature(self: ?*anyopaque, tag: QtC.QFont__Tag) void {
        qtc.QFont_UnsetFeature(@ptrCast(self), @ptrCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#featureValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    pub fn FeatureValue(self: ?*anyopaque, tag: QtC.QFont__Tag) u32 {
        return qtc.QFont_FeatureValue(@ptrCast(self), @ptrCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isFeatureSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    pub fn IsFeatureSet(self: ?*anyopaque, tag: QtC.QFont__Tag) bool {
        return qtc.QFont_IsFeatureSet(@ptrCast(self), @ptrCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#featureTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FeatureTags(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QFont__Tag {
        const _arr: qtc.libqt_list = qtc.QFont_FeatureTags(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFont__Tag, _arr.len) catch @panic("qfont.FeatureTags: Memory allocation failed");
        const _data: [*]QtC.QFont__Tag = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#clearFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn ClearFeatures(self: ?*anyopaque) void {
        qtc.QFont_ClearFeatures(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setVariableAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    /// ` value: f32 `
    ///
    pub fn SetVariableAxis(self: ?*anyopaque, tag: QtC.QFont__Tag, value: f32) void {
        qtc.QFont_SetVariableAxis(@ptrCast(self), @ptrCast(tag), @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#unsetVariableAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    pub fn UnsetVariableAxis(self: ?*anyopaque, tag: QtC.QFont__Tag) void {
        qtc.QFont_UnsetVariableAxis(@ptrCast(self), @ptrCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isVariableAxisSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    pub fn IsVariableAxisSet(self: ?*anyopaque, tag: QtC.QFont__Tag) bool {
        return qtc.QFont_IsVariableAxisSet(@ptrCast(self), @ptrCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#variableAxisValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` tag: QtC.QFont__Tag `
    ///
    pub fn VariableAxisValue(self: ?*anyopaque, tag: QtC.QFont__Tag) f32 {
        return qtc.QFont_VariableAxisValue(@ptrCast(self), @ptrCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#clearVariableAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn ClearVariableAxes(self: ?*anyopaque) void {
        qtc.QFont_ClearVariableAxes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#variableAxisTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VariableAxisTags(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QFont__Tag {
        const _arr: qtc.libqt_list = qtc.QFont_VariableAxisTags(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFont__Tag, _arr.len) catch @panic("qfont.VariableAxisTags: Memory allocation failed");
        const _data: [*]QtC.QFont__Tag = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn ExactMatch(self: ?*anyopaque) bool {
        return qtc.QFont_ExactMatch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFont_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn OperatorLesser(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_OperatorLesser(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QFont_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn IsCopyOf(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QFont_IsCopyOf(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn FromString(self: ?*anyopaque, param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFont_FromString(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitute)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Substitute(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.QFont_Substitute(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.Substitute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Substitutes(param1: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFont_Substitutes(param1_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    pub fn Substitutions(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QFont_Substitutions();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` param1: []const u8 `
    ///
    /// ` param2: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InsertSubstitutions(param1: []const u8, param2: [][]const u8, allocator: std.mem.Allocator) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("qfont.InsertSubstitutions: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i| {
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` self: QtC.QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFont_DefaultFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfont.DefaultFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#resolve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn Resolve(self: ?*anyopaque, param1: ?*anyopaque) QtC.QFont {
        return qtc.QFont_Resolve(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#resolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn ResolveMask(self: ?*anyopaque) u32 {
        return qtc.QFont_ResolveMask(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` mask: u32 `
    ///
    pub fn SetResolveMask(self: ?*anyopaque, mask: u32) void {
        qtc.QFont_SetResolveMask(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` legacyWeight: i32 `
    ///
    pub fn SetLegacyWeight(self: ?*anyopaque, legacyWeight: i32) void {
        qtc.QFont_SetLegacyWeight(@ptrCast(self), @intCast(legacyWeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn LegacyWeight(self: ?*anyopaque) i32 {
        return qtc.QFont_LegacyWeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont `
    ///
    /// ` param1: qfont_enums.StyleHint `
    ///
    /// ` param2: qfont_enums.StyleStrategy `
    ///
    pub fn SetStyleHint2(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QFont_SetStyleHint2(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#dtor.QFont)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFont `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFont_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html)
pub const qfont__tag = struct {
    /// New constructs a new QFont::Tag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QFont__Tag `
    ///
    pub fn New(other: ?*anyopaque) QtC.QFont__Tag {
        return qtc.QFont__Tag_new(@ptrCast(other));
    }

    /// New2 constructs a new QFont::Tag object and invalidates the source QFont::Tag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QFont__Tag `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QFont__Tag {
        return qtc.QFont__Tag_new2(@ptrCast(other));
    }

    /// New3 constructs a new QFont::Tag object.
    ///
    pub fn New3() QtC.QFont__Tag {
        return qtc.QFont__Tag_new3();
    }

    /// New4 constructs a new QFont::Tag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QFont__Tag `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QFont__Tag {
        return qtc.QFont__Tag_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFont__Tag `
    ///
    /// ` other: QtC.QFont__Tag `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont__Tag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFont__Tag `
    ///
    /// ` other: QtC.QFont__Tag `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFont__Tag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont__Tag `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QFont__Tag_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont__Tag `
    ///
    pub fn Value(self: ?*anyopaque) u32 {
        return qtc.QFont__Tag_Value(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFont__Tag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QFont__Tag_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfont::tag.ToString: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFont__Tag `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFont__Tag_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#public-types)
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
        pub const ContextFontMerging: i32 = 8192;
        pub const PreferTypoLineMetrics: i32 = 16384;
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
        pub const FeaturesResolved: i32 = 262144;
        pub const VariableAxesResolved: i32 = 524288;
        pub const AllPropertiesResolved: i32 = 1048575;
    };
};
