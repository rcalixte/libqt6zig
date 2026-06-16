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

    /// New constructs a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn New(other: anytype) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        comptime _ = @TypeOf(other)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object and invalidates the source TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn New2(other: anytype) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        comptime _ = @TypeOf(other)._is_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes;
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn CopyAssign(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn MoveAssign(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, other: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn Begin(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) QChar {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Begin(@ptrCast(self.ptr)) };
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` begin: QChar `
    ///
    pub fn SetBegin(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, begin: anytype) void {
        comptime _ = @TypeOf(begin)._is_QChar;
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetBegin(@ptrCast(self.ptr), @ptrCast(begin.ptr));
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn End(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) QChar {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_End(@ptrCast(self.ptr)) };
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` end: QChar `
    ///
    pub fn SetEnd(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, end: anytype) void {
        comptime _ = @TypeOf(end)._is_QChar;
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetEnd(@ptrCast(self.ptr), @ptrCast(end.ptr));
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionutils__typographicquotes.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn IsEmpty(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) bool {
        return qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_IsEmpty(@ptrCast(self.ptr));
    }

    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn FromString(str: []const u8) TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_FromString(str_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes `
    ///
    pub fn Delete(self: TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes) void {
        qtc.TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
pub const TextAutoCorrectionCore__AutoCorrectionUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    pub fn TypographicDefaultSingleQuotes() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultSingleQuotes() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    pub fn TypographicDefaultDoubleQuotes() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultDoubleQuotes() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    pub fn TypographicDefaultFrenchQuotes() TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultFrenchQuotes() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lang: []const u8 `
    ///
    pub fn LibreofficeFile(allocator: std.mem.Allocator, lang: []const u8) []const u8 {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreofficeFile(lang_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionutils.LibreofficeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LibreOfficeAutoCorrectionPath(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeAutoCorrectionPath();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textautocorrectioncore__autocorrectionutils.LibreOfficeAutoCorrectionPath: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textautocorrectioncore__autocorrectionutils.LibreOfficeAutoCorrectionPath: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchAutoCorrectLibreOfficeFiles(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_SearchAutoCorrectLibreOfficeFiles();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textautocorrectioncore__autocorrectionutils.SearchAutoCorrectLibreOfficeFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textautocorrectioncore__autocorrectionutils.SearchAutoCorrectLibreOfficeFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` langs: []const []const u8 `
    ///
    pub fn AutoCorrectLibreOfficeLanguageToString(allocator: std.mem.Allocator, langs: []const []const u8) []const []const u8 {
        const langs_arr = allocator.alloc(qtc.libqt_string, langs.len) catch @panic("textautocorrectioncore__autocorrectionutils.AutoCorrectLibreOfficeLanguageToString: Memory allocation failed");
        defer allocator.free(langs_arr);
        for (langs, 0..langs.len) |item, i|
            langs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textautocorrectioncore__autocorrectionutils.AutoCorrectLibreOfficeLanguageToString: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textautocorrectioncore__autocorrectionutils.AutoCorrectLibreOfficeLanguageToString: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LibreOfficeWritableLocalAutoCorrectionPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeWritableLocalAutoCorrectionPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionutils.LibreOfficeWritableLocalAutoCorrectionPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ContainsAutoCorrectionFile(allocator: std.mem.Allocator, lang: []const u8, customSystemPath: []const u8, customWritablePath: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionutils.ContainsAutoCorrectionFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LibreOfficeSystemPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeSystemPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionutils.LibreOfficeSystemPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LibreOfficeLocalPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeLocalPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textautocorrectioncore__autocorrectionutils.LibreOfficeLocalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn WordsFromSentence(allocator: std.mem.Allocator, string: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textautocorrectioncore__autocorrectionutils.WordsFromSentence: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textautocorrectioncore__autocorrectionutils.WordsFromSentence: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
