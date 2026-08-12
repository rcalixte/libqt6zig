const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QPalette = @import("libqt6").QPalette;

/// ### [Upstream resources](https://api.kde.org/kiconcolors.html)
pub const KIconColors = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIconColors,

    pub const _is_KIconColors = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIconColors object in C++ memory
    ///
    pub fn new() KIconColors {
        return .{ .ptr = qtc.KIconColors_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIconColors object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    pub fn new2(color: anytype) KIconColors {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KIconColors_new2(@ptrCast(color.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KIconColors object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` palette: QPalette `
    ///
    pub fn new3(palette: anytype) KIconColors {
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.KIconColors_new3(@ptrCast(palette.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KIconColors object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KIconColors `
    ///
    pub fn new4(other: anytype) KIconColors {
        comptime _ = @TypeOf(other)._is_KIconColors;
        return .{ .ptr = qtc.KIconColors_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` other: KIconColors `
    ///
    pub fn operatorAssign(self: KIconColors, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KIconColors;
        qtc.KIconColors_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn text(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Text(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `highlight` instead
    ///
    pub const Highlight = highlight;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#highlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn highlight(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Highlight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `highlightedText` instead
    ///
    pub const HighlightedText = highlightedText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#highlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn highlightedText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_HighlightedText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accent` instead
    ///
    pub const Accent = accent;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#accent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn accent(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Accent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn background(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `neutralText` instead
    ///
    pub const NeutralText = neutralText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#neutralText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn neutralText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_NeutralText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `positiveText` instead
    ///
    pub const PositiveText = positiveText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#positiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn positiveText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_PositiveText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `negativeText` instead
    ///
    pub const NegativeText = negativeText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#negativeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn negativeText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_NegativeText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeText` instead
    ///
    pub const ActiveText = activeText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#activeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn activeText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_ActiveText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setHighlight` instead
    ///
    pub const SetHighlight = setHighlight;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setHighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setHighlight(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetHighlight(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightedText` instead
    ///
    pub const SetHighlightedText = setHighlightedText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setHighlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setHighlightedText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetHighlightedText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setAccent` instead
    ///
    pub const SetAccent = setAccent;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setAccent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setAccent(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetAccent(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackground(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetBackground(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setNeutralText` instead
    ///
    pub const SetNeutralText = setNeutralText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setNeutralText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setNeutralText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetNeutralText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setPositiveText` instead
    ///
    pub const SetPositiveText = setPositiveText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setPositiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setPositiveText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetPositiveText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setNegativeText` instead
    ///
    pub const SetNegativeText = setNegativeText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setNegativeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setNegativeText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetNegativeText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setActiveText` instead
    ///
    pub const SetActiveText = setActiveText;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setActiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn setActiveText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetActiveText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#dtor.KIconColors)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconColors `
    ///
    pub fn delete(self: KIconColors) void {
        qtc.KIconColors_Delete(@ptrCast(self.ptr));
    }
};
