const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
pub const TextGrammarCheck__GrammarAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextGrammarCheck__GrammarAction,

    pub const _is_TextGrammarCheck__GrammarAction = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextGrammarCheck::GrammarAction object in C++ memory
    ///
    pub fn new() TextGrammarCheck__GrammarAction {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarAction_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextGrammarCheck::GrammarAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextGrammarCheck__GrammarAction `
    ///
    pub fn new2(param1: anytype) TextGrammarCheck__GrammarAction {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarAction;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarAction_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `replacement` instead
    ///
    pub const Replacement = replacement;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn replacement(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarAction_Replacement(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarAction.replacement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setReplacement` instead
    ///
    pub const SetReplacement = setReplacement;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` _replacement: []const u8 `
    ///
    pub fn setReplacement(self: TextGrammarCheck__GrammarAction, _replacement: []const u8) void {
        const replacement_str = qtc.libqt_string{
            .len = _replacement.len,
            .data = _replacement.ptr,
        };
        qtc.TextGrammarCheck__GrammarAction_SetReplacement(@ptrCast(self.ptr), replacement_str);
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn start(self: TextGrammarCheck__GrammarAction) i32 {
        return qtc.TextGrammarCheck__GrammarAction_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: TextGrammarCheck__GrammarAction, _start: i32) void {
        qtc.TextGrammarCheck__GrammarAction_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn length(self: TextGrammarCheck__GrammarAction) i32 {
        return qtc.TextGrammarCheck__GrammarAction_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` _length: i32 `
    ///
    pub fn setLength(self: TextGrammarCheck__GrammarAction, _length: i32) void {
        qtc.TextGrammarCheck__GrammarAction_SetLength(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `suggestions` instead
    ///
    pub const Suggestions = suggestions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suggestions(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextGrammarCheck__GrammarAction_Suggestions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextGrammarCheck__GrammarAction.suggestions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextGrammarCheck__GrammarAction.suggestions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuggestions` instead
    ///
    pub const SetSuggestions = setSuggestions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _suggestions: []const []const u8 `
    ///
    pub fn setSuggestions(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator, _suggestions: []const []const u8) void {
        const suggestions_arr = allocator.alloc(qtc.libqt_string, _suggestions.len) catch @panic("TextGrammarCheck__GrammarAction.setSuggestions: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (_suggestions, 0.._suggestions.len) |str_item, i|
            suggestions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = _suggestions.len,
            .data = suggestions_arr.ptr,
        };
        qtc.TextGrammarCheck__GrammarAction_SetSuggestions(@ptrCast(self.ptr), suggestions_list);
    }

    /// ### DEPRECATED: Use `blockId` instead
    ///
    pub const BlockId = blockId;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn blockId(self: TextGrammarCheck__GrammarAction) i32 {
        return qtc.TextGrammarCheck__GrammarAction_BlockId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlockId` instead
    ///
    pub const SetBlockId = setBlockId;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` _blockId: i32 `
    ///
    pub fn setBlockId(self: TextGrammarCheck__GrammarAction, _blockId: i32) void {
        qtc.TextGrammarCheck__GrammarAction_SetBlockId(@ptrCast(self.ptr), @bitCast(_blockId));
    }

    /// ### DEPRECATED: Use `infoUrls` instead
    ///
    pub const InfoUrls = infoUrls;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn infoUrls(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextGrammarCheck__GrammarAction_InfoUrls(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextGrammarCheck__GrammarAction.infoUrls: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextGrammarCheck__GrammarAction.infoUrls: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setInfoUrls` instead
    ///
    pub const SetInfoUrls = setInfoUrls;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` urls: []const []const u8 `
    ///
    pub fn setInfoUrls(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator, urls: []const []const u8) void {
        const urls_arr = allocator.alloc(qtc.libqt_string, urls.len) catch @panic("TextGrammarCheck__GrammarAction.setInfoUrls: Memory allocation failed");
        defer allocator.free(urls_arr);
        for (urls, 0..urls.len) |str_item, i|
            urls_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = urls_arr.ptr,
        };
        qtc.TextGrammarCheck__GrammarAction_SetInfoUrls(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn delete(self: TextGrammarCheck__GrammarAction) void {
        qtc.TextGrammarCheck__GrammarAction_Delete(@ptrCast(self.ptr));
    }
};
