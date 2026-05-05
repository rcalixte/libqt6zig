const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)
pub const QLatin1StringMatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLatin1StringMatcher,

    pub const _is_QLatin1StringMatcher = {};

    /// New constructs a new QLatin1StringMatcher object.
    ///
    pub fn New() QLatin1StringMatcher {
        return .{ .ptr = qtc.QLatin1StringMatcher_new() };
    }

    /// New2 constructs a new QLatin1StringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn New2(pattern: []const u8) QLatin1StringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QLatin1StringMatcher_new2(pattern_str) };
    }

    /// New3 constructs a new QLatin1StringMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn New3(pattern: []const u8, cs: i32) QLatin1StringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QLatin1StringMatcher_new3(pattern_str, @bitCast(cs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetPattern(self: QLatin1StringMatcher, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QLatin1StringMatcher_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: QLatin1StringMatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLatin1StringMatcher_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlatin1stringmatcher.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: QLatin1StringMatcher, cs: i32) void {
        qtc.QLatin1StringMatcher_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: QLatin1StringMatcher) i32 {
        return qtc.QLatin1StringMatcher_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` haystack: []const u8 `
    ///
    pub fn IndexIn(self: QLatin1StringMatcher, haystack: []const u8) isize {
        const haystack_str = qtc.libqt_string{
            .len = haystack.len,
            .data = haystack.ptr,
        };
        return qtc.QLatin1StringMatcher_IndexIn(@ptrCast(self.ptr), haystack_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` haystack: []const u8 `
    ///
    /// ` from: isize `
    ///
    pub fn IndexIn22(self: QLatin1StringMatcher, haystack: []const u8, from: isize) isize {
        const haystack_str = qtc.libqt_string{
            .len = haystack.len,
            .data = haystack.ptr,
        };
        return qtc.QLatin1StringMatcher_IndexIn22(@ptrCast(self.ptr), haystack_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#dtor.QLatin1StringMatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    pub fn Delete(self: QLatin1StringMatcher) void {
        qtc.QLatin1StringMatcher_Delete(@ptrCast(self.ptr));
    }
};
