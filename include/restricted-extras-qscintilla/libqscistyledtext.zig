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

    /// New constructs a new QsciStyledText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: i32 `
    ///
    pub fn New(text: []const u8, style: i32) QsciStyledText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciStyledText_new(text_str, @bitCast(style)) };
    }

    /// New2 constructs a new QsciStyledText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: QsciStyle `
    ///
    pub fn New2(text: []const u8, style: anytype) QsciStyledText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(style)._is_QsciStyle;
        return .{ .ptr = qtc.QsciStyledText_new2(text_str, @ptrCast(style.ptr)) };
    }

    /// New3 constructs a new QsciStyledText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QsciStyledText `
    ///
    pub fn New3(param1: anytype) QsciStyledText {
        comptime _ = @TypeOf(param1)._is_QsciStyledText;
        return .{ .ptr = qtc.QsciStyledText_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyledText `
    ///
    /// ` sci: QsciScintillaBase `
    ///
    pub fn Apply(self: QsciStyledText, sci: anytype) void {
        comptime _ = @TypeOf(sci)._is_QsciScintillaBase;
        qtc.QsciStyledText_Apply(@ptrCast(self.ptr), @ptrCast(sci.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyledText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QsciStyledText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciStyledText_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscistyledtext.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciStyledText `
    ///
    pub fn Style(self: QsciStyledText) i32 {
        return qtc.QsciStyledText_Style(@ptrCast(self.ptr));
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
    /// ` self: QsciStyledText `
    ///
    pub fn Delete(self: QsciStyledText) void {
        qtc.QsciStyledText_Delete(@ptrCast(self.ptr));
    }
};
