const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
pub const TextEmoticonsCore__UnicodeEmoticon = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__UnicodeEmoticon,

    pub const _is_TextEmoticonsCore__UnicodeEmoticon = {};

    /// New constructs a new TextEmoticonsCore::UnicodeEmoticon object.
    ///
    pub fn New() TextEmoticonsCore__UnicodeEmoticon {
        return .{ .ptr = qtc.TextEmoticonsCore__UnicodeEmoticon_new() };
    }

    /// New2 constructs a new TextEmoticonsCore::UnicodeEmoticon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn New2(param1: anytype) TextEmoticonsCore__UnicodeEmoticon {
        comptime _ = @TypeOf(param1)._is_TextEmoticonsCore__UnicodeEmoticon;
        return .{ .ptr = qtc.TextEmoticonsCore__UnicodeEmoticon_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Identifier(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Identifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__unicodeemoticon.Identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetIdentifier(self: TextEmoticonsCore__UnicodeEmoticon, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetIdentifier(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Unicode(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Unicode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__unicodeemoticon.Unicode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UnicodeDisplay(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_UnicodeDisplay(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__unicodeemoticon.UnicodeDisplay: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` unicode: []const u8 `
    ///
    pub fn SetUnicode(self: TextEmoticonsCore__UnicodeEmoticon, unicode: []const u8) void {
        const unicode_str = qtc.libqt_string{
            .len = unicode.len,
            .data = unicode.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetUnicode(@ptrCast(self.ptr), unicode_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Category(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__unicodeemoticon.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` category: []const u8 `
    ///
    pub fn SetCategory(self: TextEmoticonsCore__UnicodeEmoticon, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Aliases(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__UnicodeEmoticon_Aliases(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textemoticonscore__unicodeemoticon.Aliases: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textemoticonscore__unicodeemoticon.Aliases: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aliases: []const []const u8 `
    ///
    pub fn SetAliases(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator, aliases: []const []const u8) void {
        const aliases_arr = allocator.alloc(qtc.libqt_string, aliases.len) catch @panic("textemoticonscore__unicodeemoticon.SetAliases: Memory allocation failed");
        defer allocator.free(aliases_arr);
        for (aliases, 0..aliases.len) |item, i|
            aliases_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const aliases_list = qtc.libqt_list{
            .len = aliases.len,
            .data = aliases_arr.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetAliases(@ptrCast(self.ptr), aliases_list);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn HasEmoji(self: TextEmoticonsCore__UnicodeEmoticon, identifier: []const u8) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.TextEmoticonsCore__UnicodeEmoticon_HasEmoji(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn IsValid(self: TextEmoticonsCore__UnicodeEmoticon) bool {
        return qtc.TextEmoticonsCore__UnicodeEmoticon_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn Order(self: TextEmoticonsCore__UnicodeEmoticon) i32 {
        return qtc.TextEmoticonsCore__UnicodeEmoticon_Order(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` order: i32 `
    ///
    pub fn SetOrder(self: TextEmoticonsCore__UnicodeEmoticon, order: i32) void {
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetOrder(@ptrCast(self.ptr), @bitCast(order));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__unicodeemoticon.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: TextEmoticonsCore__UnicodeEmoticon, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` other: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn OperatorEqual(self: TextEmoticonsCore__UnicodeEmoticon, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_TextEmoticonsCore__UnicodeEmoticon;
        return qtc.TextEmoticonsCore__UnicodeEmoticon_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn Delete(self: TextEmoticonsCore__UnicodeEmoticon) void {
        qtc.TextEmoticonsCore__UnicodeEmoticon_Delete(@ptrCast(self.ptr));
    }
};
