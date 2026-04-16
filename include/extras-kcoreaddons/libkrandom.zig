const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/krandom.html)
pub const KRandom = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krandom.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRandom,

    pub const _is_KRandom = {};

    /// ### [Upstream resources](https://api.kde.org/krandom.html#randomString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    pub fn RandomString(allocator: std.mem.Allocator, param1: i32) []const u8 {
        var _str = qtc.KRandom_RandomString(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krandom.RandomString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
