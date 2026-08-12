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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLatin1StringMatcher object in C++ memory
    ///
    pub fn new() QLatin1StringMatcher {
        return .{ .ptr = qtc.QLatin1StringMatcher_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLatin1StringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []u8 `
    ///
    pub fn new2(_pattern: []u8) QLatin1StringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QLatin1StringMatcher_new2(pattern_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLatin1StringMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn new3(_pattern: []u8, cs: i32) QLatin1StringMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QLatin1StringMatcher_new3(pattern_str, @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `setPattern` instead
    ///
    pub const SetPattern = setPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` _pattern: []u8 `
    ///
    pub fn setPattern(self: QLatin1StringMatcher, _pattern: []u8) void {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        qtc.QLatin1StringMatcher_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `pattern` instead
    ///
    pub const Pattern = pattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pattern(self: QLatin1StringMatcher, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLatin1StringMatcher_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLatin1StringMatcher.pattern: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCaseSensitivity` instead
    ///
    pub const SetCaseSensitivity = setCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCaseSensitivity(self: QLatin1StringMatcher, cs: i32) void {
        qtc.QLatin1StringMatcher_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `caseSensitivity` instead
    ///
    pub const CaseSensitivity = caseSensitivity;

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
    pub fn caseSensitivity(self: QLatin1StringMatcher) i32 {
        return qtc.QLatin1StringMatcher_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexIn` instead
    ///
    pub const IndexIn = indexIn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` haystack: []u8 `
    ///
    pub fn indexIn(self: QLatin1StringMatcher, haystack: []u8) isize {
        const haystack_str = qtc.libqt_string{
            .len = haystack.len,
            .data = haystack.ptr,
        };
        return qtc.QLatin1StringMatcher_IndexIn(@ptrCast(self.ptr), haystack_str);
    }

    /// ### DEPRECATED: Use `indexIn2` instead
    ///
    pub const IndexIn2 = indexIn2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` haystack: []const u8 `
    ///
    pub fn indexIn2(self: QLatin1StringMatcher, haystack: []const u8) isize {
        const haystack_str = qtc.libqt_string{
            .len = haystack.len,
            .data = haystack.ptr,
        };
        return qtc.QLatin1StringMatcher_IndexIn2(@ptrCast(self.ptr), haystack_str);
    }

    /// ### DEPRECATED: Use `indexIn22` instead
    ///
    pub const IndexIn22 = indexIn22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` haystack: []u8 `
    ///
    /// ` from: isize `
    ///
    pub fn indexIn22(self: QLatin1StringMatcher, haystack: []u8, from: isize) isize {
        const haystack_str = qtc.libqt_string{
            .len = haystack.len,
            .data = haystack.ptr,
        };
        return qtc.QLatin1StringMatcher_IndexIn22(@ptrCast(self.ptr), haystack_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `indexIn23` instead
    ///
    pub const IndexIn23 = indexIn23;

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
    pub fn indexIn23(self: QLatin1StringMatcher, haystack: []const u8, from: isize) isize {
        const haystack_str = qtc.libqt_string{
            .len = haystack.len,
            .data = haystack.ptr,
        };
        return qtc.QLatin1StringMatcher_IndexIn23(@ptrCast(self.ptr), haystack_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#dtor.QLatin1StringMatcher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    pub fn delete(self: QLatin1StringMatcher) void {
        qtc.QLatin1StringMatcher_Delete(@ptrCast(self.ptr));
    }
};
