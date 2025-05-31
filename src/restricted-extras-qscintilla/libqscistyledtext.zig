const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html
pub const qscistyledtext = struct {
    /// New constructs a new QsciStyledText object.
    ///
    /// ``` text: []const u8, style: i32 ```
    pub fn New(text: []const u8, style: i32) QtC.QsciStyledText {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QsciStyledText_new(text_str, @intCast(style));
    }

    /// New2 constructs a new QsciStyledText object.
    ///
    /// ``` text: []const u8, style: QtC.QsciStyle ```
    pub fn New2(text: []const u8, style: ?*anyopaque) QtC.QsciStyledText {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QsciStyledText_new2(text_str, @ptrCast(style));
    }

    /// New3 constructs a new QsciStyledText object.
    ///
    /// ``` param1: QtC.QsciStyledText ```
    pub fn New3(param1: ?*anyopaque) QtC.QsciStyledText {
        return qtc.QsciStyledText_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ``` self: QtC.QsciStyledText, sci: QtC.QsciScintillaBase ```
    pub fn Apply(self: ?*anyopaque, sci: ?*anyopaque) void {
        qtc.QsciStyledText_Apply(@ptrCast(self), @ptrCast(sci));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ``` self: QtC.QsciStyledText, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciStyledText_Text(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscistyledtext.Text: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// ``` self: QtC.QsciStyledText ```
    pub fn Style(self: ?*anyopaque) i32 {
        return qtc.QsciStyledText_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciStyledText ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciStyledText_Delete(@ptrCast(self));
    }
};
