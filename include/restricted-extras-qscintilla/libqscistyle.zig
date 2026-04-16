const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QsciScintillaBase = @import("libqt6").QsciScintillaBase;
const qscistyle_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
pub const QsciStyle = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciStyle,

    pub const _is_QsciStyle = {};

    /// New constructs a new QsciStyle object.
    ///
    pub fn New() QsciStyle {
        return .{ .ptr = qtc.QsciStyle_new() };
    }

    /// New2 constructs a new QsciStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` style: i32 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` color: QColor `
    ///
    /// ` paper: QColor `
    ///
    /// ` font: QFont `
    ///
    pub fn New2(style: i32, description: []const u8, color: anytype, paper: anytype, font: anytype) QsciStyle {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        comptime _ = @TypeOf(color)._is_QColor;
        comptime _ = @TypeOf(paper)._is_QColor;
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QsciStyle_new2(@bitCast(style), description_str, @ptrCast(color.ptr), @ptrCast(paper.ptr), @ptrCast(font.ptr)) };
    }

    /// New3 constructs a new QsciStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QsciStyle `
    ///
    pub fn New3(param1: anytype) QsciStyle {
        comptime _ = @TypeOf(param1)._is_QsciStyle;
        return .{ .ptr = qtc.QsciStyle_new3(@ptrCast(param1.ptr)) };
    }

    /// New4 constructs a new QsciStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` style: i32 `
    ///
    pub fn New4(style: i32) QsciStyle {
        return .{ .ptr = qtc.QsciStyle_new4(@bitCast(style)) };
    }

    /// New5 constructs a new QsciStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` style: i32 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` color: QColor `
    ///
    /// ` paper: QColor `
    ///
    /// ` font: QFont `
    ///
    /// ` eolFill: bool `
    ///
    pub fn New5(style: i32, description: []const u8, color: anytype, paper: anytype, font: anytype, eolFill: bool) QsciStyle {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        comptime _ = @TypeOf(color)._is_QColor;
        comptime _ = @TypeOf(paper)._is_QColor;
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QsciStyle_new5(@bitCast(style), description_str, @ptrCast(color.ptr), @ptrCast(paper.ptr), @ptrCast(font.ptr), eolFill) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` sci: QsciScintillaBase `
    ///
    pub fn Apply(self: QsciStyle, sci: anytype) void {
        comptime _ = @TypeOf(sci)._is_QsciScintillaBase;
        qtc.QsciStyle_Apply(@ptrCast(self.ptr), @ptrCast(sci.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` style: i32 `
    ///
    pub fn SetStyle(self: QsciStyle, style: i32) void {
        qtc.QsciStyle_SetStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Style(self: QsciStyle) i32 {
        return qtc.QsciStyle_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: QsciStyle, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QsciStyle_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QsciStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciStyle_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscistyle.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QsciStyle, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QsciStyle_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Color(self: QsciStyle) QColor {
        return .{ .ptr = qtc.QsciStyle_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` paper: QColor `
    ///
    pub fn SetPaper(self: QsciStyle, paper: anytype) void {
        comptime _ = @TypeOf(paper)._is_QColor;
        qtc.QsciStyle_SetPaper(@ptrCast(self.ptr), @ptrCast(paper.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Paper(self: QsciStyle) QColor {
        return .{ .ptr = qtc.QsciStyle_Paper(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QsciStyle, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QsciStyle_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Font(self: QsciStyle) QFont {
        return .{ .ptr = qtc.QsciStyle_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` fill: bool `
    ///
    pub fn SetEolFill(self: QsciStyle, fill: bool) void {
        qtc.QsciStyle_SetEolFill(@ptrCast(self.ptr), fill);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn EolFill(self: QsciStyle) bool {
        return qtc.QsciStyle_EolFill(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` text_case: qscistyle_enums.TextCase `
    ///
    pub fn SetTextCase(self: QsciStyle, text_case: i32) void {
        qtc.QsciStyle_SetTextCase(@ptrCast(self.ptr), @bitCast(text_case));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ## Returns:
    ///
    /// ` qscistyle_enums.TextCase `
    ///
    pub fn TextCase(self: QsciStyle) i32 {
        return qtc.QsciStyle_TextCase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QsciStyle, visible: bool) void {
        qtc.QsciStyle_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Visible(self: QsciStyle) bool {
        return qtc.QsciStyle_Visible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` changeable: bool `
    ///
    pub fn SetChangeable(self: QsciStyle, changeable: bool) void {
        qtc.QsciStyle_SetChangeable(@ptrCast(self.ptr), changeable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Changeable(self: QsciStyle) bool {
        return qtc.QsciStyle_Changeable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` hotspot: bool `
    ///
    pub fn SetHotspot(self: QsciStyle, hotspot: bool) void {
        qtc.QsciStyle_SetHotspot(@ptrCast(self.ptr), hotspot);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Hotspot(self: QsciStyle) bool {
        return qtc.QsciStyle_Hotspot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Refresh(self: QsciStyle) void {
        qtc.QsciStyle_Refresh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciStyle `
    ///
    pub fn Delete(self: QsciStyle) void {
        qtc.QsciStyle_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const TextCase = enum(i32) {
        pub const OriginalCase: i32 = 0;
        pub const UpperCase: i32 = 1;
        pub const LowerCase: i32 = 2;
    };
};
