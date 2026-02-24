const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpalette_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)
pub const qpalette = struct {
    /// New constructs a new QPalette object.
    ///
    pub fn New() QtC.QPalette {
        return qtc.QPalette_new();
    }

    /// New2 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QtC.QColor `
    ///
    pub fn New2(button: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new2(@ptrCast(button));
    }

    /// New3 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` button: qnamespace_enums.GlobalColor `
    ///
    pub fn New3(button: i32) QtC.QPalette {
        return qtc.QPalette_new3(@bitCast(button));
    }

    /// New4 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QtC.QColor `
    ///
    /// ` window: QtC.QColor `
    ///
    pub fn New4(button: ?*anyopaque, window: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new4(@ptrCast(button), @ptrCast(window));
    }

    /// New5 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` windowText: QtC.QBrush `
    ///
    /// ` button: QtC.QBrush `
    ///
    /// ` light: QtC.QBrush `
    ///
    /// ` dark: QtC.QBrush `
    ///
    /// ` mid: QtC.QBrush `
    ///
    /// ` text: QtC.QBrush `
    ///
    /// ` bright_text: QtC.QBrush `
    ///
    /// ` base: QtC.QBrush `
    ///
    /// ` window: QtC.QBrush `
    ///
    pub fn New5(windowText: ?*anyopaque, button: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, bright_text: ?*anyopaque, base: ?*anyopaque, window: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new5(@ptrCast(windowText), @ptrCast(button), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(bright_text), @ptrCast(base), @ptrCast(window));
    }

    /// New6 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` windowText: QtC.QColor `
    ///
    /// ` window: QtC.QColor `
    ///
    /// ` light: QtC.QColor `
    ///
    /// ` dark: QtC.QColor `
    ///
    /// ` mid: QtC.QColor `
    ///
    /// ` text: QtC.QColor `
    ///
    /// ` base: QtC.QColor `
    ///
    pub fn New6(windowText: ?*anyopaque, window: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, base: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new6(@ptrCast(windowText), @ptrCast(window), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(base));
    }

    /// New7 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn New7(palette: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new7(@ptrCast(palette));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QPalette_OperatorAssign(@ptrCast(self), @ptrCast(palette));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` other: QtC.QPalette `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPalette_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPalette_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorGroup `
    ///
    pub fn CurrentColorGroup(self: ?*anyopaque) i32 {
        return qtc.QPalette_CurrentColorGroup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    pub fn SetCurrentColorGroup(self: ?*anyopaque, cg: i32) void {
        qtc.QPalette_SetCurrentColorGroup(@ptrCast(self), @bitCast(cg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn Color(self: ?*anyopaque, cg: i32, cr: i32) QtC.QColor {
        return qtc.QPalette_Color(@ptrCast(self), @bitCast(cg), @bitCast(cr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn Brush(self: ?*anyopaque, cg: i32, cr: i32) QtC.QBrush {
        return qtc.QPalette_Brush(@ptrCast(self), @bitCast(cg), @bitCast(cr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor(self: ?*anyopaque, cg: i32, cr: i32, color: ?*anyopaque) void {
        qtc.QPalette_SetColor(@ptrCast(self), @bitCast(cg), @bitCast(cr), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor2(self: ?*anyopaque, cr: i32, color: ?*anyopaque) void {
        qtc.QPalette_SetColor2(@ptrCast(self), @bitCast(cr), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush(self: ?*anyopaque, cr: i32, brush: ?*anyopaque) void {
        qtc.QPalette_SetBrush(@ptrCast(self), @bitCast(cr), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn IsBrushSet(self: ?*anyopaque, cg: i32, cr: i32) bool {
        return qtc.QPalette_IsBrushSet(@ptrCast(self), @bitCast(cg), @bitCast(cr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush2(self: ?*anyopaque, cg: i32, cr: i32, brush: ?*anyopaque) void {
        qtc.QPalette_SetBrush2(@ptrCast(self), @bitCast(cg), @bitCast(cr), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cr: qpalette_enums.ColorGroup `
    ///
    /// ` windowText: QtC.QBrush `
    ///
    /// ` button: QtC.QBrush `
    ///
    /// ` light: QtC.QBrush `
    ///
    /// ` dark: QtC.QBrush `
    ///
    /// ` mid: QtC.QBrush `
    ///
    /// ` text: QtC.QBrush `
    ///
    /// ` bright_text: QtC.QBrush `
    ///
    /// ` base: QtC.QBrush `
    ///
    /// ` window: QtC.QBrush `
    ///
    pub fn SetColorGroup(self: ?*anyopaque, cr: i32, windowText: ?*anyopaque, button: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, bright_text: ?*anyopaque, base: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QPalette_SetColorGroup(@ptrCast(self), @bitCast(cr), @ptrCast(windowText), @ptrCast(button), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(bright_text), @ptrCast(base), @ptrCast(window));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cr1: qpalette_enums.ColorGroup `
    ///
    /// ` cr2: qpalette_enums.ColorGroup `
    ///
    pub fn IsEqual(self: ?*anyopaque, cr1: i32, cr2: i32) bool {
        return qtc.QPalette_IsEqual(@ptrCast(self), @bitCast(cr1), @bitCast(cr2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn Color2(self: ?*anyopaque, cr: i32) QtC.QColor {
        return qtc.QPalette_Color2(@ptrCast(self), @bitCast(cr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn Brush2(self: ?*anyopaque, cr: i32) QtC.QBrush {
        return qtc.QPalette_Brush2(@ptrCast(self), @bitCast(cr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#windowText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn WindowText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_WindowText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Button(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Button(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#light)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Light(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Light(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Dark(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Dark(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Mid(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Mid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Text(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Text(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#base)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Base(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Base(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn AlternateBase(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_AlternateBase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn ToolTipBase(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_ToolTipBase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn ToolTipText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_ToolTipText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Window(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#midlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Midlight(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Midlight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brightText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn BrightText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_BrightText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#buttonText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn ButtonText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_ButtonText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#shadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Shadow(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Shadow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Highlight(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Highlight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn HighlightedText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_HighlightedText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Link(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Link(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn LinkVisited(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_LinkVisited(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn PlaceholderText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_PlaceholderText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#accent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Accent(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Accent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` p: QtC.QPalette `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_OperatorEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` p: QtC.QPalette `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_OperatorNotEqual(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` p: QtC.QPalette `
    ///
    pub fn IsCopyOf(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_IsCopyOf(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QPalette_CacheKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` other: QtC.QPalette `
    ///
    pub fn Resolve(self: ?*anyopaque, other: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_Resolve(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn ResolveMask(self: ?*anyopaque) u64 {
        return qtc.QPalette_ResolveMask(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPalette `
    ///
    /// ` mask: u64 `
    ///
    pub fn SetResolveMask(self: ?*anyopaque, mask: u64) void {
        qtc.QPalette_SetResolveMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dtor.QPalette)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPalette `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPalette_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#public-types)
pub const enums = struct {
    pub const ColorGroup = enum(i32) {
        pub const Active: i32 = 0;
        pub const Disabled: i32 = 1;
        pub const Inactive: i32 = 2;
        pub const NColorGroups: i32 = 3;
        pub const Current: i32 = 4;
        pub const All: i32 = 5;
        pub const Normal: i32 = 0;
    };

    pub const ColorRole = enum(i32) {
        pub const WindowText: i32 = 0;
        pub const Button: i32 = 1;
        pub const Light: i32 = 2;
        pub const Midlight: i32 = 3;
        pub const Dark: i32 = 4;
        pub const Mid: i32 = 5;
        pub const Text: i32 = 6;
        pub const BrightText: i32 = 7;
        pub const ButtonText: i32 = 8;
        pub const Base: i32 = 9;
        pub const Window: i32 = 10;
        pub const Shadow: i32 = 11;
        pub const Highlight: i32 = 12;
        pub const HighlightedText: i32 = 13;
        pub const Link: i32 = 14;
        pub const LinkVisited: i32 = 15;
        pub const AlternateBase: i32 = 16;
        pub const NoRole: i32 = 17;
        pub const ToolTipBase: i32 = 18;
        pub const ToolTipText: i32 = 19;
        pub const PlaceholderText: i32 = 20;
        pub const Accent: i32 = 21;
        pub const NColorRoles: i32 = 22;
    };
};
