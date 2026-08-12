const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html)
pub const KTextEditor__TextHintProvider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__TextHintProvider,

    pub const _is_KTextEditor__TextHintProvider = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::TextHintProvider object in C++ memory
    ///
    pub fn new() KTextEditor__TextHintProvider {
        return .{ .ptr = qtc.KTextEditor__TextHintProvider_new() };
    }

    /// ### DEPRECATED: Use `textHint` instead
    ///
    pub const TextHint = textHint;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__TextHintProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn textHint(self: KTextEditor__TextHintProvider, allocator: std.mem.Allocator, view: anytype, position: anytype) []const u8 {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__TextHintProvider_TextHint(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__TextHintProvider.textHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTextHint` instead
    ///
    pub const OnTextHint = onTextHint;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__TextHintProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__TextHintProvider, view: KTextEditor__View, position: KTextEditor__Cursor) callconv(.c) [*:0]const u8 `
    ///
    pub fn onTextHint(self: KTextEditor__TextHintProvider, callback: *const fn (KTextEditor__TextHintProvider, KTextEditor__View, KTextEditor__Cursor) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__TextHintProvider_OnTextHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextHint` instead
    ///
    pub const SuperTextHint = superTextHint;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__TextHintProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn superTextHint(self: KTextEditor__TextHintProvider, allocator: std.mem.Allocator, view: anytype, position: anytype) []const u8 {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__TextHintProvider_SuperTextHint(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__TextHintProvider.textHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__TextHintProvider `
    ///
    pub fn delete(self: KTextEditor__TextHintProvider) void {
        qtc.KTextEditor__TextHintProvider_Delete(@ptrCast(self.ptr));
    }
};
