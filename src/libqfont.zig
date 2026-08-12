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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFont object in C++ memory
    ///
    pub fn new() QFont {
        return .{ .ptr = qtc.QFont_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _family: []const u8 `
    ///
    pub fn new2(_family: []const u8) QFont {
        const family_str = qtc.libqt_string{
            .len = _family.len,
            .data = _family.ptr,
        };
        return .{ .ptr = qtc.QFont_new2(family_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _families: []const []const u8 `
    ///
    pub fn new3(allocator: std.mem.Allocator, _families: []const []const u8) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, _families.len) catch @panic("QFont.new3: Memory allocation failed");
        defer allocator.free(families_arr);
        for (_families, 0.._families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = _families.len,
            .data = families_arr.ptr,
        };
        return .{ .ptr = qtc.QFont_new3(families_list) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` pd: QPaintDevice `
    ///
    pub fn new4(font: anytype, pd: anytype) QFont {
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        return .{ .ptr = qtc.QFont_new4(@ptrCast(font.ptr), @ptrCast(pd.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn new5(font: anytype) QFont {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QFont_new5(@ptrCast(font.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _family: []const u8 `
    ///
    /// ` _pointSize: i32 `
    ///
    pub fn new6(_family: []const u8, _pointSize: i32) QFont {
        const family_str = qtc.libqt_string{
            .len = _family.len,
            .data = _family.ptr,
        };
        return .{ .ptr = qtc.QFont_new6(family_str, @bitCast(_pointSize)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _family: []const u8 `
    ///
    /// ` _pointSize: i32 `
    ///
    /// ` _weight: i32 `
    ///
    pub fn new7(_family: []const u8, _pointSize: i32, _weight: i32) QFont {
        const family_str = qtc.libqt_string{
            .len = _family.len,
            .data = _family.ptr,
        };
        return .{ .ptr = qtc.QFont_new7(family_str, @bitCast(_pointSize), @bitCast(_weight)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _family: []const u8 `
    ///
    /// ` _pointSize: i32 `
    ///
    /// ` _weight: i32 `
    ///
    /// ` _italic: bool `
    ///
    pub fn new8(_family: []const u8, _pointSize: i32, _weight: i32, _italic: bool) QFont {
        const family_str = qtc.libqt_string{
            .len = _family.len,
            .data = _family.ptr,
        };
        return .{ .ptr = qtc.QFont_new8(family_str, @bitCast(_pointSize), @bitCast(_weight), _italic) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _families: []const []const u8 `
    ///
    /// ` _pointSize: i32 `
    ///
    pub fn new9(allocator: std.mem.Allocator, _families: []const []const u8, _pointSize: i32) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, _families.len) catch @panic("QFont.new9: Memory allocation failed");
        defer allocator.free(families_arr);
        for (_families, 0.._families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = _families.len,
            .data = families_arr.ptr,
        };
        return .{ .ptr = qtc.QFont_new9(families_list, @bitCast(_pointSize)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _families: []const []const u8 `
    ///
    /// ` _pointSize: i32 `
    ///
    /// ` _weight: i32 `
    ///
    pub fn new10(allocator: std.mem.Allocator, _families: []const []const u8, _pointSize: i32, _weight: i32) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, _families.len) catch @panic("QFont.new10: Memory allocation failed");
        defer allocator.free(families_arr);
        for (_families, 0.._families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = _families.len,
            .data = families_arr.ptr,
        };
        return .{ .ptr = qtc.QFont_new10(families_list, @bitCast(_pointSize), @bitCast(_weight)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _families: []const []const u8 `
    ///
    /// ` _pointSize: i32 `
    ///
    /// ` _weight: i32 `
    ///
    /// ` _italic: bool `
    ///
    pub fn new11(allocator: std.mem.Allocator, _families: []const []const u8, _pointSize: i32, _weight: i32, _italic: bool) QFont {
        const families_arr = allocator.alloc(qtc.libqt_string, _families.len) catch @panic("QFont.new11: Memory allocation failed");
        defer allocator.free(families_arr);
        for (_families, 0.._families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = _families.len,
            .data = families_arr.ptr,
        };
        return .{ .ptr = qtc.QFont_new11(families_list, @bitCast(_pointSize), @bitCast(_weight), _italic) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` other: QFont `
    ///
    pub fn swap(self: QFont, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFont;
        qtc.QFont_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `family` instead
    ///
    pub const Family = family;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#family)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn family(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_Family(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFont.family: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFamily` instead
    ///
    pub const SetFamily = setFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _family: []const u8 `
    ///
    pub fn setFamily(self: QFont, _family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = _family.len,
            .data = _family.ptr,
        };
        qtc.QFont_SetFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### DEPRECATED: Use `families` instead
    ///
    pub const Families = families;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#families)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn families(self: QFont, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFont_Families(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFont.families: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFont.families: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setFamilies` instead
    ///
    pub const SetFamilies = setFamilies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _families: []const []const u8 `
    ///
    pub fn setFamilies(self: QFont, allocator: std.mem.Allocator, _families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, _families.len) catch @panic("QFont.setFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (_families, 0.._families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = _families.len,
            .data = families_arr.ptr,
        };
        qtc.QFont_SetFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### DEPRECATED: Use `styleName` instead
    ///
    pub const StyleName = styleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#styleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleName(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_StyleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFont.styleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStyleName` instead
    ///
    pub const SetStyleName = setStyleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _styleName: []const u8 `
    ///
    pub fn setStyleName(self: QFont, _styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = _styleName.len,
            .data = _styleName.ptr,
        };
        qtc.QFont_SetStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### DEPRECATED: Use `pointSize` instead
    ///
    pub const PointSize = pointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn pointSize(self: QFont) i32 {
        return qtc.QFont_PointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointSize` instead
    ///
    pub const SetPointSize = setPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _pointSize: i32 `
    ///
    pub fn setPointSize(self: QFont, _pointSize: i32) void {
        qtc.QFont_SetPointSize(@ptrCast(self.ptr), @bitCast(_pointSize));
    }

    /// ### DEPRECATED: Use `pointSizeF` instead
    ///
    pub const PointSizeF = pointSizeF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn pointSizeF(self: QFont) f64 {
        return qtc.QFont_PointSizeF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointSizeF` instead
    ///
    pub const SetPointSizeF = setPointSizeF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _pointSizeF: f64 `
    ///
    pub fn setPointSizeF(self: QFont, _pointSizeF: f64) void {
        qtc.QFont_SetPointSizeF(@ptrCast(self.ptr), @bitCast(_pointSizeF));
    }

    /// ### DEPRECATED: Use `pixelSize` instead
    ///
    pub const PixelSize = pixelSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#pixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn pixelSize(self: QFont) i32 {
        return qtc.QFont_PixelSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPixelSize` instead
    ///
    pub const SetPixelSize = setPixelSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _pixelSize: i32 `
    ///
    pub fn setPixelSize(self: QFont, _pixelSize: i32) void {
        qtc.QFont_SetPixelSize(@ptrCast(self.ptr), @bitCast(_pixelSize));
    }

    /// ### DEPRECATED: Use `weight` instead
    ///
    pub const Weight = weight;

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
    pub fn weight(self: QFont) i32 {
        return qtc.QFont_Weight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWeight` instead
    ///
    pub const SetWeight = setWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _weight: qfont_enums.Weight `
    ///
    pub fn setWeight(self: QFont, _weight: i32) void {
        qtc.QFont_SetWeight(@ptrCast(self.ptr), @bitCast(_weight));
    }

    /// ### DEPRECATED: Use `bold` instead
    ///
    pub const Bold = bold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#bold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn bold(self: QFont) bool {
        return qtc.QFont_Bold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBold` instead
    ///
    pub const SetBold = setBold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setBold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _bold: bool `
    ///
    pub fn setBold(self: QFont, _bold: bool) void {
        qtc.QFont_SetBold(@ptrCast(self.ptr), _bold);
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _style: qfont_enums.Style `
    ///
    pub fn setStyle(self: QFont, _style: i32) void {
        qtc.QFont_SetStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

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
    pub fn style(self: QFont) i32 {
        return qtc.QFont_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `italic` instead
    ///
    pub const Italic = italic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#italic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn italic(self: QFont) bool {
        return qtc.QFont_Italic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItalic` instead
    ///
    pub const SetItalic = setItalic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` b: bool `
    ///
    pub fn setItalic(self: QFont, b: bool) void {
        qtc.QFont_SetItalic(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `underline` instead
    ///
    pub const Underline = underline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#underline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn underline(self: QFont) bool {
        return qtc.QFont_Underline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderline` instead
    ///
    pub const SetUnderline = setUnderline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _underline: bool `
    ///
    pub fn setUnderline(self: QFont, _underline: bool) void {
        qtc.QFont_SetUnderline(@ptrCast(self.ptr), _underline);
    }

    /// ### DEPRECATED: Use `overline` instead
    ///
    pub const Overline = overline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#overline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn overline(self: QFont) bool {
        return qtc.QFont_Overline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOverline` instead
    ///
    pub const SetOverline = setOverline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _overline: bool `
    ///
    pub fn setOverline(self: QFont, _overline: bool) void {
        qtc.QFont_SetOverline(@ptrCast(self.ptr), _overline);
    }

    /// ### DEPRECATED: Use `strikeOut` instead
    ///
    pub const StrikeOut = strikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#strikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn strikeOut(self: QFont) bool {
        return qtc.QFont_StrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStrikeOut` instead
    ///
    pub const SetStrikeOut = setStrikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _strikeOut: bool `
    ///
    pub fn setStrikeOut(self: QFont, _strikeOut: bool) void {
        qtc.QFont_SetStrikeOut(@ptrCast(self.ptr), _strikeOut);
    }

    /// ### DEPRECATED: Use `fixedPitch` instead
    ///
    pub const FixedPitch = fixedPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn fixedPitch(self: QFont) bool {
        return qtc.QFont_FixedPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFixedPitch` instead
    ///
    pub const SetFixedPitch = setFixedPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _fixedPitch: bool `
    ///
    pub fn setFixedPitch(self: QFont, _fixedPitch: bool) void {
        qtc.QFont_SetFixedPitch(@ptrCast(self.ptr), _fixedPitch);
    }

    /// ### DEPRECATED: Use `kerning` instead
    ///
    pub const Kerning = kerning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#kerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn kerning(self: QFont) bool {
        return qtc.QFont_Kerning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKerning` instead
    ///
    pub const SetKerning = setKerning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _kerning: bool `
    ///
    pub fn setKerning(self: QFont, _kerning: bool) void {
        qtc.QFont_SetKerning(@ptrCast(self.ptr), _kerning);
    }

    /// ### DEPRECATED: Use `styleHint` instead
    ///
    pub const StyleHint = styleHint;

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
    pub fn styleHint(self: QFont) i32 {
        return qtc.QFont_StyleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `styleStrategy` instead
    ///
    pub const StyleStrategy = styleStrategy;

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
    pub fn styleStrategy(self: QFont) i32 {
        return qtc.QFont_StyleStrategy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyleHint` instead
    ///
    pub const SetStyleHint = setStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: qfont_enums.StyleHint `
    ///
    pub fn setStyleHint(self: QFont, param1: i32) void {
        qtc.QFont_SetStyleHint(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `setStyleStrategy` instead
    ///
    pub const SetStyleStrategy = setStyleStrategy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` s: qfont_enums.StyleStrategy `
    ///
    pub fn setStyleStrategy(self: QFont, s: i32) void {
        qtc.QFont_SetStyleStrategy(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `stretch` instead
    ///
    pub const Stretch = stretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn stretch(self: QFont) i32 {
        return qtc.QFont_Stretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStretch` instead
    ///
    pub const SetStretch = setStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretch(self: QFont, _stretch: i32) void {
        qtc.QFont_SetStretch(@ptrCast(self.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `letterSpacing` instead
    ///
    pub const LetterSpacing = letterSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn letterSpacing(self: QFont) f64 {
        return qtc.QFont_LetterSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `letterSpacingType` instead
    ///
    pub const LetterSpacingType = letterSpacingType;

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
    pub fn letterSpacingType(self: QFont) i32 {
        return qtc.QFont_LetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLetterSpacing` instead
    ///
    pub const SetLetterSpacing = setLetterSpacing;

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
    pub fn setLetterSpacing(self: QFont, typeVal: i32, spacing: f64) void {
        qtc.QFont_SetLetterSpacing(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `wordSpacing` instead
    ///
    pub const WordSpacing = wordSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn wordSpacing(self: QFont) f64 {
        return qtc.QFont_WordSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordSpacing` instead
    ///
    pub const SetWordSpacing = setWordSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setWordSpacing(self: QFont, spacing: f64) void {
        qtc.QFont_SetWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `setCapitalization` instead
    ///
    pub const SetCapitalization = setCapitalization;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _capitalization: qfont_enums.Capitalization `
    ///
    pub fn setCapitalization(self: QFont, _capitalization: i32) void {
        qtc.QFont_SetCapitalization(@ptrCast(self.ptr), @bitCast(_capitalization));
    }

    /// ### DEPRECATED: Use `capitalization` instead
    ///
    pub const Capitalization = capitalization;

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
    pub fn capitalization(self: QFont) i32 {
        return qtc.QFont_Capitalization(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHintingPreference` instead
    ///
    pub const SetHintingPreference = setHintingPreference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn setHintingPreference(self: QFont, _hintingPreference: i32) void {
        qtc.QFont_SetHintingPreference(@ptrCast(self.ptr), @bitCast(_hintingPreference));
    }

    /// ### DEPRECATED: Use `hintingPreference` instead
    ///
    pub const HintingPreference = hintingPreference;

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
    pub fn hintingPreference(self: QFont) i32 {
        return qtc.QFont_HintingPreference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeature` instead
    ///
    pub const SetFeature = setFeature;

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
    pub fn setFeature(self: QFont, tag: anytype, value: u32) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_SetFeature(@ptrCast(self.ptr), @ptrCast(tag.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `unsetFeature` instead
    ///
    pub const UnsetFeature = unsetFeature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#unsetFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn unsetFeature(self: QFont, tag: anytype) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_UnsetFeature(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### DEPRECATED: Use `featureValue` instead
    ///
    pub const FeatureValue = featureValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#featureValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn featureValue(self: QFont, tag: anytype) u32 {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_FeatureValue(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### DEPRECATED: Use `isFeatureSet` instead
    ///
    pub const IsFeatureSet = isFeatureSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isFeatureSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn isFeatureSet(self: QFont, tag: anytype) bool {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_IsFeatureSet(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### DEPRECATED: Use `featureTags` instead
    ///
    pub const FeatureTags = featureTags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#featureTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn featureTags(self: QFont, allocator: std.mem.Allocator) []QFont__Tag {
        const _arr: qtc.libqt_list = qtc.QFont_FeatureTags(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFont__Tag, _arr.len) catch @panic("QFont.featureTags: Memory allocation failed");
        const _data_val: [*]QtC.QFont__Tag = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clearFeatures` instead
    ///
    pub const ClearFeatures = clearFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#clearFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn clearFeatures(self: QFont) void {
        qtc.QFont_ClearFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVariableAxis` instead
    ///
    pub const SetVariableAxis = setVariableAxis;

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
    pub fn setVariableAxis(self: QFont, tag: anytype, value: f32) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_SetVariableAxis(@ptrCast(self.ptr), @ptrCast(tag.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `unsetVariableAxis` instead
    ///
    pub const UnsetVariableAxis = unsetVariableAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#unsetVariableAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn unsetVariableAxis(self: QFont, tag: anytype) void {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        qtc.QFont_UnsetVariableAxis(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### DEPRECATED: Use `isVariableAxisSet` instead
    ///
    pub const IsVariableAxisSet = isVariableAxisSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isVariableAxisSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn isVariableAxisSet(self: QFont, tag: anytype) bool {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_IsVariableAxisSet(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### DEPRECATED: Use `variableAxisValue` instead
    ///
    pub const VariableAxisValue = variableAxisValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#variableAxisValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` tag: QFont__Tag `
    ///
    pub fn variableAxisValue(self: QFont, tag: anytype) f32 {
        comptime _ = @TypeOf(tag)._is_QFont__Tag;
        return qtc.QFont_VariableAxisValue(@ptrCast(self.ptr), @ptrCast(tag.ptr));
    }

    /// ### DEPRECATED: Use `clearVariableAxes` instead
    ///
    pub const ClearVariableAxes = clearVariableAxes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#clearVariableAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn clearVariableAxes(self: QFont) void {
        qtc.QFont_ClearVariableAxes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `variableAxisTags` instead
    ///
    pub const VariableAxisTags = variableAxisTags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#variableAxisTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn variableAxisTags(self: QFont, allocator: std.mem.Allocator) []QFont__Tag {
        const _arr: qtc.libqt_list = qtc.QFont_VariableAxisTags(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFont__Tag, _arr.len) catch @panic("QFont.variableAxisTags: Memory allocation failed");
        const _data_val: [*]QtC.QFont__Tag = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `exactMatch` instead
    ///
    pub const ExactMatch = exactMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn exactMatch(self: QFont) bool {
        return qtc.QFont_ExactMatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn operatorAssign(self: QFont, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFont;
        qtc.QFont_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn operatorEqual(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn operatorNotEqual(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn operatorLesser(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_OperatorLesser(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn toQVariant(self: QFont) QVariant {
        return .{ .ptr = qtc.QFont_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isCopyOf` instead
    ///
    pub const IsCopyOf = isCopyOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn isCopyOf(self: QFont, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QFont;
        return qtc.QFont_IsCopyOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFont.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFont.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn fromString(self: QFont, param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFont_FromString(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `substitute` instead
    ///
    pub const Substitute = substitute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn substitute(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.QFont_Substitute(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFont.substitute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `substitutes` instead
    ///
    pub const Substitutes = substitutes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitutes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn substitutes(allocator: std.mem.Allocator, param1: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFont.substitutes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFont.substitutes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `substitutions` instead
    ///
    pub const Substitutions = substitutions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#substitutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn substitutions(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFont_Substitutions();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFont.substitutions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFont.substitutions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `insertSubstitution` instead
    ///
    pub const InsertSubstitution = insertSubstitution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#insertSubstitution)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn insertSubstitution(param1: []const u8, param2: []const u8) void {
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

    /// ### DEPRECATED: Use `insertSubstitutions` instead
    ///
    pub const InsertSubstitutions = insertSubstitutions;

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
    pub fn insertSubstitutions(allocator: std.mem.Allocator, param1: []const u8, param2: []const []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("QFont.insertSubstitutions: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |str_item, i|
            param2_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        qtc.QFont_InsertSubstitutions(param1_str, param2_list);
    }

    /// ### DEPRECATED: Use `removeSubstitutions` instead
    ///
    pub const RemoveSubstitutions = removeSubstitutions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#removeSubstitutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn removeSubstitutions(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QFont_RemoveSubstitutions(param1_str);
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#initialize)
    ///
    pub fn initialize() void {
        qtc.QFont_Initialize();
    }

    /// ### DEPRECATED: Use `cleanup` instead
    ///
    pub const Cleanup = cleanup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#cleanup)
    ///
    pub fn cleanup() void {
        qtc.QFont_Cleanup();
    }

    /// ### DEPRECATED: Use `cacheStatistics` instead
    ///
    pub const CacheStatistics = cacheStatistics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#cacheStatistics)
    ///
    pub fn cacheStatistics() void {
        qtc.QFont_CacheStatistics();
    }

    /// ### DEPRECATED: Use `defaultFamily` instead
    ///
    pub const DefaultFamily = defaultFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#defaultFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultFamily(self: QFont, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFont_DefaultFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFont.defaultFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resolve` instead
    ///
    pub const Resolve = resolve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#resolve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` param1: QFont `
    ///
    pub fn resolve(self: QFont, param1: anytype) QFont {
        comptime _ = @TypeOf(param1)._is_QFont;
        return .{ .ptr = qtc.QFont_Resolve(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `resolveMask` instead
    ///
    pub const ResolveMask = resolveMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#resolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn resolveMask(self: QFont) u32 {
        return qtc.QFont_ResolveMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResolveMask` instead
    ///
    pub const SetResolveMask = setResolveMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` mask: u32 `
    ///
    pub fn setResolveMask(self: QFont, mask: u32) void {
        qtc.QFont_SetResolveMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `setLegacyWeight` instead
    ///
    pub const SetLegacyWeight = setLegacyWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    /// ` _legacyWeight: i32 `
    ///
    pub fn setLegacyWeight(self: QFont, _legacyWeight: i32) void {
        qtc.QFont_SetLegacyWeight(@ptrCast(self.ptr), @bitCast(_legacyWeight));
    }

    /// ### DEPRECATED: Use `legacyWeight` instead
    ///
    pub const LegacyWeight = legacyWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont `
    ///
    pub fn legacyWeight(self: QFont) i32 {
        return qtc.QFont_LegacyWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyleHint2` instead
    ///
    pub const SetStyleHint2 = setStyleHint2;

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
    pub fn setStyleHint2(self: QFont, param1: i32, param2: i32) void {
        qtc.QFont_SetStyleHint2(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont.html#dtor.QFont)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFont `
    ///
    pub fn delete(self: QFont) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFont::Tag object in C++ memory
    ///
    pub fn new() QFont__Tag {
        return .{ .ptr = qtc.QFont__Tag_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFont::Tag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn new2(other: anytype) QFont__Tag {
        comptime _ = @TypeOf(other)._is_QFont__Tag;
        return .{ .ptr = qtc.QFont__Tag_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFont::Tag object and invalidate the source QFont::Tag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn new3(other: anytype) QFont__Tag {
        comptime _ = @TypeOf(other)._is_QFont__Tag;
        return .{ .ptr = qtc.QFont__Tag_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QFont::Tag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont__Tag `
    ///
    pub fn new4(param1: anytype) QFont__Tag {
        comptime _ = @TypeOf(param1)._is_QFont__Tag;
        return .{ .ptr = qtc.QFont__Tag_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QFont__Tag `
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn copyAssign(self: QFont__Tag, other: QFont__Tag) void {
        qtc.QFont__Tag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QFont__Tag `
    ///
    /// ` other: QFont__Tag `
    ///
    pub fn moveAssign(self: QFont__Tag, other: QFont__Tag) void {
        qtc.QFont__Tag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont__Tag `
    ///
    pub fn isValid(self: QFont__Tag) bool {
        return qtc.QFont__Tag_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont__Tag `
    ///
    pub fn value(self: QFont__Tag) u32 {
        return qtc.QFont__Tag_Value(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFont__Tag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QFont__Tag, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QFont__Tag_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QFont__Tag.toString: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromValue` instead
    ///
    pub const FromValue = fromValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#fromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` _value: u32 `
    ///
    /// ## Returns:
    ///
    /// ` QFont__Tag ` (NOTE: The `ptr` field could be `null`.)
    ///
    pub fn fromValue(_value: u32) QFont__Tag {
        return .{ .ptr = qtc.QFont__Tag_FromValue(@bitCast(_value)) };
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfont-tag.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` QFont__Tag ` (NOTE: The `ptr` field could be `null`.)
    ///
    pub fn fromString(view: []const u8) QFont__Tag {
        const view_str = qtc.libqt_string{
            .len = view.len,
            .data = view.ptr,
        };
        return .{ .ptr = qtc.QFont__Tag_FromString(view_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFont__Tag `
    ///
    pub fn delete(self: QFont__Tag) void {
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
