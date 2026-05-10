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

    /// New constructs a new TextGrammarCheck::GrammarAction object.
    ///
    pub fn New() TextGrammarCheck__GrammarAction {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarAction_new() };
    }

    /// New2 constructs a new TextGrammarCheck::GrammarAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextGrammarCheck__GrammarAction `
    ///
    pub fn New2(param1: anytype) TextGrammarCheck__GrammarAction {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarAction;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarAction_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Replacement(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarAction_Replacement(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__grammaraction.Replacement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` replacement: []const u8 `
    ///
    pub fn SetReplacement(self: TextGrammarCheck__GrammarAction, replacement: []const u8) void {
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        qtc.TextGrammarCheck__GrammarAction_SetReplacement(@ptrCast(self.ptr), replacement_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn Start(self: TextGrammarCheck__GrammarAction) i32 {
        return qtc.TextGrammarCheck__GrammarAction_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: TextGrammarCheck__GrammarAction, start: i32) void {
        qtc.TextGrammarCheck__GrammarAction_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn Length(self: TextGrammarCheck__GrammarAction) i32 {
        return qtc.TextGrammarCheck__GrammarAction_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: TextGrammarCheck__GrammarAction, length: i32) void {
        qtc.TextGrammarCheck__GrammarAction_SetLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suggestions(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextGrammarCheck__GrammarAction_Suggestions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textgrammarcheck__grammaraction.Suggestions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textgrammarcheck__grammaraction.Suggestions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` suggestions: []const []const u8 `
    ///
    pub fn SetSuggestions(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator, suggestions: []const []const u8) void {
        const suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("textgrammarcheck__grammaraction.SetSuggestions: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (suggestions, 0..suggestions.len) |item, i|
            suggestions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = suggestions.len,
            .data = suggestions_arr.ptr,
        };
        qtc.TextGrammarCheck__GrammarAction_SetSuggestions(@ptrCast(self.ptr), suggestions_list);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn BlockId(self: TextGrammarCheck__GrammarAction) i32 {
        return qtc.TextGrammarCheck__GrammarAction_BlockId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` blockId: i32 `
    ///
    pub fn SetBlockId(self: TextGrammarCheck__GrammarAction, blockId: i32) void {
        qtc.TextGrammarCheck__GrammarAction_SetBlockId(@ptrCast(self.ptr), @bitCast(blockId));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InfoUrls(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextGrammarCheck__GrammarAction_InfoUrls(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textgrammarcheck__grammaraction.InfoUrls: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textgrammarcheck__grammaraction.InfoUrls: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn SetInfoUrls(self: TextGrammarCheck__GrammarAction, allocator: std.mem.Allocator, urls: []const []const u8) void {
        const urls_arr = allocator.alloc(qtc.libqt_string, urls.len) catch @panic("textgrammarcheck__grammaraction.SetInfoUrls: Memory allocation failed");
        defer allocator.free(urls_arr);
        for (urls, 0..urls.len) |item, i|
            urls_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = urls_arr.ptr,
        };
        qtc.TextGrammarCheck__GrammarAction_SetInfoUrls(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__GrammarAction `
    ///
    pub fn Delete(self: TextGrammarCheck__GrammarAction) void {
        qtc.TextGrammarCheck__GrammarAction_Delete(@ptrCast(self.ptr));
    }
};
