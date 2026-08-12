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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextGrammarCheck::GrammarError object in C++ memory
    ///
    pub fn new() TextGrammarCheck__GrammarError {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextGrammarCheck::GrammarError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: TextGrammarCheck__GrammarError `
    ///
    pub fn new2(param1: anytype) TextGrammarCheck__GrammarError {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarError;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarError_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn color(self: TextGrammarCheck__GrammarError) QColor {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarError_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: TextGrammarCheck__GrammarError, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.TextGrammarCheck__GrammarError_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn error0(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Error(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarError.error0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` errorVal: []const u8 `
    ///
    pub fn setError(self: TextGrammarCheck__GrammarError, errorVal: []const u8) void {
        const errorVal_str = qtc.libqt_string{
            .len = errorVal.len,
            .data = errorVal.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetError(@ptrCast(self.ptr), errorVal_str);
    }

    /// ### DEPRECATED: Use `blockId` instead
    ///
    pub const BlockId = blockId;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn blockId(self: TextGrammarCheck__GrammarError) i32 {
        return qtc.TextGrammarCheck__GrammarError_BlockId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlockId` instead
    ///
    pub const SetBlockId = setBlockId;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _blockId: i32 `
    ///
    pub fn setBlockId(self: TextGrammarCheck__GrammarError, _blockId: i32) void {
        qtc.TextGrammarCheck__GrammarError_SetBlockId(@ptrCast(self.ptr), @bitCast(_blockId));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn start(self: TextGrammarCheck__GrammarError) i32 {
        return qtc.TextGrammarCheck__GrammarError_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: TextGrammarCheck__GrammarError, _start: i32) void {
        qtc.TextGrammarCheck__GrammarError_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn length(self: TextGrammarCheck__GrammarError) i32 {
        return qtc.TextGrammarCheck__GrammarError_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _length: i32 `
    ///
    pub fn setLength(self: TextGrammarCheck__GrammarError, _length: i32) void {
        qtc.TextGrammarCheck__GrammarError_SetLength(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `suggestions` instead
    ///
    pub const Suggestions = suggestions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suggestions(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextGrammarCheck__GrammarError_Suggestions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextGrammarCheck__GrammarError.suggestions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextGrammarCheck__GrammarError.suggestions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuggestions` instead
    ///
    pub const SetSuggestions = setSuggestions;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _suggestions: []const []const u8 `
    ///
    pub fn setSuggestions(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator, _suggestions: []const []const u8) void {
        const suggestions_arr = allocator.alloc(qtc.libqt_string, _suggestions.len) catch @panic("TextGrammarCheck__GrammarError.setSuggestions: Memory allocation failed");
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
        qtc.TextGrammarCheck__GrammarError_SetSuggestions(@ptrCast(self.ptr), suggestions_list);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn isValid(self: TextGrammarCheck__GrammarError) bool {
        return qtc.TextGrammarCheck__GrammarError_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parse` instead
    ///
    pub const Parse = parse;

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
    pub fn parse(self: TextGrammarCheck__GrammarError, obj: anytype, blockindex: i32) void {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        qtc.TextGrammarCheck__GrammarError_Parse(@ptrCast(self.ptr), @ptrCast(obj.ptr), @bitCast(blockindex));
    }

    /// ### DEPRECATED: Use `onParse` instead
    ///
    pub const OnParse = onParse;

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
    pub fn onParse(self: TextGrammarCheck__GrammarError, callback: *const fn (TextGrammarCheck__GrammarError, QJsonObject, i32) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarError_OnParse(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParse` instead
    ///
    pub const SuperParse = superParse;

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
    pub fn superParse(self: TextGrammarCheck__GrammarError, obj: anytype, blockindex: i32) void {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        qtc.TextGrammarCheck__GrammarError_SuperParse(@ptrCast(self.ptr), @ptrCast(obj.ptr), @bitCast(blockindex));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` other: TextGrammarCheck__GrammarError `
    ///
    pub fn operatorEqual(self: TextGrammarCheck__GrammarError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_TextGrammarCheck__GrammarError;
        return qtc.TextGrammarCheck__GrammarError_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `option` instead
    ///
    pub const Option = option;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn option(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Option(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarError.option: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOption` instead
    ///
    pub const SetOption = setOption;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _option: []const u8 `
    ///
    pub fn setOption(self: TextGrammarCheck__GrammarError, _option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = _option.len,
            .data = _option.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetOption(@ptrCast(self.ptr), option_str);
    }

    /// ### DEPRECATED: Use `rule` instead
    ///
    pub const Rule = rule;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rule(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Rule(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarError.rule: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRule` instead
    ///
    pub const SetRule = setRule;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _rule: []const u8 `
    ///
    pub fn setRule(self: TextGrammarCheck__GrammarError, _rule: []const u8) void {
        const rule_str = qtc.libqt_string{
            .len = _rule.len,
            .data = _rule.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetRule(@ptrCast(self.ptr), rule_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: TextGrammarCheck__GrammarError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__GrammarError_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarError.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn setUrl(self: TextGrammarCheck__GrammarError, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.TextGrammarCheck__GrammarError_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    /// ` param1: TextGrammarCheck__GrammarError `
    ///
    pub fn operatorAssign(self: TextGrammarCheck__GrammarError, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarError;
        qtc.TextGrammarCheck__GrammarError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorAssign` instead
    ///
    pub const OnOperatorAssign = onOperatorAssign;

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
    pub fn onOperatorAssign(self: TextGrammarCheck__GrammarError, callback: *const fn (TextGrammarCheck__GrammarError, TextGrammarCheck__GrammarError) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarError_OnOperatorAssign(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorAssign` instead
    ///
    pub const SuperOperatorAssign = superOperatorAssign;

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
    pub fn superOperatorAssign(self: TextGrammarCheck__GrammarError, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TextGrammarCheck__GrammarError;
        qtc.TextGrammarCheck__GrammarError_SuperOperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__GrammarError `
    ///
    pub fn delete(self: TextGrammarCheck__GrammarError) void {
        qtc.TextGrammarCheck__GrammarError_Delete(@ptrCast(self.ptr));
    }
};
