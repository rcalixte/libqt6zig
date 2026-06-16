const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QTextCursor = @import("libqt6").QTextCursor;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
pub const TextUtils__ConvertText = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Normalize(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.TextUtils__ConvertText_Normalize(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textutils__converttext.Normalize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn UpperCase(cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextUtils__ConvertText_UpperCase(@ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn LowerCase(cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextUtils__ConvertText_LowerCase(@ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SentenceCase(cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextUtils__ConvertText_SentenceCase(@ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn ReverseCase(cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextUtils__ConvertText_ReverseCase(@ptrCast(cursor.ptr));
    }
};
