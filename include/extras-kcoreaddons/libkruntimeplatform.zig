const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/kruntimeplatform.html
pub const kruntimeplatform = struct {
    /// [Qt documentation](https://api-staging.kde.org/kruntimeplatform.html#runtimePlatform)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn RuntimePlatform(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KRuntimePlatform_RuntimePlatform();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kruntimeplatform.RuntimePlatform: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kruntimeplatform.RuntimePlatform: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
