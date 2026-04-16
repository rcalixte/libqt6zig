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

    /// New constructs a new KIconColors object.
    ///
    pub fn New() KIconColors {
        return .{ .ptr = qtc.KIconColors_new() };
    }

    /// New2 constructs a new KIconColors object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    pub fn New2(color: anytype) KIconColors {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KIconColors_new2(@ptrCast(color.ptr)) };
    }

    /// New3 constructs a new KIconColors object.
    ///
    /// ## Parameter(s):
    ///
    /// ` palette: QPalette `
    ///
    pub fn New3(palette: anytype) KIconColors {
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.KIconColors_new3(@ptrCast(palette.ptr)) };
    }

    /// New4 constructs a new KIconColors object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KIconColors `
    ///
    pub fn New4(other: anytype) KIconColors {
        comptime _ = @TypeOf(other)._is_KIconColors;
        return .{ .ptr = qtc.KIconColors_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` other: KIconColors `
    ///
    pub fn OperatorAssign(self: KIconColors, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KIconColors;
        qtc.KIconColors_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn Text(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Text(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#highlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn Highlight(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Highlight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#highlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn HighlightedText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_HighlightedText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#accent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn Accent(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Accent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn Background(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_Background(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#neutralText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn NeutralText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_NeutralText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#positiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn PositiveText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_PositiveText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#negativeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn NegativeText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_NegativeText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#activeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    pub fn ActiveText(self: KIconColors) QColor {
        return .{ .ptr = qtc.KIconColors_ActiveText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setHighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetHighlight(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetHighlight(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setHighlightedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetHighlightedText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetHighlightedText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setAccent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetAccent(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetAccent(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBackground(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetBackground(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setNeutralText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetNeutralText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetNeutralText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setPositiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPositiveText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetPositiveText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setNegativeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetNegativeText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetNegativeText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#setActiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconColors `
    ///
    /// ` color: QColor `
    ///
    pub fn SetActiveText(self: KIconColors, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KIconColors_SetActiveText(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kiconcolors.html#dtor.KIconColors)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconColors `
    ///
    pub fn Delete(self: KIconColors) void {
        qtc.KIconColors_Delete(@ptrCast(self.ptr));
    }
};
