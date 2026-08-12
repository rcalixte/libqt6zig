const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpalette_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)
pub const QPalette = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPalette,

    pub const _is_QPalette = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPalette object in C++ memory
    ///
    pub fn new() QPalette {
        return .{ .ptr = qtc.QPalette_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPalette object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _button: QColor `
    ///
    pub fn new2(_button: anytype) QPalette {
        comptime _ = @TypeOf(_button)._is_QColor;
        return .{ .ptr = qtc.QPalette_new2(@ptrCast(_button.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPalette object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _button: qnamespace_enums.GlobalColor `
    ///
    pub fn new3(_button: i32) QPalette {
        return .{ .ptr = qtc.QPalette_new3(@bitCast(_button)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPalette object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _button: QColor `
    ///
    /// ` _window: QColor `
    ///
    pub fn new4(_button: anytype, _window: anytype) QPalette {
        comptime _ = @TypeOf(_button)._is_QColor;
        comptime _ = @TypeOf(_window)._is_QColor;
        return .{ .ptr = qtc.QPalette_new4(@ptrCast(_button.ptr), @ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPalette object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _windowText: QBrush `
    ///
    /// ` _button: QBrush `
    ///
    /// ` _light: QBrush `
    ///
    /// ` _dark: QBrush `
    ///
    /// ` _mid: QBrush `
    ///
    /// ` _text: QBrush `
    ///
    /// ` bright_text: QBrush `
    ///
    /// ` _base: QBrush `
    ///
    /// ` _window: QBrush `
    ///
    pub fn new5(_windowText: anytype, _button: anytype, _light: anytype, _dark: anytype, _mid: anytype, _text: anytype, bright_text: anytype, _base: anytype, _window: anytype) QPalette {
        comptime _ = @TypeOf(_windowText)._is_QBrush;
        comptime _ = @TypeOf(_button)._is_QBrush;
        comptime _ = @TypeOf(_light)._is_QBrush;
        comptime _ = @TypeOf(_dark)._is_QBrush;
        comptime _ = @TypeOf(_mid)._is_QBrush;
        comptime _ = @TypeOf(_text)._is_QBrush;
        comptime _ = @TypeOf(bright_text)._is_QBrush;
        comptime _ = @TypeOf(_base)._is_QBrush;
        comptime _ = @TypeOf(_window)._is_QBrush;
        return .{ .ptr = qtc.QPalette_new5(@ptrCast(_windowText.ptr), @ptrCast(_button.ptr), @ptrCast(_light.ptr), @ptrCast(_dark.ptr), @ptrCast(_mid.ptr), @ptrCast(_text.ptr), @ptrCast(bright_text.ptr), @ptrCast(_base.ptr), @ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPalette object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _windowText: QColor `
    ///
    /// ` _window: QColor `
    ///
    /// ` _light: QColor `
    ///
    /// ` _dark: QColor `
    ///
    /// ` _mid: QColor `
    ///
    /// ` _text: QColor `
    ///
    /// ` _base: QColor `
    ///
    pub fn new6(_windowText: anytype, _window: anytype, _light: anytype, _dark: anytype, _mid: anytype, _text: anytype, _base: anytype) QPalette {
        comptime _ = @TypeOf(_windowText)._is_QColor;
        comptime _ = @TypeOf(_window)._is_QColor;
        comptime _ = @TypeOf(_light)._is_QColor;
        comptime _ = @TypeOf(_dark)._is_QColor;
        comptime _ = @TypeOf(_mid)._is_QColor;
        comptime _ = @TypeOf(_text)._is_QColor;
        comptime _ = @TypeOf(_base)._is_QColor;
        return .{ .ptr = qtc.QPalette_new6(@ptrCast(_windowText.ptr), @ptrCast(_window.ptr), @ptrCast(_light.ptr), @ptrCast(_dark.ptr), @ptrCast(_mid.ptr), @ptrCast(_text.ptr), @ptrCast(_base.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QPalette object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` palette: QPalette `
    ///
    pub fn new7(palette: anytype) QPalette {
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.QPalette_new7(@ptrCast(palette.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` palette: QPalette `
    ///
    pub fn operatorAssign(self: QPalette, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QPalette_OperatorAssign(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` other: QPalette `
    ///
    pub fn swap(self: QPalette, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPalette;
        qtc.QPalette_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn toQVariant(self: QPalette) QVariant {
        return .{ .ptr = qtc.QPalette_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentColorGroup` instead
    ///
    pub const CurrentColorGroup = currentColorGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorGroup `
    ///
    pub fn currentColorGroup(self: QPalette) i32 {
        return qtc.QPalette_CurrentColorGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentColorGroup` instead
    ///
    pub const SetCurrentColorGroup = setCurrentColorGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    pub fn setCurrentColorGroup(self: QPalette, cg: i32) void {
        qtc.QPalette_SetCurrentColorGroup(@ptrCast(self.ptr), @bitCast(cg));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn color(self: QPalette, cg: i32, cr: i32) QColor {
        return .{ .ptr = qtc.QPalette_Color(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr)) };
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn brush(self: QPalette, cg: i32, cr: i32) QBrush {
        return .{ .ptr = qtc.QPalette_Brush(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QPalette, cg: i32, cr: i32, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QPalette_SetColor(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setColor2` instead
    ///
    pub const SetColor2 = setColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor2(self: QPalette, cr: i32, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QPalette_SetColor2(@ptrCast(self.ptr), @bitCast(cr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QPalette, cr: i32, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPalette_SetBrush(@ptrCast(self.ptr), @bitCast(cr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `isBrushSet` instead
    ///
    pub const IsBrushSet = isBrushSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn isBrushSet(self: QPalette, cg: i32, cr: i32) bool {
        return qtc.QPalette_IsBrushSet(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr));
    }

    /// ### DEPRECATED: Use `setBrush2` instead
    ///
    pub const SetBrush2 = setBrush2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush2(self: QPalette, cg: i32, cr: i32, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPalette_SetBrush2(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `setColorGroup` instead
    ///
    pub const SetColorGroup = setColorGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorGroup `
    ///
    /// ` _windowText: QBrush `
    ///
    /// ` _button: QBrush `
    ///
    /// ` _light: QBrush `
    ///
    /// ` _dark: QBrush `
    ///
    /// ` _mid: QBrush `
    ///
    /// ` _text: QBrush `
    ///
    /// ` bright_text: QBrush `
    ///
    /// ` _base: QBrush `
    ///
    /// ` _window: QBrush `
    ///
    pub fn setColorGroup(self: QPalette, cr: i32, _windowText: anytype, _button: anytype, _light: anytype, _dark: anytype, _mid: anytype, _text: anytype, bright_text: anytype, _base: anytype, _window: anytype) void {
        comptime _ = @TypeOf(_windowText)._is_QBrush;
        comptime _ = @TypeOf(_button)._is_QBrush;
        comptime _ = @TypeOf(_light)._is_QBrush;
        comptime _ = @TypeOf(_dark)._is_QBrush;
        comptime _ = @TypeOf(_mid)._is_QBrush;
        comptime _ = @TypeOf(_text)._is_QBrush;
        comptime _ = @TypeOf(bright_text)._is_QBrush;
        comptime _ = @TypeOf(_base)._is_QBrush;
        comptime _ = @TypeOf(_window)._is_QBrush;
        qtc.QPalette_SetColorGroup(@ptrCast(self.ptr), @bitCast(cr), @ptrCast(_windowText.ptr), @ptrCast(_button.ptr), @ptrCast(_light.ptr), @ptrCast(_dark.ptr), @ptrCast(_mid.ptr), @ptrCast(_text.ptr), @ptrCast(bright_text.ptr), @ptrCast(_base.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr1: qpalette_enums.ColorGroup `
    ///
    /// ` cr2: qpalette_enums.ColorGroup `
    ///
    pub fn isEqual(self: QPalette, cr1: i32, cr2: i32) bool {
        return qtc.QPalette_IsEqual(@ptrCast(self.ptr), @bitCast(cr1), @bitCast(cr2));
    }

    /// ### DEPRECATED: Use `color2` instead
    ///
    pub const Color2 = color2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn color2(self: QPalette, cr: i32) QColor {
        return .{ .ptr = qtc.QPalette_Color2(@ptrCast(self.ptr), @bitCast(cr)) };
    }

    /// ### DEPRECATED: Use `brush2` instead
    ///
    pub const Brush2 = brush2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn brush2(self: QPalette, cr: i32) QBrush {
        return .{ .ptr = qtc.QPalette_Brush2(@ptrCast(self.ptr), @bitCast(cr)) };
    }

    /// ### DEPRECATED: Use `windowText` instead
    ///
    pub const WindowText = windowText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#windowText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn windowText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_WindowText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn button(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Button(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `light` instead
    ///
    pub const Light = light;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#light)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn light(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Light(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `dark` instead
    ///
    pub const Dark = dark;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn dark(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Dark(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mid` instead
    ///
    pub const Mid = mid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn mid(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Mid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn text(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Text(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `base` instead
    ///
    pub const Base = base;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#base)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn base(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Base(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `alternateBase` instead
    ///
    pub const AlternateBase = alternateBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn alternateBase(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_AlternateBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toolTipBase` instead
    ///
    pub const ToolTipBase = toolTipBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn toolTipBase(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_ToolTipBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toolTipText` instead
    ///
    pub const ToolTipText = toolTipText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn toolTipText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_ToolTipText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn window(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `midlight` instead
    ///
    pub const Midlight = midlight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#midlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn midlight(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Midlight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `brightText` instead
    ///
    pub const BrightText = brightText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brightText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn brightText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_BrightText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `buttonText` instead
    ///
    pub const ButtonText = buttonText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#buttonText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn buttonText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_ButtonText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `shadow` instead
    ///
    pub const Shadow = shadow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#shadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn shadow(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Shadow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `highlight` instead
    ///
    pub const Highlight = highlight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn highlight(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Highlight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `highlightedText` instead
    ///
    pub const HighlightedText = highlightedText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn highlightedText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_HighlightedText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `link` instead
    ///
    pub const Link = link;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn link(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Link(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `linkVisited` instead
    ///
    pub const LinkVisited = linkVisited;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn linkVisited(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_LinkVisited(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `placeholderText` instead
    ///
    pub const PlaceholderText = placeholderText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn placeholderText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_PlaceholderText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accent` instead
    ///
    pub const Accent = accent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#accent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn accent(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Accent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` p: QPalette `
    ///
    pub fn operatorEqual(self: QPalette, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPalette;
        return qtc.QPalette_OperatorEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` p: QPalette `
    ///
    pub fn operatorNotEqual(self: QPalette, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPalette;
        return qtc.QPalette_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isCopyOf` instead
    ///
    pub const IsCopyOf = isCopyOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` p: QPalette `
    ///
    pub fn isCopyOf(self: QPalette, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPalette;
        return qtc.QPalette_IsCopyOf(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `cacheKey` instead
    ///
    pub const CacheKey = cacheKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn cacheKey(self: QPalette) i64 {
        return qtc.QPalette_CacheKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resolve` instead
    ///
    pub const Resolve = resolve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` other: QPalette `
    ///
    pub fn resolve(self: QPalette, other: anytype) QPalette {
        comptime _ = @TypeOf(other)._is_QPalette;
        return .{ .ptr = qtc.QPalette_Resolve(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `resolveMask` instead
    ///
    pub const ResolveMask = resolveMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn resolveMask(self: QPalette) usize {
        return qtc.QPalette_ResolveMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResolveMask` instead
    ///
    pub const SetResolveMask = setResolveMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` mask: usize `
    ///
    pub fn setResolveMask(self: QPalette, mask: usize) void {
        qtc.QPalette_SetResolveMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dtor.QPalette)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPalette `
    ///
    pub fn delete(self: QPalette) void {
        qtc.QPalette_Delete(@ptrCast(self.ptr));
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
