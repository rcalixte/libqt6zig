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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciStyle object in C++ memory
    ///
    pub fn new() QsciStyle {
        return .{ .ptr = qtc.QsciStyle_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _style: i32 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _color: QColor `
    ///
    /// ` _paper: QColor `
    ///
    /// ` _font: QFont `
    ///
    pub fn new2(_style: i32, _description: []const u8, _color: anytype, _paper: anytype, _font: anytype) QsciStyle {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        comptime _ = @TypeOf(_color)._is_QColor;
        comptime _ = @TypeOf(_paper)._is_QColor;
        comptime _ = @TypeOf(_font)._is_QFont;
        return .{ .ptr = qtc.QsciStyle_new2(@bitCast(_style), description_str, @ptrCast(_color.ptr), @ptrCast(_paper.ptr), @ptrCast(_font.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QsciStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QsciStyle `
    ///
    pub fn new3(param1: anytype) QsciStyle {
        comptime _ = @TypeOf(param1)._is_QsciStyle;
        return .{ .ptr = qtc.QsciStyle_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QsciStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _style: i32 `
    ///
    pub fn new4(_style: i32) QsciStyle {
        return .{ .ptr = qtc.QsciStyle_new4(@bitCast(_style)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QsciStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _style: i32 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _color: QColor `
    ///
    /// ` _paper: QColor `
    ///
    /// ` _font: QFont `
    ///
    /// ` _eolFill: bool `
    ///
    pub fn new5(_style: i32, _description: []const u8, _color: anytype, _paper: anytype, _font: anytype, _eolFill: bool) QsciStyle {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        comptime _ = @TypeOf(_color)._is_QColor;
        comptime _ = @TypeOf(_paper)._is_QColor;
        comptime _ = @TypeOf(_font)._is_QFont;
        return .{ .ptr = qtc.QsciStyle_new5(@bitCast(_style), description_str, @ptrCast(_color.ptr), @ptrCast(_paper.ptr), @ptrCast(_font.ptr), _eolFill) };
    }

    /// ### DEPRECATED: Use `apply` instead
    ///
    pub const Apply = apply;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` sci: QsciScintillaBase `
    ///
    pub fn apply(self: QsciStyle, sci: anytype) void {
        comptime _ = @TypeOf(sci)._is_QsciScintillaBase;
        qtc.QsciStyle_Apply(@ptrCast(self.ptr), @ptrCast(sci.ptr));
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _style: i32 `
    ///
    pub fn setStyle(self: QsciStyle, _style: i32) void {
        qtc.QsciStyle_SetStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn style(self: QsciStyle) i32 {
        return qtc.QsciStyle_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: QsciStyle, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.QsciStyle_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QsciStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciStyle_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciStyle.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QsciStyle, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QsciStyle_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn color(self: QsciStyle) QColor {
        return .{ .ptr = qtc.QsciStyle_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPaper` instead
    ///
    pub const SetPaper = setPaper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _paper: QColor `
    ///
    pub fn setPaper(self: QsciStyle, _paper: anytype) void {
        comptime _ = @TypeOf(_paper)._is_QColor;
        qtc.QsciStyle_SetPaper(@ptrCast(self.ptr), @ptrCast(_paper.ptr));
    }

    /// ### DEPRECATED: Use `paper` instead
    ///
    pub const Paper = paper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn paper(self: QsciStyle) QColor {
        return .{ .ptr = qtc.QsciStyle_Paper(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QsciStyle, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QsciStyle_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn font(self: QsciStyle) QFont {
        return .{ .ptr = qtc.QsciStyle_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEolFill` instead
    ///
    pub const SetEolFill = setEolFill;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` fill: bool `
    ///
    pub fn setEolFill(self: QsciStyle, fill: bool) void {
        qtc.QsciStyle_SetEolFill(@ptrCast(self.ptr), fill);
    }

    /// ### DEPRECATED: Use `eolFill` instead
    ///
    pub const EolFill = eolFill;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn eolFill(self: QsciStyle) bool {
        return qtc.QsciStyle_EolFill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextCase` instead
    ///
    pub const SetTextCase = setTextCase;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` text_case: qscistyle_enums.TextCase `
    ///
    pub fn setTextCase(self: QsciStyle, text_case: i32) void {
        qtc.QsciStyle_SetTextCase(@ptrCast(self.ptr), @bitCast(text_case));
    }

    /// ### DEPRECATED: Use `textCase` instead
    ///
    pub const TextCase = textCase;

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
    pub fn textCase(self: QsciStyle) i32 {
        return qtc.QsciStyle_TextCase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _visible: bool `
    ///
    pub fn setVisible(self: QsciStyle, _visible: bool) void {
        qtc.QsciStyle_SetVisible(@ptrCast(self.ptr), _visible);
    }

    /// ### DEPRECATED: Use `visible` instead
    ///
    pub const Visible = visible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn visible(self: QsciStyle) bool {
        return qtc.QsciStyle_Visible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChangeable` instead
    ///
    pub const SetChangeable = setChangeable;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _changeable: bool `
    ///
    pub fn setChangeable(self: QsciStyle, _changeable: bool) void {
        qtc.QsciStyle_SetChangeable(@ptrCast(self.ptr), _changeable);
    }

    /// ### DEPRECATED: Use `changeable` instead
    ///
    pub const Changeable = changeable;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn changeable(self: QsciStyle) bool {
        return qtc.QsciStyle_Changeable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHotspot` instead
    ///
    pub const SetHotspot = setHotspot;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    /// ` _hotspot: bool `
    ///
    pub fn setHotspot(self: QsciStyle, _hotspot: bool) void {
        qtc.QsciStyle_SetHotspot(@ptrCast(self.ptr), _hotspot);
    }

    /// ### DEPRECATED: Use `hotspot` instead
    ///
    pub const Hotspot = hotspot;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn hotspot(self: QsciStyle) bool {
        return qtc.QsciStyle_Hotspot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `refresh` instead
    ///
    pub const Refresh = refresh;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyle `
    ///
    pub fn refresh(self: QsciStyle) void {
        qtc.QsciStyle_Refresh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciStyle `
    ///
    pub fn delete(self: QsciStyle) void {
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
