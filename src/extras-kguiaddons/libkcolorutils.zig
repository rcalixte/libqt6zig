const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const qpainter_enums = @import("../libqpainter.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kcolorutils.html)
pub const KColorUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KColorUtils,

    pub const _is_KColorUtils = {};

    /// ### DEPRECATED: Use `hue` instead
    ///
    pub const Hue = hue;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#hue)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn hue(param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        return qtc.KColorUtils_Hue(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `chroma` instead
    ///
    pub const Chroma = chroma;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#chroma)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn chroma(param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        return qtc.KColorUtils_Chroma(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `luma` instead
    ///
    pub const Luma = luma;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#luma)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn luma(param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        return qtc.KColorUtils_Luma(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `getHcy` instead
    ///
    pub const GetHcy = getHcy;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#getHcy)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` _hue: *f64 `
    ///
    /// ` _chroma: *f64 `
    ///
    /// ` _luma: *f64 `
    ///
    /// ` alpha: *f64 `
    ///
    pub fn getHcy(param1: anytype, _hue: *f64, _chroma: *f64, _luma: *f64, alpha: *f64) void {
        comptime _ = @TypeOf(param1)._is_QColor;
        qtc.KColorUtils_GetHcy(@ptrCast(param1.ptr), @ptrCast(_hue), @ptrCast(_chroma), @ptrCast(_luma), @ptrCast(alpha));
    }

    /// ### DEPRECATED: Use `hcyColor` instead
    ///
    pub const HcyColor = hcyColor;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#hcyColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` _hue: f64 `
    ///
    /// ` _chroma: f64 `
    ///
    /// ` _luma: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn hcyColor(_hue: f64, _chroma: f64, _luma: f64, alpha: f64) QColor {
        return .{ .ptr = qtc.KColorUtils_HcyColor(@bitCast(_hue), @bitCast(_chroma), @bitCast(_luma), @bitCast(alpha)) };
    }

    /// ### DEPRECATED: Use `contrastRatio` instead
    ///
    pub const ContrastRatio = contrastRatio;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#contrastRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: QColor `
    ///
    pub fn contrastRatio(param1: anytype, param2: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        comptime _ = @TypeOf(param2)._is_QColor;
        return qtc.KColorUtils_ContrastRatio(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `lighten` instead
    ///
    pub const Lighten = lighten;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#lighten)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` amount: f64 `
    ///
    /// ` chromaInverseGain: f64 `
    ///
    pub fn lighten(param1: anytype, amount: f64, chromaInverseGain: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Lighten(@ptrCast(param1.ptr), @bitCast(amount), @bitCast(chromaInverseGain)) };
    }

    /// ### DEPRECATED: Use `darken` instead
    ///
    pub const Darken = darken;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#darken)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` amount: f64 `
    ///
    /// ` chromaGain: f64 `
    ///
    pub fn darken(param1: anytype, amount: f64, chromaGain: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Darken(@ptrCast(param1.ptr), @bitCast(amount), @bitCast(chromaGain)) };
    }

    /// ### DEPRECATED: Use `shade` instead
    ///
    pub const Shade = shade;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` lumaAmount: f64 `
    ///
    /// ` chromaAmount: f64 `
    ///
    pub fn shade(param1: anytype, lumaAmount: f64, chromaAmount: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Shade(@ptrCast(param1.ptr), @bitCast(lumaAmount), @bitCast(chromaAmount)) };
    }

    /// ### DEPRECATED: Use `tint` instead
    ///
    pub const Tint = tint;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#tint)
    ///
    /// ## Parameter(s):
    ///
    /// ` base: QColor `
    ///
    /// ` color: QColor `
    ///
    /// ` amount: f64 `
    ///
    pub fn tint(base: anytype, color: anytype, amount: f64) QColor {
        comptime _ = @TypeOf(base)._is_QColor;
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Tint(@ptrCast(base.ptr), @ptrCast(color.ptr), @bitCast(amount)) };
    }

    /// ### DEPRECATED: Use `mix` instead
    ///
    pub const Mix = mix;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#mix)
    ///
    /// ## Parameter(s):
    ///
    /// ` c1: QColor `
    ///
    /// ` c2: QColor `
    ///
    /// ` bias: f64 `
    ///
    pub fn mix(c1: anytype, c2: anytype, bias: f64) QColor {
        comptime _ = @TypeOf(c1)._is_QColor;
        comptime _ = @TypeOf(c2)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Mix(@ptrCast(c1.ptr), @ptrCast(c2.ptr), @bitCast(bias)) };
    }

    /// ### DEPRECATED: Use `overlayColors` instead
    ///
    pub const OverlayColors = overlayColors;

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#overlayColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` base: QColor `
    ///
    /// ` paint: QColor `
    ///
    /// ` comp: qpainter_enums.CompositionMode `
    ///
    pub fn overlayColors(base: anytype, paint: anytype, comp: i32) QColor {
        comptime _ = @TypeOf(base)._is_QColor;
        comptime _ = @TypeOf(paint)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_OverlayColors(@ptrCast(base.ptr), @ptrCast(paint.ptr), @bitCast(comp)) };
    }
};
