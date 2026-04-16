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

    /// New constructs a new QPalette object.
    ///
    pub fn New() QPalette {
        return .{ .ptr = qtc.QPalette_new() };
    }

    /// New2 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QColor `
    ///
    pub fn New2(button: anytype) QPalette {
        comptime _ = @TypeOf(button)._is_QColor;
        return .{ .ptr = qtc.QPalette_new2(@ptrCast(button.ptr)) };
    }

    /// New3 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` button: qnamespace_enums.GlobalColor `
    ///
    pub fn New3(button: i32) QPalette {
        return .{ .ptr = qtc.QPalette_new3(@bitCast(button)) };
    }

    /// New4 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QColor `
    ///
    /// ` window: QColor `
    ///
    pub fn New4(button: anytype, window: anytype) QPalette {
        comptime _ = @TypeOf(button)._is_QColor;
        comptime _ = @TypeOf(window)._is_QColor;
        return .{ .ptr = qtc.QPalette_new4(@ptrCast(button.ptr), @ptrCast(window.ptr)) };
    }

    /// New5 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` windowText: QBrush `
    ///
    /// ` button: QBrush `
    ///
    /// ` light: QBrush `
    ///
    /// ` dark: QBrush `
    ///
    /// ` mid: QBrush `
    ///
    /// ` text: QBrush `
    ///
    /// ` bright_text: QBrush `
    ///
    /// ` base: QBrush `
    ///
    /// ` window: QBrush `
    ///
    pub fn New5(windowText: anytype, button: anytype, light: anytype, dark: anytype, mid: anytype, text: anytype, bright_text: anytype, base: anytype, window: anytype) QPalette {
        comptime _ = @TypeOf(windowText)._is_QBrush;
        comptime _ = @TypeOf(button)._is_QBrush;
        comptime _ = @TypeOf(light)._is_QBrush;
        comptime _ = @TypeOf(dark)._is_QBrush;
        comptime _ = @TypeOf(mid)._is_QBrush;
        comptime _ = @TypeOf(text)._is_QBrush;
        comptime _ = @TypeOf(bright_text)._is_QBrush;
        comptime _ = @TypeOf(base)._is_QBrush;
        comptime _ = @TypeOf(window)._is_QBrush;
        return .{ .ptr = qtc.QPalette_new5(@ptrCast(windowText.ptr), @ptrCast(button.ptr), @ptrCast(light.ptr), @ptrCast(dark.ptr), @ptrCast(mid.ptr), @ptrCast(text.ptr), @ptrCast(bright_text.ptr), @ptrCast(base.ptr), @ptrCast(window.ptr)) };
    }

    /// New6 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` windowText: QColor `
    ///
    /// ` window: QColor `
    ///
    /// ` light: QColor `
    ///
    /// ` dark: QColor `
    ///
    /// ` mid: QColor `
    ///
    /// ` text: QColor `
    ///
    /// ` base: QColor `
    ///
    pub fn New6(windowText: anytype, window: anytype, light: anytype, dark: anytype, mid: anytype, text: anytype, base: anytype) QPalette {
        comptime _ = @TypeOf(windowText)._is_QColor;
        comptime _ = @TypeOf(window)._is_QColor;
        comptime _ = @TypeOf(light)._is_QColor;
        comptime _ = @TypeOf(dark)._is_QColor;
        comptime _ = @TypeOf(mid)._is_QColor;
        comptime _ = @TypeOf(text)._is_QColor;
        comptime _ = @TypeOf(base)._is_QColor;
        return .{ .ptr = qtc.QPalette_new6(@ptrCast(windowText.ptr), @ptrCast(window.ptr), @ptrCast(light.ptr), @ptrCast(dark.ptr), @ptrCast(mid.ptr), @ptrCast(text.ptr), @ptrCast(base.ptr)) };
    }

    /// New7 constructs a new QPalette object.
    ///
    /// ## Parameter(s):
    ///
    /// ` palette: QPalette `
    ///
    pub fn New7(palette: anytype) QPalette {
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.QPalette_new7(@ptrCast(palette.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` palette: QPalette `
    ///
    pub fn OperatorAssign(self: QPalette, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QPalette_OperatorAssign(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` other: QPalette `
    ///
    pub fn Swap(self: QPalette, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPalette;
        qtc.QPalette_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn ToQVariant(self: QPalette) QVariant {
        return .{ .ptr = qtc.QPalette_ToQVariant(@ptrCast(self.ptr)) };
    }

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
    pub fn CurrentColorGroup(self: QPalette) i32 {
        return qtc.QPalette_CurrentColorGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cg: qpalette_enums.ColorGroup `
    ///
    pub fn SetCurrentColorGroup(self: QPalette, cg: i32) void {
        qtc.QPalette_SetCurrentColorGroup(@ptrCast(self.ptr), @bitCast(cg));
    }

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
    pub fn Color(self: QPalette, cg: i32, cr: i32) QColor {
        return .{ .ptr = qtc.QPalette_Color(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr)) };
    }

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
    pub fn Brush(self: QPalette, cg: i32, cr: i32) QBrush {
        return .{ .ptr = qtc.QPalette_Brush(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr)) };
    }

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
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QPalette, cg: i32, cr: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPalette_SetColor(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor2(self: QPalette, cr: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPalette_SetColor2(@ptrCast(self.ptr), @bitCast(cr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QPalette, cr: i32, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPalette_SetBrush(@ptrCast(self.ptr), @bitCast(cr), @ptrCast(brush.ptr));
    }

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
    pub fn IsBrushSet(self: QPalette, cg: i32, cr: i32) bool {
        return qtc.QPalette_IsBrushSet(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr));
    }

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
    /// ` brush: QBrush `
    ///
    pub fn SetBrush2(self: QPalette, cg: i32, cr: i32, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPalette_SetBrush2(@ptrCast(self.ptr), @bitCast(cg), @bitCast(cr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorGroup `
    ///
    /// ` windowText: QBrush `
    ///
    /// ` button: QBrush `
    ///
    /// ` light: QBrush `
    ///
    /// ` dark: QBrush `
    ///
    /// ` mid: QBrush `
    ///
    /// ` text: QBrush `
    ///
    /// ` bright_text: QBrush `
    ///
    /// ` base: QBrush `
    ///
    /// ` window: QBrush `
    ///
    pub fn SetColorGroup(self: QPalette, cr: i32, windowText: anytype, button: anytype, light: anytype, dark: anytype, mid: anytype, text: anytype, bright_text: anytype, base: anytype, window: anytype) void {
        comptime _ = @TypeOf(windowText)._is_QBrush;
        comptime _ = @TypeOf(button)._is_QBrush;
        comptime _ = @TypeOf(light)._is_QBrush;
        comptime _ = @TypeOf(dark)._is_QBrush;
        comptime _ = @TypeOf(mid)._is_QBrush;
        comptime _ = @TypeOf(text)._is_QBrush;
        comptime _ = @TypeOf(bright_text)._is_QBrush;
        comptime _ = @TypeOf(base)._is_QBrush;
        comptime _ = @TypeOf(window)._is_QBrush;
        qtc.QPalette_SetColorGroup(@ptrCast(self.ptr), @bitCast(cr), @ptrCast(windowText.ptr), @ptrCast(button.ptr), @ptrCast(light.ptr), @ptrCast(dark.ptr), @ptrCast(mid.ptr), @ptrCast(text.ptr), @ptrCast(bright_text.ptr), @ptrCast(base.ptr), @ptrCast(window.ptr));
    }

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
    pub fn IsEqual(self: QPalette, cr1: i32, cr2: i32) bool {
        return qtc.QPalette_IsEqual(@ptrCast(self.ptr), @bitCast(cr1), @bitCast(cr2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn Color2(self: QPalette, cr: i32) QColor {
        return .{ .ptr = qtc.QPalette_Color2(@ptrCast(self.ptr), @bitCast(cr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` cr: qpalette_enums.ColorRole `
    ///
    pub fn Brush2(self: QPalette, cr: i32) QBrush {
        return .{ .ptr = qtc.QPalette_Brush2(@ptrCast(self.ptr), @bitCast(cr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#windowText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn WindowText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_WindowText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Button(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Button(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#light)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Light(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Light(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Dark(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Dark(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Mid(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Mid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Text(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Text(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#base)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Base(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Base(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn AlternateBase(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_AlternateBase(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn ToolTipBase(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_ToolTipBase(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn ToolTipText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_ToolTipText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Window(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Window(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#midlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Midlight(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Midlight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brightText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn BrightText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_BrightText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#buttonText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn ButtonText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_ButtonText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#shadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Shadow(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Shadow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Highlight(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Highlight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn HighlightedText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_HighlightedText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Link(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Link(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn LinkVisited(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_LinkVisited(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn PlaceholderText(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_PlaceholderText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#accent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn Accent(self: QPalette) QBrush {
        return .{ .ptr = qtc.QPalette_Accent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` p: QPalette `
    ///
    pub fn OperatorEqual(self: QPalette, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPalette;
        return qtc.QPalette_OperatorEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` p: QPalette `
    ///
    pub fn OperatorNotEqual(self: QPalette, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPalette;
        return qtc.QPalette_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` p: QPalette `
    ///
    pub fn IsCopyOf(self: QPalette, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPalette;
        return qtc.QPalette_IsCopyOf(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn CacheKey(self: QPalette) i64 {
        return qtc.QPalette_CacheKey(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` other: QPalette `
    ///
    pub fn Resolve(self: QPalette, other: anytype) QPalette {
        comptime _ = @TypeOf(other)._is_QPalette;
        return .{ .ptr = qtc.QPalette_Resolve(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    pub fn ResolveMask(self: QPalette) usize {
        return qtc.QPalette_ResolveMask(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPalette `
    ///
    /// ` mask: usize `
    ///
    pub fn SetResolveMask(self: QPalette, mask: usize) void {
        qtc.QPalette_SetResolveMask(@ptrCast(self.ptr), @bitCast(mask));
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
    /// ` self: QPalette `
    ///
    pub fn Delete(self: QPalette) void {
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
