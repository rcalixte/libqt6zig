const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/krandom.html
pub const krandom = struct {
    /// [Qt documentation](https://api-staging.kde.org/krandom.html#randomString)
    ///
    /// ``` param1: i32, allocator: std.mem.Allocator ```
    pub fn RandomString(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KRandom_RandomString(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krandom.RandomString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
