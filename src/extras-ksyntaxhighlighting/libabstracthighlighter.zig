const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Definition = @import("libqt6").KSyntaxHighlighting__Definition;
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html)
pub const KSyntaxHighlighting__AbstractHighlighter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__AbstractHighlighter,

    pub const _is_KSyntaxHighlighting__AbstractHighlighter = {};

    /// ### DEPRECATED: Use `definition` instead
    ///
    pub const Definition = definition;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn definition(self: KSyntaxHighlighting__AbstractHighlighter) KSyntaxHighlighting__Definition {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDefinition` instead
    ///
    pub const SetDefinition = setDefinition;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setDefinition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__AbstractHighlighter `
    ///
    /// ` def: KSyntaxHighlighting__Definition `
    ///
    pub fn setDefinition(self: KSyntaxHighlighting__AbstractHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__AbstractHighlighter_SetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn theme(self: KSyntaxHighlighting__AbstractHighlighter) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTheme` instead
    ///
    pub const SetTheme = setTheme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__AbstractHighlighter `
    ///
    /// ` _theme: KSyntaxHighlighting__Theme `
    ///
    pub fn setTheme(self: KSyntaxHighlighting__AbstractHighlighter, _theme: anytype) void {
        comptime _ = @TypeOf(_theme)._is_KSyntaxHighlighting__Theme;
        qtc.KSyntaxHighlighting__AbstractHighlighter_SetTheme(@ptrCast(self.ptr), @ptrCast(_theme.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn delete(self: KSyntaxHighlighting__AbstractHighlighter) void {
        qtc.KSyntaxHighlighting__AbstractHighlighter_Delete(@ptrCast(self.ptr));
    }
};
