const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
pub const qscistyledtext = struct {
    /// New constructs a new QsciStyledText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: i32 `
    ///
    pub fn New(text: []const u8, style: i32) QtC.QsciStyledText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QsciStyledText_new(text_str, @bitCast(style));
    }

    /// New2 constructs a new QsciStyledText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: QtC.QsciStyle `
    ///
    pub fn New2(text: []const u8, style: ?*anyopaque) QtC.QsciStyledText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QsciStyledText_new2(text_str, @ptrCast(style));
    }

    /// New3 constructs a new QsciStyledText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QsciStyledText `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QsciStyledText {
        return qtc.QsciStyledText_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciStyledText `
    ///
    /// ` sci: QtC.QsciScintillaBase `
    ///
    pub fn Apply(self: ?*anyopaque, sci: ?*anyopaque) void {
        qtc.QsciStyledText_Apply(@ptrCast(self), @ptrCast(sci));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciStyledText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciStyledText_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscistyledtext.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciStyledText `
    ///
    pub fn Style(self: ?*anyopaque) i32 {
        return qtc.QsciStyledText_Style(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QsciStyledText `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QsciStyledText_Delete(@ptrCast(self));
    }
};
