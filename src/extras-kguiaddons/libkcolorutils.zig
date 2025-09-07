const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpainter_enums = @import("../libqpainter.zig").enums;

/// https://api.kde.org/kcolorutils.html
pub const kcolorutils = struct {
    /// [Qt documentation](https://api.kde.org/kcolorutils.html#hue)
    ///
    /// ``` param1: QtC.QColor ```
    pub fn Hue(param1: ?*anyopaque) f64 {
        return qtc.KColorUtils_Hue(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#chroma)
    ///
    /// ``` param1: QtC.QColor ```
    pub fn Chroma(param1: ?*anyopaque) f64 {
        return qtc.KColorUtils_Chroma(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#luma)
    ///
    /// ``` param1: QtC.QColor ```
    pub fn Luma(param1: ?*anyopaque) f64 {
        return qtc.KColorUtils_Luma(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#getHcy)
    ///
    /// ``` param1: QtC.QColor, param2: *f64, param3: *f64, param4: *f64, param5: *f64 ```
    pub fn GetHcy(param1: ?*anyopaque, param2: *f64, param3: *f64, param4: *f64, param5: *f64) void {
        qtc.KColorUtils_GetHcy(@ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#hcyColor)
    ///
    /// ``` param1: f64, param2: f64, param3: f64, param4: f64 ```
    pub fn HcyColor(param1: f64, param2: f64, param3: f64, param4: f64) QtC.QColor {
        return qtc.KColorUtils_HcyColor(@floatCast(param1), @floatCast(param2), @floatCast(param3), @floatCast(param4));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#contrastRatio)
    ///
    /// ``` param1: QtC.QColor, param2: QtC.QColor ```
    pub fn ContrastRatio(param1: ?*anyopaque, param2: ?*anyopaque) f64 {
        return qtc.KColorUtils_ContrastRatio(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#lighten)
    ///
    /// ``` param1: QtC.QColor, param2: f64, param3: f64 ```
    pub fn Lighten(param1: ?*anyopaque, param2: f64, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Lighten(@ptrCast(param1), @floatCast(param2), @floatCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#darken)
    ///
    /// ``` param1: QtC.QColor, param2: f64, param3: f64 ```
    pub fn Darken(param1: ?*anyopaque, param2: f64, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Darken(@ptrCast(param1), @floatCast(param2), @floatCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#shade)
    ///
    /// ``` param1: QtC.QColor, param2: f64, param3: f64 ```
    pub fn Shade(param1: ?*anyopaque, param2: f64, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Shade(@ptrCast(param1), @floatCast(param2), @floatCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#tint)
    ///
    /// ``` param1: QtC.QColor, param2: QtC.QColor, param3: f64 ```
    pub fn Tint(param1: ?*anyopaque, param2: ?*anyopaque, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Tint(@ptrCast(param1), @ptrCast(param2), @floatCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#mix)
    ///
    /// ``` param1: QtC.QColor, param2: QtC.QColor, param3: f64 ```
    pub fn Mix(param1: ?*anyopaque, param2: ?*anyopaque, param3: f64) QtC.QColor {
        return qtc.KColorUtils_Mix(@ptrCast(param1), @ptrCast(param2), @floatCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kcolorutils.html#overlayColors)
    ///
    /// ``` param1: QtC.QColor, param2: QtC.QColor, param3: qpainter_enums.CompositionMode ```
    pub fn OverlayColors(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.QColor {
        return qtc.KColorUtils_OverlayColors(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }
};
