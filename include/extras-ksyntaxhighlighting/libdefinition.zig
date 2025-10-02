const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const definition_enums = enums;
const std = @import("std");
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };
pub const struct_qtcqchar_constu8 = extern struct { first: QtC.QChar, second: []const u8 };

/// https://api.kde.org/ksyntaxhighlighting-definition.html
pub const ksyntaxhighlighting__definition = struct {
    /// New constructs a new KSyntaxHighlighting::Definition object.
    ///
    ///
    pub fn New() QtC.KSyntaxHighlighting__Definition {
        return qtc.KSyntaxHighlighting__Definition_new();
    }

    /// New2 constructs a new KSyntaxHighlighting::Definition object.
    ///
    /// ``` other: QtC.KSyntaxHighlighting__Definition ```
    pub fn New2(other: ?*anyopaque) QtC.KSyntaxHighlighting__Definition {
        return qtc.KSyntaxHighlighting__Definition_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, rhs: QtC.KSyntaxHighlighting__Definition ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Definition_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, other: QtC.KSyntaxHighlighting__Definition ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Definition_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-not-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, other: QtC.KSyntaxHighlighting__Definition ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Definition_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isValid)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Definition_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#filePath)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#name)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#alternativeNames)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn AlternativeNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_AlternativeNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting::definition.AlternativeNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::definition.AlternativeNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedName)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn TranslatedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_TranslatedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.TranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#section)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Section(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_Section(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.Section: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedSection)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn TranslatedSection(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_TranslatedSection(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.TranslatedSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#mimeTypes)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting::definition.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::definition.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#extensions)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Extensions(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_Extensions(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting::definition.Extensions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::definition.Extensions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#version)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Definition_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#priority)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn Priority(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Definition_Priority(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isHidden)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Definition_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#style)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Style(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_Style(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.Style: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#indenter)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Indenter(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_Indenter(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.Indenter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#author)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_Author(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#license)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn License(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_License(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordDelimiter)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, c: QtC.QChar ```
    pub fn IsWordDelimiter(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.KSyntaxHighlighting__Definition_IsWordDelimiter(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordWrapDelimiter)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, c: QtC.QChar ```
    pub fn IsWordWrapDelimiter(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.KSyntaxHighlighting__Definition_IsWordWrapDelimiter(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingEnabled)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn FoldingEnabled(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Definition_FoldingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#indentationBasedFoldingEnabled)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn IndentationBasedFoldingEnabled(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__Definition_IndentationBasedFoldingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingIgnoreList)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn FoldingIgnoreList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_FoldingIgnoreList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting::definition.FoldingIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::definition.FoldingIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordLists)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn KeywordLists(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_KeywordLists(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting::definition.KeywordLists: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::definition.KeywordLists: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordList)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, name: []const u8, allocator: std.mem.Allocator ```
    pub fn KeywordList(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_KeywordList(@ptrCast(self), name_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting::definition.KeywordList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::definition.KeywordList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#setKeywordList)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, name: []const u8, content: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetKeywordList(self: ?*anyopaque, name: []const u8, content: [][]const u8, allocator: std.mem.Allocator) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var content_arr = allocator.alloc(qtc.libqt_string, content.len) catch @panic("ksyntaxhighlighting::definition.SetKeywordList: Memory allocation failed");
        defer allocator.free(content_arr);
        for (content, 0..content.len) |item, i| {
            content_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const content_list = qtc.libqt_list{
            .len = content.len,
            .data = content_arr.ptr,
        };
        return qtc.KSyntaxHighlighting__Definition_SetKeywordList(@ptrCast(self), name_str, content_list);
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#formats)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn Formats(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KSyntaxHighlighting__Format {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_Formats(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KSyntaxHighlighting__Format, _arr.len) catch @panic("ksyntaxhighlighting::definition.Formats: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Format = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#includedDefinitions)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn IncludedDefinitions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KSyntaxHighlighting__Definition {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_IncludedDefinitions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KSyntaxHighlighting__Definition, _arr.len) catch @panic("ksyntaxhighlighting::definition.IncludedDefinitions: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentMarker)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn SingleLineCommentMarker(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSyntaxHighlighting__Definition_SingleLineCommentMarker(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::definition.SingleLineCommentMarker: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentPosition)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    ///
    /// Returns: ``` definition_enums.CommentPosition ```
    pub fn SingleLineCommentPosition(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Definition_SingleLineCommentPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#multiLineCommentMarker)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn MultiLineCommentMarker(self: ?*anyopaque) struct_constu8_constu8 {
        const _pair: qtc.libqt_pair = qtc.KSyntaxHighlighting__Definition_MultiLineCommentMarker(@ptrCast(self));
        return struct_constu8_constu8{
            .first = @ptrCast(_pair.first),
            .second = @ptrCast(_pair.second),
        };
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#characterEncodings)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition, allocator: std.mem.Allocator ```
    pub fn CharacterEncodings(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_qtcqchar_constu8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_CharacterEncodings(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqchar_constu8, _arr.len) catch @panic("ksyntaxhighlighting::definition.CharacterEncodings: Memory allocation failed");
        const _data: [*]struct_qtcqchar_constu8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__Definition ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Definition_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ksyntaxhighlighting-definition.html#types
pub const enums = struct {
    pub const CommentPosition = enum {
        pub const StartOfLine: i32 = 0;
        pub const AfterWhitespace: i32 = 1;
    };
};
