const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRegularExpression object in C++ memory
    ///
    pub fn new() QRegularExpression {
        return .{ .ptr = qtc.QRegularExpression_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRegularExpression object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn new2(_pattern: []const u8) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_new2(pattern_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRegularExpression object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn new3(re: anytype) QRegularExpression {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return .{ .ptr = qtc.QRegularExpression_new3(@ptrCast(re.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRegularExpression object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` options: flag of qregularexpression_enums.PatternOption `
    ///
    pub fn new4(_pattern: []const u8, options: i32) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_new4(pattern_str, @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `patternOptions` instead
    ///
    pub const PatternOptions = patternOptions;

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
    pub fn patternOptions(self: QRegularExpression) i32 {
        return qtc.QRegularExpression_PatternOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPatternOptions` instead
    ///
    pub const SetPatternOptions = setPatternOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#setPatternOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` options: flag of qregularexpression_enums.PatternOption `
    ///
    pub fn setPatternOptions(self: QRegularExpression, options: i32) void {
        qtc.QRegularExpression_SetPatternOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn operatorAssign(self: QRegularExpression, re: anytype) void {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        qtc.QRegularExpression_OperatorAssign(@ptrCast(self.ptr), @ptrCast(re.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` other: QRegularExpression `
    ///
    pub fn swap(self: QRegularExpression, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegularExpression;
        qtc.QRegularExpression_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `pattern` instead
    ///
    pub const Pattern = pattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pattern(self: QRegularExpression, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpression_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPattern` instead
    ///
    pub const SetPattern = setPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn setPattern(self: QRegularExpression, _pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        qtc.QRegularExpression_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn isValid(self: QRegularExpression) bool {
        return qtc.QRegularExpression_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `patternErrorOffset` instead
    ///
    pub const PatternErrorOffset = patternErrorOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#patternErrorOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn patternErrorOffset(self: QRegularExpression) isize {
        return qtc.QRegularExpression_PatternErrorOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QRegularExpression, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpression_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `captureCount` instead
    ///
    pub const CaptureCount = captureCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#captureCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn captureCount(self: QRegularExpression) i32 {
        return qtc.QRegularExpression_CaptureCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedCaptureGroups` instead
    ///
    pub const NamedCaptureGroups = namedCaptureGroups;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#namedCaptureGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn namedCaptureGroups(self: QRegularExpression, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QRegularExpression_NamedCaptureGroups(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QRegularExpression.namedCaptureGroups: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QRegularExpression.namedCaptureGroups: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn match(self: QRegularExpression, subject: []const u8) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match(@ptrCast(self.ptr), subject_str) };
    }

    /// ### DEPRECATED: Use `match2` instead
    ///
    pub const Match2 = match2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    pub fn match2(self: QRegularExpression, subjectView: []const u8) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match2(@ptrCast(self.ptr), subjectView_str) };
    }

    /// ### DEPRECATED: Use `matchView` instead
    ///
    pub const MatchView = matchView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    pub fn matchView(self: QRegularExpression, subjectView: []const u8) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_MatchView(@ptrCast(self.ptr), subjectView_str) };
    }

    /// ### DEPRECATED: Use `globalMatch` instead
    ///
    pub const GlobalMatch = globalMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn globalMatch(self: QRegularExpression, subject: []const u8) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch(@ptrCast(self.ptr), subject_str) };
    }

    /// ### DEPRECATED: Use `globalMatch2` instead
    ///
    pub const GlobalMatch2 = globalMatch2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    pub fn globalMatch2(self: QRegularExpression, subjectView: []const u8) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch2(@ptrCast(self.ptr), subjectView_str) };
    }

    /// ### DEPRECATED: Use `globalMatchView` instead
    ///
    pub const GlobalMatchView = globalMatchView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    pub fn globalMatchView(self: QRegularExpression, subjectView: []const u8) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatchView(@ptrCast(self.ptr), subjectView_str) };
    }

    /// ### DEPRECATED: Use `optimize` instead
    ///
    pub const Optimize = optimize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#optimize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn optimize(self: QRegularExpression) void {
        qtc.QRegularExpression_Optimize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `escape` instead
    ///
    pub const Escape = escape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#escape)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn escape(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_Escape(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.escape: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wildcardToRegularExpression` instead
    ///
    pub const WildcardToRegularExpression = wildcardToRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn wildcardToRegularExpression(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_WildcardToRegularExpression(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.wildcardToRegularExpression: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `anchoredPattern` instead
    ///
    pub const AnchoredPattern = anchoredPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expression: []const u8 `
    ///
    pub fn anchoredPattern(allocator: std.mem.Allocator, expression: []const u8) []const u8 {
        const expression_str = qtc.libqt_string{
            .len = expression.len,
            .data = expression.ptr,
        };
        var _str = qtc.QRegularExpression_AnchoredPattern(expression_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.anchoredPattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `escape2` instead
    ///
    pub const Escape2 = escape2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#escape)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn escape2(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_Escape2(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.escape2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wildcardToRegularExpression2` instead
    ///
    pub const WildcardToRegularExpression2 = wildcardToRegularExpression2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn wildcardToRegularExpression2(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_WildcardToRegularExpression2(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.wildcardToRegularExpression2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `anchoredPattern2` instead
    ///
    pub const AnchoredPattern2 = anchoredPattern2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` expression: []const u8 `
    ///
    pub fn anchoredPattern2(allocator: std.mem.Allocator, expression: []const u8) []const u8 {
        const expression_str = qtc.libqt_string{
            .len = expression.len,
            .data = expression.ptr,
        };
        var _str = qtc.QRegularExpression_AnchoredPattern2(expression_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.anchoredPattern2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromWildcard` instead
    ///
    pub const FromWildcard = fromWildcard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#fromWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn fromWildcard(_pattern: []const u8) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_FromWildcard(pattern_str) };
    }

    /// ### DEPRECATED: Use `match22` instead
    ///
    pub const Match22 = match22;

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
    pub fn match22(self: QRegularExpression, subject: []const u8, offset: isize) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match22(@ptrCast(self.ptr), subject_str, @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `match3` instead
    ///
    pub const Match3 = match3;

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
    pub fn match3(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match3(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### DEPRECATED: Use `match4` instead
    ///
    pub const Match4 = match4;

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
    pub fn match4(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match4(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### DEPRECATED: Use `match23` instead
    ///
    pub const Match23 = match23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    pub fn match23(self: QRegularExpression, subjectView: []const u8, offset: isize) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match23(@ptrCast(self.ptr), subjectView_str, @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `match32` instead
    ///
    pub const Match32 = match32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    pub fn match32(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match32(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### DEPRECATED: Use `match42` instead
    ///
    pub const Match42 = match42;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    /// ` matchOptions: flag of qregularexpression_enums.MatchOption `
    ///
    pub fn match42(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_Match42(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### DEPRECATED: Use `matchView2` instead
    ///
    pub const MatchView2 = matchView2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    pub fn matchView2(self: QRegularExpression, subjectView: []const u8, offset: isize) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_MatchView2(@ptrCast(self.ptr), subjectView_str, @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `matchView3` instead
    ///
    pub const MatchView3 = matchView3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    pub fn matchView3(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_MatchView3(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### DEPRECATED: Use `matchView4` instead
    ///
    pub const MatchView4 = matchView4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    /// ` matchOptions: flag of qregularexpression_enums.MatchOption `
    ///
    pub fn matchView4(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatch {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_MatchView4(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### DEPRECATED: Use `globalMatch22` instead
    ///
    pub const GlobalMatch22 = globalMatch22;

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
    pub fn globalMatch22(self: QRegularExpression, subject: []const u8, offset: isize) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch22(@ptrCast(self.ptr), subject_str, @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `globalMatch3` instead
    ///
    pub const GlobalMatch3 = globalMatch3;

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
    pub fn globalMatch3(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch3(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### DEPRECATED: Use `globalMatch4` instead
    ///
    pub const GlobalMatch4 = globalMatch4;

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
    pub fn globalMatch4(self: QRegularExpression, subject: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch4(@ptrCast(self.ptr), subject_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### DEPRECATED: Use `globalMatch23` instead
    ///
    pub const GlobalMatch23 = globalMatch23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    pub fn globalMatch23(self: QRegularExpression, subjectView: []const u8, offset: isize) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch23(@ptrCast(self.ptr), subjectView_str, @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `globalMatch32` instead
    ///
    pub const GlobalMatch32 = globalMatch32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    pub fn globalMatch32(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch32(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### DEPRECATED: Use `globalMatch42` instead
    ///
    pub const GlobalMatch42 = globalMatch42;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    /// ` matchOptions: flag of qregularexpression_enums.MatchOption `
    ///
    pub fn globalMatch42(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatch42(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### DEPRECATED: Use `globalMatchView2` instead
    ///
    pub const GlobalMatchView2 = globalMatchView2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    pub fn globalMatchView2(self: QRegularExpression, subjectView: []const u8, offset: isize) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatchView2(@ptrCast(self.ptr), subjectView_str, @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `globalMatchView3` instead
    ///
    pub const GlobalMatchView3 = globalMatchView3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    pub fn globalMatchView3(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatchView3(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType)) };
    }

    /// ### DEPRECATED: Use `globalMatchView4` instead
    ///
    pub const GlobalMatchView4 = globalMatchView4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpression `
    ///
    /// ` subjectView: []const u8 `
    ///
    /// ` offset: isize `
    ///
    /// ` matchType: qregularexpression_enums.MatchType `
    ///
    /// ` matchOptions: flag of qregularexpression_enums.MatchOption `
    ///
    pub fn globalMatchView4(self: QRegularExpression, subjectView: []const u8, offset: isize, matchType: i32, matchOptions: i32) QRegularExpressionMatchIterator {
        const subjectView_str = qtc.libqt_string{
            .len = subjectView.len,
            .data = subjectView.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_GlobalMatchView4(@ptrCast(self.ptr), subjectView_str, @bitCast(offset), @bitCast(matchType), @bitCast(matchOptions)) };
    }

    /// ### DEPRECATED: Use `wildcardToRegularExpression22` instead
    ///
    pub const WildcardToRegularExpression22 = wildcardToRegularExpression22;

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
    pub fn wildcardToRegularExpression22(allocator: std.mem.Allocator, str: []const u8, options: i32) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_WildcardToRegularExpression22(str_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.wildcardToRegularExpression22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wildcardToRegularExpression23` instead
    ///
    pub const WildcardToRegularExpression23 = wildcardToRegularExpression23;

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
    pub fn wildcardToRegularExpression23(allocator: std.mem.Allocator, str: []const u8, options: i32) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.QRegularExpression_WildcardToRegularExpression23(str_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpression.wildcardToRegularExpression23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromWildcard2` instead
    ///
    pub const FromWildcard2 = fromWildcard2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#fromWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn fromWildcard2(_pattern: []const u8, cs: i32) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_FromWildcard2(pattern_str, @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `fromWildcard3` instead
    ///
    pub const FromWildcard3 = fromWildcard3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#fromWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    /// ` options: flag of qregularexpression_enums.WildcardConversionOption `
    ///
    pub fn fromWildcard3(_pattern: []const u8, cs: i32, options: i32) QRegularExpression {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QRegularExpression_FromWildcard3(pattern_str, @bitCast(cs), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#dtor.QRegularExpression)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegularExpression `
    ///
    pub fn delete(self: QRegularExpression) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRegularExpressionMatch object in C++ memory
    ///
    pub fn new() QRegularExpressionMatch {
        return .{ .ptr = qtc.QRegularExpressionMatch_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRegularExpressionMatch object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _match: QRegularExpressionMatch `
    ///
    pub fn new2(_match: anytype) QRegularExpressionMatch {
        comptime _ = @TypeOf(_match)._is_QRegularExpressionMatch;
        return .{ .ptr = qtc.QRegularExpressionMatch_new2(@ptrCast(_match.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` _match: QRegularExpressionMatch `
    ///
    pub fn operatorAssign(self: QRegularExpressionMatch, _match: anytype) void {
        comptime _ = @TypeOf(_match)._is_QRegularExpressionMatch;
        qtc.QRegularExpressionMatch_OperatorAssign(@ptrCast(self.ptr), @ptrCast(_match.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` other: QRegularExpressionMatch `
    ///
    pub fn swap(self: QRegularExpressionMatch, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegularExpressionMatch;
        qtc.QRegularExpressionMatch_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `regularExpression` instead
    ///
    pub const RegularExpression = regularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#regularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn regularExpression(self: QRegularExpressionMatch) QRegularExpression {
        return .{ .ptr = qtc.QRegularExpressionMatch_RegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `matchType` instead
    ///
    pub const MatchType = matchType;

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
    pub fn matchType(self: QRegularExpressionMatch) i32 {
        return qtc.QRegularExpressionMatch_MatchType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `matchOptions` instead
    ///
    pub const MatchOptions = matchOptions;

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
    pub fn matchOptions(self: QRegularExpressionMatch) i32 {
        return qtc.QRegularExpressionMatch_MatchOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasMatch` instead
    ///
    pub const HasMatch = hasMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn hasMatch(self: QRegularExpressionMatch) bool {
        return qtc.QRegularExpressionMatch_HasMatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasPartialMatch` instead
    ///
    pub const HasPartialMatch = hasPartialMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasPartialMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn hasPartialMatch(self: QRegularExpressionMatch) bool {
        return qtc.QRegularExpressionMatch_HasPartialMatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn isValid(self: QRegularExpressionMatch) bool {
        return qtc.QRegularExpressionMatch_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastCapturedIndex` instead
    ///
    pub const LastCapturedIndex = lastCapturedIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#lastCapturedIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn lastCapturedIndex(self: QRegularExpressionMatch) i32 {
        return qtc.QRegularExpressionMatch_LastCapturedIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasCaptured` instead
    ///
    pub const HasCaptured = hasCaptured;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasCaptured(self: QRegularExpressionMatch, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_HasCaptured(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `hasCaptured2` instead
    ///
    pub const HasCaptured2 = hasCaptured2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn hasCaptured2(self: QRegularExpressionMatch, nth: i32) bool {
        return qtc.QRegularExpressionMatch_HasCaptured2(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### DEPRECATED: Use `captured` instead
    ///
    pub const Captured = captured;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn captured(self: QRegularExpressionMatch, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpressionMatch_Captured(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpressionMatch.captured: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capturedView` instead
    ///
    pub const CapturedView = capturedView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn capturedView(self: QRegularExpressionMatch, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRegularExpressionMatch_CapturedView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpressionMatch.capturedView: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `captured2` instead
    ///
    pub const Captured2 = captured2;

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
    pub fn captured2(self: QRegularExpressionMatch, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QRegularExpressionMatch_Captured2(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpressionMatch.captured2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capturedView2` instead
    ///
    pub const CapturedView2 = capturedView2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn capturedView2(self: QRegularExpressionMatch, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QRegularExpressionMatch_CapturedView2(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpressionMatch.capturedView2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capturedTexts` instead
    ///
    pub const CapturedTexts = capturedTexts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedTexts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn capturedTexts(self: QRegularExpressionMatch, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QRegularExpressionMatch_CapturedTexts(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QRegularExpressionMatch.capturedTexts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QRegularExpressionMatch.capturedTexts: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `capturedStart` instead
    ///
    pub const CapturedStart = capturedStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn capturedStart(self: QRegularExpressionMatch) isize {
        return qtc.QRegularExpressionMatch_CapturedStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capturedLength` instead
    ///
    pub const CapturedLength = capturedLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn capturedLength(self: QRegularExpressionMatch) isize {
        return qtc.QRegularExpressionMatch_CapturedLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capturedEnd` instead
    ///
    pub const CapturedEnd = capturedEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn capturedEnd(self: QRegularExpressionMatch) isize {
        return qtc.QRegularExpressionMatch_CapturedEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capturedStart2` instead
    ///
    pub const CapturedStart2 = capturedStart2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn capturedStart2(self: QRegularExpressionMatch, name: []const u8) isize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_CapturedStart2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `capturedLength2` instead
    ///
    pub const CapturedLength2 = capturedLength2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn capturedLength2(self: QRegularExpressionMatch, name: []const u8) isize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_CapturedLength2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `capturedEnd2` instead
    ///
    pub const CapturedEnd2 = capturedEnd2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn capturedEnd2(self: QRegularExpressionMatch, name: []const u8) isize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QRegularExpressionMatch_CapturedEnd2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `captured1` instead
    ///
    pub const Captured1 = captured1;

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
    pub fn captured1(self: QRegularExpressionMatch, allocator: std.mem.Allocator, nth: i32) []const u8 {
        var _str = qtc.QRegularExpressionMatch_Captured1(@ptrCast(self.ptr), @bitCast(nth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpressionMatch.captured1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capturedView1` instead
    ///
    pub const CapturedView1 = capturedView1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` nth: i32 `
    ///
    pub fn capturedView1(self: QRegularExpressionMatch, allocator: std.mem.Allocator, nth: i32) []const u8 {
        var _str = qtc.QRegularExpressionMatch_CapturedView1(@ptrCast(self.ptr), @bitCast(nth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRegularExpressionMatch.capturedView1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capturedStart1` instead
    ///
    pub const CapturedStart1 = capturedStart1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn capturedStart1(self: QRegularExpressionMatch, nth: i32) isize {
        return qtc.QRegularExpressionMatch_CapturedStart1(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### DEPRECATED: Use `capturedLength1` instead
    ///
    pub const CapturedLength1 = capturedLength1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn capturedLength1(self: QRegularExpressionMatch, nth: i32) isize {
        return qtc.QRegularExpressionMatch_CapturedLength1(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### DEPRECATED: Use `capturedEnd1` instead
    ///
    pub const CapturedEnd1 = capturedEnd1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    /// ` nth: i32 `
    ///
    pub fn capturedEnd1(self: QRegularExpressionMatch, nth: i32) isize {
        return qtc.QRegularExpressionMatch_CapturedEnd1(@ptrCast(self.ptr), @bitCast(nth));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#dtor.QRegularExpressionMatch)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegularExpressionMatch `
    ///
    pub fn delete(self: QRegularExpressionMatch) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRegularExpressionMatchIterator object in C++ memory
    ///
    pub fn new() QRegularExpressionMatchIterator {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRegularExpressionMatchIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iterator: QRegularExpressionMatchIterator `
    ///
    pub fn new2(iterator: anytype) QRegularExpressionMatchIterator {
        comptime _ = @TypeOf(iterator)._is_QRegularExpressionMatchIterator;
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_new2(@ptrCast(iterator.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    /// ` iterator: QRegularExpressionMatchIterator `
    ///
    pub fn operatorAssign(self: QRegularExpressionMatchIterator, iterator: anytype) void {
        comptime _ = @TypeOf(iterator)._is_QRegularExpressionMatchIterator;
        qtc.QRegularExpressionMatchIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(iterator.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    /// ` other: QRegularExpressionMatchIterator `
    ///
    pub fn swap(self: QRegularExpressionMatchIterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRegularExpressionMatchIterator;
        qtc.QRegularExpressionMatchIterator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn isValid(self: QRegularExpressionMatchIterator) bool {
        return qtc.QRegularExpressionMatchIterator_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasNext` instead
    ///
    pub const HasNext = hasNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn hasNext(self: QRegularExpressionMatchIterator) bool {
        return qtc.QRegularExpressionMatchIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn next(self: QRegularExpressionMatchIterator) QRegularExpressionMatch {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_Next(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peekNext` instead
    ///
    pub const PeekNext = peekNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#peekNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn peekNext(self: QRegularExpressionMatchIterator) QRegularExpressionMatch {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_PeekNext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `regularExpression` instead
    ///
    pub const RegularExpression = regularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#regularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn regularExpression(self: QRegularExpressionMatchIterator) QRegularExpression {
        return .{ .ptr = qtc.QRegularExpressionMatchIterator_RegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `matchType` instead
    ///
    pub const MatchType = matchType;

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
    pub fn matchType(self: QRegularExpressionMatchIterator) i32 {
        return qtc.QRegularExpressionMatchIterator_MatchType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `matchOptions` instead
    ///
    pub const MatchOptions = matchOptions;

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
    pub fn matchOptions(self: QRegularExpressionMatchIterator) i32 {
        return qtc.QRegularExpressionMatchIterator_MatchOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#dtor.QRegularExpressionMatchIterator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRegularExpressionMatchIterator `
    ///
    pub fn delete(self: QRegularExpressionMatchIterator) void {
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
