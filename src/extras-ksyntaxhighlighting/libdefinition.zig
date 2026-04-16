const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Format = @import("libqt6").KSyntaxHighlighting__Format;
const QChar = @import("libqt6").QChar;
const definition_enums = enums;
const std = @import("std");
const Struct_QChar_constu8 = struct { first: QChar, second: []const u8 };
const Struct_constu8_constu8 = struct { first: []const u8, second: []const u8 };

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html)
pub const KSyntaxHighlighting__Definition = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__Definition,

    pub const _is_KSyntaxHighlighting__Definition = {};

    /// New constructs a new KSyntaxHighlighting::Definition object.
    ///
    pub fn New() KSyntaxHighlighting__Definition {
        return .{ .ptr = qtc.KSyntaxHighlighting__Definition_new() };
    }

    /// New2 constructs a new KSyntaxHighlighting::Definition object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__Definition `
    ///
    pub fn New2(other: anytype) KSyntaxHighlighting__Definition {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Definition;
        return .{ .ptr = qtc.KSyntaxHighlighting__Definition_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` rhs: KSyntaxHighlighting__Definition `
    ///
    pub fn OperatorAssign(self: KSyntaxHighlighting__Definition, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__Definition_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` other: KSyntaxHighlighting__Definition `
    ///
    pub fn OperatorEqual(self: KSyntaxHighlighting__Definition, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Definition;
        return qtc.KSyntaxHighlighting__Definition_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` other: KSyntaxHighlighting__Definition `
    ///
    pub fn OperatorNotEqual(self: KSyntaxHighlighting__Definition, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Definition;
        return qtc.KSyntaxHighlighting__Definition_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn IsValid(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#alternativeNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AlternativeNames(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_AlternativeNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__definition.AlternativeNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definition.AlternativeNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TranslatedName(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_TranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.TranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#section)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Section(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Section(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.Section: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TranslatedSection(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_TranslatedSection(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.TranslatedSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__definition.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definition.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#extensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Extensions(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_Extensions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__definition.Extensions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definition.Extensions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn Version(self: KSyntaxHighlighting__Definition) i32 {
        return qtc.KSyntaxHighlighting__Definition_Version(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn Priority(self: KSyntaxHighlighting__Definition) i32 {
        return qtc.KSyntaxHighlighting__Definition_Priority(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn IsHidden(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Style(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Style(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.Style: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Indenter(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Indenter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.Indenter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn License(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` c: QChar `
    ///
    pub fn IsWordDelimiter(self: KSyntaxHighlighting__Definition, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.KSyntaxHighlighting__Definition_IsWordDelimiter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordWrapDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` c: QChar `
    ///
    pub fn IsWordWrapDelimiter(self: KSyntaxHighlighting__Definition, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.KSyntaxHighlighting__Definition_IsWordWrapDelimiter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn FoldingEnabled(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_FoldingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indentationBasedFoldingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn IndentationBasedFoldingEnabled(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_IndentationBasedFoldingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FoldingIgnoreList(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_FoldingIgnoreList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__definition.FoldingIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definition.FoldingIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeywordLists(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_KeywordLists(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__definition.KeywordLists: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definition.KeywordLists: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn KeywordList(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator, name: []const u8) []const []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_KeywordList(@ptrCast(self.ptr), name_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__definition.KeywordList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definition.KeywordList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#setKeywordList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` content: []const []const u8 `
    ///
    pub fn SetKeywordList(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator, name: []const u8, content: []const []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const content_arr = allocator.alloc(qtc.libqt_string, content.len) catch @panic("ksyntaxhighlighting__definition.SetKeywordList: Memory allocation failed");
        defer allocator.free(content_arr);
        for (content, 0..content.len) |item, i|
            content_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const content_list = qtc.libqt_list{
            .len = content.len,
            .data = content_arr.ptr,
        };
        return qtc.KSyntaxHighlighting__Definition_SetKeywordList(@ptrCast(self.ptr), name_str, content_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#formats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Formats(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []KSyntaxHighlighting__Format {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_Formats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Format, _arr.len) catch @panic("ksyntaxhighlighting__definition.Formats: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Format = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#includedDefinitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludedDefinitions(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []KSyntaxHighlighting__Definition {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_IncludedDefinitions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("ksyntaxhighlighting__definition.IncludedDefinitions: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SingleLineCommentMarker(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_SingleLineCommentMarker(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definition.SingleLineCommentMarker: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ## Returns:
    ///
    /// ` definition_enums.CommentPosition `
    ///
    pub fn SingleLineCommentPosition(self: KSyntaxHighlighting__Definition) i32 {
        return qtc.KSyntaxHighlighting__Definition_SingleLineCommentPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#multiLineCommentMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn MultiLineCommentMarker(self: KSyntaxHighlighting__Definition) Struct_constu8_constu8 {
        const _pair: qtc.libqt_pair = qtc.KSyntaxHighlighting__Definition_MultiLineCommentMarker(@ptrCast(self.ptr));
        return Struct_constu8_constu8{
            .first = @ptrCast(_pair.first),
            .second = @ptrCast(_pair.second),
        };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#characterEncodings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CharacterEncodings(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []Struct_QChar_constu8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_CharacterEncodings(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_QChar_constu8, _arr.len) catch @panic("ksyntaxhighlighting__definition.CharacterEncodings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("ksyntaxhighlighting__definition.CharacterEncodings: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_QChar_constu8{
                .first = .{ .ptr = @ptrCast(_data[i].first) },
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn Delete(self: KSyntaxHighlighting__Definition) void {
        qtc.KSyntaxHighlighting__Definition_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#public-types)
pub const enums = struct {
    pub const CommentPosition = enum(i32) {
        pub const StartOfLine: i32 = 0;
        pub const AfterWhitespace: i32 = 1;
    };
};
