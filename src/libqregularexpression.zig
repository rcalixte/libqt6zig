const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qregularexpression_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)
pub const QRegularExpression = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRegularExpression,

    pub const _is_QRegularExpression = {};

    /// New constructs a new QRegularExpression object.
    ///
    pub fn New() QRegularExpression {
        return .{ .ptr = qtc.QRegularExpression_new() };
    }

    /// New2 constructs a new QRegularExpression object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn New2(pattern: []const u8) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_new2(pattern_str) };
    }

    /// New3 constructs a new QRegularExpression object.
    ///
    /// ## Parameter(s):
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn New3(re: anytype) QRegularExpression {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return .{ .ptr = qtc.QRegularExpression_new3(@ptrCast(re.ptr)) };
    }

    /// New4 constructs a new QRegularExpression object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` options: flag of qregularexpression_enums.PatternOption `
    ///
    pub fn New4(pattern: []const u8, options: i32) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_new4(pattern_str, @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#patternOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ## Returns:
    ///
    /// ` flag of qregularexpression_enums.PatternOption `
    ///
    pub fn PatternOptions(self: QRegularExpression) i32 {
        return qtc.QRegularExpression_PatternOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#setPatternOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` options: flag of qregularexpression_enums.PatternOption `
    ///
    pub fn SetPatternOptions(self: QRegularExpression, options: i32) void {
        qtc.QRegularExpression_SetPatternOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn OperatorAssign(self: QRegularExpression, re: anytype) void {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        qtc.QRegularExpression_OperatorAssign(@ptrCast(self.ptr), @ptrCast(re.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` other: QRegularExpression `
    ///
    pub fn Swap(self: QRegularExpression, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegularExpression;
        qtc.QRegularExpression_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: QRegularExpression, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpression_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetPattern(self: QRegularExpression, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QRegularExpression_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn IsValid(self: QRegularExpression) bool {
        return qtc.QRegularExpression_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#patternErrorOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn PatternErrorOffset(self: QRegularExpression) isize {
        return qtc.QRegularExpression_PatternErrorOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QRegularExpression, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpression_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#captureCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn CaptureCount(self: QRegularExpression) i32 {
        return qtc.QRegularExpression_CaptureCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#namedCaptureGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamedCaptureGroups(self: QRegularExpression, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QRegularExpression_NamedCaptureGroups(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn Match(self: QRegularExpression, subject: []const u8) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match(@ptrCast(self.ptr), subject_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn GlobalMatch(self: QRegularExpression, subject: []const u8) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch(@ptrCast(self.ptr), subject_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#optimize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn Optimize(self: QRegularExpression) void {
        qtc.QRegularExpression_Optimize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#escape)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Escape(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_Escape(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.Escape: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn WildcardToRegularExpression(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_WildcardToRegularExpression(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.WildcardToRegularExpression: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expression: []const u8 `
    ///
    pub fn AnchoredPattern(allocator: std.mem.Allocator, expression: []const u8) []const u8 {
        const expression_str = qtc.libqt_string{
            .len = expression.len,
            .data = expression.ptr,
        };
        var _str = qtc.QRegularExpression_AnchoredPattern(expression_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.AnchoredPattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` offset: isize `
    ///
    pub fn Match22(self: QRegularExpression, subject: []const u8, offset: isize) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match22(@ptrCast(self.ptr), subject_str, @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    pub fn Match3(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match3(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    /// ` matchOptions: flag of qregularexpression_enums.MatchOption `
    ///
    pub fn Match4(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match4(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` offset: isize `
    ///
    pub fn GlobalMatch22(self: QRegularExpression, subject: []const u8, offset: isize) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch22(@ptrCast(self.ptr), subject_str, @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    pub fn GlobalMatch3(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch3(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    /// ` matchOptions: flag of qregularexpression_enums.MatchOption `
    ///
    pub fn GlobalMatch4(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch4(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` options: flag of qregularexpression_enums.WildcardConversionOption `
    ///
    pub fn WildcardToRegularExpression22(allocator: std.mem.Allocator, str: []const u8, options: i32) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_WildcardToRegularExpression22(str_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.WildcardToRegularExpression22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#dtor.QRegularExpression)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn Delete(self: QRegularExpression) void {
        qtc.QRegularExpression_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html)
pub const QRegularExpressionMatch = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRegularExpressionMatch,

    pub const _is_QRegularExpressionMatch = {};

    /// New constructs a new QRegularExpressionMatch object.
    ///
    pub fn New() QRegularExpressionMatch {
        return .{ .ptr = qtc.QRegularExpressionMatch_new() };
    }

    /// New2 constructs a new QRegularExpressionMatch object.
    ///
    /// ## Parameter(s):
    ///
    /// ` match: QRegularExpressionMatch `
    ///
    pub fn New2(match: anytype) QRegularExpressionMatch {
        comptime _ = @TypeOf(match)._is_QRegularExpressionMatch;
        return .{ .ptr = qtc.QRegularExpressionMatch_new2(@ptrCast(match.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` match: QRegularExpressionMatch `
    ///
    pub fn OperatorAssign(self: QRegularExpressionMatch, match: anytype) void {
        comptime _ = @TypeOf(match)._is_QRegularExpressionMatch;
        qtc.QRegularExpressionMatch_OperatorAssign(@ptrCast(self.ptr), @ptrCast(match.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` other: QRegularExpressionMatch `
    ///
    pub fn Swap(self: QRegularExpressionMatch, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegularExpressionMatch;
        qtc.QRegularExpressionMatch_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#regularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn RegularExpression(self: QRegularExpressionMatch) QRegularExpression {
        return .{ .ptr = qtc.QRegularExpressionMatch_RegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ## Returns:
    ///
    /// ` qregularexpression_enums.MatchType `
    ///
    pub fn MatchType(self: QRegularExpressionMatch) i32 {
        return qtc.QRegularExpressionMatch_MatchType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ## Returns:
    ///
    /// ` flag of qregularexpression_enums.MatchOption `
    ///
    pub fn MatchOptions(self: QRegularExpressionMatch) i32 {
        return qtc.QRegularExpressionMatch_MatchOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn HasMatch(self: QRegularExpressionMatch) bool {
        return qtc.QRegularExpressionMatch_HasMatch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasPartialMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn HasPartialMatch(self: QRegularExpressionMatch) bool {
        return qtc.QRegularExpressionMatch_HasPartialMatch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn IsValid(self: QRegularExpressionMatch) bool {
        return qtc.QRegularExpressionMatch_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#lastCapturedIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn LastCapturedIndex(self: QRegularExpressionMatch) i32 {
        return qtc.QRegularExpressionMatch_LastCapturedIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasCaptured(self: QRegularExpressionMatch, name: []const u8) bool {
        return qtc.QRegularExpressionMatch_HasCaptured(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn HasCaptured2(self: QRegularExpressionMatch, nth: i32) bool {
        return qtc.QRegularExpressionMatch_HasCaptured2(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Captured(self: QRegularExpressionMatch, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpressionMatch_Captured(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Captured2(self: QRegularExpressionMatch, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        var _str = qtc.QRegularExpressionMatch_Captured2(@ptrCast(self.ptr), name.ptr);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedTexts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CapturedTexts(self: QRegularExpressionMatch, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QRegularExpressionMatch_CapturedTexts(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn CapturedStart(self: QRegularExpressionMatch) isize {
        return qtc.QRegularExpressionMatch_CapturedStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn CapturedLength(self: QRegularExpressionMatch) isize {
        return qtc.QRegularExpressionMatch_CapturedLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn CapturedEnd(self: QRegularExpressionMatch) isize {
        return qtc.QRegularExpressionMatch_CapturedEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CapturedStart2(self: QRegularExpressionMatch, name: []const u8) isize {
        return qtc.QRegularExpressionMatch_CapturedStart2(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CapturedLength2(self: QRegularExpressionMatch, name: []const u8) isize {
        return qtc.QRegularExpressionMatch_CapturedLength2(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CapturedEnd2(self: QRegularExpressionMatch, name: []const u8) isize {
        return qtc.QRegularExpressionMatch_CapturedEnd2(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` nth: i32 `
    ///
    pub fn Captured1(self: QRegularExpressionMatch, allocator: std.mem.Allocator, nth: i32) []const u8 {
        var _str = qtc.QRegularExpressionMatch_Captured1(@ptrCast(self.ptr), @bitCast(nth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn CapturedStart1(self: QRegularExpressionMatch, nth: i32) isize {
        return qtc.QRegularExpressionMatch_CapturedStart1(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn CapturedLength1(self: QRegularExpressionMatch, nth: i32) isize {
        return qtc.QRegularExpressionMatch_CapturedLength1(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn CapturedEnd1(self: QRegularExpressionMatch, nth: i32) isize {
        return qtc.QRegularExpressionMatch_CapturedEnd1(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#dtor.QRegularExpressionMatch)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn Delete(self: QRegularExpressionMatch) void {
        qtc.QRegularExpressionMatch_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html)
pub const QRegularExpressionMatchIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRegularExpressionMatchIterator,

    pub const _is_QRegularExpressionMatchIterator = {};

    /// New constructs a new QRegularExpressionMatchIterator object.
    ///
    pub fn New() QRegularExpressionMatchIterator {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_new() };
    }

    /// New2 constructs a new QRegularExpressionMatchIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iterator: QRegularExpressionMatchIterator `
    ///
    pub fn New2(iterator: anytype) QRegularExpressionMatchIterator {
        comptime _ = @TypeOf(iterator)._is_QRegularExpressionMatchIterator;
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_new2(@ptrCast(iterator.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    /// ` iterator: QRegularExpressionMatchIterator `
    ///
    pub fn OperatorAssign(self: QRegularExpressionMatchIterator, iterator: anytype) void {
        comptime _ = @TypeOf(iterator)._is_QRegularExpressionMatchIterator;
        qtc.QRegularExpressionMatchIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(iterator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    /// ` other: QRegularExpressionMatchIterator `
    ///
    pub fn Swap(self: QRegularExpressionMatchIterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegularExpressionMatchIterator;
        qtc.QRegularExpressionMatchIterator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn IsValid(self: QRegularExpressionMatchIterator) bool {
        return qtc.QRegularExpressionMatchIterator_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn HasNext(self: QRegularExpressionMatchIterator) bool {
        return qtc.QRegularExpressionMatchIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn Next(self: QRegularExpressionMatchIterator) QRegularExpressionMatch {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_Next(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#peekNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn PeekNext(self: QRegularExpressionMatchIterator) QRegularExpressionMatch {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_PeekNext(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#regularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn RegularExpression(self: QRegularExpressionMatchIterator) QRegularExpression {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_RegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    /// ## Returns:
    ///
    /// ` qregularexpression_enums.MatchType `
    ///
    pub fn MatchType(self: QRegularExpressionMatchIterator) i32 {
        return qtc.QRegularExpressionMatchIterator_MatchType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qregularexpression_enums.MatchOption `
    ///
    pub fn MatchOptions(self: QRegularExpressionMatchIterator) i32 {
        return qtc.QRegularExpressionMatchIterator_MatchOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#dtor.QRegularExpressionMatchIterator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn Delete(self: QRegularExpressionMatchIterator) void {
        qtc.QRegularExpressionMatchIterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#public-types)
pub const enums = struct {
    pub const PatternOption = enum(i32) {
        pub const NoPatternOption: i32 = 0;
        pub const CaseInsensitiveOption: i32 = 1;
        pub const DotMatchesEverythingOption: i32 = 2;
        pub const MultilineOption: i32 = 4;
        pub const ExtendedPatternSyntaxOption: i32 = 8;
        pub const InvertedGreedinessOption: i32 = 16;
        pub const DontCaptureOption: i32 = 32;
        pub const UseUnicodePropertiesOption: i32 = 64;
    };

    pub const MatchType = enum(i32) {
        pub const NormalMatch: i32 = 0;
        pub const PartialPreferCompleteMatch: i32 = 1;
        pub const PartialPreferFirstMatch: i32 = 2;
        pub const NoMatch: i32 = 3;
    };

    pub const MatchOption = enum(i32) {
        pub const NoMatchOption: i32 = 0;
        pub const AnchorAtOffsetMatchOption: i32 = 1;
        pub const AnchoredMatchOption: i32 = 1;
        pub const DontCheckSubjectStringMatchOption: i32 = 2;
    };

    pub const WildcardConversionOption = enum(i32) {
        pub const DefaultWildcardConversion: i32 = 0;
        pub const UnanchoredWildcardConversion: i32 = 1;
        pub const NonPathWildcardConversion: i32 = 2;
    };
};
