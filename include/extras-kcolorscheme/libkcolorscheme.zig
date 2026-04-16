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

    /// New constructs a new KColorScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KColorScheme `
    ///
    pub fn New(param1: anytype) KColorScheme {
        comptime _ = @TypeOf(param1)._is_KColorScheme;
        return .{ .ptr = qtc.KColorScheme_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new KColorScheme object.
    ///
    pub fn New2() KColorScheme {
        return .{ .ptr = qtc.KColorScheme_new2() };
    }

    /// New3 constructs a new KColorScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    pub fn New3(param1: i32) KColorScheme {
        return .{ .ptr = qtc.KColorScheme_new3(@bitCast(param1)) };
    }

    /// New4 constructs a new KColorScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    /// ` param2: kcolorscheme_enums.ColorSet `
    ///
    pub fn New4(param1: i32, param2: i32) KColorScheme {
        return .{ .ptr = qtc.KColorScheme_new4(@bitCast(param1), @bitCast(param2)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: KColorScheme `
    ///
    pub fn OperatorAssign(self: KColorScheme, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KColorScheme;
        qtc.KColorScheme_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    pub fn Background(self: KColorScheme) QBrush {
        return .{ .ptr = qtc.KColorScheme_Background(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    pub fn Foreground(self: KColorScheme) QBrush {
        return .{ .ptr = qtc.KColorScheme_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.DecorationRole `
    ///
    pub fn Decoration(self: KColorScheme, param1: i32) QBrush {
        return .{ .ptr = qtc.KColorScheme_Decoration(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#shade)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.ShadeRole `
    ///
    pub fn Shade(self: KColorScheme, param1: i32) QColor {
        return .{ .ptr = qtc.KColorScheme_Shade(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` param1: QColor `
    ///
    /// ` param2: kcolorscheme_enums.ShadeRole `
    ///
    pub fn Shade2(param1: anytype, param2: i32) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorScheme_Shade2(@ptrCast(param1.ptr), @bitCast(param2)) };
    }

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
    pub fn Shade3(param1: anytype, param2: i32, contrast: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorScheme_Shade3(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(contrast)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    pub fn AdjustBackground(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    pub fn AdjustForeground(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` other: KColorScheme `
    ///
    pub fn OperatorEqual(self: KColorScheme, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KColorScheme;
        return qtc.KColorScheme_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn Background1(self: KColorScheme, param1: i32) QBrush {
        return .{ .ptr = qtc.KColorScheme_Background1(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KColorScheme `
    ///
    /// ` param1: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn Foreground1(self: KColorScheme, param1: i32) QBrush {
        return .{ .ptr = qtc.KColorScheme_Foreground1(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn Shade4(param1: anytype, param2: i32, contrast: f64, chromaAdjust: f64) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.KColorScheme_Shade4(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(contrast), @bitCast(chromaAdjust)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn AdjustBackground2(param1: anytype, newRole: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground2(@ptrCast(param1.ptr), @bitCast(newRole));
    }

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
    pub fn AdjustBackground3(param1: anytype, newRole: i32, color: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground3(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color));
    }

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
    pub fn AdjustBackground4(param1: anytype, newRole: i32, color: i32, set: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustBackground4(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color), @bitCast(set));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolorscheme.html#adjustForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` newRole: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn AdjustForeground2(param1: anytype, newRole: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground2(@ptrCast(param1.ptr), @bitCast(newRole));
    }

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
    pub fn AdjustForeground3(param1: anytype, newRole: i32, color: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground3(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color));
    }

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
    pub fn AdjustForeground4(param1: anytype, newRole: i32, color: i32, set: i32) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.KColorScheme_AdjustForeground4(@ptrCast(param1.ptr), @bitCast(newRole), @bitCast(color), @bitCast(set));
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
    /// ` self: KColorScheme `
    ///
    pub fn Delete(self: KColorScheme) void {
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
