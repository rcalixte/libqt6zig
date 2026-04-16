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
    /// ` param2: *f64 `
    ///
    /// ` param3: *f64 `
    ///
    /// ` param4: *f64 `
    ///
    /// ` param5: *f64 `
    ///
    pub fn GetHcy(param1: anytype, param2: *f64, param3: *f64, param4: *f64, param5: *f64) void {
        comptime _ = @TypeOf(param1)._is_QColor;
        qtc.KColorUtils_GetHcy(@ptrCast(param1.ptr), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
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
    pub fn HcyColor(param1: f64, param2: f64, param3: f64, param4: f64) QColor {
        return .{ .ptr = qtc.KColorUtils_HcyColor(@bitCast(param1), @bitCast(param2), @bitCast(param3), @bitCast(param4)) };
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
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    pub fn Lighten(param1: anytype, param2: f64, param3: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Lighten(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#darken)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    pub fn Darken(param1: anytype, param2: f64, param3: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Darken(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: f64 `
    ///
    /// ` param3: f64 `
    ///
    pub fn Shade(param1: anytype, param2: f64, param3: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Shade(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#tint)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: QColor `
    ///
    /// ` param3: f64 `
    ///
    pub fn Tint(param1: anytype, param2: anytype, param3: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        comptime _ = @TypeOf(param2)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Tint(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#mix)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: QColor `
    ///
    /// ` param3: f64 `
    ///
    pub fn Mix(param1: anytype, param2: anytype, param3: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        comptime _ = @TypeOf(param2)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_Mix(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorutils.html#overlayColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: QColor `
    ///
    /// ` param3: qpainter_enums.CompositionMode `
    ///
    pub fn OverlayColors(param1: anytype, param2: anytype, param3: i32) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        comptime _ = @TypeOf(param2)._is_QColor;
        return .{ .ptr = qtc.KColorUtils_OverlayColors(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }
};
