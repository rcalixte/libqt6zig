const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpalette_enums = enums;

/// https://doc.qt.io/qt-6/qpalette.html
pub const qpalette = struct {
    /// New constructs a new QPalette object.
    ///
    ///
    pub fn New() QtC.QPalette {
        return qtc.QPalette_new();
    }

    /// New2 constructs a new QPalette object.
    ///
    /// ``` button: QtC.QColor ```
    pub fn New2(button: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new2(@ptrCast(button));
    }

    /// New3 constructs a new QPalette object.
    ///
    /// ``` button: qnamespace_enums.GlobalColor ```
    pub fn New3(button: i64) QtC.QPalette {
        return qtc.QPalette_new3(@intCast(button));
    }

    /// New4 constructs a new QPalette object.
    ///
    /// ``` button: QtC.QColor, window: QtC.QColor ```
    pub fn New4(button: ?*anyopaque, window: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new4(@ptrCast(button), @ptrCast(window));
    }

    /// New5 constructs a new QPalette object.
    ///
    /// ``` windowText: QtC.QBrush, button: QtC.QBrush, light: QtC.QBrush, dark: QtC.QBrush, mid: QtC.QBrush, text: QtC.QBrush, bright_text: QtC.QBrush, base: QtC.QBrush, window: QtC.QBrush ```
    pub fn New5(windowText: ?*anyopaque, button: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, bright_text: ?*anyopaque, base: ?*anyopaque, window: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new5(@ptrCast(windowText), @ptrCast(button), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(bright_text), @ptrCast(base), @ptrCast(window));
    }

    /// New6 constructs a new QPalette object.
    ///
    /// ``` windowText: QtC.QColor, window: QtC.QColor, light: QtC.QColor, dark: QtC.QColor, mid: QtC.QColor, text: QtC.QColor, base: QtC.QColor ```
    pub fn New6(windowText: ?*anyopaque, window: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, base: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new6(@ptrCast(windowText), @ptrCast(window), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(base));
    }

    /// New7 constructs a new QPalette object.
    ///
    /// ``` palette: QtC.QPalette ```
    pub fn New7(palette: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new7(@ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator=)
    ///
    /// ``` self: QtC.QPalette, palette: QtC.QPalette ```
    pub fn OperatorAssign(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QPalette_OperatorAssign(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#swap)
    ///
    /// ``` self: QtC.QPalette, other: QtC.QPalette ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPalette_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator QVariant)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPalette_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn CurrentColorGroup(self: ?*anyopaque) i64 {
        return qtc.QPalette_CurrentColorGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
    ///
    /// ``` self: QtC.QPalette, cg: qpalette_enums.ColorGroup ```
    pub fn SetCurrentColorGroup(self: ?*anyopaque, cg: i64) void {
        qtc.QPalette_SetCurrentColorGroup(@ptrCast(self), @intCast(cg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ``` self: QtC.QPalette, cg: qpalette_enums.ColorGroup, cr: qpalette_enums.ColorRole ```
    pub fn Color(self: ?*anyopaque, cg: i64, cr: i64) QtC.QColor {
        return qtc.QPalette_Color(@ptrCast(self), @intCast(cg), @intCast(cr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ``` self: QtC.QPalette, cg: qpalette_enums.ColorGroup, cr: qpalette_enums.ColorRole ```
    pub fn Brush(self: ?*anyopaque, cg: i64, cr: i64) QtC.QBrush {
        return qtc.QPalette_Brush(@ptrCast(self), @intCast(cg), @intCast(cr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ``` self: QtC.QPalette, cg: qpalette_enums.ColorGroup, cr: qpalette_enums.ColorRole, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, cg: i64, cr: i64, color: ?*anyopaque) void {
        qtc.QPalette_SetColor(@ptrCast(self), @intCast(cg), @intCast(cr), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ``` self: QtC.QPalette, cr: qpalette_enums.ColorRole, color: QtC.QColor ```
    pub fn SetColor2(self: ?*anyopaque, cr: i64, color: ?*anyopaque) void {
        qtc.QPalette_SetColor2(@ptrCast(self), @intCast(cr), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ``` self: QtC.QPalette, cr: qpalette_enums.ColorRole, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, cr: i64, brush: ?*anyopaque) void {
        qtc.QPalette_SetBrush(@ptrCast(self), @intCast(cr), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
    ///
    /// ``` self: QtC.QPalette, cg: qpalette_enums.ColorGroup, cr: qpalette_enums.ColorRole ```
    pub fn IsBrushSet(self: ?*anyopaque, cg: i64, cr: i64) bool {
        return qtc.QPalette_IsBrushSet(@ptrCast(self), @intCast(cg), @intCast(cr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ``` self: QtC.QPalette, cg: qpalette_enums.ColorGroup, cr: qpalette_enums.ColorRole, brush: QtC.QBrush ```
    pub fn SetBrush2(self: ?*anyopaque, cg: i64, cr: i64, brush: ?*anyopaque) void {
        qtc.QPalette_SetBrush2(@ptrCast(self), @intCast(cg), @intCast(cr), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
    ///
    /// ``` self: QtC.QPalette, cr: qpalette_enums.ColorGroup, windowText: QtC.QBrush, button: QtC.QBrush, light: QtC.QBrush, dark: QtC.QBrush, mid: QtC.QBrush, text: QtC.QBrush, bright_text: QtC.QBrush, base: QtC.QBrush, window: QtC.QBrush ```
    pub fn SetColorGroup(self: ?*anyopaque, cr: i64, windowText: ?*anyopaque, button: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, bright_text: ?*anyopaque, base: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QPalette_SetColorGroup(@ptrCast(self), @intCast(cr), @ptrCast(windowText), @ptrCast(button), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(bright_text), @ptrCast(base), @ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isEqual)
    ///
    /// ``` self: QtC.QPalette, cr1: qpalette_enums.ColorGroup, cr2: qpalette_enums.ColorGroup ```
    pub fn IsEqual(self: ?*anyopaque, cr1: i64, cr2: i64) bool {
        return qtc.QPalette_IsEqual(@ptrCast(self), @intCast(cr1), @intCast(cr2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ``` self: QtC.QPalette, cr: qpalette_enums.ColorRole ```
    pub fn ColorWithCr(self: ?*anyopaque, cr: i64) QtC.QColor {
        return qtc.QPalette_ColorWithCr(@ptrCast(self), @intCast(cr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ``` self: QtC.QPalette, cr: qpalette_enums.ColorRole ```
    pub fn BrushWithCr(self: ?*anyopaque, cr: i64) QtC.QBrush {
        return qtc.QPalette_BrushWithCr(@ptrCast(self), @intCast(cr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#windowText)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn WindowText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_WindowText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#button)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Button(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Button(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#light)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Light(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Light(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dark)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Dark(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Dark(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#mid)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Mid(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Mid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#text)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Text(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Text(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#base)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Base(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Base(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn AlternateBase(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_AlternateBase(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn ToolTipBase(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_ToolTipBase(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn ToolTipText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_ToolTipText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#window)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Window(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#midlight)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Midlight(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Midlight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brightText)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn BrightText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_BrightText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#buttonText)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn ButtonText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_ButtonText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#shadow)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Shadow(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Shadow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlight)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Highlight(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Highlight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn HighlightedText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_HighlightedText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#link)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn Link(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_Link(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn LinkVisited(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_LinkVisited(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn PlaceholderText(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPalette_PlaceholderText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator==)
    ///
    /// ``` self: QtC.QPalette, p: QtC.QPalette ```
    pub fn OperatorEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_OperatorEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator!=)
    ///
    /// ``` self: QtC.QPalette, p: QtC.QPalette ```
    pub fn OperatorNotEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_OperatorNotEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
    ///
    /// ``` self: QtC.QPalette, p: QtC.QPalette ```
    pub fn IsCopyOf(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_IsCopyOf(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QPalette_CacheKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolve)
    ///
    /// ``` self: QtC.QPalette, other: QtC.QPalette ```
    pub fn Resolve(self: ?*anyopaque, other: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_Resolve(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
    ///
    /// ``` self: QtC.QPalette ```
    pub fn ResolveMask(self: ?*anyopaque) u64 {
        return qtc.QPalette_ResolveMask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
    ///
    /// ``` self: QtC.QPalette, mask: u64 ```
    pub fn SetResolveMask(self: ?*anyopaque, mask: u64) void {
        qtc.QPalette_SetResolveMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dtor.QPalette)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPalette ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPalette_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpalette.html#types
pub const enums = struct {
    pub const ColorGroup = enum {
        pub const Active: i32 = 0;
        pub const Disabled: i32 = 1;
        pub const Inactive: i32 = 2;
        pub const NColorGroups: i32 = 3;
        pub const Current: i32 = 4;
        pub const All: i32 = 5;
        pub const Normal: i32 = 0;
    };

    pub const ColorRole = enum {
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
        pub const NColorRoles: i32 = 21;
    };
};
