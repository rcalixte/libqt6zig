const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html)
pub const ksyntaxhighlighting__abstracthighlighter = struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn Definition(self: ?*anyopaque) QtC.KSyntaxHighlighting__Definition {
        return qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setDefinition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__AbstractHighlighter `
    ///
    /// ` def: QtC.KSyntaxHighlighting__Definition `
    ///
    pub fn SetDefinition(self: ?*anyopaque, def: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_SetDefinition(@ptrCast(self), @ptrCast(def));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn Theme(self: ?*anyopaque) QtC.KSyntaxHighlighting__Theme {
        return qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KSyntaxHighlighting__AbstractHighlighter `
    ///
    /// ` theme: QtC.KSyntaxHighlighting__Theme `
    ///
    pub fn SetTheme(self: ?*anyopaque, theme: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_SetTheme(@ptrCast(self), @ptrCast(theme));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_Delete(@ptrCast(self));
    }
};
