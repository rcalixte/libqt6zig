const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html
pub const ksyntaxhighlighting__abstracthighlighter = struct {
    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__AbstractHighlighter ```
    pub fn Definition(self: ?*anyopaque) QtC.KSyntaxHighlighting__Definition {
        return qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setDefinition)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__AbstractHighlighter, def: QtC.KSyntaxHighlighting__Definition ```
    pub fn SetDefinition(self: ?*anyopaque, def: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_SetDefinition(@ptrCast(self), @ptrCast(def));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__AbstractHighlighter ```
    pub fn Theme(self: ?*anyopaque) QtC.KSyntaxHighlighting__Theme {
        return qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__AbstractHighlighter, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn SetTheme(self: ?*anyopaque, theme: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_SetTheme(@ptrCast(self), @ptrCast(theme));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__AbstractHighlighter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_Delete(@ptrCast(self));
    }
};
