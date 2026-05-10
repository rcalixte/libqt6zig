const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QJsonObject = @import("libqt6").QJsonObject;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
pub const TextGrammarCheck__GrammarError = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextGrammarCheck__GrammarError,

    pub const _is_TextGrammarCheck__GrammarError = {};

    /// New constructs a new TextGrammarCheck::GrammarError object.
    ///
    pub fn New() TextGrammarCheck__GrammarError {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarError_new() };
    }

    /// New2 constructs a new TextGrammarCheck::GrammarError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextGrammarCheck__GrammarError `
    ///
    pub fn New2(param1: anytype) TextGrammarCheck__GrammarError {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarError;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarError_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn Color(self: TextGrammarCheck__GrammarError) QColor {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarError_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: TextGrammarCheck__GrammarError, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.TextGrammarCheck__GrammarError_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Error(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Error(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__grammarerror.Error: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` errorVal: []const u8 `
    ///
    pub fn SetError(self: TextGrammarCheck__GrammarError, errorVal: []const u8) void {
        const errorVal_str = qtc.libqt_string{
            .len = errorVal.len,
            .data = errorVal.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetError(@ptrCast(self.ptr), errorVal_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn BlockId(self: TextGrammarCheck__GrammarError) i32 {
        return qtc.TextGrammarCheck__GrammarError_BlockId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` blockId: i32 `
    ///
    pub fn SetBlockId(self: TextGrammarCheck__GrammarError, blockId: i32) void {
        qtc.TextGrammarCheck__GrammarError_SetBlockId(@ptrCast(self.ptr), @bitCast(blockId));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn Start(self: TextGrammarCheck__GrammarError) i32 {
        return qtc.TextGrammarCheck__GrammarError_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: TextGrammarCheck__GrammarError, start: i32) void {
        qtc.TextGrammarCheck__GrammarError_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn Length(self: TextGrammarCheck__GrammarError) i32 {
        return qtc.TextGrammarCheck__GrammarError_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: TextGrammarCheck__GrammarError, length: i32) void {
        qtc.TextGrammarCheck__GrammarError_SetLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suggestions(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextGrammarCheck__GrammarError_Suggestions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textgrammarcheck__grammarerror.Suggestions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textgrammarcheck__grammarerror.Suggestions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` suggestions: []const []const u8 `
    ///
    pub fn SetSuggestions(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator, suggestions: []const []const u8) void {
        const suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("textgrammarcheck__grammarerror.SetSuggestions: Memory allocation failed");
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
        qtc.TextGrammarCheck__GrammarError_SetSuggestions(@ptrCast(self.ptr), suggestions_list);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn IsValid(self: TextGrammarCheck__GrammarError) bool {
        return qtc.TextGrammarCheck__GrammarError_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` obj: QJsonObject `
    ///
    /// ` blockindex: i32 `
    ///
    pub fn Parse(self: TextGrammarCheck__GrammarError, obj: anytype, blockindex: i32) void {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        qtc.TextGrammarCheck__GrammarError_Parse(@ptrCast(self.ptr), @ptrCast(obj.ptr), @bitCast(blockindex));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarError, obj: QJsonObject, blockindex: i32) callconv(.c) void `
    ///
    pub fn OnParse(self: TextGrammarCheck__GrammarError, callback: *const fn (TextGrammarCheck__GrammarError, QJsonObject, i32) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarError_OnParse(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParse` instead
    ///
    pub const QBaseParse = SuperParse;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` obj: QJsonObject `
    ///
    /// ` blockindex: i32 `
    ///
    pub fn SuperParse(self: TextGrammarCheck__GrammarError, obj: anytype, blockindex: i32) void {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        qtc.TextGrammarCheck__GrammarError_SuperParse(@ptrCast(self.ptr), @ptrCast(obj.ptr), @bitCast(blockindex));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` other: TextGrammarCheck__GrammarError `
    ///
    pub fn OperatorEqual(self: TextGrammarCheck__GrammarError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_TextGrammarCheck__GrammarError;
        return qtc.TextGrammarCheck__GrammarError_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Option(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Option(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__grammarerror.Option: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` option: []const u8 `
    ///
    pub fn SetOption(self: TextGrammarCheck__GrammarError, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetOption(@ptrCast(self.ptr), option_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Rule(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Rule(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__grammarerror.Rule: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` rule: []const u8 `
    ///
    pub fn SetRule(self: TextGrammarCheck__GrammarError, rule: []const u8) void {
        const rule_str = qtc.libqt_string{
            .len = rule.len,
            .data = rule.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetRule(@ptrCast(self.ptr), rule_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__grammarerror.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetUrl(self: TextGrammarCheck__GrammarError, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` param1: TextGrammarCheck__GrammarError `
    ///
    pub fn OperatorAssign(self: TextGrammarCheck__GrammarError, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarError;
        qtc.TextGrammarCheck__GrammarError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarError, param1: TextGrammarCheck__GrammarError) callconv(.c) void `
    ///
    pub fn OnOperatorAssign(self: TextGrammarCheck__GrammarError, callback: *const fn (TextGrammarCheck__GrammarError, TextGrammarCheck__GrammarError) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarError_OnOperatorAssign(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOperatorAssign` instead
    ///
    pub const QBaseOperatorAssign = SuperOperatorAssign;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` param1: TextGrammarCheck__GrammarError `
    ///
    pub fn SuperOperatorAssign(self: TextGrammarCheck__GrammarError, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarError;
        qtc.TextGrammarCheck__GrammarError_SuperOperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn Delete(self: TextGrammarCheck__GrammarError) void {
        qtc.TextGrammarCheck__GrammarError_Delete(@ptrCast(self.ptr));
    }
};
