const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QsciScintillaBase = @import("libqt6").QsciScintillaBase;
const QsciStyle = @import("libqt6").QsciStyle;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
pub const QsciStyledText = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciStyledText,

    pub const _is_QsciStyledText = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciStyledText object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _style: i32 `
    ///
    pub fn new(_text: []const u8, _style: i32) QsciStyledText {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QsciStyledText_new(text_str, @bitCast(_style)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciStyledText object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _style: QsciStyle `
    ///
    pub fn new2(_text: []const u8, _style: anytype) QsciStyledText {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_style)._is_QsciStyle;
        return .{ .ptr = qtc.QsciStyledText_new2(text_str, @ptrCast(_style.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QsciStyledText object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QsciStyledText `
    ///
    pub fn new3(param1: anytype) QsciStyledText {
        comptime _ = @TypeOf(param1)._is_QsciStyledText;
        return .{ .ptr = qtc.QsciStyledText_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `apply` instead
    ///
    pub const Apply = apply;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyledText `
    ///
    /// ` sci: QsciScintillaBase `
    ///
    pub fn apply(self: QsciStyledText, sci: anytype) void {
        comptime _ = @TypeOf(sci)._is_QsciScintillaBase;
        qtc.QsciStyledText_Apply(@ptrCast(self.ptr), @ptrCast(sci.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyledText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QsciStyledText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciStyledText_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciStyledText.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyledText `
    ///
    pub fn style(self: QsciStyledText) i32 {
        return qtc.QsciStyledText_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciStyledText `
    ///
    pub fn delete(self: QsciStyledText) void {
        qtc.QsciStyledText_Delete(@ptrCast(self.ptr));
    }
};
