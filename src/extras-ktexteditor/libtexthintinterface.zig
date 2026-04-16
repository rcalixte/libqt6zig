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

    /// New constructs a new KTextEditor::TextHintProvider object.
    ///
    pub fn New() KTextEditor__TextHintProvider {
        return .{ .ptr = qtc.KTextEditor__TextHintProvider_new() };
    }

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
    pub fn TextHint(self: KTextEditor__TextHintProvider, allocator: std.mem.Allocator, view: anytype, position: anytype) []const u8 {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__TextHintProvider_TextHint(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__texthintprovider.TextHint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__TextHintProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__TextHintProvider, view: KTextEditor__View, position: KTextEditor__Cursor) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextHint(self: KTextEditor__TextHintProvider, callback: *const fn (KTextEditor__TextHintProvider, KTextEditor__View, KTextEditor__Cursor) callconv(.c) [*:0]const u8) void {
        qtc.KTextEditor__TextHintProvider_OnTextHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__TextHintProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn SuperTextHint(self: KTextEditor__TextHintProvider, allocator: std.mem.Allocator, view: anytype, position: anytype) []const u8 {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__TextHintProvider_SuperTextHint(@ptrCast(self.ptr), @ptrCast(view.ptr), @ptrCast(position.ptr));
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
    /// ` self: KTextEditor__TextHintProvider `
    ///
    pub fn Delete(self: KTextEditor__TextHintProvider) void {
        qtc.KTextEditor__TextHintProvider_Delete(@ptrCast(self.ptr));
    }
};
