const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
pub const TextEmoticonsCore__CustomEmoji = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__CustomEmoji,

    pub const _is_TextEmoticonsCore__CustomEmoji = {};

    /// New constructs a new TextEmoticonsCore::CustomEmoji object.
    ///
    pub fn New() TextEmoticonsCore__CustomEmoji {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmoji_new() };
    }

    /// New2 constructs a new TextEmoticonsCore::CustomEmoji object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextEmoticonsCore__CustomEmoji `
    ///
    pub fn New2(param1: anytype) TextEmoticonsCore__CustomEmoji {
        comptime _ = @TypeOf(param1)._is_TextEmoticonsCore__CustomEmoji;
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmoji_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Identifier(self: TextEmoticonsCore__CustomEmoji, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__CustomEmoji_Identifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemoji.Identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` newIdentifier: []const u8 `
    ///
    pub fn SetIdentifier(self: TextEmoticonsCore__CustomEmoji, newIdentifier: []const u8) void {
        const newIdentifier_str = qtc.libqt_string{
            .len = newIdentifier.len,
            .data = newIdentifier.ptr,
        };
        qtc.TextEmoticonsCore__CustomEmoji_SetIdentifier(@ptrCast(self.ptr), newIdentifier_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Category(self: TextEmoticonsCore__CustomEmoji, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__CustomEmoji_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemoji.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    pub fn IsAnimatedEmoji(self: TextEmoticonsCore__CustomEmoji) bool {
        return qtc.TextEmoticonsCore__CustomEmoji_IsAnimatedEmoji(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` newIsAnimatedEmoji: bool `
    ///
    pub fn SetIsAnimatedEmoji(self: TextEmoticonsCore__CustomEmoji, newIsAnimatedEmoji: bool) void {
        qtc.TextEmoticonsCore__CustomEmoji_SetIsAnimatedEmoji(@ptrCast(self.ptr), newIsAnimatedEmoji);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    pub fn Delete(self: TextEmoticonsCore__CustomEmoji) void {
        qtc.TextEmoticonsCore__CustomEmoji_Delete(@ptrCast(self.ptr));
    }
};
