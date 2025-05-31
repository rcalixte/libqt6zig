const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qscistyle_enums = enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html
pub const qscistyle = struct {
    /// New constructs a new QsciStyle object.
    ///
    ///
    pub fn New() QtC.QsciStyle {
        return qtc.QsciStyle_new();
    }

    /// New2 constructs a new QsciStyle object.
    ///
    /// ``` style: i32, description: []const u8, color: QtC.QColor, paper: QtC.QColor, font: QtC.QFont ```
    pub fn New2(style: i32, description: []const u8, color: ?*anyopaque, paper: ?*anyopaque, font: ?*anyopaque) QtC.QsciStyle {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };

        return qtc.QsciStyle_new2(@intCast(style), description_str, @ptrCast(color), @ptrCast(paper), @ptrCast(font));
    }

    /// New3 constructs a new QsciStyle object.
    ///
    /// ``` param1: QtC.QsciStyle ```
    pub fn New3(param1: ?*anyopaque) QtC.QsciStyle {
        return qtc.QsciStyle_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QsciStyle object.
    ///
    /// ``` style: i32 ```
    pub fn New4(style: i32) QtC.QsciStyle {
        return qtc.QsciStyle_new4(@intCast(style));
    }

    /// New5 constructs a new QsciStyle object.
    ///
    /// ``` style: i32, description: []const u8, color: QtC.QColor, paper: QtC.QColor, font: QtC.QFont, eolFill: bool ```
    pub fn New5(style: i32, description: []const u8, color: ?*anyopaque, paper: ?*anyopaque, font: ?*anyopaque, eolFill: bool) QtC.QsciStyle {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };

        return qtc.QsciStyle_new5(@intCast(style), description_str, @ptrCast(color), @ptrCast(paper), @ptrCast(font), eolFill);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, sci: QtC.QsciScintillaBase ```
    pub fn Apply(self: ?*anyopaque, sci: ?*anyopaque) void {
        qtc.QsciStyle_Apply(@ptrCast(self), @ptrCast(sci));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, style: i32 ```
    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QsciStyle_SetStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Style(self: ?*anyopaque) i32 {
        return qtc.QsciStyle_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        qtc.QsciStyle_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciStyle_Description(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscistyle.Description: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QsciStyle_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QsciStyle_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, paper: QtC.QColor ```
    pub fn SetPaper(self: ?*anyopaque, paper: ?*anyopaque) void {
        qtc.QsciStyle_SetPaper(@ptrCast(self), @ptrCast(paper));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Paper(self: ?*anyopaque) QtC.QColor {
        return qtc.QsciStyle_Paper(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QsciStyle_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QsciStyle_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, fill: bool ```
    pub fn SetEolFill(self: ?*anyopaque, fill: bool) void {
        qtc.QsciStyle_SetEolFill(@ptrCast(self), fill);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn EolFill(self: ?*anyopaque) bool {
        return qtc.QsciStyle_EolFill(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, text_case: qscistyle_enums.TextCase ```
    pub fn SetTextCase(self: ?*anyopaque, text_case: i64) void {
        qtc.QsciStyle_SetTextCase(@ptrCast(self), @intCast(text_case));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn TextCase(self: ?*anyopaque) i64 {
        return qtc.QsciStyle_TextCase(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QsciStyle_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Visible(self: ?*anyopaque) bool {
        return qtc.QsciStyle_Visible(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, changeable: bool ```
    pub fn SetChangeable(self: ?*anyopaque, changeable: bool) void {
        qtc.QsciStyle_SetChangeable(@ptrCast(self), changeable);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Changeable(self: ?*anyopaque) bool {
        return qtc.QsciStyle_Changeable(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle, hotspot: bool ```
    pub fn SetHotspot(self: ?*anyopaque, hotspot: bool) void {
        qtc.QsciStyle_SetHotspot(@ptrCast(self), hotspot);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Hotspot(self: ?*anyopaque) bool {
        return qtc.QsciStyle_Hotspot(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.QsciStyle_Refresh(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciStyle ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciStyle_Delete(@ptrCast(self));
    }
};

pub const enums = struct {
    pub const TextCase = enum {
        pub const OriginalCase: i32 = 0;
        pub const UpperCase: i32 = 1;
        pub const LowerCase: i32 = 2;
    };
};
