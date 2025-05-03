const C = @import("qt6c");
const qcolor_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcolor.html
pub const qcolor = struct {
    /// New constructs a new QColor object.
    ///
    /// ``` other: ?*C.QColor ```
    pub fn New(other: ?*anyopaque) ?*C.QColor {
        return C.QColor_new(@ptrCast(other));
    }

    /// New2 constructs a new QColor object and invalidates the source QColor object.
    ///
    /// ``` other: ?*C.QColor ```
    pub fn New2(other: ?*anyopaque) ?*C.QColor {
        return C.QColor_new2(@ptrCast(other));
    }

    /// New3 constructs a new QColor object.
    ///
    ///
    pub fn New3() ?*C.QColor {
        return C.QColor_new3();
    }

    /// New4 constructs a new QColor object.
    ///
    /// ``` color: qnamespace_enums.GlobalColor ```
    pub fn New4(color: i64) ?*C.QColor {
        return C.QColor_new4(@intCast(color));
    }

    /// New5 constructs a new QColor object.
    ///
    /// ``` r: i32, g: i32, b: i32 ```
    pub fn New5(r: i32, g: i32, b: i32) ?*C.QColor {
        return C.QColor_new5(@intCast(r), @intCast(g), @intCast(b));
    }

    /// New6 constructs a new QColor object.
    ///
    /// ``` rgb: u32 ```
    pub fn New6(rgb: u32) ?*C.QColor {
        return C.QColor_new6(@intCast(rgb));
    }

    /// New7 constructs a new QColor object.
    ///
    /// ``` rgba64: ?*C.QRgba64 ```
    pub fn New7(rgba64: ?*C.QRgba64) ?*C.QColor {
        return C.QColor_new7(@ptrCast(rgba64));
    }

    /// New8 constructs a new QColor object.
    ///
    /// ``` name: []const u8 ```
    pub fn New8(name: []const u8) ?*C.QColor {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QColor_new8(name_str);
    }

    /// New9 constructs a new QColor object.
    ///
    /// ``` aname: []const u8 ```
    pub fn New9(aname: []const u8) ?*C.QColor {
        const aname_Cstring = @constCast(aname.ptr);

        return C.QColor_new9(aname_Cstring);
    }

    /// New10 constructs a new QColor object.
    ///
    /// ``` spec: qcolor_enums.Spec ```
    pub fn New10(spec: i64) ?*C.QColor {
        return C.QColor_new10(@intCast(spec));
    }

    /// New11 constructs a new QColor object.
    ///
    /// ``` spec: qcolor_enums.Spec, a1: u16, a2: u16, a3: u16, a4: u16 ```
    pub fn New11(spec: i64, a1: u16, a2: u16, a3: u16, a4: u16) ?*C.QColor {
        return C.QColor_new11(@intCast(spec), @intCast(a1), @intCast(a2), @intCast(a3), @intCast(a4));
    }

    /// New12 constructs a new QColor object.
    ///
    /// ``` param1: ?*C.QColor ```
    pub fn New12(param1: ?*anyopaque) ?*C.QColor {
        return C.QColor_new12(@ptrCast(param1));
    }

    /// New13 constructs a new QColor object.
    ///
    /// ``` r: i32, g: i32, b: i32, a: i32 ```
    pub fn New13(r: i32, g: i32, b: i32, a: i32) ?*C.QColor {
        return C.QColor_new13(@intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// New14 constructs a new QColor object.
    ///
    /// ``` spec: qcolor_enums.Spec, a1: u16, a2: u16, a3: u16, a4: u16, a5: u16 ```
    pub fn New14(spec: i64, a1: u16, a2: u16, a3: u16, a4: u16, a5: u16) ?*C.QColor {
        return C.QColor_new14(@intCast(spec), @intCast(a1), @intCast(a2), @intCast(a3), @intCast(a4), @intCast(a5));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QColor, other: ?*QColor ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QColor_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QColor, other: ?*QColor ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QColor_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromString)
    ///
    /// ``` name: []const u8 ```
    pub fn FromString(name: []const u8) ?*C.QColor {
        return C.QColor_FromString(@constCast(name.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator=)
    ///
    /// ``` self: ?*C.QColor, color: qnamespace_enums.GlobalColor ```
    pub fn OperatorAssign(self: ?*anyopaque, color: i64) void {
        C.QColor_OperatorAssign(@ptrCast(self), @intCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValid)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QColor_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#name)
    ///
    /// ``` self: ?*C.QColor, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QColor_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
    ///
    /// ``` self: ?*C.QColor, name: []const u8 ```
    pub fn SetNamedColor(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QColor_SetNamedColor(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#colorNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ColorNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QColor_ColorNames();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#spec)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Spec(self: ?*anyopaque) i64 {
        return C.QColor_Spec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#alpha)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Alpha(self: ?*anyopaque) i32 {
        return C.QColor_Alpha(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setAlpha)
    ///
    /// ``` self: ?*C.QColor, alpha: i32 ```
    pub fn SetAlpha(self: ?*anyopaque, alpha: i32) void {
        C.QColor_SetAlpha(@ptrCast(self), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#alphaF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn AlphaF(self: ?*anyopaque) f32 {
        return C.QColor_AlphaF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setAlphaF)
    ///
    /// ``` self: ?*C.QColor, alpha: f32 ```
    pub fn SetAlphaF(self: ?*anyopaque, alpha: f32) void {
        C.QColor_SetAlphaF(@ptrCast(self), @floatCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#red)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Red(self: ?*anyopaque) i32 {
        return C.QColor_Red(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#green)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Green(self: ?*anyopaque) i32 {
        return C.QColor_Green(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blue)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Blue(self: ?*anyopaque) i32 {
        return C.QColor_Blue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRed)
    ///
    /// ``` self: ?*C.QColor, red: i32 ```
    pub fn SetRed(self: ?*anyopaque, red: i32) void {
        C.QColor_SetRed(@ptrCast(self), @intCast(red));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setGreen)
    ///
    /// ``` self: ?*C.QColor, green: i32 ```
    pub fn SetGreen(self: ?*anyopaque, green: i32) void {
        C.QColor_SetGreen(@ptrCast(self), @intCast(green));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setBlue)
    ///
    /// ``` self: ?*C.QColor, blue: i32 ```
    pub fn SetBlue(self: ?*anyopaque, blue: i32) void {
        C.QColor_SetBlue(@ptrCast(self), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#redF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn RedF(self: ?*anyopaque) f32 {
        return C.QColor_RedF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#greenF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn GreenF(self: ?*anyopaque) f32 {
        return C.QColor_GreenF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blueF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn BlueF(self: ?*anyopaque) f32 {
        return C.QColor_BlueF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRedF)
    ///
    /// ``` self: ?*C.QColor, red: f32 ```
    pub fn SetRedF(self: ?*anyopaque, red: f32) void {
        C.QColor_SetRedF(@ptrCast(self), @floatCast(red));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setGreenF)
    ///
    /// ``` self: ?*C.QColor, green: f32 ```
    pub fn SetGreenF(self: ?*anyopaque, green: f32) void {
        C.QColor_SetGreenF(@ptrCast(self), @floatCast(green));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setBlueF)
    ///
    /// ``` self: ?*C.QColor, blue: f32 ```
    pub fn SetBlueF(self: ?*anyopaque, blue: f32) void {
        C.QColor_SetBlueF(@ptrCast(self), @floatCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgb)
    ///
    /// ``` self: ?*C.QColor, r: ?*i32, g: ?*i32, b: ?*i32 ```
    pub fn GetRgb(self: ?*anyopaque, r: ?*anyopaque, g: ?*anyopaque, b: ?*anyopaque) void {
        C.QColor_GetRgb(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ``` self: ?*C.QColor, r: i32, g: i32, b: i32 ```
    pub fn SetRgb(self: ?*anyopaque, r: i32, g: i32, b: i32) void {
        C.QColor_SetRgb(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
    ///
    /// ``` self: ?*C.QColor, r: ?*f32, g: ?*f32, b: ?*f32 ```
    pub fn GetRgbF(self: ?*anyopaque, r: ?*anyopaque, g: ?*anyopaque, b: ?*anyopaque) void {
        C.QColor_GetRgbF(@ptrCast(self), @floatCast(r), @floatCast(g), @floatCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
    ///
    /// ``` self: ?*C.QColor, r: f32, g: f32, b: f32 ```
    pub fn SetRgbF(self: ?*anyopaque, r: f32, g: f32, b: f32) void {
        C.QColor_SetRgbF(@ptrCast(self), @floatCast(r), @floatCast(g), @floatCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgba64)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Rgba64(self: ?*anyopaque) ?*C.QRgba64 {
        return C.QColor_Rgba64(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgba64)
    ///
    /// ``` self: ?*C.QColor, rgba: ?*C.QRgba64 ```
    pub fn SetRgba64(self: ?*anyopaque, rgba: ?*C.QRgba64) void {
        C.QColor_SetRgba64(@ptrCast(self), @ptrCast(rgba));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgba)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Rgba(self: ?*anyopaque) u32 {
        return C.QColor_Rgba(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgba)
    ///
    /// ``` self: ?*C.QColor, rgba: u32 ```
    pub fn SetRgba(self: ?*anyopaque, rgba: u32) void {
        C.QColor_SetRgba(@ptrCast(self), @intCast(rgba));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgb)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Rgb(self: ?*anyopaque) u32 {
        return C.QColor_Rgb(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ``` self: ?*C.QColor, rgb: u32 ```
    pub fn SetRgbWithRgb(self: ?*anyopaque, rgb: u32) void {
        C.QColor_SetRgbWithRgb(@ptrCast(self), @intCast(rgb));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hue)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Hue(self: ?*anyopaque) i32 {
        return C.QColor_Hue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#saturation)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Saturation(self: ?*anyopaque) i32 {
        return C.QColor_Saturation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvHue)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HsvHue(self: ?*anyopaque) i32 {
        return C.QColor_HsvHue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvSaturation)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HsvSaturation(self: ?*anyopaque) i32 {
        return C.QColor_HsvSaturation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#value)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Value(self: ?*anyopaque) i32 {
        return C.QColor_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hueF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HueF(self: ?*anyopaque) f32 {
        return C.QColor_HueF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#saturationF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn SaturationF(self: ?*anyopaque) f32 {
        return C.QColor_SaturationF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvHueF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HsvHueF(self: ?*anyopaque) f32 {
        return C.QColor_HsvHueF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvSaturationF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HsvSaturationF(self: ?*anyopaque) f32 {
        return C.QColor_HsvSaturationF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#valueF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ValueF(self: ?*anyopaque) f32 {
        return C.QColor_ValueF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsv)
    ///
    /// ``` self: ?*C.QColor, h: ?*i32, s: ?*i32, v: ?*i32 ```
    pub fn GetHsv(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, v: ?*anyopaque) void {
        C.QColor_GetHsv(@ptrCast(self), @intCast(h), @intCast(s), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsv)
    ///
    /// ``` self: ?*C.QColor, h: i32, s: i32, v: i32 ```
    pub fn SetHsv(self: ?*anyopaque, h: i32, s: i32, v: i32) void {
        C.QColor_SetHsv(@ptrCast(self), @intCast(h), @intCast(s), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
    ///
    /// ``` self: ?*C.QColor, h: ?*f32, s: ?*f32, v: ?*f32 ```
    pub fn GetHsvF(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, v: ?*anyopaque) void {
        C.QColor_GetHsvF(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
    ///
    /// ``` self: ?*C.QColor, h: f32, s: f32, v: f32 ```
    pub fn SetHsvF(self: ?*anyopaque, h: f32, s: f32, v: f32) void {
        C.QColor_SetHsvF(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#cyan)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Cyan(self: ?*anyopaque) i32 {
        return C.QColor_Cyan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#magenta)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Magenta(self: ?*anyopaque) i32 {
        return C.QColor_Magenta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#yellow)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Yellow(self: ?*anyopaque) i32 {
        return C.QColor_Yellow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#black)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Black(self: ?*anyopaque) i32 {
        return C.QColor_Black(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#cyanF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn CyanF(self: ?*anyopaque) f32 {
        return C.QColor_CyanF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#magentaF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn MagentaF(self: ?*anyopaque) f32 {
        return C.QColor_MagentaF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#yellowF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn YellowF(self: ?*anyopaque) f32 {
        return C.QColor_YellowF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blackF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn BlackF(self: ?*anyopaque) f32 {
        return C.QColor_BlackF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
    ///
    /// ``` self: ?*C.QColor, c: ?*i32, m: ?*i32, y: ?*i32, k: ?*i32 ```
    pub fn GetCmyk(self: ?*anyopaque, c: ?*anyopaque, m: ?*anyopaque, y: ?*anyopaque, k: ?*anyopaque) void {
        C.QColor_GetCmyk(@ptrCast(self), @intCast(c), @intCast(m), @intCast(y), @intCast(k));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
    ///
    /// ``` self: ?*C.QColor, c: i32, m: i32, y: i32, k: i32 ```
    pub fn SetCmyk(self: ?*anyopaque, c: i32, m: i32, y: i32, k: i32) void {
        C.QColor_SetCmyk(@ptrCast(self), @intCast(c), @intCast(m), @intCast(y), @intCast(k));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
    ///
    /// ``` self: ?*C.QColor, c: ?*f32, m: ?*f32, y: ?*f32, k: ?*f32 ```
    pub fn GetCmykF(self: ?*anyopaque, c: ?*anyopaque, m: ?*anyopaque, y: ?*anyopaque, k: ?*anyopaque) void {
        C.QColor_GetCmykF(@ptrCast(self), @floatCast(c), @floatCast(m), @floatCast(y), @floatCast(k));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
    ///
    /// ``` self: ?*C.QColor, c: f32, m: f32, y: f32, k: f32 ```
    pub fn SetCmykF(self: ?*anyopaque, c: f32, m: f32, y: f32, k: f32) void {
        C.QColor_SetCmykF(@ptrCast(self), @floatCast(c), @floatCast(m), @floatCast(y), @floatCast(k));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslHue)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HslHue(self: ?*anyopaque) i32 {
        return C.QColor_HslHue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslSaturation)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HslSaturation(self: ?*anyopaque) i32 {
        return C.QColor_HslSaturation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lightness)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Lightness(self: ?*anyopaque) i32 {
        return C.QColor_Lightness(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslHueF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HslHueF(self: ?*anyopaque) f32 {
        return C.QColor_HslHueF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslSaturationF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn HslSaturationF(self: ?*anyopaque) f32 {
        return C.QColor_HslSaturationF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lightnessF)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn LightnessF(self: ?*anyopaque) f32 {
        return C.QColor_LightnessF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsl)
    ///
    /// ``` self: ?*C.QColor, h: ?*i32, s: ?*i32, l: ?*i32 ```
    pub fn GetHsl(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, l: ?*anyopaque) void {
        C.QColor_GetHsl(@ptrCast(self), @intCast(h), @intCast(s), @intCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsl)
    ///
    /// ``` self: ?*C.QColor, h: i32, s: i32, l: i32 ```
    pub fn SetHsl(self: ?*anyopaque, h: i32, s: i32, l: i32) void {
        C.QColor_SetHsl(@ptrCast(self), @intCast(h), @intCast(s), @intCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHslF)
    ///
    /// ``` self: ?*C.QColor, h: ?*f32, s: ?*f32, l: ?*f32 ```
    pub fn GetHslF(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, l: ?*anyopaque) void {
        C.QColor_GetHslF(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHslF)
    ///
    /// ``` self: ?*C.QColor, h: f32, s: f32, l: f32 ```
    pub fn SetHslF(self: ?*anyopaque, h: f32, s: f32, l: f32) void {
        C.QColor_SetHslF(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toRgb)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ToRgb(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_ToRgb(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toHsv)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ToHsv(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_ToHsv(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toCmyk)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ToCmyk(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_ToCmyk(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toHsl)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ToHsl(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_ToHsl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toExtendedRgb)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ToExtendedRgb(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_ToExtendedRgb(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#convertTo)
    ///
    /// ``` self: ?*C.QColor, colorSpec: qcolor_enums.Spec ```
    pub fn ConvertTo(self: ?*anyopaque, colorSpec: i64) ?*C.QColor {
        return C.QColor_ConvertTo(@ptrCast(self), @intCast(colorSpec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ``` rgb: u32 ```
    pub fn FromRgb(rgb: u32) ?*C.QColor {
        return C.QColor_FromRgb(@intCast(rgb));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba)
    ///
    /// ``` rgba: u32 ```
    pub fn FromRgba(rgba: u32) ?*C.QColor {
        return C.QColor_FromRgba(@intCast(rgba));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ``` r: i32, g: i32, b: i32 ```
    pub fn FromRgb2(r: i32, g: i32, b: i32) ?*C.QColor {
        return C.QColor_FromRgb2(@intCast(r), @intCast(g), @intCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
    ///
    /// ``` r: f32, g: f32, b: f32 ```
    pub fn FromRgbF(r: f32, g: f32, b: f32) ?*C.QColor {
        return C.QColor_FromRgbF(@floatCast(r), @floatCast(g), @floatCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ``` r: u16, g: u16, b: u16 ```
    pub fn FromRgba64(r: u16, g: u16, b: u16) ?*C.QColor {
        return C.QColor_FromRgba64(@intCast(r), @intCast(g), @intCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ``` rgba: ?*C.QRgba64 ```
    pub fn FromRgba64WithRgba(rgba: ?*C.QRgba64) ?*C.QColor {
        return C.QColor_FromRgba64WithRgba(@ptrCast(rgba));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
    ///
    /// ``` h: i32, s: i32, v: i32 ```
    pub fn FromHsv(h: i32, s: i32, v: i32) ?*C.QColor {
        return C.QColor_FromHsv(@intCast(h), @intCast(s), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
    ///
    /// ``` h: f32, s: f32, v: f32 ```
    pub fn FromHsvF(h: f32, s: f32, v: f32) ?*C.QColor {
        return C.QColor_FromHsvF(@floatCast(h), @floatCast(s), @floatCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
    ///
    /// ``` c: i32, m: i32, y: i32, k: i32 ```
    pub fn FromCmyk(c: i32, m: i32, y: i32, k: i32) ?*C.QColor {
        return C.QColor_FromCmyk(@intCast(c), @intCast(m), @intCast(y), @intCast(k));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
    ///
    /// ``` c: f32, m: f32, y: f32, k: f32 ```
    pub fn FromCmykF(c: f32, m: f32, y: f32, k: f32) ?*C.QColor {
        return C.QColor_FromCmykF(@floatCast(c), @floatCast(m), @floatCast(y), @floatCast(k));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
    ///
    /// ``` h: i32, s: i32, l: i32 ```
    pub fn FromHsl(h: i32, s: i32, l: i32) ?*C.QColor {
        return C.QColor_FromHsl(@intCast(h), @intCast(s), @intCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
    ///
    /// ``` h: f32, s: f32, l: f32 ```
    pub fn FromHslF(h: f32, s: f32, l: f32) ?*C.QColor {
        return C.QColor_FromHslF(@floatCast(h), @floatCast(s), @floatCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lighter)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Lighter(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_Lighter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#darker)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn Darker(self: ?*anyopaque) ?*C.QColor {
        return C.QColor_Darker(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator==)
    ///
    /// ``` self: ?*C.QColor, c: ?*C.QColor ```
    pub fn OperatorEqual(self: ?*anyopaque, c: ?*anyopaque) bool {
        return C.QColor_OperatorEqual(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator!=)
    ///
    /// ``` self: ?*C.QColor, c: ?*C.QColor ```
    pub fn OperatorNotEqual(self: ?*anyopaque, c: ?*anyopaque) bool {
        return C.QColor_OperatorNotEqual(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator QVariant)
    ///
    /// ``` self: ?*C.QColor ```
    pub fn ToQVariant(self: ?*anyopaque) ?*C.QVariant {
        return C.QColor_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
    ///
    /// ``` name: []const u8 ```
    pub fn IsValidColor(name: []const u8) bool {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        return C.QColor_IsValidColor(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValidColorName)
    ///
    /// ``` param1: []const u8 ```
    pub fn IsValidColorName(param1: []const u8) bool {
        return C.QColor_IsValidColorName(@constCast(param1.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#name)
    ///
    /// ``` self: ?*C.QColor, format: qcolor_enums.NameFormat, allocator: std.mem.Allocator ```
    pub fn Name1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QColor_Name1(@ptrCast(self), @intCast(format));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgb)
    ///
    /// ``` self: ?*C.QColor, r: ?*i32, g: ?*i32, b: ?*i32, a: ?*i32 ```
    pub fn GetRgb4(self: ?*anyopaque, r: ?*anyopaque, g: ?*anyopaque, b: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetRgb4(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ``` self: ?*C.QColor, r: i32, g: i32, b: i32, a: i32 ```
    pub fn SetRgb4(self: ?*anyopaque, r: i32, g: i32, b: i32, a: i32) void {
        C.QColor_SetRgb4(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
    ///
    /// ``` self: ?*C.QColor, r: ?*f32, g: ?*f32, b: ?*f32, a: ?*f32 ```
    pub fn GetRgbF4(self: ?*anyopaque, r: ?*anyopaque, g: ?*anyopaque, b: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetRgbF4(@ptrCast(self), @floatCast(r), @floatCast(g), @floatCast(b), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
    ///
    /// ``` self: ?*C.QColor, r: f32, g: f32, b: f32, a: f32 ```
    pub fn SetRgbF4(self: ?*anyopaque, r: f32, g: f32, b: f32, a: f32) void {
        C.QColor_SetRgbF4(@ptrCast(self), @floatCast(r), @floatCast(g), @floatCast(b), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsv)
    ///
    /// ``` self: ?*C.QColor, h: ?*i32, s: ?*i32, v: ?*i32, a: ?*i32 ```
    pub fn GetHsv4(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, v: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetHsv4(@ptrCast(self), @intCast(h), @intCast(s), @intCast(v), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsv)
    ///
    /// ``` self: ?*C.QColor, h: i32, s: i32, v: i32, a: i32 ```
    pub fn SetHsv4(self: ?*anyopaque, h: i32, s: i32, v: i32, a: i32) void {
        C.QColor_SetHsv4(@ptrCast(self), @intCast(h), @intCast(s), @intCast(v), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
    ///
    /// ``` self: ?*C.QColor, h: ?*f32, s: ?*f32, v: ?*f32, a: ?*f32 ```
    pub fn GetHsvF4(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, v: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetHsvF4(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(v), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
    ///
    /// ``` self: ?*C.QColor, h: f32, s: f32, v: f32, a: f32 ```
    pub fn SetHsvF4(self: ?*anyopaque, h: f32, s: f32, v: f32, a: f32) void {
        C.QColor_SetHsvF4(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(v), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
    ///
    /// ``` self: ?*C.QColor, c: ?*i32, m: ?*i32, y: ?*i32, k: ?*i32, a: ?*i32 ```
    pub fn GetCmyk5(self: ?*anyopaque, c: ?*anyopaque, m: ?*anyopaque, y: ?*anyopaque, k: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetCmyk5(@ptrCast(self), @intCast(c), @intCast(m), @intCast(y), @intCast(k), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
    ///
    /// ``` self: ?*C.QColor, c: i32, m: i32, y: i32, k: i32, a: i32 ```
    pub fn SetCmyk5(self: ?*anyopaque, c: i32, m: i32, y: i32, k: i32, a: i32) void {
        C.QColor_SetCmyk5(@ptrCast(self), @intCast(c), @intCast(m), @intCast(y), @intCast(k), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
    ///
    /// ``` self: ?*C.QColor, c: ?*f32, m: ?*f32, y: ?*f32, k: ?*f32, a: ?*f32 ```
    pub fn GetCmykF5(self: ?*anyopaque, c: ?*anyopaque, m: ?*anyopaque, y: ?*anyopaque, k: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetCmykF5(@ptrCast(self), @floatCast(c), @floatCast(m), @floatCast(y), @floatCast(k), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
    ///
    /// ``` self: ?*C.QColor, c: f32, m: f32, y: f32, k: f32, a: f32 ```
    pub fn SetCmykF5(self: ?*anyopaque, c: f32, m: f32, y: f32, k: f32, a: f32) void {
        C.QColor_SetCmykF5(@ptrCast(self), @floatCast(c), @floatCast(m), @floatCast(y), @floatCast(k), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsl)
    ///
    /// ``` self: ?*C.QColor, h: ?*i32, s: ?*i32, l: ?*i32, a: ?*i32 ```
    pub fn GetHsl4(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, l: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetHsl4(@ptrCast(self), @intCast(h), @intCast(s), @intCast(l), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsl)
    ///
    /// ``` self: ?*C.QColor, h: i32, s: i32, l: i32, a: i32 ```
    pub fn SetHsl4(self: ?*anyopaque, h: i32, s: i32, l: i32, a: i32) void {
        C.QColor_SetHsl4(@ptrCast(self), @intCast(h), @intCast(s), @intCast(l), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHslF)
    ///
    /// ``` self: ?*C.QColor, h: ?*f32, s: ?*f32, l: ?*f32, a: ?*f32 ```
    pub fn GetHslF4(self: ?*anyopaque, h: ?*anyopaque, s: ?*anyopaque, l: ?*anyopaque, a: ?*anyopaque) void {
        C.QColor_GetHslF4(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(l), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHslF)
    ///
    /// ``` self: ?*C.QColor, h: f32, s: f32, l: f32, a: f32 ```
    pub fn SetHslF4(self: ?*anyopaque, h: f32, s: f32, l: f32, a: f32) void {
        C.QColor_SetHslF4(@ptrCast(self), @floatCast(h), @floatCast(s), @floatCast(l), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ``` r: i32, g: i32, b: i32, a: i32 ```
    pub fn FromRgb4(r: i32, g: i32, b: i32, a: i32) ?*C.QColor {
        return C.QColor_FromRgb4(@intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
    ///
    /// ``` r: f32, g: f32, b: f32, a: f32 ```
    pub fn FromRgbF4(r: f32, g: f32, b: f32, a: f32) ?*C.QColor {
        return C.QColor_FromRgbF4(@floatCast(r), @floatCast(g), @floatCast(b), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ``` r: u16, g: u16, b: u16, a: u16 ```
    pub fn FromRgba644(r: u16, g: u16, b: u16, a: u16) ?*C.QColor {
        return C.QColor_FromRgba644(@intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
    ///
    /// ``` h: i32, s: i32, v: i32, a: i32 ```
    pub fn FromHsv4(h: i32, s: i32, v: i32, a: i32) ?*C.QColor {
        return C.QColor_FromHsv4(@intCast(h), @intCast(s), @intCast(v), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
    ///
    /// ``` h: f32, s: f32, v: f32, a: f32 ```
    pub fn FromHsvF4(h: f32, s: f32, v: f32, a: f32) ?*C.QColor {
        return C.QColor_FromHsvF4(@floatCast(h), @floatCast(s), @floatCast(v), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
    ///
    /// ``` c: i32, m: i32, y: i32, k: i32, a: i32 ```
    pub fn FromCmyk5(c: i32, m: i32, y: i32, k: i32, a: i32) ?*C.QColor {
        return C.QColor_FromCmyk5(@intCast(c), @intCast(m), @intCast(y), @intCast(k), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
    ///
    /// ``` c: f32, m: f32, y: f32, k: f32, a: f32 ```
    pub fn FromCmykF5(c: f32, m: f32, y: f32, k: f32, a: f32) ?*C.QColor {
        return C.QColor_FromCmykF5(@floatCast(c), @floatCast(m), @floatCast(y), @floatCast(k), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
    ///
    /// ``` h: i32, s: i32, l: i32, a: i32 ```
    pub fn FromHsl4(h: i32, s: i32, l: i32, a: i32) ?*C.QColor {
        return C.QColor_FromHsl4(@intCast(h), @intCast(s), @intCast(l), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
    ///
    /// ``` h: f32, s: f32, l: f32, a: f32 ```
    pub fn FromHslF4(h: f32, s: f32, l: f32, a: f32) ?*C.QColor {
        return C.QColor_FromHslF4(@floatCast(h), @floatCast(s), @floatCast(l), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lighter)
    ///
    /// ``` self: ?*C.QColor, f: i32 ```
    pub fn Lighter1(self: ?*anyopaque, f: i32) ?*C.QColor {
        return C.QColor_Lighter1(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#darker)
    ///
    /// ``` self: ?*C.QColor, f: i32 ```
    pub fn Darker1(self: ?*anyopaque, f: i32) ?*C.QColor {
        return C.QColor_Darker1(@ptrCast(self), @intCast(f));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QColor ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QColor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcolor.html#types
pub const enums = struct {
    pub const Spec = enum {
        pub const Invalid: i32 = 0;
        pub const Rgb: i32 = 1;
        pub const Hsv: i32 = 2;
        pub const Cmyk: i32 = 3;
        pub const Hsl: i32 = 4;
        pub const ExtendedRgb: i32 = 5;
    };

    pub const NameFormat = enum {
        pub const HexRgb: i32 = 0;
        pub const HexArgb: i32 = 1;
    };
};
