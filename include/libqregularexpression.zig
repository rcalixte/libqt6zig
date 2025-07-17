const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qregularexpression_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qregularexpression.html
pub const qregularexpression = struct {
    /// New constructs a new QRegularExpression object.
    ///
    ///
    pub fn New() QtC.QRegularExpression {
        return qtc.QRegularExpression_new();
    }

    /// New2 constructs a new QRegularExpression object.
    ///
    /// ``` pattern: []const u8 ```
    pub fn New2(pattern: []const u8) QtC.QRegularExpression {
        const pattern_str = qtc.struct_libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.QRegularExpression_new2(pattern_str);
    }

    /// New3 constructs a new QRegularExpression object.
    ///
    /// ``` re: QtC.QRegularExpression ```
    pub fn New3(re: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QRegularExpression_new3(@ptrCast(re));
    }

    /// New4 constructs a new QRegularExpression object.
    ///
    /// ``` pattern: []const u8, options: i32 ```
    pub fn New4(pattern: []const u8, options: i64) QtC.QRegularExpression {
        const pattern_str = qtc.struct_libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.QRegularExpression_new4(pattern_str, @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#patternOptions)
    ///
    /// ``` self: QtC.QRegularExpression ```
    pub fn PatternOptions(self: ?*anyopaque) i64 {
        return qtc.QRegularExpression_PatternOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#setPatternOptions)
    ///
    /// ``` self: QtC.QRegularExpression, options: i32 ```
    pub fn SetPatternOptions(self: ?*anyopaque, options: i64) void {
        qtc.QRegularExpression_SetPatternOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#operator-eq)
    ///
    /// ``` self: QtC.QRegularExpression, re: QtC.QRegularExpression ```
    pub fn OperatorAssign(self: ?*anyopaque, re: ?*anyopaque) void {
        qtc.QRegularExpression_OperatorAssign(@ptrCast(self), @ptrCast(re));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#swap)
    ///
    /// ``` self: QtC.QRegularExpression, other: QtC.QRegularExpression ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegularExpression_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#pattern)
    ///
    /// ``` self: QtC.QRegularExpression, allocator: std.mem.Allocator ```
    pub fn Pattern(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpression_Pattern(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#setPattern)
    ///
    /// ``` self: QtC.QRegularExpression, pattern: []const u8 ```
    pub fn SetPattern(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.struct_libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QRegularExpression_SetPattern(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#isValid)
    ///
    /// ``` self: QtC.QRegularExpression ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRegularExpression_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#patternErrorOffset)
    ///
    /// ``` self: QtC.QRegularExpression ```
    pub fn PatternErrorOffset(self: ?*anyopaque) i64 {
        return qtc.QRegularExpression_PatternErrorOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#errorString)
    ///
    /// ``` self: QtC.QRegularExpression, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpression_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#captureCount)
    ///
    /// ``` self: QtC.QRegularExpression ```
    pub fn CaptureCount(self: ?*anyopaque) i32 {
        return qtc.QRegularExpression_CaptureCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#namedCaptureGroups)
    ///
    /// ``` self: QtC.QRegularExpression, allocator: std.mem.Allocator ```
    pub fn NamedCaptureGroups(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QRegularExpression_NamedCaptureGroups(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qregularexpression.NamedCaptureGroups: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qregularexpression.NamedCaptureGroups: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8 ```
    pub fn Match(self: ?*anyopaque, subject: []const u8) QtC.QRegularExpressionMatch {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_Match(@ptrCast(self), subject_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8 ```
    pub fn GlobalMatch(self: ?*anyopaque, subject: []const u8) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_GlobalMatch(@ptrCast(self), subject_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#optimize)
    ///
    /// ``` self: QtC.QRegularExpression ```
    pub fn Optimize(self: ?*anyopaque) void {
        qtc.QRegularExpression_Optimize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#escape)
    ///
    /// ``` str: []const u8, allocator: std.mem.Allocator ```
    pub fn Escape(str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QRegularExpression_Escape(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.Escape: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
    ///
    /// ``` str: []const u8, allocator: std.mem.Allocator ```
    pub fn WildcardToRegularExpression(str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QRegularExpression_WildcardToRegularExpression(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.WildcardToRegularExpression: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
    ///
    /// ``` expression: []const u8, allocator: std.mem.Allocator ```
    pub fn AnchoredPattern(expression: []const u8, allocator: std.mem.Allocator) []const u8 {
        const expression_str = qtc.struct_libqt_string{
            .len = expression.len,
            .data = expression.ptr,
        };
        const _str = qtc.QRegularExpression_AnchoredPattern(expression_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.AnchoredPattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8, offset: i64 ```
    pub fn Match22(self: ?*anyopaque, subject: []const u8, offset: i64) QtC.QRegularExpressionMatch {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_Match22(@ptrCast(self), subject_str, @intCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8, offset: i64, matchType: qregularexpression_enums.MatchType ```
    pub fn Match3(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i64) QtC.QRegularExpressionMatch {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_Match3(@ptrCast(self), subject_str, @intCast(offset), @intCast(matchType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8, offset: i64, matchType: qregularexpression_enums.MatchType, matchOptions: i32 ```
    pub fn Match4(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i64, matchOptions: i64) QtC.QRegularExpressionMatch {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_Match4(@ptrCast(self), subject_str, @intCast(offset), @intCast(matchType), @intCast(matchOptions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8, offset: i64 ```
    pub fn GlobalMatch22(self: ?*anyopaque, subject: []const u8, offset: i64) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_GlobalMatch22(@ptrCast(self), subject_str, @intCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8, offset: i64, matchType: qregularexpression_enums.MatchType ```
    pub fn GlobalMatch3(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i64) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_GlobalMatch3(@ptrCast(self), subject_str, @intCast(offset), @intCast(matchType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ``` self: QtC.QRegularExpression, subject: []const u8, offset: i64, matchType: qregularexpression_enums.MatchType, matchOptions: i32 ```
    pub fn GlobalMatch4(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i64, matchOptions: i64) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.struct_libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return qtc.QRegularExpression_GlobalMatch4(@ptrCast(self), subject_str, @intCast(offset), @intCast(matchType), @intCast(matchOptions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
    ///
    /// ``` str: []const u8, options: i32, allocator: std.mem.Allocator ```
    pub fn WildcardToRegularExpression22(str: []const u8, options: i64, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QRegularExpression_WildcardToRegularExpression22(str_str, @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.WildcardToRegularExpression22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#dtor.QRegularExpression)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRegularExpression ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpression_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregularexpressionmatch.html
pub const qregularexpressionmatch = struct {
    /// New constructs a new QRegularExpressionMatch object.
    ///
    ///
    pub fn New() QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatch_new();
    }

    /// New2 constructs a new QRegularExpressionMatch object.
    ///
    /// ``` match: QtC.QRegularExpressionMatch ```
    pub fn New2(match: ?*anyopaque) QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatch_new2(@ptrCast(match));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#operator-eq)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, match: QtC.QRegularExpressionMatch ```
    pub fn OperatorAssign(self: ?*anyopaque, match: ?*anyopaque) void {
        qtc.QRegularExpressionMatch_OperatorAssign(@ptrCast(self), @ptrCast(match));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#swap)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, other: QtC.QRegularExpressionMatch ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegularExpressionMatch_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#regularExpression)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn RegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QRegularExpressionMatch_RegularExpression(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchType)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn MatchType(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatch_MatchType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchOptions)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn MatchOptions(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatch_MatchOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasMatch)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn HasMatch(self: ?*anyopaque) bool {
        return qtc.QRegularExpressionMatch_HasMatch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasPartialMatch)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn HasPartialMatch(self: ?*anyopaque) bool {
        return qtc.QRegularExpressionMatch_HasPartialMatch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#isValid)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRegularExpressionMatch_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#lastCapturedIndex)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn LastCapturedIndex(self: ?*anyopaque) i32 {
        return qtc.QRegularExpressionMatch_LastCapturedIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, name: []const u8 ```
    pub fn HasCaptured(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_HasCaptured(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, nth: i32 ```
    pub fn HasCaptured2(self: ?*anyopaque, nth: i32) bool {
        return qtc.QRegularExpressionMatch_HasCaptured2(@ptrCast(self), @intCast(nth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, allocator: std.mem.Allocator ```
    pub fn Captured(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionMatch_Captured(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Captured2(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QRegularExpressionMatch_Captured2(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedTexts)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, allocator: std.mem.Allocator ```
    pub fn CapturedTexts(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QRegularExpressionMatch_CapturedTexts(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qregularexpressionmatch.CapturedTexts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qregularexpressionmatch.CapturedTexts: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn CapturedStart(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatch_CapturedStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn CapturedLength(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatch_CapturedLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn CapturedEnd(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatch_CapturedEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, name: []const u8 ```
    pub fn CapturedStart2(self: ?*anyopaque, name: []const u8) i64 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_CapturedStart2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, name: []const u8 ```
    pub fn CapturedLength2(self: ?*anyopaque, name: []const u8) i64 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_CapturedLength2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, name: []const u8 ```
    pub fn CapturedEnd2(self: ?*anyopaque, name: []const u8) i64 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_CapturedEnd2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, nth: i32, allocator: std.mem.Allocator ```
    pub fn Captured1(self: ?*anyopaque, nth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionMatch_Captured1(@ptrCast(self), @intCast(nth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, nth: i32 ```
    pub fn CapturedStart1(self: ?*anyopaque, nth: i32) i64 {
        return qtc.QRegularExpressionMatch_CapturedStart1(@ptrCast(self), @intCast(nth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, nth: i32 ```
    pub fn CapturedLength1(self: ?*anyopaque, nth: i32) i64 {
        return qtc.QRegularExpressionMatch_CapturedLength1(@ptrCast(self), @intCast(nth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ``` self: QtC.QRegularExpressionMatch, nth: i32 ```
    pub fn CapturedEnd1(self: ?*anyopaque, nth: i32) i64 {
        return qtc.QRegularExpressionMatch_CapturedEnd1(@ptrCast(self), @intCast(nth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#dtor.QRegularExpressionMatch)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRegularExpressionMatch ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpressionMatch_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html
pub const qregularexpressionmatchiterator = struct {
    /// New constructs a new QRegularExpressionMatchIterator object.
    ///
    ///
    pub fn New() QtC.QRegularExpressionMatchIterator {
        return qtc.QRegularExpressionMatchIterator_new();
    }

    /// New2 constructs a new QRegularExpressionMatchIterator object.
    ///
    /// ``` iterator: QtC.QRegularExpressionMatchIterator ```
    pub fn New2(iterator: ?*anyopaque) QtC.QRegularExpressionMatchIterator {
        return qtc.QRegularExpressionMatchIterator_new2(@ptrCast(iterator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#operator-eq)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator, iterator: QtC.QRegularExpressionMatchIterator ```
    pub fn OperatorAssign(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QRegularExpressionMatchIterator_OperatorAssign(@ptrCast(self), @ptrCast(iterator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#swap)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator, other: QtC.QRegularExpressionMatchIterator ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegularExpressionMatchIterator_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#isValid)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRegularExpressionMatchIterator_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#hasNext)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn HasNext(self: ?*anyopaque) bool {
        return qtc.QRegularExpressionMatchIterator_HasNext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#next)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn Next(self: ?*anyopaque) QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatchIterator_Next(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#peekNext)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn PeekNext(self: ?*anyopaque) QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatchIterator_PeekNext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#regularExpression)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn RegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QRegularExpressionMatchIterator_RegularExpression(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchType)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn MatchType(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatchIterator_MatchType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchOptions)
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn MatchOptions(self: ?*anyopaque) i64 {
        return qtc.QRegularExpressionMatchIterator_MatchOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#dtor.QRegularExpressionMatchIterator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRegularExpressionMatchIterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpressionMatchIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregularexpression.html#types
pub const enums = struct {
    pub const PatternOption = enum {
        pub const NoPatternOption: i32 = 0;
        pub const CaseInsensitiveOption: i32 = 1;
        pub const DotMatchesEverythingOption: i32 = 2;
        pub const MultilineOption: i32 = 4;
        pub const ExtendedPatternSyntaxOption: i32 = 8;
        pub const InvertedGreedinessOption: i32 = 16;
        pub const DontCaptureOption: i32 = 32;
        pub const UseUnicodePropertiesOption: i32 = 64;
    };

    pub const MatchType = enum {
        pub const NormalMatch: i32 = 0;
        pub const PartialPreferCompleteMatch: i32 = 1;
        pub const PartialPreferFirstMatch: i32 = 2;
        pub const NoMatch: i32 = 3;
    };

    pub const MatchOption = enum {
        pub const NoMatchOption: i32 = 0;
        pub const AnchorAtOffsetMatchOption: i32 = 1;
        pub const AnchoredMatchOption: i32 = 1;
        pub const DontCheckSubjectStringMatchOption: i32 = 2;
    };

    pub const WildcardConversionOption = enum {
        pub const DefaultWildcardConversion: i32 = 0;
        pub const UnanchoredWildcardConversion: i32 = 1;
        pub const NonPathWildcardConversion: i32 = 2;
    };
};
