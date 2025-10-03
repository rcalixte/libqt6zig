const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/ktexteditor-texthintprovider.html
pub const ktexteditor__texthintprovider = struct {
    /// New constructs a new KTextEditor::TextHintProvider object.
    ///
    ///
    pub fn New() QtC.KTextEditor__TextHintProvider {
        return qtc.KTextEditor__TextHintProvider_new();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// ``` self: QtC.KTextEditor__TextHintProvider, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn TextHint(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__TextHintProvider_TextHint(@ptrCast(self), @ptrCast(view), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::texthintprovider.TextHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__TextHintProvider, callback: *const fn (self: QtC.KTextEditor__TextHintProvider, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor) callconv(.c) [*:0]const u8 ```
    pub fn OnTextHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__TextHintProvider_OnTextHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__TextHintProvider, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn QBaseTextHint(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__TextHintProvider_QBaseTextHint(@ptrCast(self), @ptrCast(view), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::texthintprovider.TextHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__TextHintProvider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__TextHintProvider_Delete(@ptrCast(self));
    }
};
