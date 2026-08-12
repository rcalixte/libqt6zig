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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextEmoticonsCore::CustomEmoji object in C++ memory
    ///
    pub fn new() TextEmoticonsCore__CustomEmoji {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmoji_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextEmoticonsCore::CustomEmoji object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextEmoticonsCore__CustomEmoji `
    ///
    pub fn new2(param1: anytype) TextEmoticonsCore__CustomEmoji {
        comptime _ = @TypeOf(param1)._is_TextEmoticonsCore__CustomEmoji;
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmoji_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `identifier` instead
    ///
    pub const Identifier = identifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn identifier(self: TextEmoticonsCore__CustomEmoji, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__CustomEmoji_Identifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__CustomEmoji.identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIdentifier` instead
    ///
    pub const SetIdentifier = setIdentifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` newIdentifier: []const u8 `
    ///
    pub fn setIdentifier(self: TextEmoticonsCore__CustomEmoji, newIdentifier: []const u8) void {
        const newIdentifier_str = qtc.libqt_string{
            .len = newIdentifier.len,
            .data = newIdentifier.ptr,
        };
        qtc.TextEmoticonsCore__CustomEmoji_SetIdentifier(@ptrCast(self.ptr), newIdentifier_str);
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: TextEmoticonsCore__CustomEmoji, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__CustomEmoji_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__CustomEmoji.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAnimatedEmoji` instead
    ///
    pub const IsAnimatedEmoji = isAnimatedEmoji;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    pub fn isAnimatedEmoji(self: TextEmoticonsCore__CustomEmoji) bool {
        return qtc.TextEmoticonsCore__CustomEmoji_IsAnimatedEmoji(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsAnimatedEmoji` instead
    ///
    pub const SetIsAnimatedEmoji = setIsAnimatedEmoji;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    /// ` newIsAnimatedEmoji: bool `
    ///
    pub fn setIsAnimatedEmoji(self: TextEmoticonsCore__CustomEmoji, newIsAnimatedEmoji: bool) void {
        qtc.TextEmoticonsCore__CustomEmoji_SetIsAnimatedEmoji(@ptrCast(self.ptr), newIsAnimatedEmoji);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__CustomEmoji `
    ///
    pub fn delete(self: TextEmoticonsCore__CustomEmoji) void {
        qtc.TextEmoticonsCore__CustomEmoji_Delete(@ptrCast(self.ptr));
    }
};
