const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/sonnet-guesslanguage.html
pub const sonnet__guesslanguage = struct {
    /// New constructs a new Sonnet::GuessLanguage object.
    ///
    ///
    pub fn New() QtC.Sonnet__GuessLanguage {
        return qtc.Sonnet__GuessLanguage_new();
    }

    /// [Qt documentation](https://api.kde.org/sonnet-guesslanguage.html#setLimits)
    ///
    /// ``` self: QtC.Sonnet__GuessLanguage, maxItems: i32, minConfidence: f64 ```
    pub fn SetLimits(self: ?*anyopaque, maxItems: i32, minConfidence: f64) void {
        qtc.Sonnet__GuessLanguage_SetLimits(@ptrCast(self), @intCast(maxItems), @floatCast(minConfidence));
    }

    /// [Qt documentation](https://api.kde.org/sonnet-guesslanguage.html#identify)
    ///
    /// ``` self: QtC.Sonnet__GuessLanguage, text: []const u8, allocator: std.mem.Allocator ```
    pub fn Identify(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.Sonnet__GuessLanguage_Identify(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::guesslanguage.Identify: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/sonnet-guesslanguage.html#identify)
    ///
    /// ``` self: QtC.Sonnet__GuessLanguage, text: []const u8, suggestions: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Identify2(self: ?*anyopaque, text: []const u8, suggestions: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var suggestions_arr = allocator.alloc(qtc.libqt_string, suggestions.len) catch @panic("sonnet::guesslanguage.Identify2: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (suggestions, 0..suggestions.len) |item, i| {
            suggestions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const suggestions_list = qtc.libqt_list{
            .len = suggestions.len,
            .data = suggestions_arr.ptr,
        };
        const _str = qtc.Sonnet__GuessLanguage_Identify2(@ptrCast(self), text_str, suggestions_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet::guesslanguage.Identify2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Sonnet__GuessLanguage ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Sonnet__GuessLanguage_Delete(@ptrCast(self));
    }
};
