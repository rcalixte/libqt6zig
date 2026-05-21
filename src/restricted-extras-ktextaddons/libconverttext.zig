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
    /// ` param1: []const u8 `
    ///
    pub fn Normalize(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.TextUtils__ConvertText_Normalize(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textutils__converttext.Normalize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn UpperCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_UpperCase(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn LowerCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_LowerCase(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn SentenceCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_SentenceCase(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn ReverseCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_ReverseCase(@ptrCast(param1.ptr));
    }
};
