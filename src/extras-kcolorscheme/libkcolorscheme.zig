const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcolorscheme_enums = enums;
const qpalette_enums = @import("../libqpalette.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kcolorscheme.html)
pub const kcolorscheme = struct {
    /// New constructs a new KColorScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KColorScheme `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KColorScheme {
        return qtc.KColorScheme_new(@ptrCast(param1));
    }

    /// New2 constructs a new KColorScheme object.
    ///
    pub fn New2() QtC.KColorScheme {
        return qtc.KColorScheme_new2();
    }

    /// New3 constructs a new KColorScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    pub fn New3(param1: i32) QtC.KColorScheme {
        return qtc.KColorScheme_new3(@bitCast(param1));
    }

    /// New4 constructs a new KColorScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    /// ` param2: kcolorscheme_enums.ColorSet `
    ///
    pub fn New4(param1: i32, param2: i32) QtC.KColorScheme {
        return qtc.KColorScheme_new4(@bitCast(param1), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    /// ` param1: QtC.KColorScheme `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KColorScheme_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.KColorScheme_Background(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.KColorScheme_Foreground(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.DecorationRole `
    ///
    pub fn Decoration(self: ?*anyopaque, param1: i32) QtC.QBrush {
        return qtc.KColorScheme_Decoration(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.ShadeRole `
    ///
    pub fn Shade(self: ?*anyopaque, param1: i32) QtC.QColor {
        return qtc.KColorScheme_Shade(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#contrastF)
    ///
    pub fn ContrastF() f64 {
        return qtc.KColorScheme_ContrastF();
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    pub fn Shade2(param1: ?*anyopaque, param2: i32) QtC.QColor {
        return qtc.KColorScheme_Shade2(@ptrCast(param1), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    /// ` contrast: f64 `
    ///
    pub fn Shade3(param1: ?*anyopaque, param2: i32, contrast: f64) QtC.QColor {
        return qtc.KColorScheme_Shade3(@ptrCast(param1), @bitCast(param2), @bitCast(contrast));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    pub fn AdjustBackground(param1: ?*anyopaque) void {
        qtc.KColorScheme_AdjustBackground(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    pub fn AdjustForeground(param1: ?*anyopaque) void {
        qtc.KColorScheme_AdjustForeground(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    /// ` other: QtC.KColorScheme `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KColorScheme_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn Background1(self: ?*anyopaque, param1: i32) QtC.QBrush {
        return qtc.KColorScheme_Background1(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn Foreground1(self: ?*anyopaque, param1: i32) QtC.QBrush {
        return qtc.KColorScheme_Foreground1(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    /// ` contrast: f64 `
    ///
    /// ` chromaAdjust: f64 `
    ///
    pub fn Shade4(param1: ?*anyopaque, param2: i32, contrast: f64, chromaAdjust: f64) QtC.QColor {
        return qtc.KColorScheme_Shade4(@ptrCast(param1), @bitCast(param2), @bitCast(contrast), @bitCast(chromaAdjust));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn AdjustBackground2(param1: ?*anyopaque, newRole: i32) void {
        qtc.KColorScheme_AdjustBackground2(@ptrCast(param1), @bitCast(newRole));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    pub fn AdjustBackground3(param1: ?*anyopaque, newRole: i32, color: i32) void {
        qtc.KColorScheme_AdjustBackground3(@ptrCast(param1), @bitCast(newRole), @bitCast(color));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    /// ` set: kcolorscheme_enums.ColorSet `
    ///
    pub fn AdjustBackground4(param1: ?*anyopaque, newRole: i32, color: i32, set: i32) void {
        qtc.KColorScheme_AdjustBackground4(@ptrCast(param1), @bitCast(newRole), @bitCast(color), @bitCast(set));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn AdjustForeground2(param1: ?*anyopaque, newRole: i32) void {
        qtc.KColorScheme_AdjustForeground2(@ptrCast(param1), @bitCast(newRole));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    pub fn AdjustForeground3(param1: ?*anyopaque, newRole: i32, color: i32) void {
        qtc.KColorScheme_AdjustForeground3(@ptrCast(param1), @bitCast(newRole), @bitCast(color));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    /// ` set: kcolorscheme_enums.ColorSet `
    ///
    pub fn AdjustForeground4(param1: ?*anyopaque, newRole: i32, color: i32, set: i32) void {
        qtc.KColorScheme_AdjustForeground4(@ptrCast(param1), @bitCast(newRole), @bitCast(color), @bitCast(set));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#dtor.KColorScheme)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KColorScheme `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KColorScheme_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#public-types)
pub const enums = struct {
    pub const ColorSet = enum(i32) {
        pub const View: i32 = 0;
        pub const Window: i32 = 1;
        pub const Button: i32 = 2;
        pub const Selection: i32 = 3;
        pub const Tooltip: i32 = 4;
        pub const Complementary: i32 = 5;
        pub const Header: i32 = 6;
        pub const NColorSets: i32 = 7;
    };

    pub const BackgroundRole = enum(i32) {
        pub const NormalBackground: i32 = 0;
        pub const AlternateBackground: i32 = 1;
        pub const ActiveBackground: i32 = 2;
        pub const LinkBackground: i32 = 3;
        pub const VisitedBackground: i32 = 4;
        pub const NegativeBackground: i32 = 5;
        pub const NeutralBackground: i32 = 6;
        pub const PositiveBackground: i32 = 7;
        pub const NBackgroundRoles: i32 = 8;
    };

    pub const ForegroundRole = enum(i32) {
        pub const NormalText: i32 = 0;
        pub const InactiveText: i32 = 1;
        pub const ActiveText: i32 = 2;
        pub const LinkText: i32 = 3;
        pub const VisitedText: i32 = 4;
        pub const NegativeText: i32 = 5;
        pub const NeutralText: i32 = 6;
        pub const PositiveText: i32 = 7;
        pub const NForegroundRoles: i32 = 8;
    };

    pub const DecorationRole = enum(i32) {
        pub const FocusColor: i32 = 0;
        pub const HoverColor: i32 = 1;
        pub const NDecorationRoles: i32 = 2;
    };

    pub const ShadeRole = enum(i32) {
        pub const LightShade: i32 = 0;
        pub const MidlightShade: i32 = 1;
        pub const MidShade: i32 = 2;
        pub const DarkShade: i32 = 3;
        pub const ShadowShade: i32 = 4;
        pub const NShadeRoles: i32 = 5;
    };
};
