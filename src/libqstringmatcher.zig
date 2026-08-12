const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)
pub const QStringMatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStringMatcher,

    pub const _is_QStringMatcher = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    pub fn new() QStringMatcher {
        return .{ .ptr = qtc.QStringMatcher_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn new2(_pattern: []const u8) QStringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QStringMatcher_new2(pattern_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uc: QChar `
    ///
    /// ` len: isize `
    ///
    pub fn new3(uc: anytype, len: isize) QStringMatcher {
        comptime _ = @TypeOf(uc)._is_QChar;
        return .{ .ptr = qtc.QStringMatcher_new3(@ptrCast(uc.ptr), @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn new4(_pattern: []const u8) QStringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QStringMatcher_new4(pattern_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStringMatcher `
    ///
    pub fn new5(other: anytype) QStringMatcher {
        comptime _ = @TypeOf(other)._is_QStringMatcher;
        return .{ .ptr = qtc.QStringMatcher_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn new6(_pattern: []const u8, cs: i32) QStringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QStringMatcher_new6(pattern_str, @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uc: QChar `
    ///
    /// ` len: isize `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn new7(uc: anytype, len: isize, cs: i32) QStringMatcher {
        comptime _ = @TypeOf(uc)._is_QChar;
        return .{ .ptr = qtc.QStringMatcher_new7(@ptrCast(uc.ptr), @bitCast(len), @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QStringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn new8(_pattern: []const u8, cs: i32) QStringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QStringMatcher_new8(pattern_str, @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` other: QStringMatcher `
    ///
    pub fn operatorAssign(self: QStringMatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStringMatcher;
        qtc.QStringMatcher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPattern` instead
    ///
    pub const SetPattern = setPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn setPattern(self: QStringMatcher, _pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        qtc.QStringMatcher_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setCaseSensitivity` instead
    ///
    pub const SetCaseSensitivity = setCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCaseSensitivity(self: QStringMatcher, cs: i32) void {
        qtc.QStringMatcher_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `indexIn` instead
    ///
    pub const IndexIn = indexIn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: []const u8 `
    ///
    pub fn indexIn(self: QStringMatcher, str: []const u8) isize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QStringMatcher_IndexIn(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `indexIn2` instead
    ///
    pub const IndexIn2 = indexIn2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: QChar `
    ///
    /// ` length: isize `
    ///
    pub fn indexIn2(self: QStringMatcher, str: anytype, length: isize) isize {
        comptime _ = @TypeOf(str)._is_QChar;
        return qtc.QStringMatcher_IndexIn2(@ptrCast(self.ptr), @ptrCast(str.ptr), @bitCast(length));
    }

    /// ### DEPRECATED: Use `indexIn3` instead
    ///
    pub const IndexIn3 = indexIn3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: []const u8 `
    ///
    pub fn indexIn3(self: QStringMatcher, str: []const u8) isize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QStringMatcher_IndexIn3(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `pattern` instead
    ///
    pub const Pattern = pattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pattern(self: QStringMatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStringMatcher_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStringMatcher.pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `patternView` instead
    ///
    pub const PatternView = patternView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#patternView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn patternView(self: QStringMatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStringMatcher_PatternView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStringMatcher.patternView: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `caseSensitivity` instead
    ///
    pub const CaseSensitivity = caseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn caseSensitivity(self: QStringMatcher) i32 {
        return qtc.QStringMatcher_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexIn22` instead
    ///
    pub const IndexIn22 = indexIn22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: []const u8 `
    ///
    /// ` from: isize `
    ///
    pub fn indexIn22(self: QStringMatcher, str: []const u8, from: isize) isize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QStringMatcher_IndexIn22(@ptrCast(self.ptr), str_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `indexIn32` instead
    ///
    pub const IndexIn32 = indexIn32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: QChar `
    ///
    /// ` length: isize `
    ///
    /// ` from: isize `
    ///
    pub fn indexIn32(self: QStringMatcher, str: anytype, length: isize, from: isize) isize {
        comptime _ = @TypeOf(str)._is_QChar;
        return qtc.QStringMatcher_IndexIn32(@ptrCast(self.ptr), @ptrCast(str.ptr), @bitCast(length), @bitCast(from));
    }

    /// ### DEPRECATED: Use `indexIn23` instead
    ///
    pub const IndexIn23 = indexIn23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: []const u8 `
    ///
    /// ` from: isize `
    ///
    pub fn indexIn23(self: QStringMatcher, str: []const u8, from: isize) isize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QStringMatcher_IndexIn23(@ptrCast(self.ptr), str_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#dtor.QStringMatcher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStringMatcher `
    ///
    pub fn delete(self: QStringMatcher) void {
        qtc.QStringMatcher_Delete(@ptrCast(self.ptr));
    }
};
