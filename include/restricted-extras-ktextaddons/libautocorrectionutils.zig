const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const std = @import("std");

pub const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes = extern struct {
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes,

    pub const _is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object in C++ memory
    ///
    pub fn new() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn new2(other: anytype) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        comptime _ = @TypeOf(other)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object and invalidate the source TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn new3(other: anytype) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        comptime _ = @TypeOf(other)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn copyAssign(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn moveAssign(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn begin(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) QChar {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBegin` instead
    ///
    pub const SetBegin = setBegin;

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` _begin: QChar `
    ///
    pub fn setBegin(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, _begin: anytype) void {
        comptime _ = @TypeOf(_begin)._is_QChar;
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetBegin(@ptrCast(self.ptr), @ptrCast(_begin.ptr));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn end(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) QChar {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEnd` instead
    ///
    pub const SetEnd = setEnd;

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` _end: QChar `
    ///
    pub fn setEnd(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, _end: anytype) void {
        comptime _ = @TypeOf(_end)._is_QChar;
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetEnd(@ptrCast(self.ptr), @ptrCast(_end.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn isEmpty(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn fromString(str: []const u8) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_FromString(str_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn delete(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
pub const TextAutoCorrectionCore__AutoCorrectionUtils = extern struct {
    /// ### DEPRECATED: Use `typographicDefaultSingleQuotes` instead
    ///
    pub const TypographicDefaultSingleQuotes = typographicDefaultSingleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    pub fn typographicDefaultSingleQuotes() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultSingleQuotes() };
    }

    /// ### DEPRECATED: Use `typographicDefaultDoubleQuotes` instead
    ///
    pub const TypographicDefaultDoubleQuotes = typographicDefaultDoubleQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    pub fn typographicDefaultDoubleQuotes() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultDoubleQuotes() };
    }

    /// ### DEPRECATED: Use `typographicDefaultFrenchQuotes` instead
    ///
    pub const TypographicDefaultFrenchQuotes = typographicDefaultFrenchQuotes;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    pub fn typographicDefaultFrenchQuotes() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultFrenchQuotes() };
    }

    /// ### DEPRECATED: Use `libreofficeFile` instead
    ///
    pub const LibreofficeFile = libreofficeFile;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn libreofficeFile(allocator: std.mem.Allocator, lang: []const u8) []const u8 {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreofficeFile(lang_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.libreofficeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `libreOfficeAutoCorrectionPath` instead
    ///
    pub const LibreOfficeAutoCorrectionPath = libreOfficeAutoCorrectionPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn libreOfficeAutoCorrectionPath(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeAutoCorrectionPath();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.libreOfficeAutoCorrectionPath: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.libreOfficeAutoCorrectionPath: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `searchAutoCorrectLibreOfficeFiles` instead
    ///
    pub const SearchAutoCorrectLibreOfficeFiles = searchAutoCorrectLibreOfficeFiles;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchAutoCorrectLibreOfficeFiles(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_SearchAutoCorrectLibreOfficeFiles();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.searchAutoCorrectLibreOfficeFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.searchAutoCorrectLibreOfficeFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `autoCorrectLibreOfficeLanguageToString` instead
    ///
    pub const AutoCorrectLibreOfficeLanguageToString = autoCorrectLibreOfficeLanguageToString;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` langs: []const []const u8 `
    ///
    pub fn autoCorrectLibreOfficeLanguageToString(allocator: std.mem.Allocator, langs: []const []const u8) []const []const u8 {
        const langs_arr = allocator.alloc(qtc.libqt_string, langs.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.autoCorrectLibreOfficeLanguageToString: Memory allocation failed");
        defer allocator.free(langs_arr);
        for (langs, 0..langs.len) |str_item, i|
            langs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const langs_list = qtc.libqt_list{
            .len = langs.len,
            .data = langs_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_AutoCorrectLibreOfficeLanguageToString(langs_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.autoCorrectLibreOfficeLanguageToString: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.autoCorrectLibreOfficeLanguageToString: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `libreOfficeWritableLocalAutoCorrectionPath` instead
    ///
    pub const LibreOfficeWritableLocalAutoCorrectionPath = libreOfficeWritableLocalAutoCorrectionPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn libreOfficeWritableLocalAutoCorrectionPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeWritableLocalAutoCorrectionPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.libreOfficeWritableLocalAutoCorrectionPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `containsAutoCorrectionFile` instead
    ///
    pub const ContainsAutoCorrectionFile = containsAutoCorrectionFile;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lang: []const u8 `
    ///
    /// ` customSystemPath: []const u8 `
    ///
    /// ` customWritablePath: []const u8 `
    ///
    pub fn containsAutoCorrectionFile(allocator: std.mem.Allocator, lang: []const u8, customSystemPath: []const u8, customWritablePath: []const u8) []const u8 {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        const customSystemPath_str = qtc.libqt_string{
            .len = customSystemPath.len,
            .data = customSystemPath.ptr,
        };
        const customWritablePath_str = qtc.libqt_string{
            .len = customWritablePath.len,
            .data = customWritablePath.ptr,
        };
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_ContainsAutoCorrectionFile(lang_str, customSystemPath_str, customWritablePath_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.containsAutoCorrectionFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `libreOfficeSystemPath` instead
    ///
    pub const LibreOfficeSystemPath = libreOfficeSystemPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn libreOfficeSystemPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeSystemPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.libreOfficeSystemPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `libreOfficeLocalPath` instead
    ///
    pub const LibreOfficeLocalPath = libreOfficeLocalPath;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn libreOfficeLocalPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeLocalPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.libreOfficeLocalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wordsFromSentence` instead
    ///
    pub const WordsFromSentence = wordsFromSentence;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn wordsFromSentence(allocator: std.mem.Allocator, string: []const u8) []const []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const _arr: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_WordsFromSentence(string_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.wordsFromSentence: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextAutoCorrectionCore__AutoCorrectionUtils.wordsFromSentence: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
