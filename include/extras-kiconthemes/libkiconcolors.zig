const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kiconcolors.html
pub const kiconcolors = struct {
    /// New constructs a new KIconColors object.
    ///
    ///
    pub fn New() QtC.KIconColors {
        return qtc.KIconColors_new();
    }

    /// New2 constructs a new KIconColors object.
    ///
    /// ``` color: QtC.QColor ```
    pub fn New2(color: ?*anyopaque) QtC.KIconColors {
        return qtc.KIconColors_new2(@ptrCast(color));
    }

    /// New3 constructs a new KIconColors object.
    ///
    /// ``` palette: QtC.QPalette ```
    pub fn New3(palette: ?*anyopaque) QtC.KIconColors {
        return qtc.KIconColors_new3(@ptrCast(palette));
    }

    /// New4 constructs a new KIconColors object.
    ///
    /// ``` other: QtC.KIconColors ```
    pub fn New4(other: ?*anyopaque) QtC.KIconColors {
        return qtc.KIconColors_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#operator-eq)
    ///
    /// ``` self: QtC.KIconColors, other: QtC.KIconColors ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KIconColors_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#text)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn Text(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_Text(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#highlight)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn Highlight(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_Highlight(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#highlightedText)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn HighlightedText(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_HighlightedText(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#accent)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn Accent(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_Accent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#background)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn Background(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#neutralText)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn NeutralText(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_NeutralText(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#positiveText)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn PositiveText(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_PositiveText(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#negativeText)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn NegativeText(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_NegativeText(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#activeText)
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn ActiveText(self: ?*anyopaque) QtC.QColor {
        return qtc.KIconColors_ActiveText(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setText)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetText(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetText(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setHighlight)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetHighlight(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetHighlight(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setHighlightedText)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetHighlightedText(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetHighlightedText(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setAccent)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetAccent(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetAccent(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setBackground)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetBackground(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetBackground(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setNeutralText)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetNeutralText(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetNeutralText(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setPositiveText)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetPositiveText(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetPositiveText(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setNegativeText)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetNegativeText(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetNegativeText(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#setActiveText)
    ///
    /// ``` self: QtC.KIconColors, color: QtC.QColor ```
    pub fn SetActiveText(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.KIconColors_SetActiveText(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/kiconcolors.html#dtor.KIconColors)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIconColors ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIconColors_Delete(@ptrCast(self));
    }
};
