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

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#hue)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn Hue(param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        return qtc.KColorUtils_Hue(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#chroma)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn Chroma(param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        return qtc.KColorUtils_Chroma(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#luma)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn Luma(param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        return qtc.KColorUtils_Luma(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#getHcy)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` hue: *f64 `
    ///
    /// ` chroma: *f64 `
    ///
    /// ` luma: *f64 `
    ///
    /// ` alpha: *f64 `
    ///
    pub fn GetHcy(param1: anytype, hue: *f64, chroma: *f64, luma: *f64, alpha: *f64) void {
        comptime _ = @TypeOf(param1)._is_QColor;
        qtc.KColorUtils_GetHcy(@ptrCast(param1.ptr), @ptrCast(hue), @ptrCast(chroma), @ptrCast(luma), @ptrCast(alpha));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#hcyColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` hue: f64 `
    ///
    /// ` chroma: f64 `
    ///
    /// ` luma: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn HcyColor(hue: f64, chroma: f64, luma: f64, alpha: f64) QColor {
        return .{ .ptr = qtc.KColorUtils_HcyColor(@bitCast(hue), @bitCast(chroma), @bitCast(luma), @bitCast(alpha)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#contrastRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: QColor `
    ///
    pub fn ContrastRatio(param1: anytype, param2: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QColor;
        comptime _ = @TypeOf(param2)._is_QColor;
        return qtc.KColorUtils_ContrastRatio(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

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
    pub fn Lighten(param1: anytype, amount: f64, chromaInverseGain: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Lighten(@ptrCast(param1.ptr), @bitCast(amount), @bitCast(chromaInverseGain)) };
    }

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
    pub fn Darken(param1: anytype, amount: f64, chromaGain: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Darken(@ptrCast(param1.ptr), @bitCast(amount), @bitCast(chromaGain)) };
    }

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
    pub fn Shade(param1: anytype, lumaAmount: f64, chromaAmount: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Shade(@ptrCast(param1.ptr), @bitCast(lumaAmount), @bitCast(chromaAmount)) };
    }

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
    pub fn Tint(base: anytype, color: anytype, amount: f64) QColor {
        comptime _ = @TypeOf(base)._is_QColor;
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Tint(@ptrCast(base.ptr), @ptrCast(color.ptr), @bitCast(amount)) };
    }

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
    pub fn Mix(c1: anytype, c2: anytype, bias: f64) QColor {
        comptime _ = @TypeOf(c1)._is_QColor;
        comptime _ = @TypeOf(c2)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Mix(@ptrCast(c1.ptr), @ptrCast(c2.ptr), @bitCast(bias)) };
    }

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
    pub fn OverlayColors(base: anytype, paint: anytype, comp: i32) QColor {
        comptime _ = @TypeOf(base)._is_QColor;
        comptime _ = @TypeOf(paint)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_OverlayColors(@ptrCast(base.ptr), @ptrCast(paint.ptr), @bitCast(comp)) };
    }
};
