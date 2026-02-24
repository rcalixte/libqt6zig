const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html)
pub const ktexteditor__texthintprovider = struct {
    /// New constructs a new KTextEditor::TextHintProvider object.
    ///
    pub fn New() QtC.KTextEditor__TextHintProvider {
        return qtc.KTextEditor__TextHintProvider_new();
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__TextHintProvider `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextHint(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__TextHintProvider_TextHint(@ptrCast(self), @ptrCast(view), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__texthintprovider.TextHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTextEditor__TextHintProvider `
    ///
    /// ` callback: *const fn (self: QtC.KTextEditor__TextHintProvider, view: QtC.KTextEditor__View, position: QtC.KTextEditor__Cursor) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__TextHintProvider_OnTextHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTextHint` instead
    ///
    pub const QBaseTextHint = SuperTextHint;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTextEditor__TextHintProvider `
    ///
    /// ` view: QtC.KTextEditor__View `
    ///
    /// ` position: QtC.KTextEditor__Cursor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperTextHint(self: ?*anyopaque, view: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__TextHintProvider_SuperTextHint(@ptrCast(self), @ptrCast(view), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__texthintprovider.TextHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTextEditor__TextHintProvider `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KTextEditor__TextHintProvider_Delete(@ptrCast(self));
    }
};
