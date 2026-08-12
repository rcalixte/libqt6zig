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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextEmoticonsCore::UnicodeEmoticon object in C++ memory
    ///
    pub fn new() TextEmoticonsCore__UnicodeEmoticon {
        return .{ .ptr = qtc.TextEmoticonsCore__UnicodeEmoticon_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextEmoticonsCore::UnicodeEmoticon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn new2(param1: anytype) TextEmoticonsCore__UnicodeEmoticon {
        comptime _ = @TypeOf(param1)._is_TextEmoticonsCore__UnicodeEmoticon;
        return .{ .ptr = qtc.TextEmoticonsCore__UnicodeEmoticon_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `identifier` instead
    ///
    pub const Identifier = identifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn identifier(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Identifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIdentifier` instead
    ///
    pub const SetIdentifier = setIdentifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` _identifier: []const u8 `
    ///
    pub fn setIdentifier(self: TextEmoticonsCore__UnicodeEmoticon, _identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = _identifier.len,
            .data = _identifier.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetIdentifier(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `unicode` instead
    ///
    pub const Unicode = unicode;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn unicode(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Unicode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.unicode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `unicodeDisplay` instead
    ///
    pub const UnicodeDisplay = unicodeDisplay;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn unicodeDisplay(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_UnicodeDisplay(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.unicodeDisplay: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUnicode` instead
    ///
    pub const SetUnicode = setUnicode;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` _unicode: []const u8 `
    ///
    pub fn setUnicode(self: TextEmoticonsCore__UnicodeEmoticon, _unicode: []const u8) void {
        const unicode_str = qtc.libqt_string{
            .len = _unicode.len,
            .data = _unicode.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetUnicode(@ptrCast(self.ptr), unicode_str);
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` _category: []const u8 `
    ///
    pub fn setCategory(self: TextEmoticonsCore__UnicodeEmoticon, _category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = _category.len,
            .data = _category.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `aliases` instead
    ///
    pub const Aliases = aliases;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn aliases(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__UnicodeEmoticon_Aliases(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.aliases: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.aliases: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setAliases` instead
    ///
    pub const SetAliases = setAliases;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _aliases: []const []const u8 `
    ///
    pub fn setAliases(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator, _aliases: []const []const u8) void {
        const aliases_arr = allocator.alloc(qtc.libqt_string, _aliases.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.setAliases: Memory allocation failed");
        defer allocator.free(aliases_arr);
        for (_aliases, 0.._aliases.len) |str_item, i|
            aliases_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const aliases_list = qtc.libqt_list{
            .len = _aliases.len,
            .data = aliases_arr.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetAliases(@ptrCast(self.ptr), aliases_list);
    }

    /// ### DEPRECATED: Use `hasEmoji` instead
    ///
    pub const HasEmoji = hasEmoji;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` _identifier: []const u8 `
    ///
    pub fn hasEmoji(self: TextEmoticonsCore__UnicodeEmoticon, _identifier: []const u8) bool {
        const identifier_str = qtc.libqt_string{
            .len = _identifier.len,
            .data = _identifier.ptr,
        };
        return qtc.TextEmoticonsCore__UnicodeEmoticon_HasEmoji(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn isValid(self: TextEmoticonsCore__UnicodeEmoticon) bool {
        return qtc.TextEmoticonsCore__UnicodeEmoticon_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `order` instead
    ///
    pub const Order = order;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn order(self: TextEmoticonsCore__UnicodeEmoticon) i32 {
        return qtc.TextEmoticonsCore__UnicodeEmoticon_Order(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrder` instead
    ///
    pub const SetOrder = setOrder;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` _order: i32 `
    ///
    pub fn setOrder(self: TextEmoticonsCore__UnicodeEmoticon, _order: i32) void {
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetOrder(@ptrCast(self.ptr), @bitCast(_order));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: TextEmoticonsCore__UnicodeEmoticon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__UnicodeEmoticon_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__UnicodeEmoticon.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn setKey(self: TextEmoticonsCore__UnicodeEmoticon, _key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.TextEmoticonsCore__UnicodeEmoticon_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    /// ` other: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn operatorEqual(self: TextEmoticonsCore__UnicodeEmoticon, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_TextEmoticonsCore__UnicodeEmoticon;
        return qtc.TextEmoticonsCore__UnicodeEmoticon_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn delete(self: TextEmoticonsCore__UnicodeEmoticon) void {
        qtc.TextEmoticonsCore__UnicodeEmoticon_Delete(@ptrCast(self.ptr));
    }
};
