const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Format = @import("libqt6").KSyntaxHighlighting__Format;
const QChar = @import("libqt6").QChar;
const definition_enums = enums;
const std = @import("std");
const Struct_QChar_constu8 = @import("libqt6").types.Struct_QChar_constu8; // struct { first: QChar, second: []const u8 }
const Struct_constu8_constu8 = @import("libqt6").types.Struct_constu8_constu8; // struct { first: []const u8, second: []const u8 }

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html)
pub const KSyntaxHighlighting__Definition = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__Definition,

    pub const _is_KSyntaxHighlighting__Definition = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSyntaxHighlighting::Definition object in C++ memory
    ///
    pub fn new() KSyntaxHighlighting__Definition {
        return .{ .ptr = qtc.KSyntaxHighlighting__Definition_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSyntaxHighlighting::Definition object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__Definition `
    ///
    pub fn new2(other: anytype) KSyntaxHighlighting__Definition {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Definition;
        return .{ .ptr = qtc.KSyntaxHighlighting__Definition_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` rhs: KSyntaxHighlighting__Definition `
    ///
    pub fn operatorAssign(self: KSyntaxHighlighting__Definition, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__Definition_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` other: KSyntaxHighlighting__Definition `
    ///
    pub fn operatorEqual(self: KSyntaxHighlighting__Definition, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Definition;
        return qtc.KSyntaxHighlighting__Definition_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` other: KSyntaxHighlighting__Definition `
    ///
    pub fn operatorNotEqual(self: KSyntaxHighlighting__Definition, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__Definition;
        return qtc.KSyntaxHighlighting__Definition_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn isValid(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `alternativeNames` instead
    ///
    pub const AlternativeNames = alternativeNames;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#alternativeNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn alternativeNames(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_AlternativeNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.alternativeNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Definition.alternativeNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `translatedName` instead
    ///
    pub const TranslatedName = translatedName;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translatedName(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_TranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.translatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `section` instead
    ///
    pub const Section = section;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#section)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn section(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Section(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.section: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `translatedSection` instead
    ///
    pub const TranslatedSection = translatedSection;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translatedSection(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_TranslatedSection(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.translatedSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Definition.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `extensions` instead
    ///
    pub const Extensions = extensions;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#extensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extensions(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_Extensions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.extensions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Definition.extensions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn version(self: KSyntaxHighlighting__Definition) i32 {
        return qtc.KSyntaxHighlighting__Definition_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn priority(self: KSyntaxHighlighting__Definition) i32 {
        return qtc.KSyntaxHighlighting__Definition_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn isHidden(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn style(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Style(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.style: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `indenter` instead
    ///
    pub const Indenter = indenter;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn indenter(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Indenter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.indenter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn license(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.license: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isWordDelimiter` instead
    ///
    pub const IsWordDelimiter = isWordDelimiter;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` c: QChar `
    ///
    pub fn isWordDelimiter(self: KSyntaxHighlighting__Definition, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.KSyntaxHighlighting__Definition_IsWordDelimiter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `isWordWrapDelimiter` instead
    ///
    pub const IsWordWrapDelimiter = isWordWrapDelimiter;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordWrapDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` c: QChar `
    ///
    pub fn isWordWrapDelimiter(self: KSyntaxHighlighting__Definition, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.KSyntaxHighlighting__Definition_IsWordWrapDelimiter(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `foldingEnabled` instead
    ///
    pub const FoldingEnabled = foldingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn foldingEnabled(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_FoldingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indentationBasedFoldingEnabled` instead
    ///
    pub const IndentationBasedFoldingEnabled = indentationBasedFoldingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indentationBasedFoldingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn indentationBasedFoldingEnabled(self: KSyntaxHighlighting__Definition) bool {
        return qtc.KSyntaxHighlighting__Definition_IndentationBasedFoldingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldingIgnoreList` instead
    ///
    pub const FoldingIgnoreList = foldingIgnoreList;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingIgnoreList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn foldingIgnoreList(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_FoldingIgnoreList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.foldingIgnoreList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Definition.foldingIgnoreList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `keywordLists` instead
    ///
    pub const KeywordLists = keywordLists;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keywordLists(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_KeywordLists(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.keywordLists: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Definition.keywordLists: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `keywordList` instead
    ///
    pub const KeywordList = keywordList;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn keywordList(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator, _name: []const u8) []const []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_KeywordList(@ptrCast(self.ptr), name_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.keywordList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Definition.keywordList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setKeywordList` instead
    ///
    pub const SetKeywordList = setKeywordList;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#setKeywordList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` content: []const []const u8 `
    ///
    pub fn setKeywordList(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator, _name: []const u8, content: []const []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const content_arr = allocator.alloc(qtc.libqt_string, content.len) catch @panic("KSyntaxHighlighting__Definition.setKeywordList: Memory allocation failed");
        defer allocator.free(content_arr);
        for (content, 0..content.len) |str_item, i|
            content_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const content_list = qtc.libqt_list{
            .len = content.len,
            .data = content_arr.ptr,
        };
        return qtc.KSyntaxHighlighting__Definition_SetKeywordList(@ptrCast(self.ptr), name_str, content_list);
    }

    /// ### DEPRECATED: Use `formats` instead
    ///
    pub const Formats = formats;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#formats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn formats(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []KSyntaxHighlighting__Format {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_Formats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Format, _arr.len) catch @panic("KSyntaxHighlighting__Definition.formats: Memory allocation failed");
        const _data_val: [*]QtC.KSyntaxHighlighting__Format = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `includedDefinitions` instead
    ///
    pub const IncludedDefinitions = includedDefinitions;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#includedDefinitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn includedDefinitions(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []KSyntaxHighlighting__Definition {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_IncludedDefinitions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("KSyntaxHighlighting__Definition.includedDefinitions: Memory allocation failed");
        const _data_val: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `singleLineCommentMarker` instead
    ///
    pub const SingleLineCommentMarker = singleLineCommentMarker;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn singleLineCommentMarker(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSyntaxHighlighting__Definition_SingleLineCommentMarker(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Definition.singleLineCommentMarker: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `singleLineCommentPosition` instead
    ///
    pub const SingleLineCommentPosition = singleLineCommentPosition;

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
    pub fn singleLineCommentPosition(self: KSyntaxHighlighting__Definition) i32 {
        return qtc.KSyntaxHighlighting__Definition_SingleLineCommentPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `multiLineCommentMarker` instead
    ///
    pub const MultiLineCommentMarker = multiLineCommentMarker;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#multiLineCommentMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn multiLineCommentMarker(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) Struct_constu8_constu8 {
        const _pair: qtc.libqt_pair = qtc.KSyntaxHighlighting__Definition_MultiLineCommentMarker(@ptrCast(self.ptr));
        var _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_pair.first));
        defer {
            qtc.libqt_string_free(_first_str);
            qtc.libqt_free(_pair.first);
        }
        const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("KSyntaxHighlighting__Definition.multiLineCommentMarker: Memory allocation failed");
        @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
        var _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_pair.second));
        defer {
            qtc.libqt_string_free(_second_str);
            qtc.libqt_free(_pair.second);
        }
        const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("KSyntaxHighlighting__Definition.multiLineCommentMarker: Memory allocation failed");
        @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
        return Struct_constu8_constu8{
            .first = _first_slice,
            .second = _second_slice,
        };
    }

    /// ### DEPRECATED: Use `characterEncodings` instead
    ///
    pub const CharacterEncodings = characterEncodings;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#characterEncodings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn characterEncodings(self: KSyntaxHighlighting__Definition, allocator: std.mem.Allocator) []Struct_QChar_constu8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Definition_CharacterEncodings(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_QChar_constu8, _arr.len) catch @panic("KSyntaxHighlighting__Definition.characterEncodings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("KSyntaxHighlighting__Definition.characterEncodings: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_QChar_constu8{
                .first = .{ .ptr = @ptrCast(_data_val[i].first) },
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__Definition `
    ///
    pub fn delete(self: KSyntaxHighlighting__Definition) void {
        qtc.KSyntaxHighlighting__Definition_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#public-types)
pub const enums = struct {
    pub const CommentPosition = enum {
        pub const StartOfLine: i32 = 0;
        pub const AfterWhitespace: i32 = 1;
    };
};
