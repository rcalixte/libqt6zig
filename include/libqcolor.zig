const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRgba64 = @import("libqt6").QRgba64;
const QVariant = @import("libqt6").QVariant;
const qcolor_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)
pub const QColor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QColor,

    pub const _is_QColor = {};

    /// New constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QColor `
    ///
    pub fn New(other: anytype) QColor {
        comptime _ = @TypeOf(other)._is_QColor;
        return .{ .ptr = qtc.QColor_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QColor object and invalidates the source QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QColor `
    ///
    pub fn New2(other: anytype) QColor {
        comptime _ = @TypeOf(other)._is_QColor;
        return .{ .ptr = qtc.QColor_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QColor object.
    ///
    pub fn New3() QColor {
        return .{ .ptr = qtc.QColor_new3() };
    }

    /// New4 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn New4(color: i32) QColor {
        return .{ .ptr = qtc.QColor_new4(@bitCast(color)) };
    }

    /// New5 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn New5(r: i32, g: i32, b: i32) QColor {
        return .{ .ptr = qtc.QColor_new5(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// New6 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn New6(rgb: u32) QColor {
        return .{ .ptr = qtc.QColor_new6(@bitCast(rgb)) };
    }

    /// New7 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rgba64: QRgba64 `
    ///
    pub fn New7(rgba64: anytype) QColor {
        comptime _ = @TypeOf(rgba64)._is_QRgba64;
        return .{ .ptr = qtc.QColor_new7(@ptrCast(rgba64.ptr)) };
    }

    /// New8 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New8(name: []const u8) QColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QColor_new8(name_str) };
    }

    /// New9 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aname: [:0]const u8 `
    ///
    pub fn New9(aname: [:0]const u8) QColor {
        const aname_Cstring = aname.ptr;
        return .{ .ptr = qtc.QColor_new9(aname_Cstring) };
    }

    /// New10 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qcolor_enums.Spec `
    ///
    pub fn New10(spec: i32) QColor {
        return .{ .ptr = qtc.QColor_new10(@bitCast(spec)) };
    }

    /// New11 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qcolor_enums.Spec `
    ///
    /// ` a1: u16 `
    ///
    /// ` a2: u16 `
    ///
    /// ` a3: u16 `
    ///
    /// ` a4: u16 `
    ///
    pub fn New11(spec: i32, a1: u16, a2: u16, a3: u16, a4: u16) QColor {
        return .{ .ptr = qtc.QColor_new11(@bitCast(spec), @bitCast(a1), @bitCast(a2), @bitCast(a3), @bitCast(a4)) };
    }

    /// New12 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn New12(param1: anytype) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.QColor_new12(@ptrCast(param1.ptr)) };
    }

    /// New13 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn New13(r: i32, g: i32, b: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_new13(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// New14 constructs a new QColor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qcolor_enums.Spec `
    ///
    /// ` a1: u16 `
    ///
    /// ` a2: u16 `
    ///
    /// ` a3: u16 `
    ///
    /// ` a4: u16 `
    ///
    /// ` a5: u16 `
    ///
    pub fn New14(spec: i32, a1: u16, a2: u16, a3: u16, a4: u16, a5: u16) QColor {
        return .{ .ptr = qtc.QColor_new14(@bitCast(spec), @bitCast(a1), @bitCast(a2), @bitCast(a3), @bitCast(a4), @bitCast(a5)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QColor `
    ///
    /// ` other: QColor `
    ///
    pub fn CopyAssign(self: QColor, other: QColor) void {
        qtc.QColor_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QColor `
    ///
    /// ` other: QColor `
    ///
    pub fn MoveAssign(self: QColor, other: QColor) void {
        qtc.QColor_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromString(name: []const u8) QColor {
        return .{ .ptr = qtc.QColor_FromString(name.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn OperatorAssign(self: QColor, color: i32) void {
        qtc.QColor_OperatorAssign(@ptrCast(self.ptr), @bitCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn IsValid(self: QColor) bool {
        return qtc.QColor_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QColor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QColor_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolor.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetNamedColor(self: QColor, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QColor_SetNamedColor(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#colorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColorNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QColor_ColorNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcolor.ColorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcolor.ColorNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#spec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ## Returns:
    ///
    /// ` qcolor_enums.Spec `
    ///
    pub fn Spec(self: QColor) i32 {
        return qtc.QColor_Spec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#alpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Alpha(self: QColor) i32 {
        return qtc.QColor_Alpha(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` alpha: i32 `
    ///
    pub fn SetAlpha(self: QColor, alpha: i32) void {
        qtc.QColor_SetAlpha(@ptrCast(self.ptr), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#alphaF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn AlphaF(self: QColor) f32 {
        return qtc.QColor_AlphaF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setAlphaF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` alpha: f32 `
    ///
    pub fn SetAlphaF(self: QColor, alpha: f32) void {
        qtc.QColor_SetAlphaF(@ptrCast(self.ptr), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#red)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Red(self: QColor) i32 {
        return qtc.QColor_Red(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#green)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Green(self: QColor) i32 {
        return qtc.QColor_Green(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Blue(self: QColor) i32 {
        return qtc.QColor_Blue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` red: i32 `
    ///
    pub fn SetRed(self: QColor, red: i32) void {
        qtc.QColor_SetRed(@ptrCast(self.ptr), @bitCast(red));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setGreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` green: i32 `
    ///
    pub fn SetGreen(self: QColor, green: i32) void {
        qtc.QColor_SetGreen(@ptrCast(self.ptr), @bitCast(green));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setBlue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` blue: i32 `
    ///
    pub fn SetBlue(self: QColor, blue: i32) void {
        qtc.QColor_SetBlue(@ptrCast(self.ptr), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#redF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn RedF(self: QColor) f32 {
        return qtc.QColor_RedF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#greenF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn GreenF(self: QColor) f32 {
        return qtc.QColor_GreenF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn BlueF(self: QColor) f32 {
        return qtc.QColor_BlueF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRedF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` red: f32 `
    ///
    pub fn SetRedF(self: QColor, red: f32) void {
        qtc.QColor_SetRedF(@ptrCast(self.ptr), @bitCast(red));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setGreenF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` green: f32 `
    ///
    pub fn SetGreenF(self: QColor, green: f32) void {
        qtc.QColor_SetGreenF(@ptrCast(self.ptr), @bitCast(green));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setBlueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` blue: f32 `
    ///
    pub fn SetBlueF(self: QColor, blue: f32) void {
        qtc.QColor_SetBlueF(@ptrCast(self.ptr), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *i32 `
    ///
    /// ` g: *i32 `
    ///
    /// ` b: *i32 `
    ///
    pub fn GetRgb(self: QColor, r: *i32, g: *i32, b: *i32) void {
        qtc.QColor_GetRgb(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn SetRgb(self: QColor, r: i32, g: i32, b: i32) void {
        qtc.QColor_SetRgb(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *f32 `
    ///
    /// ` g: *f32 `
    ///
    /// ` b: *f32 `
    ///
    pub fn GetRgbF(self: QColor, r: *f32, g: *f32, b: *f32) void {
        qtc.QColor_GetRgbF(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    pub fn SetRgbF(self: QColor, r: f32, g: f32, b: f32) void {
        qtc.QColor_SetRgbF(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Rgba64(self: QColor) QRgba64 {
        return .{ .ptr = qtc.QColor_Rgba64(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` rgba: QRgba64 `
    ///
    pub fn SetRgba64(self: QColor, rgba: anytype) void {
        comptime _ = @TypeOf(rgba)._is_QRgba64;
        qtc.QColor_SetRgba64(@ptrCast(self.ptr), @ptrCast(rgba.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Rgba(self: QColor) u32 {
        return qtc.QColor_Rgba(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` rgba: u32 `
    ///
    pub fn SetRgba(self: QColor, rgba: u32) void {
        qtc.QColor_SetRgba(@ptrCast(self.ptr), @bitCast(rgba));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Rgb(self: QColor) u32 {
        return qtc.QColor_Rgb(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` rgb: u32 `
    ///
    pub fn SetRgb2(self: QColor, rgb: u32) void {
        qtc.QColor_SetRgb2(@ptrCast(self.ptr), @bitCast(rgb));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Hue(self: QColor) i32 {
        return qtc.QColor_Hue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#saturation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Saturation(self: QColor) i32 {
        return qtc.QColor_Saturation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvHue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HsvHue(self: QColor) i32 {
        return qtc.QColor_HsvHue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvSaturation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HsvSaturation(self: QColor) i32 {
        return qtc.QColor_HsvSaturation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Value(self: QColor) i32 {
        return qtc.QColor_Value(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HueF(self: QColor) f32 {
        return qtc.QColor_HueF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#saturationF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn SaturationF(self: QColor) f32 {
        return qtc.QColor_SaturationF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvHueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HsvHueF(self: QColor) f32 {
        return qtc.QColor_HsvHueF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvSaturationF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HsvSaturationF(self: QColor) f32 {
        return qtc.QColor_HsvSaturationF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#valueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ValueF(self: QColor) f32 {
        return qtc.QColor_ValueF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` v: *i32 `
    ///
    pub fn GetHsv(self: QColor, h: *i32, s: *i32, v: *i32) void {
        qtc.QColor_GetHsv(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    pub fn SetHsv(self: QColor, h: i32, s: i32, v: i32) void {
        qtc.QColor_SetHsv(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` v: *f32 `
    ///
    pub fn GetHsvF(self: QColor, h: *f32, s: *f32, v: *f32) void {
        qtc.QColor_GetHsvF(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn SetHsvF(self: QColor, h: f32, s: f32, v: f32) void {
        qtc.QColor_SetHsvF(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#cyan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Cyan(self: QColor) i32 {
        return qtc.QColor_Cyan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#magenta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Magenta(self: QColor) i32 {
        return qtc.QColor_Magenta(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#yellow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Yellow(self: QColor) i32 {
        return qtc.QColor_Yellow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#black)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Black(self: QColor) i32 {
        return qtc.QColor_Black(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#cyanF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn CyanF(self: QColor) f32 {
        return qtc.QColor_CyanF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#magentaF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn MagentaF(self: QColor) f32 {
        return qtc.QColor_MagentaF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#yellowF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn YellowF(self: QColor) f32 {
        return qtc.QColor_YellowF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blackF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn BlackF(self: QColor) f32 {
        return qtc.QColor_BlackF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *i32 `
    ///
    /// ` m: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` k: *i32 `
    ///
    pub fn GetCmyk(self: QColor, c: *i32, m: *i32, y: *i32, k: *i32) void {
        qtc.QColor_GetCmyk(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    pub fn SetCmyk(self: QColor, c: i32, m: i32, y: i32, k: i32) void {
        qtc.QColor_SetCmyk(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *f32 `
    ///
    /// ` m: *f32 `
    ///
    /// ` y: *f32 `
    ///
    /// ` k: *f32 `
    ///
    pub fn GetCmykF(self: QColor, c: *f32, m: *f32, y: *f32, k: *f32) void {
        qtc.QColor_GetCmykF(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    pub fn SetCmykF(self: QColor, c: f32, m: f32, y: f32, k: f32) void {
        qtc.QColor_SetCmykF(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslHue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HslHue(self: QColor) i32 {
        return qtc.QColor_HslHue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslSaturation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HslSaturation(self: QColor) i32 {
        return qtc.QColor_HslSaturation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lightness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Lightness(self: QColor) i32 {
        return qtc.QColor_Lightness(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslHueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HslHueF(self: QColor) f32 {
        return qtc.QColor_HslHueF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslSaturationF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn HslSaturationF(self: QColor) f32 {
        return qtc.QColor_HslSaturationF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lightnessF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn LightnessF(self: QColor) f32 {
        return qtc.QColor_LightnessF(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` l: *i32 `
    ///
    pub fn GetHsl(self: QColor, h: *i32, s: *i32, l: *i32) void {
        qtc.QColor_GetHsl(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    pub fn SetHsl(self: QColor, h: i32, s: i32, l: i32) void {
        qtc.QColor_SetHsl(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` l: *f32 `
    ///
    pub fn GetHslF(self: QColor, h: *f32, s: *f32, l: *f32) void {
        qtc.QColor_GetHslF(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    pub fn SetHslF(self: QColor, h: f32, s: f32, l: f32) void {
        qtc.QColor_SetHslF(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ToRgb(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToRgb(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ToHsv(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToHsv(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ToCmyk(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToCmyk(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ToHsl(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToHsl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toExtendedRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ToExtendedRgb(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToExtendedRgb(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` colorSpec: qcolor_enums.Spec `
    ///
    pub fn ConvertTo(self: QColor, colorSpec: i32) QColor {
        return .{ .ptr = qtc.QColor_ConvertTo(@ptrCast(self.ptr), @bitCast(colorSpec)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn FromRgb(rgb: u32) QColor {
        return .{ .ptr = qtc.QColor_FromRgb(@bitCast(rgb)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgba: u32 `
    ///
    pub fn FromRgba(rgba: u32) QColor {
        return .{ .ptr = qtc.QColor_FromRgba(@bitCast(rgba)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn FromRgb2(r: i32, g: i32, b: i32) QColor {
        return .{ .ptr = qtc.QColor_FromRgb2(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    pub fn FromRgbF(r: f32, g: f32, b: f32) QColor {
        return .{ .ptr = qtc.QColor_FromRgbF(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: u16 `
    ///
    /// ` g: u16 `
    ///
    /// ` b: u16 `
    ///
    pub fn FromRgba64(r: u16, g: u16, b: u16) QColor {
        return .{ .ptr = qtc.QColor_FromRgba64(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgba: QRgba64 `
    ///
    pub fn FromRgba642(rgba: anytype) QColor {
        comptime _ = @TypeOf(rgba)._is_QRgba64;
        return .{ .ptr = qtc.QColor_FromRgba642(@ptrCast(rgba.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    pub fn FromHsv(h: i32, s: i32, v: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsv(@bitCast(h), @bitCast(s), @bitCast(v)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn FromHsvF(h: f32, s: f32, v: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHsvF(@bitCast(h), @bitCast(s), @bitCast(v)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    pub fn FromCmyk(c: i32, m: i32, y: i32, k: i32) QColor {
        return .{ .ptr = qtc.QColor_FromCmyk(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    pub fn FromCmykF(c: f32, m: f32, y: f32, k: f32) QColor {
        return .{ .ptr = qtc.QColor_FromCmykF(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    pub fn FromHsl(h: i32, s: i32, l: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsl(@bitCast(h), @bitCast(s), @bitCast(l)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    pub fn FromHslF(h: f32, s: f32, l: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHslF(@bitCast(h), @bitCast(s), @bitCast(l)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Lighter(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_Lighter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#darker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn Darker(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_Darker(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: QColor `
    ///
    pub fn OperatorEqual(self: QColor, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QColor;
        return qtc.QColor_OperatorEqual(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: QColor `
    ///
    pub fn OperatorNotEqual(self: QColor, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QColor;
        return qtc.QColor_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn ToQVariant(self: QColor) QVariant {
        return .{ .ptr = qtc.QColor_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsValidColor(name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QColor_IsValidColor(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn IsValidColorName(param1: []const u8) bool {
        return qtc.QColor_IsValidColorName(param1.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qcolor_enums.NameFormat `
    ///
    pub fn Name1(self: QColor, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QColor_Name1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolor.Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *i32 `
    ///
    /// ` g: *i32 `
    ///
    /// ` b: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn GetRgb4(self: QColor, r: *i32, g: *i32, b: *i32, a: *i32) void {
        qtc.QColor_GetRgb4(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn SetRgb4(self: QColor, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QColor_SetRgb4(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *f32 `
    ///
    /// ` g: *f32 `
    ///
    /// ` b: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn GetRgbF4(self: QColor, r: *f32, g: *f32, b: *f32, a: *f32) void {
        qtc.QColor_GetRgbF4(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn SetRgbF4(self: QColor, r: f32, g: f32, b: f32, a: f32) void {
        qtc.QColor_SetRgbF4(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` v: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn GetHsv4(self: QColor, h: *i32, s: *i32, v: *i32, a: *i32) void {
        qtc.QColor_GetHsv4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn SetHsv4(self: QColor, h: i32, s: i32, v: i32, a: i32) void {
        qtc.QColor_SetHsv4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` v: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn GetHsvF4(self: QColor, h: *f32, s: *f32, v: *f32, a: *f32) void {
        qtc.QColor_GetHsvF4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn SetHsvF4(self: QColor, h: f32, s: f32, v: f32, a: f32) void {
        qtc.QColor_SetHsvF4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *i32 `
    ///
    /// ` m: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` k: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn GetCmyk5(self: QColor, c: *i32, m: *i32, y: *i32, k: *i32, a: *i32) void {
        qtc.QColor_GetCmyk5(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn SetCmyk5(self: QColor, c: i32, m: i32, y: i32, k: i32, a: i32) void {
        qtc.QColor_SetCmyk5(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *f32 `
    ///
    /// ` m: *f32 `
    ///
    /// ` y: *f32 `
    ///
    /// ` k: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn GetCmykF5(self: QColor, c: *f32, m: *f32, y: *f32, k: *f32, a: *f32) void {
        qtc.QColor_GetCmykF5(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn SetCmykF5(self: QColor, c: f32, m: f32, y: f32, k: f32, a: f32) void {
        qtc.QColor_SetCmykF5(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` l: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn GetHsl4(self: QColor, h: *i32, s: *i32, l: *i32, a: *i32) void {
        qtc.QColor_GetHsl4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn SetHsl4(self: QColor, h: i32, s: i32, l: i32, a: i32) void {
        qtc.QColor_SetHsl4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` l: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn GetHslF4(self: QColor, h: *f32, s: *f32, l: *f32, a: *f32) void {
        qtc.QColor_GetHslF4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn SetHslF4(self: QColor, h: f32, s: f32, l: f32, a: f32) void {
        qtc.QColor_SetHslF4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn FromRgb4(r: i32, g: i32, b: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromRgb4(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn FromRgbF4(r: f32, g: f32, b: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromRgbF4(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: u16 `
    ///
    /// ` g: u16 `
    ///
    /// ` b: u16 `
    ///
    /// ` a: u16 `
    ///
    pub fn FromRgba644(r: u16, g: u16, b: u16, a: u16) QColor {
        return .{ .ptr = qtc.QColor_FromRgba644(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn FromHsv4(h: i32, s: i32, v: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsv4(@bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn FromHsvF4(h: f32, s: f32, v: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHsvF4(@bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn FromCmyk5(c: i32, m: i32, y: i32, k: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromCmyk5(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn FromCmykF5(c: f32, m: f32, y: f32, k: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromCmykF5(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn FromHsl4(h: i32, s: i32, l: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsl4(@bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn FromHslF4(h: f32, s: f32, l: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHslF4(@bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` f: i32 `
    ///
    pub fn Lighter1(self: QColor, f: i32) QColor {
        return .{ .ptr = qtc.QColor_Lighter1(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#darker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` f: i32 `
    ///
    pub fn Darker1(self: QColor, f: i32) QColor {
        return .{ .ptr = qtc.QColor_Darker1(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#dtor.QColor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QColor `
    ///
    pub fn Delete(self: QColor) void {
        qtc.QColor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#public-types)
pub const enums = struct {
    pub const Spec = enum(i32) {
        pub const Invalid: i32 = 0;
        pub const Rgb: i32 = 1;
        pub const Hsv: i32 = 2;
        pub const Cmyk: i32 = 3;
        pub const Hsl: i32 = 4;
        pub const ExtendedRgb: i32 = 5;
    };

    pub const NameFormat = enum(i32) {
        pub const HexRgb: i32 = 0;
        pub const HexArgb: i32 = 1;
    };
};
