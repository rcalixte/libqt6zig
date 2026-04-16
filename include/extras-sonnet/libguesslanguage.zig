const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/sonnet-guesslanguage.html)
pub const Sonnet__GuessLanguage = extern struct {
    /// ### [Upstream resources](https://api.kde.org/sonnet-guesslanguage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Sonnet__GuessLanguage,

    pub const _is_Sonnet__GuessLanguage = {};

    /// New constructs a new Sonnet::GuessLanguage object.
    ///
    pub fn New() Sonnet__GuessLanguage {
        return .{ .ptr = qtc.Sonnet__GuessLanguage_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-guesslanguage.html#setLimits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__GuessLanguage `
    ///
    /// ` maxItems: i32 `
    ///
    /// ` minConfidence: f64 `
    ///
    pub fn SetLimits(self: Sonnet__GuessLanguage, maxItems: i32, minConfidence: f64) void {
        qtc.Sonnet__GuessLanguage_SetLimits(@ptrCast(self.ptr), @bitCast(maxItems), @bitCast(minConfidence));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-guesslanguage.html#identify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__GuessLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Identify(self: Sonnet__GuessLanguage, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.Sonnet__GuessLanguage_Identify(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__guesslanguage.Identify: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-guesslanguage.html#identify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__GuessLanguage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` suggestions: []const []const u8 `
    ///
    pub fn Identify2(self: Sonnet__GuessLanguage, allocator: std.mem.Allocator, text: []const u8, suggestions: []const []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("sonnet__guesslanguage.Identify2: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (suggestions, 0..suggestions.len) |item, i|
            suggestions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = suggestions.len,
            .data = suggestions_arr.ptr,
        };
        var _str = qtc.Sonnet__GuessLanguage_Identify2(@ptrCast(self.ptr), text_str, suggestions_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__guesslanguage.Identify2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__GuessLanguage `
    ///
    pub fn Delete(self: Sonnet__GuessLanguage) void {
        qtc.Sonnet__GuessLanguage_Delete(@ptrCast(self.ptr));
    }
};
