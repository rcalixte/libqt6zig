const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpainter_enums = @import("../libqpainter.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kcolorutils.html)
pub const kcolorutils = struct {
    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#hue)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    pub fn Hue(param1: ?*anyopaque) f64 {
        return qtc.KColorUtils_Hue(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#chroma)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    pub fn Chroma(param1: ?*anyopaque) f64 {
        return qtc.KColorUtils_Chroma(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#luma)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    pub fn Luma(param1: ?*anyopaque) f64 {
        return qtc.KColorUtils_Luma(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#getHcy)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: *f64 `
    ///
    /// ` param3: *f64 `
    ///
    /// ` param4: *f64 `
    ///
    /// ` param5: *f64 `
    ///
    pub fn GetHcy(param1: ?*anyopaque, param2: *f64, param3: *f64, param4: *f64, param5: *f64) void {
        qtc.KColorUtils_GetHcy(@ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#hcyColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    /// ` param4: f64 `
    ///
    pub fn HcyColor(param1: f64, param2: f64, param3: f64, param4: f64) QtC.QColor {
        return qtc.KColorUtils_HcyColor(@bitCast(param1), @bitCast(param2), @bitCast(param3), @bitCast(param4));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#contrastRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: QtC.QColor `
    ///
    pub fn ContrastRatio(param1: ?*anyopaque, param2: ?*anyopaque) f64 {
        return qtc.KColorUtils_ContrastRatio(@ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#lighten)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    pub fn Lighten(param1: ?*anyopaque, param2: f64, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Lighten(@ptrCast(param1), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#darken)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    pub fn Darken(param1: ?*anyopaque, param2: f64, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Darken(@ptrCast(param1), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    pub fn Shade(param1: ?*anyopaque, param2: f64, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Shade(@ptrCast(param1), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#tint)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: QtC.QColor `
    ///
    /// ` param3: f64 `
    ///
    pub fn Tint(param1: ?*anyopaque, param2: ?*anyopaque, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Tint(@ptrCast(param1), @ptrCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#mix)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: QtC.QColor `
    ///
    /// ` param3: f64 `
    ///
    pub fn Mix(param1: ?*anyopaque, param2: ?*anyopaque, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Mix(@ptrCast(param1), @ptrCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#overlayColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: QtC.QColor `
    ///
    /// ` param3: qpainter_enums.CompositionMode `
    ///
    pub fn OverlayColors(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.QColor {
        return qtc.KColorUtils_OverlayColors(@ptrCast(param1), @ptrCast(param2), @bitCast(param3));
    }
};
