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

    /// New constructs a new QStringMatcher object.
    ///
    pub fn New() QStringMatcher {
        return .{ .ptr = qtc.QStringMatcher_new() };
    }

    /// New2 constructs a new QStringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn New2(pattern: []const u8) QStringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QStringMatcher_new2(pattern_str) };
    }

    /// New3 constructs a new QStringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uc: QChar `
    ///
    /// ` lenVal: isize `
    ///
    pub fn New3(uc: anytype, lenVal: isize) QStringMatcher {
        comptime _ = @TypeOf(uc)._is_QChar;
        return .{ .ptr = qtc.QStringMatcher_new3(@ptrCast(uc.ptr), @bitCast(lenVal)) };
    }

    /// New4 constructs a new QStringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStringMatcher `
    ///
    pub fn New4(other: anytype) QStringMatcher {
        comptime _ = @TypeOf(other)._is_QStringMatcher;
        return .{ .ptr = qtc.QStringMatcher_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QStringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn New5(pattern: []const u8, cs: i32) QStringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QStringMatcher_new5(pattern_str, @bitCast(cs)) };
    }

    /// New6 constructs a new QStringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uc: QChar `
    ///
    /// ` lenVal: isize `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn New6(uc: anytype, lenVal: isize, cs: i32) QStringMatcher {
        comptime _ = @TypeOf(uc)._is_QChar;
        return .{ .ptr = qtc.QStringMatcher_new6(@ptrCast(uc.ptr), @bitCast(lenVal), @bitCast(cs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` other: QStringMatcher `
    ///
    pub fn OperatorAssign(self: QStringMatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStringMatcher;
        qtc.QStringMatcher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetPattern(self: QStringMatcher, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QStringMatcher_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: QStringMatcher, cs: i32) void {
        qtc.QStringMatcher_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` str: []const u8 `
    ///
    pub fn IndexIn(self: QStringMatcher, str: []const u8) isize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QStringMatcher_IndexIn(@ptrCast(self.ptr), str_str);
    }

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
    pub fn IndexIn2(self: QStringMatcher, str: anytype, length: isize) isize {
        comptime _ = @TypeOf(str)._is_QChar;
        return qtc.QStringMatcher_IndexIn2(@ptrCast(self.ptr), @ptrCast(str.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: QStringMatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStringMatcher_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringmatcher.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn CaseSensitivity(self: QStringMatcher) i32 {
        return qtc.QStringMatcher_CaseSensitivity(@ptrCast(self.ptr));
    }

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
    pub fn IndexIn22(self: QStringMatcher, str: []const u8, from: isize) isize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QStringMatcher_IndexIn22(@ptrCast(self.ptr), str_str, @bitCast(from));
    }

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
    pub fn IndexIn32(self: QStringMatcher, str: anytype, length: isize, from: isize) isize {
        comptime _ = @TypeOf(str)._is_QChar;
        return qtc.QStringMatcher_IndexIn32(@ptrCast(self.ptr), @ptrCast(str.ptr), @bitCast(length), @bitCast(from));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#dtor.QStringMatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStringMatcher `
    ///
    pub fn Delete(self: QStringMatcher) void {
        qtc.QStringMatcher_Delete(@ptrCast(self.ptr));
    }
};
