const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QPalette = @import("libqt6").QPalette;
const kcolorscheme_enums = enums;
const qpalette_enums = @import("../libqpalette.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kcolorscheme.html)
pub const KColorScheme = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KColorScheme,

    pub const _is_KColorScheme = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KColorScheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KColorScheme `
    ///
    pub fn new(param1: anytype) KColorScheme {
        comptime _ = @TypeOf(param1)._is_KColorScheme;
        return .{ .ptr = qtc.KColorScheme_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KColorScheme object in C++ memory
    ///
    pub fn new2() KColorScheme {
        return .{ .ptr = qtc.KColorScheme_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KColorScheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    pub fn new3(param1: i32) KColorScheme {
        return .{ .ptr = qtc.KColorScheme_new3(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KColorScheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    /// ` param2: kcolorscheme_enums.ColorSet `
    ///
    pub fn new4(param1: i32, param2: i32) KColorScheme {
        return .{ .ptr = qtc.KColorScheme_new4(@bitCast(param1), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: KColorScheme `
    ///
    pub fn operatorAssign(self: KColorScheme, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KColorScheme;
        qtc.KColorScheme_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    pub fn background(self: KColorScheme) QBrush {
        return .{ .ptr = qtc.KColorScheme_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    pub fn foreground(self: KColorScheme) QBrush {
        return .{ .ptr = qtc.KColorScheme_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `decoration` instead
    ///
    pub const Decoration = decoration;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.DecorationRole `
    ///
    pub fn decoration(self: KColorScheme, param1: i32) QBrush {
        return .{ .ptr = qtc.KColorScheme_Decoration(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `shade` instead
    ///
    pub const Shade = shade;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.ShadeRole `
    ///
    pub fn shade(self: KColorScheme, param1: i32) QColor {
        return .{ .ptr = qtc.KColorScheme_Shade(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `contrastF` instead
    ///
    pub const ContrastF = contrastF;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#contrastF)
    ///
    pub fn contrastF() f64 {
        return qtc.KColorScheme_ContrastF();
    }

    /// ### DEPRECATED: Use `shade2` instead
    ///
    pub const Shade2 = shade2;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    pub fn shade2(param1: anytype, param2: i32) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorScheme_Shade2(@ptrCast(param1.ptr), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `shade3` instead
    ///
    pub const Shade3 = shade3;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    /// ` contrast: f64 `
    ///
    pub fn shade3(param1: anytype, param2: i32, contrast: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorScheme_Shade3(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(contrast)) };
    }

    /// ### DEPRECATED: Use `adjustBackground` instead
    ///
    pub const AdjustBackground = adjustBackground;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    pub fn adjustBackground(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `adjustForeground` instead
    ///
    pub const AdjustForeground = adjustForeground;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    pub fn adjustForeground(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` other: KColorScheme `
    ///
    pub fn operatorEqual(self: KColorScheme, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KColorScheme;
        return qtc.KColorScheme_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `background1` instead
    ///
    pub const Background1 = background1;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn background1(self: KColorScheme, param1: i32) QBrush {
        return .{ .ptr = qtc.KColorScheme_Background1(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `foreground1` instead
    ///
    pub const Foreground1 = foreground1;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn foreground1(self: KColorScheme, param1: i32) QBrush {
        return .{ .ptr = qtc.KColorScheme_Foreground1(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `shade4` instead
    ///
    pub const Shade4 = shade4;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    /// ` contrast: f64 `
    ///
    /// ` chromaAdjust: f64 `
    ///
    pub fn shade4(param1: anytype, param2: i32, contrast: f64, chromaAdjust: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorScheme_Shade4(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(contrast), @bitCast(chromaAdjust)) };
    }

    /// ### DEPRECATED: Use `adjustBackground2` instead
    ///
    pub const AdjustBackground2 = adjustBackground2;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn adjustBackground2(param1: anytype, newRole: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground2(@ptrCast(param1.ptr), @bitCast(newRole));
    }

    /// ### DEPRECATED: Use `adjustBackground3` instead
    ///
    pub const AdjustBackground3 = adjustBackground3;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    pub fn adjustBackground3(param1: anytype, newRole: i32, color: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground3(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color));
    }

    /// ### DEPRECATED: Use `adjustBackground4` instead
    ///
    pub const AdjustBackground4 = adjustBackground4;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    /// ` set: kcolorscheme_enums.ColorSet `
    ///
    pub fn adjustBackground4(param1: anytype, newRole: i32, color: i32, set: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground4(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color), @bitCast(set));
    }

    /// ### DEPRECATED: Use `adjustForeground2` instead
    ///
    pub const AdjustForeground2 = adjustForeground2;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn adjustForeground2(param1: anytype, newRole: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground2(@ptrCast(param1.ptr), @bitCast(newRole));
    }

    /// ### DEPRECATED: Use `adjustForeground3` instead
    ///
    pub const AdjustForeground3 = adjustForeground3;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    pub fn adjustForeground3(param1: anytype, newRole: i32, color: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground3(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color));
    }

    /// ### DEPRECATED: Use `adjustForeground4` instead
    ///
    pub const AdjustForeground4 = adjustForeground4;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    /// ` color: qpalette_enums.ColorRole `
    ///
    /// ` set: kcolorscheme_enums.ColorSet `
    ///
    pub fn adjustForeground4(param1: anytype, newRole: i32, color: i32, set: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground4(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color), @bitCast(set));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#dtor.KColorScheme)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KColorScheme `
    ///
    pub fn delete(self: KColorScheme) void {
        qtc.KColorScheme_Delete(@ptrCast(self.ptr));
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
