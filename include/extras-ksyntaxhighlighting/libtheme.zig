const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const theme_enums = enums;

/// https://api.kde.org/ksyntaxhighlighting-theme.html
pub const ksyntaxhighlighting__theme = struct {
    /// New constructs a new KSyntaxHighlighting::Theme object.
    ///
    ///
    pub fn New() QtC.KSyntaxHighlighting__Theme {
        return qtc.KSyntaxHighlighting__Theme_new();
    }

    /// New2 constructs a new KSyntaxHighlighting::Theme object.
    ///
    /// ``` copyVal: QtC.KSyntaxHighlighting__Theme ```
    pub fn New2(copyVal: ?*anyopaque) QtC.KSyntaxHighlighting__Theme {
        return qtc.KSyntaxHighlighting__Theme_new2(@ptrCast(copyVal));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#operator-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, other: QtC.KSyntaxHighlighting__Theme ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Theme_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isValid)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Theme_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#name)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Theme_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::theme.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#translatedName)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, allocator: std.mem.Allocator ```
    pub fn TranslatedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Theme_TranslatedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::theme.TranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isReadOnly)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Theme_IsReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#filePath)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Theme_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::theme.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#textColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn TextColor(self: ?*anyopaque, style: i32) u32 {
        return qtc.KSyntaxHighlighting__Theme_TextColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#selectedTextColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn SelectedTextColor(self: ?*anyopaque, style: i32) u32 {
        return qtc.KSyntaxHighlighting__Theme_SelectedTextColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#backgroundColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn BackgroundColor(self: ?*anyopaque, style: i32) u32 {
        return qtc.KSyntaxHighlighting__Theme_BackgroundColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#selectedBackgroundColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn SelectedBackgroundColor(self: ?*anyopaque, style: i32) u32 {
        return qtc.KSyntaxHighlighting__Theme_SelectedBackgroundColor(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isBold)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn IsBold(self: ?*anyopaque, style: i32) bool {
        return qtc.KSyntaxHighlighting__Theme_IsBold(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isItalic)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn IsItalic(self: ?*anyopaque, style: i32) bool {
        return qtc.KSyntaxHighlighting__Theme_IsItalic(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isUnderline)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn IsUnderline(self: ?*anyopaque, style: i32) bool {
        return qtc.KSyntaxHighlighting__Theme_IsUnderline(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isStrikeThrough)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, style: theme_enums.TextStyle ```
    pub fn IsStrikeThrough(self: ?*anyopaque, style: i32) bool {
        return qtc.KSyntaxHighlighting__Theme_IsStrikeThrough(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#editorColor)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme, role: theme_enums.EditorColorRole ```
    pub fn EditorColor(self: ?*anyopaque, role: i32) u32 {
        return qtc.KSyntaxHighlighting__Theme_EditorColor(@ptrCast(self), @intCast(role));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Theme ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Theme_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ksyntaxhighlighting-theme.html#types
pub const enums = struct {
    pub const TextStyle = enum {
        pub const Normal: i32 = 0;
        pub const Keyword: i32 = 1;
        pub const Function: i32 = 2;
        pub const Variable: i32 = 3;
        pub const ControlFlow: i32 = 4;
        pub const Operator: i32 = 5;
        pub const BuiltIn: i32 = 6;
        pub const Extension: i32 = 7;
        pub const Preprocessor: i32 = 8;
        pub const Attribute: i32 = 9;
        pub const Char: i32 = 10;
        pub const SpecialChar: i32 = 11;
        pub const String: i32 = 12;
        pub const VerbatimString: i32 = 13;
        pub const SpecialString: i32 = 14;
        pub const Import: i32 = 15;
        pub const DataType: i32 = 16;
        pub const DecVal: i32 = 17;
        pub const BaseN: i32 = 18;
        pub const Float: i32 = 19;
        pub const Constant: i32 = 20;
        pub const Comment: i32 = 21;
        pub const Documentation: i32 = 22;
        pub const Annotation: i32 = 23;
        pub const CommentVar: i32 = 24;
        pub const RegionMarker: i32 = 25;
        pub const Information: i32 = 26;
        pub const Warning: i32 = 27;
        pub const Alert: i32 = 28;
        pub const Error: i32 = 29;
        pub const Others: i32 = 30;
    };

    pub const EditorColorRole = enum {
        pub const BackgroundColor: i32 = 0;
        pub const TextSelection: i32 = 1;
        pub const CurrentLine: i32 = 2;
        pub const SearchHighlight: i32 = 3;
        pub const ReplaceHighlight: i32 = 4;
        pub const BracketMatching: i32 = 5;
        pub const TabMarker: i32 = 6;
        pub const SpellChecking: i32 = 7;
        pub const IndentationLine: i32 = 8;
        pub const IconBorder: i32 = 9;
        pub const CodeFolding: i32 = 10;
        pub const LineNumbers: i32 = 11;
        pub const CurrentLineNumber: i32 = 12;
        pub const WordWrapMarker: i32 = 13;
        pub const ModifiedLines: i32 = 14;
        pub const SavedLines: i32 = 15;
        pub const Separator: i32 = 16;
        pub const MarkBookmark: i32 = 17;
        pub const MarkBreakpointActive: i32 = 18;
        pub const MarkBreakpointReached: i32 = 19;
        pub const MarkBreakpointDisabled: i32 = 20;
        pub const MarkExecution: i32 = 21;
        pub const MarkWarning: i32 = 22;
        pub const MarkError: i32 = 23;
        pub const TemplateBackground: i32 = 24;
        pub const TemplatePlaceholder: i32 = 25;
        pub const TemplateFocusedPlaceholder: i32 = 26;
        pub const TemplateReadOnlyPlaceholder: i32 = 27;
    };
};
