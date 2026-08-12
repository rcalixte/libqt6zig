const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kruntimeplatform.html)
pub const KRuntimePlatform = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kruntimeplatform.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRuntimePlatform,

    pub const _is_KRuntimePlatform = {};

    /// ### DEPRECATED: Use `runtimePlatform` instead
    ///
    pub const RuntimePlatform = runtimePlatform;

    /// ### [Upstream resources](https://api.kde.org/kruntimeplatform.html#runtimePlatform)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn runtimePlatform(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KRuntimePlatform_RuntimePlatform();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KRuntimePlatform.runtimePlatform: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KRuntimePlatform.runtimePlatform: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
